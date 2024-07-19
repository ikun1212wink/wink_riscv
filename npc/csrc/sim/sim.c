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
  while(n-->0){
    single_cycle();
  } 
  dut.rst=0;
}

void reg_p(){
  Vtop___024root* root = dut.rootp;
  printf("$0(0):     0x%08x\n",root->top__DOT__Register__DOT__rf[0]);
  printf("ra(1):     0x%08x\n",root->top__DOT__Register__DOT__rf[1]);
  printf("sp(2):     0x%08x\n",root->top__DOT__Register__DOT__rf[2]);
  printf("gp(3):     0x%08x\n",root->top__DOT__Register__DOT__rf[3]);

  printf("tp(4):     0x%08x\n",root->top__DOT__Register__DOT__rf[4]);
  printf("t0(5):     0x%08x\n",root->top__DOT__Register__DOT__rf[5]);
  printf("t1(6):     0x%08x\n",root->top__DOT__Register__DOT__rf[6]);
  printf("t2(7):     0x%08x\n",root->top__DOT__Register__DOT__rf[7]);

  printf("s0(8):     0x%08x\n",root->top__DOT__Register__DOT__rf[8]);
  printf("s1(9):     0x%08x\n",root->top__DOT__Register__DOT__rf[9]);
  printf("a0(10):    0x%08x\n",root->top__DOT__Register__DOT__rf[10]);
  printf("a1(11):    0x%08x\n",root->top__DOT__Register__DOT__rf[11]);
  
  printf("a2(12):    0x%08x\n",root->top__DOT__Register__DOT__rf[12]);
  printf("a3(13):    0x%08x\n",root->top__DOT__Register__DOT__rf[13]);
  printf("a4(14):    0x%08x\n",root->top__DOT__Register__DOT__rf[14]);
  printf("a5(15):    0x%08x\n",root->top__DOT__Register__DOT__rf[15]);

  printf("a6(16):    0x%08x\n",root->top__DOT__Register__DOT__rf[16]);
  printf("a7(17):    0x%08x\n",root->top__DOT__Register__DOT__rf[17]);
  printf("s2(18):    0x%08x\n",root->top__DOT__Register__DOT__rf[18]);
  printf("s3(19):    0x%08x\n",root->top__DOT__Register__DOT__rf[19]);

  printf("s4(20):    0x%08x\n",root->top__DOT__Register__DOT__rf[20]);
  printf("s5(21):    0x%08x\n",root->top__DOT__Register__DOT__rf[21]);
  printf("s6(22):    0x%08x\n",root->top__DOT__Register__DOT__rf[22]);
  printf("s7(23):    0x%08x\n",root->top__DOT__Register__DOT__rf[23]);

  printf("s8(24):    0x%08x\n",root->top__DOT__Register__DOT__rf[24]);
  printf("s9(25):    0x%08x\n",root->top__DOT__Register__DOT__rf[25]);
  printf("s10(26):   0x%08x\n",root->top__DOT__Register__DOT__rf[26]);
  printf("s11(27):   0x%08x\n",root->top__DOT__Register__DOT__rf[27]);
  
  printf("t3(28):    0x%08x\n",root->top__DOT__Register__DOT__rf[28]);
  printf("t4(29):    0x%08x\n",root->top__DOT__Register__DOT__rf[29]);
  printf("t5(30):    0x%08x\n",root->top__DOT__Register__DOT__rf[30]);
  printf("t6(31):    0x%08x\n",root->top__DOT__Register__DOT__rf[31]);
}