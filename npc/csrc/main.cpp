#include <common.h>
#include <monitor.h>
#include <sim.h>
#include <memory.h>
#include <cpu.h>
extern char *img_path;
extern int ebreak_flag;
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;
int mem_number;



extern "C" void npc_trap(){//HIT GOOD TRAP
  ebreak_flag=1;
  dump_wave();
  dut.final();
  tfp->close();
}


int main(int argc,char *argv[]){
  parse_args(argc, argv);
  uint32_t*memory=init_mem(&mem_number);
  sim_init();
  reset(10);
  execute(-1,memory); 
  return 0;
}