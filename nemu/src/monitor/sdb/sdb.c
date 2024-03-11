/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/cpu.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "sdb.h"



static int is_batch_mode = false;//定义静态变量is_batch_mode用于指示调试器是否处于待处理模式，默认为false
word_t vaddr_read(vaddr_t addr, int len);//读取内存
void init_regex(); //初始化正则表达式
void init_wp_pool(); //初始化观察点
void test_expr();//随机生成表达式 测试表达式功能
void wp_list();//列出监视点
void wp_watch();//添加监视点
void wp_remove();//移除监视点

//定义函数rl_gets()获取命令行输入，支持历史记录功能
static char* rl_gets() { 
  static char *line_read = NULL;

  if (line_read) {
    free(line_read);
    line_read = NULL;
  }

  line_read = readline("(nemu) ");

  if (line_read && *line_read) {
    add_history(line_read);
  }

  return line_read;
}

//cmd_c()函数用于使程序继续执行操作
static int cmd_c(char *args) { 
  cpu_exec(-1);
  return 0;
}

//cmd_q()函数用于使程序停止操作
static int cmd_q(char *args) { 
  nemu_state.state = NEMU_QUIT;
  return -1;
}

//cmd_si函数用于使程序单步执行
static int cmd_si(char *args){ 
  int n=0;
  if(args==NULL){
    n=1;
  }
  else {
    n=0;
    sscanf(args,"%d",&n);
    if(n==0){
      printf("Unknow input, the format is \"si [N]\"\n");
    } 
  }
  printf("Step excute N=%d\n",n);
  cpu_exec(n);
  return 0;
}

//cmd_info用于打印寄存器或者监视点
static int cmd_info(char *args){
  if(args==NULL){
    printf("Unkonw input, print register status: \"info r\", or print watchpointer information: \"info w\"\n");
  }
  else if(strcmp(args,"r")==0){
    printf("Print the register status\n");
    isa_reg_display();
  }
  else if(strcmp(args,"w")==0){
    printf("Print the watchpoint information\n");
    wp_list();
  }
  else{
    printf("Unkonw input, print register status: \"info r\", or print watchpointer information: \"info w\"\n");
  }
  return 0;
}

//cmd_x用于扫描内存
static int cmd_x(char *args){
  char *args1=strtok(args," ");
  args=args1+strlen(args1)+1;
  char *args2=strtok(args," ");
  
  if(args==NULL){
    printf("Unknow input, the standard format is \"x [N] EXPR\"\n");
  }
  else{
    int n=0;
    uint32_t addr=0;
    bool success=false;
    //解析参数
    sscanf(args1,"%d",&n);

    addr = expr(args2, &success);
   /*  sscanf(args2,"%x",&addr); */
    //扫描内存
    for(int i=0;i<n;i++){
      printf("%-18s %-18s\n", "Addr", "Data");
      printf("0x%08x\n 0x%08x\n",addr,vaddr_read(addr,4));
      addr+=4;//一次读取四个字节，内存储存是以字节为单位的，所以地址向后移动四个字节
    }
  
  }
  return 0;
}

//cmd_p用于表达式求值
static int cmd_p(char *args){
  if(args==NULL){
    printf("Unknow input, the standard format is \"p EXPR\"");
  }
  else{
    bool success=true;
    word_t result =expr(args,&success);
    if(success){
        printf("Expression result: %u\n", result);
    } else {
        printf("Expression evaluation failed.\n");
    }
  }
  return 0;
}

//cmd_w用于设置监视点
static int cmd_w(char *args){
  if(args==NULL){
    printf("Unkonw input, the format is \"w EXPR\"\n");
  }
  else{
    bool success;
    word_t res=expr(args,&success);
    if(!success){
      puts("invalid expression");
    }
    else{
      wp_watch(args,res);
    }
  }
  return 0;
}

//cmd_d用于删除监视点
static int cmd_d(char *args){
  if(args==NULL){
    printf("Unkonw input, the format is \"d N\"\n");
  }
  else{
    int no=strtol(args, NULL, 10);
    wp_remove(no);
  }
  return 0;
}

