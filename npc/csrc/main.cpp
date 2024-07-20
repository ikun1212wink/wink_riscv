#include <common.h>
#include <monitor.h>
#include <sim.h>
#include <memory.h>
#include <cpu.h>
#include <trace.h>
void init_disasm(const char *triple);
extern char *img_path;
extern int ebreak_flag;
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;
//int mem_number;

/* extern "C" void trace_func_call(uint32_t pc, uint32_t target,bool tail);
extern "C" void trace_func_ret(uint32_t pc); */
extern "C" void npc_trap(){//HIT GOOD TRAP
  ebreak_flag=1;
  dump_wave();
  dut.final();
  tfp->close();
}


int main(int argc,char *argv[]){

  init_monitor(argc, argv);
 // uint32_t*memory=init_mem();
  sim_init();
  reset(10);

  execute(-1); 

 // sdb_mainloop();
  return 0;
}