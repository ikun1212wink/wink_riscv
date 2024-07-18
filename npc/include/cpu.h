#ifndef __CPU__H__
#define __CPU__H__
#include <common.h>
#include <memory.h>
#include <sim.h>
void execute(int n,uint32_t*memory);
extern int ebreak_flag;
#endif  //!__CPU__H__