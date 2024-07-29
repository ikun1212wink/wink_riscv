#ifndef ARCH_H__
#define ARCH_H__

#ifdef __riscv_e
#define NR_REGS 16
#else
#define NR_REGS 32
#endif
//mepc寄存器：存放触发异常的PC
//mstatus寄存器：存放处理器的状态
//mcause寄存器：存放触异常的原因
struct Context {
  uintptr_t gpr[NR_REGS];
  uintptr_t mcause, mstatus, mepc;
  void* pdir;  
};

#ifdef __riscv_e
#define GPR1 gpr[15] // a5
#else
#define GPR1 gpr[17] // a7
#endif

#define GPR2 gpr[0]
#define GPR3 gpr[0]
#define GPR4 gpr[0]
#define GPRx gpr[0]

#endif
