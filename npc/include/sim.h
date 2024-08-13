#ifndef __SIM__H__
#define __SIM__H__
#include <common.h>
#include "Vysyx_23060240___024root.h"
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vysyx_23060240 dut;
void reg_p();
void sim_init();
void dump_wave();
void single_cycle();
void reset(int n);
#endif  //!__SIM__H__