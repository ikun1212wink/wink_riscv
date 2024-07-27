#include <cpu.h>
#include <memory.h>
#include <sim.h>
#include <trace.h>
#include <difftest.h>
extern VerilatedContext* contextp ;
extern VerilatedVcdC* tfp ;
extern Vtop dut;
int ebreak_flag=0;
int exe=0;
 void execute(int n){
    if(n>0){
        for (;n > 0; n --) {   
            exe++;
/*             printf("执行指令数%d\n",exe);  
            printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
            //dut.inst=pmem_read(memory,dut.pc);//这个函数是每个周期才会执行一次（下降沿），而PC增加是在上升沿，所以就错开了半个周期
            printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
            itrace(); */
        
            single_cycle(); 
           // difftest_skip_ref();
            difftest_step(dut.pc,dut.pc);
            //printf("%x\n",dut.pc);
           // reg_p();
            
        }
        dump_wave();
        dut.final();
        tfp->close();
    }
    else if(n<0) {
        while(!ebreak_flag){  
            exe++;
/*             printf("执行指令数%d\n",exe);  
            printf(COLOR_BLUE "pc:  0x%x" COLOR_RESET "\n",dut.pc);
            //dut.inst=pmem_read(memory,dut.pc);
            printf(COLOR_CYAN "inst:0x%08x" COLOR_RESET "\n",dut.inst);
            itrace(); */
            
            single_cycle();
          //  difftest_skip_ref();
            difftest_step(dut.pc,dut.pc);
           // reg_p();
            
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