#ifndef __DIFFTEST__H__
#define __DIFFTEST__H__
#include <common.h>
#include <dlfcn.h>
#include <memory.h>
#include <cpu.h>
void init_difftest(char *ref_so_file, long img_size, int port);
typedef struct 
{
    word_t gpr[32];
    vaddr_t pc;
}NPC_CPU_state;

#endif  //!__DIFFTEST__H__