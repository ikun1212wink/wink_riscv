#include <cpu.h>
#include <memory.h>
#include <sim.h>
#include <trace.h>
#include <difftest.h>
#include <config.h>
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern VysyxSoCFull dut;
int ebreak_flag=0;
int exe=0;

/* void itrace_printf(){
    printf("执行指令数%d\n",exe);  
    printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
    printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
    itrace();
} */

 void execute(int n){
    if(n>0){
        for (;n > 0; n --) {   
            
            single_cycle(); 
           /*  if(dut.itrace_reg){
                #ifdef  ITRACE
                    exe++;
                    itrace_printf();
                #endif  //ITRACE
                #ifdef  REG_P
                    reg_p();
                #endif  //REG_P 
            }  
            if(dut.difftest){
                #ifdef  DIFFTEST
                    difftest_step(dut.pc,dut.pc);
                #endif  //DIFFTEST 
            }            */                    
        }
    }
    else if(n<0) {
        while(!ebreak_flag){  
            
            single_cycle();
          /*   if(dut.itrace_reg){
                #ifdef  ITRACE
                    exe++;
                    itrace_printf();
                #endif  //ITRACE
                #ifdef  REG_P
                    reg_p();
                #endif  //REG_P 
            }  
            if(dut.difftest){
                #ifdef  DIFFTEST
                    difftest_step(dut.pc,dut.pc);
                #endif  //DIFFTEST
            }      */              
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