/* #ifndef __SIM__H__
#define __SIM__H__
#include <common.h>
extern VerilatedContext* contextp;
extern VerilatedVcdC* tfp ;
extern Vtop dut;
void sim_init();
void dump_wave();
void single_cycle();
void reset(int n);
#endif  //!__SIM__H__ */