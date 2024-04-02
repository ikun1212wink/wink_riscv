#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"

static const uint32_t img[]={
  0b00000000010100000000000010010011,
  0b00000000000100000000000100010011,
  0b00000000001000000000000100010011,
  0b00000000010100001000000100010011,
  0b00000000000100000000000001110011
};

VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop dut;

uint32_t *init_mem(size_t size){
  uint32_t* memory=(uint32_t*)malloc(size*sizeof(uint32_t) );
  memcpy(memory,img,sizeof(img));
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


void sim_init(){
  Verilated::traceEverOn(true);
  contextp=new VerilatedContext;
  tfp=new VerilatedVcdC;
  dut.trace(tfp,0);
  tfp->open("wave.vcd");
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

extern "C" void npc_trap(){
  tfp->close();
}

int main(){
  uint32_t*memory=init_mem(4);
  sim_init();
  reset(1);
  while(1){
    dut.inst=pmem_read(memory,dut.pc);
    single_cycle();
    dump_wave();
  }
}