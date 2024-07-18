/* #include <sim.h>
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
Vtop dut;

//波形仿真使能函数
void sim_init(){ 
  Verilated::traceEverOn(true);
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut.trace(tfp,0);
  tfp->open("wave.vcd");
}

//波形记录函数
void dump_wave(){
  tfp->dump(contextp->time());
  contextp->timeInc(1);
}

//时钟驱动函数
void single_cycle(){
  dut.clk=0;dut.eval();
  dump_wave();
  dut.clk=1;dut.eval();
  dump_wave();
}

//复位函数
void reset(int n){ 
  dut.rst=1;
  while(n-->0) single_cycle();
  dut.rst=0;
} */