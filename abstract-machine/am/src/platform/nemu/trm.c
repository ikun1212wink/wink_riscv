#include <am.h>
#include <nemu.h>
//阅读代码，发现只要实现很少的API就可以支撑起程序在TRM上运行了


extern char _heap_start;
int main(const char *args);

//Area heap结构用于指示堆区的起始和末尾
Area heap = RANGE(&_heap_start, PMEM_END);

//这几行代码用于定义程序的命令行参数。如果没有定义MAINARGS宏，就将mainargs设置为空字符串。
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;

//void putch(char ch)用于输出一个字符
void putch(char ch) {
  outb(SERIAL_PORT, ch);
}

//void halt(int code)用于结束程序的运行
void halt(int code) {
  nemu_trap(code);//使用了内联汇编

  // should not reach here
  while (1);
}

//void _trm_init()用于进行TRM相关的初始化工作
void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