//cmd_text用于读取input文件测试表达式求值功能
static int cmd_test(char *args){
    test_expr();
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

//cmd_help用于提供命令帮助
static int cmd_help(char *args); 

static struct {//命令列表
  const char *name;
  const char *description;
  int (*handler) (char *);
} cmd_table [] = {
  { "help", "Display information about all supported commands", cmd_help },
  { "c", "Continue the execution of the program", cmd_c },
  { "q", "Exit NEMU", cmd_q },
  { "si","Enter \"si [N]\", let the program execute N instructions, and then pause",cmd_si} ,
  { "info","Enter \"info r\" to print register status, or enter \"info w\" to print watchpointer information",cmd_info},
  { "x" ,"Enter \"x [N] EXPR\" to scan the memory",cmd_x},
  { "p", "Enter \"p EXPR\" to perform expression evaluation",cmd_p},
  { "w", "Enter \"w EXPR\" to set the watchpoint.",cmd_w},
  { "d", "Enter \"d N\" to delete the watchpoint.",cmd_d},
  { "test","Enter \"text\" to text the expr.",cmd_test}
  /* TODO: Add more commands */
};

//定义宏NR_CMD，记录命令表中命令的总数
#define NR_CMD ARRLEN(cmd_table) 

//cmd_help()函数用于显示所有支持的命令及其描述
static int cmd_help(char *args) {  
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL) {
    /* no argument given */
    for (i = 0; i < NR_CMD; i ++) {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else {
    for (i = 0; i < NR_CMD; i ++) {
      if (strcmp(arg, cmd_table[i].name) == 0) {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

//设置待处理模式
void sdb_set_batch_mode() { 
  is_batch_mode = true;
}

//执行调试器的主循环逻辑
void sdb_mainloop() { 
  //判断is_batch_mode,如果处于待处理模式，就开始执行CPU指令
  if (is_batch_mode) { 
    cmd_c(NULL);
    return;
  }
//在个for循环用于从输入中逐行读取字符串，并对每行字符串进行解析和处理
  for (char *str; (str = rl_gets()) != NULL; ) {//从输入中读取字符串赋值给str，只要读取的字符串不为NULL，就会继续执行循环
    char *str_end = str + strlen(str);//每次循环计算字符串str的末尾位置，并将其赋值给字符指针变量str_end

//cmd指向命令
    char *cmd = strtok(str, " ");//使用strtok函数从字符串str中，以空格为间隔，提取第一个子串并赋值给字符指针变量cmd
    if (cmd == NULL) { continue; }//如果提取的标记为NULL，则执行continue跳过当前循环，继续下一次循环

//args指向参数
    char *args = cmd + strlen(cmd) + 1;//将指针 cmd 向后移动，跳过提取的标记，并指向剩余的字符串部分（即命令后面的参数部分）
    if (args >= str_end) { //检查指针args是否超过了字符串str的末尾位置str_end。如果超过了末尾位置，则将 args 设置为NULL
      args = NULL;
    }

//是否清空事件队列
#ifdef CONFIG_DEVICE 
    extern void sdl_clear_event_queue();
    sdl_clear_event_queue();
#endif

//这个for循环用于查找并执行 输入的命令行 所匹配的命令函数
    int i;
    for (i = 0; i < NR_CMD; i ++) { //循环遍历，从索引0到NR_CMD - 1的范围内，对命令表进行查找和比较
      if (strcmp(cmd, cmd_table[i].name) == 0) {//如果输入命令行的“命令部分”和定义的“命令名”相同，strcmp()函数返回0
        if (cmd_table[i].handler(args) < 0) { 
        //调用命令表中索引i处命令的处理函数handler，并传递 args参数。如果处理函数返回值小于0，使用return语句退出当前函数
        //说明：如果小于 0，表示处理函数在执行过程中遇到了某种错误或异常情况，例如：1.错误码：处理函数定义了一些错误码，小于 0 的返回值表示出现了某种错误情况 2.异常情况：处理函数在执行过程中发生了异常，返回负值表示无法正常处理命令。
          return; 
        }
        break;//跳出循环，因为已经找到并执行了匹配的命令处理函数
      }
    }

    if (i == NR_CMD) { printf("Unknown command '%s'\n", cmd); }
    //如果循环结束时，遍历至i等于NR_CMD，表示未找到匹配的命令，打印“没有找到该命令“
  }
}



void init_sdb() { //初始化调试器相关配置
  /* Compile the regular expressions. */
  init_regex();

  /* Initialize the watchpoint pool. */
  init_wp_pool();

}
