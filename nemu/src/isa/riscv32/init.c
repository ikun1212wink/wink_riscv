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
#include <memory/paddr.h>

// this is not consistent with uint8_t
// but it is ok since we do not access the array directly
static const uint32_t img [] = { //静态数组img，其中存储了一些指令和数据，每个整数表示一条指令或数据
  0x00000297,  // auipc t0,0
  //auipc指令。它将程序计数器的高20位与一个立即数（0）相加，并将结果存储在目标寄存器t0中。该指令的作用是将程序计数器的高20位加载到t0寄存器中
  0x0002a023, // sb  zero,16(t0)
  //sb指令。它将寄存器zero（零寄存器）的值存储到地址为t0+16的内存位置中。sb指令用于将一个字节的数据存储到内存中
  0x0002a503, // lbu a0,16(t0)
  //lbu指令。它将地址为t0+16的内存位置中的一个字节加载到目标寄存器a0中。lbu指令用于加载一个字节的无符号数据
  0x00100073,  // ebreak (used as nemu_trap)
  //ebreak指令。在这段代码中，它被用作nemu_trap。ebreak指令在调试过程中常用作触发陷阱或异常的指令
  0xdeadbeef,  // some data
  //0xdeadbeef：这是一个数据值，不是指令。它只是表示在这个数组中存储了一些数据
};

static void restart() {//restart()的静态函数。该函数的作用是重置计算机系统的状态
  /* Set the initial program counter. */
  cpu.pc = RESET_VECTOR;

  /* The zero register is always 0. */
  cpu.gpr[0] = 0;
}

void init_isa() {//init_isa()函数用于初始化虚拟计算机系统
  /* Load built-in image. */
  memcpy(guest_to_host(RESET_VECTOR), img, sizeof(img));//通过memcpy函数将img数组的内容复制到重置向量RESET_VECTOR所指示的内存区域
  
  /* Initialize this virtual computer system. */
  restart();//调用restart()函数重置计算机系统的状态
}
