#include <am.h>
#include <klib-macros.h>
#include </home/wink/ysyx-workbench/abstract-machine/am/src/riscv/riscv.h>
#include <klib.h>
extern char _heap_start;
int main(const char *args);

extern char data_start [];
extern char data_size [];
extern char data_load_start [];

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

void copy_data(void)
{
  if (data_start != data_load_start)
    {
      memcpy(data_start, data_load_start, (size_t) data_size);
    }
}

void _trm_init() {
  copy_data();
  int ret = main(mainargs);
  halt(ret);
}
