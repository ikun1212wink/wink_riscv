#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format = 
"#include <stdio.h>\n"
"int main() { "
"  int result = %s; "
"  printf(\"%%d\", result); "
"  return 0; "
"}";

static int choose(int n) {//生成随机数
    return rand() % n;
}

static void gen(char c) {//添加括号
    char add_str[] = {c, '\0'};
    strcat(buf, add_str);
}

static void gen_num() {//添加数字
    char num_str[11];
    sprintf(num_str, "%u", choose((unsigned int)(100)));
    strcat(buf, num_str);
}

static void gen_rand_op() {//添加运算符号
    char op[] = {'+', '-', '*', '/'};
    char add[] = {op[choose(4)], '\0'};
    strcat(buf, add);
}

static void gen_space() {//生成随机空格
    for (int i = 0; i < choose(2); i++) {
        if (choose(100) >= 50) {
            strcat(buf, " ");
        }
    }
}

static void gen_rand_expr(int level) {//限制递归层级，防止越界
    gen_space();
    if (level > 0) {
        switch (choose(3)) {
        case 0:
            gen_num();
            break;
        case 1:
            gen('(');
            gen_rand_expr(level - 1);
            gen(')');
            break;
        default:
            gen_rand_expr(level - 1);
            gen_rand_op();
            gen_rand_expr(level - 1);
            break;
        }
    } else {
        gen_num();
    }
    gen_space();
}


//操作的主函数
int main(int argc, char* argv[]) {
    int seed = time(0);//time(0) 函数返回当前时间的秒数
    srand(seed);//通过调用 srand 函数并传入种子值，可以确保每次程序运行时生成的随机数序列是不同的
    int loop = 1;//通过命令行参数获取循环次数 loop，默认为 1
    if (argc > 1) {//从命令行参数中获取循环次数 命令行第二个参数值 例如：./gen-expr 10000
        sscanf(argv[1], "%d", &loop);
    }//loop=10000
    int i;
    for (i = 0; i < loop; i++) {//进入循环，每次循环生成一个随机表达式，并将其存储在 buf 中
        
        memset(buf, 0, 65536);
        gen_rand_expr(rand() % 10);//随机生成表达式

        sprintf(code_buf, code_format, buf);
        //通过调用 sprintf(code_buf, code_format, buf)，可以将生成的表达式插入到动态生成的 C 代码模板中，
        //生成完整的 C 代码，并将其存储在 code_buf 字符数组中。%s 将被实际的生成表达式所替换，从而形成最终的 C 代码字符串
        //buf->code_format->code_buf
        //于将生成的 C 代码写入到一个临时文件中


        FILE* fp = fopen("/tmp/.code.c", "w");
        // 打开一个名为 "/tmp/.code.c" 的文件，以写入模式打开。如果文件不存在，则创建一个新文件。返回一个指向文件的指针 fp
        assert(fp != NULL);
        //如果文件打开失败（即 fp 为 NULL），则触发断言错误。
        fputs(code_buf, fp);
        //将存储在 code_buf 中的 C 代码写入到打开的文件中。
        fclose(fp);
        //fclose(fp) 关闭文件，释放文件资源

        //system()函数用于调用系统命令
        int ret = system("gcc /tmp/.code.c -o /tmp/.expr");//将 system 函数的返回值赋给变量 ret，该返回值表示命令执行的结果
        if (ret != 0) continue;//检查命令执行的结果。如果结果不等于 0，即编译过程中出现了错误，那么程序会跳过当前循环，继续下一次循环。

        fp = popen("/tmp/.expr", "r");//使用 popen 函数来打开一个管道，并执行命令 "/tmp/.expr"，然后将命令的输出连接到一个文件指针 fp
        assert(fp != NULL);

        int result;
        ret = fscanf(fp, "%d", &result);//整数变量 result，用于存储从管道中读取的结果
        //ret用于存储函数 fscanf 的返回值,函数 fscanf 返回成功匹配并赋值的输入项的个数,fscanf 函数的返回值将是 1（因为只读取了一个输入项）
        /* 添加 Werror 将除0警告转换成错误,导致编译失败*/

        pclose(fp);//pclose(fp) 关闭管道，释放相关资源
        printf("%u %s\n", result, buf);//%u 表示无符号整数，%s 表示字符串。result 是之前从管道中读取的结果，buf 是之前生成的表达式
    }



    return 0;
}