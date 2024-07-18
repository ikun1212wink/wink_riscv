#include <common.h>
#include <utils.h>
#include <memory.h>
#include <monitor.h>
//#include <sim.h>
int ebreak_flag=0;
int *mem_number;
extern char *img_path ;
/* extern VerilatedContext* contextp;
extern VerilatedVcdC* tfp ;
extern Vtop dut; */
VerilatedContext* contextp = NULL;
VerilatedVcdC* tfp = NULL;
static Vtop dut;







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

extern "C" void npc_trap(){//HIT GOOD TRAP
  ebreak_flag=1;
  dump_wave();
  dut.final();
  tfp->close();
}

 void execute(int n,uint32_t*memory){
  if(n>0){
    for (;n > 0; n --) {
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
  }
  else {
    while(!ebreak_flag){  
      printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
      dut.inst=pmem_read(memory,dut.pc);
      printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
      single_cycle();
    }
  }
  dump_wave();
  dut.final();
  tfp->close();
} 



int main(int argc,char *argv[]){  
  printf("11");
  sim_init();
  reset(10);
  parse_args(argc, argv);
  uint32_t*memory=init_mem(img_path,mem_number);
 // uint32_t*memory=init_monitor(argc,argv);


  if(ebreak_flag){
    printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
  }
  else {
    execute(-1,memory);
  } 

/*   while(!ebreak_flag){  
    printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
    dut.inst=pmem_read(memory,dut.pc);
    printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
    single_cycle();
  } */
  printf(COLOR_RED "SIMULATION END!" COLOR_RESET "\n");
  return 0;
}