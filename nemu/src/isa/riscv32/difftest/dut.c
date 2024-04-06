/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <isa.h>
#include <cpu/difftest.h>
#include "../local-include/reg.h"
const char *regs2[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};

//isa_difftest_checkregs()函数把通用寄存器和PC与从DUT中读出的寄存器的值进行比较
//第二个参数pc应指向导致对比结果不一致的指令
bool isa_difftest_checkregs(CPU_state *ref_r, vaddr_t pc) {
  for(int i=0;i<32;i++){
    if((ref_r->gpr[i]!=cpu.gpr[i])||(ref_r->pc!=cpu.pc)){
      printf("ref-pc=0x%08x\n",ref_r -> pc-4);
      printf("dut-pc=0x%08x\n",cpu.pc-4);
      printf("ref:%s = 0x%08x\n",regs2[i],ref_r->gpr[i]);
      printf("dut:%s = 0x%08x\n",reg_name(i),cpu.gpr[i]);
      return false;
    }
  }
  return true;
}



void isa_difftest_attach() {
}
