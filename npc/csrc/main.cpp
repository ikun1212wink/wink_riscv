#include <common.h>
#include <monitor.h>
#include <sim.h>
#include <memory.h>
#include <cpu.h>
#include <trace.h>

uint32_t*inst;
extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
/* const int32_t insts[] = {
  0x100007b7,
  0x04100713,
  0x00e78023,
  0x00a00713,
  0x00e78023,
  0x0000006f
}; */
extern char *img_path;
extern "C" void mrom_read(int32_t addr, int32_t *data) { 
  *data=inst[(addr-0x20000000)/4];  
}
void init_disasm(const char *triple);
extern char *img_path;
extern int ebreak_flag;
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern VysyxSoCFull dut;
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
  Verilated::commandArgs(argc, argv);
  sim_init();
  init_monitor(argc, argv);
  inst=init_mem();

  reset(10);

  //execute(-1); 

  sdb_mainloop();
  return 0;
}