#ifndef __MEMORY_H__
#define __MEMORY_H__

#include <common.h>
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t*memory,uint32_t vaddr);
#endif