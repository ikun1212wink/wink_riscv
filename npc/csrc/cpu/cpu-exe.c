#include <cpu.h>
#include <memory.h>
#include <sim.h>
#include <trace.h>
#include <difftest.h>
#include <config.h>
#include <iostream>
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;
int ebreak_flag=0;
int exe=0;

void itrace_printf(){
    printf("执行指令数%d\n",exe);  
    printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
    printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
    itrace();
}

 void execute(int n){
    if(n>0){
        for (;n > 0; n --) {   
            exe++;
            #ifdef  ITRACE
                itrace_printf();
            #endif  //ITRACE

            single_cycle(); 

            #ifdef  DIFFTEST
                difftest_step(dut.pc,dut.pc);
                   fflush(stdout);
            #endif  //DIFFTEST
            
            #ifdef  REG_P
                reg_p();
            #endif  //REG_P                       
        }
        dump_wave();
        dut.final();
       // tfp->close();
    }
    else if(n<0) {
        while(!ebreak_flag){  
            exe++;
            #ifdef  ITRACE
                itrace_printf();
            #endif  //ITRACE
            single_cycle();

            #ifdef  DIFFTEST
                difftest_step(dut.pc,dut.pc);
                   fflush(stdout);
            #endif  //DIFFTEST
            
           #ifdef  REG_P
                reg_p(); 
           #endif  //REG_P                       
        }
    }
    else {
        printf(COLOR_RED "Please input N>0 and N instructions are executed or input N<0 to execute all the instructions!!!" COLOR_RESET "\n");
    }
    if(ebreak_flag){
        printf(COLOR_GREEN "HIT GOOD TRAP!" COLOR_RESET "\n");
    }
    printf(COLOR_GREEN "SIMULATION END!" COLOR_RESET "\n");
} 