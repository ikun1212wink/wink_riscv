#ifndef __MEMORY__H__
#define __MEMORY__H__
#include <common.h>
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t*memory,uint32_t vaddr);
uint32_t* init_mem(const char* path, int* num);
#endif  //!__MEMORY__H__