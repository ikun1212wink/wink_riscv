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

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

//这里定义了宏 R(i)，它用于获取通用寄存器 i 的值。Mr 和 Mw 是函数宏，分别用于读取和写入虚拟地址对应的内存。
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

//这里定义了一些枚举值，用于表示指令类型。
enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, // none
};

//这里定义了一些辅助宏，用于从指令中提取操作数。这些宏根据不同的指令类型，将相应的操作数值存储到对应的变量中。
#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)

//这是一个函数，用于解码操作数。它根据指定的类型，从指令中提取相应的操作数，并存储到相应的变量中。
static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
  }
}

//译码的目的是得到指令的操作和操作对象, 这主要是通过查看指令的opcode来决定的
//这是一个函数，用于执行解码操作。它首先声明了一些变量，用于存储解码后的结果
static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
//这是一个宏，用于匹配模式并执行相应的操作。
//它接受参数 s（指向 Decode 结构体的指针）、name（指令名称）、type（指令类型）和 ...（指令执行操作）。
//宏展开后会调用 decode_operand 函数解码操作数，并执行指定的操作
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

//NEMU可以通过一个模式字符串来指定指令中opcode
//INSTPAT(意思是instruction pattern)是一个宏(在nemu/include/cpu/decode.h中定义), 它用于定义一条模式匹配规则. 其格式如下:
//                      INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作);
//模式字符串中只允许出现4种字符:0表示相应的位只能匹配0；1表示相应的位只能匹配1；?表示相应的位可以匹配0或1；空格是分隔符, 只用于提升模式字符串的可读性, 不参与匹配
//指令名称在代码中仅当注释使用, 不参与宏展开; 
//指令类型用于后续译码过程; 
//而指令执行操作则是通过C代码来模拟指令执行的真正行为
  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

//这里将通用寄存器 $zero（索引为 0）的值设置为 0，然后返回。
  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  //inst_fetch()最终会根据参数len来调用vaddr_ifetch()(在nemu/src/memory/vaddr.c中定义)
  //vaddr_ifetch()又会通过paddr_read()来访问物理内存中的内容
  //因此, 取指操作的本质只不过就是一次内存的访问而已
  
  return decode_exec(s);//进入decode_exec()函数, 它首先进行的是译码相关的操作
}
