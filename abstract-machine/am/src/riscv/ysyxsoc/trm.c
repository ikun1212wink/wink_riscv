#include <am.h>
#include <klib-macros.h>
#include </home/wink/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h>

extern char _heap_start;
int main(const char *args);

//_pmem_start=0x20000000
//_sram_start=0x0f000000
extern char _pmem_start;
#define PMEM_SIZE (4*1024)
#define PMEM_END  ((uintptr_t)&_pmem_start + PMEM_SIZE)

Area heap = RANGE(&_heap_start, PMEM_END);
#ifndef MAINARGS
#define MAINARGS ""
#endif
static const char mainargs[] = MAINARGS;


void halt(int code) {
  while (1);
}

void _trm_init() {
  int ret = main(mainargs);
  halt(ret);
}
