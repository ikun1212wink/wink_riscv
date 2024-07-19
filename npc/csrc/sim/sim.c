#include <sim.h>
#include "Vtop___024root.h"
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
Vtop dut;

void sim_init(){ //波形仿真使能函数
  Verilated::traceEverOn(true);
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut.trace(tfp,0);
  tfp->open("wave.vcd");
}

void dump_wave(){//波形记录函数
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}

void single_cycle(){//时钟驱动函数
  dut.clk=0;dut.eval();
  dump_wave();
  dut.clk=1;dut.eval();
  dump_wave();
}

void reset(int n){ //复位函数
  dut.rst=1;
  while(n-->0) single_cycle();
  dut.rst=0;
}

void reg_p(){
  single_cycle();
  Vtop___024root* root = dut.rootp;
  for(int i=0; i < 32; i++){
    printf("reg[%d]:0x%08x\n",i,root->top__DOT__Register__DOT__rf[i]);
  }
}