#include "verilated.h"
#include "Vtop.h"
#include "verilated_vcd_c.h"




static const uint32_t img[]={
  0b00000000010100000000000010010011,
  0b00000000000100000000000100010011,
  0b00000000001000000000000100010011,
  0b00000000010100001000000100010011
};

uint32_t *init_mem(size_t size){
  uint32_t* memory=(uint32_t*)malloc(size*sizeof(uint32_t) );
  mempcy(memory,img,sizeof(img));
  if(memory==NULL){
    exit(0);
  }
  return memory;
}

uint32_t guest_to_host(uint32_t addr){
  return addr-0x80000000;
}

uint32_t pmem_read(uint32_t*memory,uint32_t vaddr){
  uint32_t paddr=guest_to_host(vaddr);
  return memory[paddr/4];
};

static TOP_NAME dut;

void sim_init(){
  Verilated::traceEverOn(true);
  VerilatedContext* contextp=new VerilatedContext;
  VerilatedVcdC* tfp=new VerilatedVcdC;
  dut.trace(tfp,5);
  tfp->open("builds/wave.vcd");
}

void dump_wave(){
  contextp->timeInc(1);
  tfp->dump(contextp->time());
}

void single_cycle(){
  dut.clk=0;dut.eval();
  dut.clk=1;dut.eval();
}

void reset(int n){
  dut.rst=1;
  while(n-->0) single_cycle();
  dut.rst=0;
}

int main(){
  uint32_t*memory=init_mem();
  sim_init();
  reset(10);
  for(int i=0;i<4;i++){
    dut.inst=pmem_read(memory,dut.pc);
    single_cycle();
    dump_wave();
  }
  tfp->close();
}