#ifndef __MEMORY__H__
#define __MEMORY__H__
#include <common.h>
uint32_t guest_to_host(uint32_t addr);
uint32_t pmem_read(uint32_t*memory,uint32_t vaddr);
uint32_t* init_mem();
long img_size();
extern "C" uint32_t pmem_read(int raddr);
extern "C" void pmem_write(int waddr, int wdata, char select);
extern uint32_t* memory;
#endif  //!__MEMORY__H__