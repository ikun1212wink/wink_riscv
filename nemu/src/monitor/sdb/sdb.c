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

void init_regex(); //初始化正则表达式
void init_wp_pool(); //初始化观察点

/* We use the `readline' library to provide more flexibility to read from stdin. */
static char* rl_gets() { //定义函数rl_gets()获取命令行输入，支持历史记录功能
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

static int cmd_c(char *args) { //cmd_c()函数用于使程序继续执行操作
  cpu_exec(-1);
  return 0;
}

static int cmd_q(char *args) { //cmd_q()函数用于使程序停止操作
  nemu_state.state = NEMU_QUIT;
  return -1;
}

static int cmd_si(char *args){ //cmd_si函数用于使程序单步执行
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

static int cmd_info(char *args){
  if(args==NULL){
    printf("Unkonw input, print register status: \"info r\", or print watchpointer information: \"info w\"\n");
  }
  else if(strcmp(args,"r")==0){
    printf("Print the register status\n");
  }
  else if(strcmp(args,"w")==0){
    printf("Print the watchpoint information\n");
  }
  else{
    printf("Unkonw input, print register status: \"info r\", or print watchpointer information: \"info w\"\n");
  }
  return 0;
}


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
  { "info","Enter \"info r\" to print register status, or enter \"info w\" to print watchpointer information",cmd_info}
  /* TODO: Add more commands */

};

#define NR_CMD ARRLEN(cmd_table) //定义宏NR_CMD，记录命令表中命令的总数

static int cmd_help(char *args) {  //cmd_help()函数用于显示所有支持的命令及其描述
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

void sdb_set_batch_mode() { //设置待处理模式
  is_batch_mode = true;
}

void sdb_mainloop() { //执行调试器的主循环逻辑

  if (is_batch_mode) { //判断is_batch_mode,如果处于待处理模式，就开始执行CPU指令
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

#ifdef CONFIG_DEVICE //是否清空事件队列
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
