#include <cpu.h>
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;

int ebreak_flag=0;

 void execute(int n,uint32_t*memory){
  if(n>0){
    for (;n > 0; n --) {
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
    dump_wave();
    dut.final();
    tfp->close();
  }
  else if(n<0) {
    while(!ebreak_flag){  
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
  }
  else {
    printf(COLOR_RED "Please input N>0 and N instructions are executed or input N<0 to execute all the instructions!!!" COLOR_RESET "\n");
  }
} 