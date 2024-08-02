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
    word_t mepc;//存放触发异常的PC
    word_t mcause;//存放异常的原因
    word_t mstatus;//存放处理器状态
    word_t mtvec;//存放异常处理的入口地址
}NPC_CPU_state;
void difftest_step(vaddr_t pc, vaddr_t npc);
void difftest_skip_ref();
#endif  //!__DIFFTEST__H__