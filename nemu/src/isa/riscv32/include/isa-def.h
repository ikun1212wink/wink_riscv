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

#ifndef __ISA_RISCV_H__
#define __ISA_RISCV_H__

#include <common.h>
//定义了一个结构体类型riscv64_CPU_state或riscv32_CPU_state，具体根据宏CONFIG_RV64的定义来决定
//这个结构体包含了 RISC-V 架构的通用寄存器（gpr 数组）和程序计数器（pc）
typedef struct {
  word_t gpr[MUXDEF(CONFIG_RVE, 16, 32)];//如果 CONFIG_RVE 宏定义为真值（非零），则宏MUXDEF返回结果16，否则返回结果32
  vaddr_t pc;
} MUXDEF(CONFIG_RV64, riscv64_CPU_state, riscv32_CPU_state);

// 根据宏CONFIG_RV64的定义来决定具体是哪个类型。该结构体类型只有一个成员变量inst，是一个联合体，其中包含一个uint32_t类型的val字段
//用于存储RISC-V架构的指令解码信息
typedef struct {
  union {
    uint32_t val;
  } inst;
} MUXDEF(CONFIG_RV64, riscv64_ISADecodeInfo, riscv32_ISADecodeInfo);

#define isa_mmu_check(vaddr, len, type) (MMU_DIRECT)

#endif
