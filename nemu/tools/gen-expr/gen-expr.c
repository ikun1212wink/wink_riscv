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

static char*buf_start=NULL;//队列头
static char*buf_end=buf+(sizeof(buf)/sizeof(buf[0]));//队列尾

static int choose(int n) {//生成随机数
    return rand() % n;
}

static void gen_space() {//生成随机空格
    for (int i = 0; i < choose(2); i++) {
        if (choose(100) >= 50) {
            strcat(buf, " ");
        }
    }
}




//生成数字
static void gen_num() {
    int num=choose(99);
    if(buf_start<buf_end){
        int write_size = snprintf(buf_start, buf_end-buf_start, "%d", num);//返回写入的字符串的长度
        if(write_size>0){
            buf_start+=write_size;
        }
    }
    gen_space();
}

//添加括号
static void gen_char(char c) {
    int write_size=snprintf(buf_start,buf_end-buf_start,"%c",c);
    if(buf_start<buf_end){
        if(write_size>0){
            buf_start+=write_size;
        }
    }
}



static void gen_rand_op() {//添加运算符号
    char ops[] = {'+', '-', '*', '/'};
    int op_index=choose(sizeof(ops));
    char op=ops[op_index];//随机读取符号
    gen_char(op);
}


static void gen_rand_expr() {
    switch ((choose(3))){
        case 0:gen_num();break;
        case 1:gen_char('('); gen_rand_expr(); gen_char(')'); break;
        default: gen_rand_expr(); gen_rand_op(); gen_rand_expr(); break;      
    }
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
        buf_start=buf;
        gen_rand_expr();
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
        int ret = system("gcc /tmp/.code.c -Wall -Werror -o  /tmp/.expr");//将 system 函数的返回值赋给变量 ret，该返回值表示命令执行的结果
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



//导入随机生成的表达式，测试表达式求值功能
void test_expr() {
  FILE *fp = fopen("/home/wink/ysyx-workbench/nemu/tools/gen-expr/input", "r");
  if (fp == NULL) perror("test_expr error");//文件打开失败，perror函数并传递参数"test_expr error"

  char *e = NULL;
  word_t correct_res;//correct_res是一个word_t类型的变量，用于存储从文件中读取的正确结果
  size_t len = 0;//len是一个size_t类型的变量，用于存储读取的行的长度(size_t=long unsigned int)
  ssize_t read;//read是一个ssize_t类型的变量，用于存储getline函数读取的字符数
  bool success = false;//success是一个bool类型的变量，用于指示expr函数的计算是否成功

  while (true) {//进入while循环，持续读取文件中的内容
    if(fscanf(fp, "%u ", &correct_res) == -1) break;
    //从文件流fp中读取一个无符号整型（%u）的值，并将其存储到correct_res变量的地址中
    read = getline(&e, &len, fp);
    //使用getline函数从文件流fp中读取一行文本，并将其存储在由指针e指向的内存中。同时，还会将读取到的字符数赋值给变量read
    e[read-1] = '\0';
    //将读取到的文本行中的最后一个字符修改为空字符('\0')，从而将文本行转换为以空字符结尾的字符串
    word_t res = expr(e, &success);
    
    assert(success);//如果断言条件为假（零），则会导致程序终止，并输出相应的错误信息
    if (res != correct_res) {//检查res变量是否等于预期的结果correct_res。如果res与correct_res不相等，代码会输出读取到的字符串e，以及预期结果和实际结果的信息
      puts(e);
      printf("expected: %u, got: %u\n", correct_res, res);
      assert(0);
    }
  }

  fclose(fp);//用于关闭之前打开的文件流fp
  if (e) free(e);
  //代码使用条件语句检查指针e是否为非空。如果e指针不是空指针，说明之前通过getline函数动态分配的内存存在，并且需要通过调用free函数进行释放，以防止内存泄漏

  Log("expr test pass");
}