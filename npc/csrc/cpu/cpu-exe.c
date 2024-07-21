#include <cpu.h>
#include <memory.h>
#include <sim.h>
#include <trace.h>
#include <difftest.h>
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;

int ebreak_flag=0;

 void execute(int n){
    uint32_t*memory=init_mem();
    if(n>0){
        for (;n > 0; n --) {     
            printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
            dut.inst=pmem_read(memory,dut.pc);//这个函数是每个周期才会执行一次（下降沿），而PC增加是在上升沿，所以就错开了半个周期
            printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
            difftest_step(dut.pc,dut.pc);
            itrace();
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
    if(ebreak_flag){
        printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
    }
    printf(COLOR_RED "SIMULATION END!" COLOR_RESET "\n");
} 