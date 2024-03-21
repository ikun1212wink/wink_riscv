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

#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U,
  TYPE_N, // none
};

#define src1R() do { *src1 = R(rs); } while (0)
#define src2R() do { *src2 = R(rt); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 15, 0), 16); } while(0)
#define immU() do { *imm = BITS(i, 15, 0); } while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rt = BITS(i, 20, 16);
  int rs = BITS(i, 25, 21);
  *rd = (type == TYPE_U || type == TYPE_I) ? rt : BITS(i, 15, 11);
  switch (type) {
    case TYPE_I: src1R(); immI(); break;
    case TYPE_U: src1R(); immU(); break;
  }
}

//进行译码操作，译码的目的是得到指令的操作和操作对象
//这主要是通过查看指令的opcode来决定的. 不同ISA的opcode会出现在指令的不同位置, 
//我们只需要根据指令的编码格式, 从取出的指令中识别出相应的opcode即可.
static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

//和YEMU相比, NEMU使用一种抽象层次更高的译码方式: 模式匹配, NEMU可以通过一个模式字符串来指定指令中opcode

//其中INSTPAT(意思是instruction pattern)是一个宏(在nemu/include/cpu/decode.h中定义), 它用于定义一条模式匹配规则. 其格式如下:
//             INSTPAT(模式字符串, 指令名称, 指令类型, 指令执行操作);

//模式字符串中只允许出现4种字符:0表示相应的位只能匹配0；1表示相应的位只能匹配1；?表示相应的位可以匹配0或1；空格是分隔符,只用于提升模式字符串的可读性,不参与匹配
//指令名称在代码中仅当注释使用, 不参与宏展开; 
//指令类型用于后续译码过程;
//指令执行操作则是通过C代码来模拟指令执行的真正行为.
  INSTPAT_START();
  INSTPAT("001111 ????? ????? ????? ????? ??????", lui    , U, R(rd) = imm << 16);
  INSTPAT("100011 ????? ????? ????? ????? ??????", lw     , I, R(rd) = Mr(src1 + imm, 4));
  INSTPAT("101011 ????? ????? ????? ????? ??????", sw     , I, Mw(src1 + imm, 4, R(rd)));

  INSTPAT("011100 ????? ????? ????? ????? 111111", sdbbp  , N, NEMUTRAP(s->pc, R(2))); // R(2) is $v0;
  INSTPAT("?????? ????? ????? ????? ????? ??????", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  //inst_fetch()进行取址，
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  //inst_fetch()最终会根据参数len来调用vaddr_ifetch()(在nemu/src/memory/vaddr.c中定义), 
  //而目前vaddr_ifetch()又会通过paddr_read()来访问物理内存中的内容. 因此, 取指操作的本质只不过就是一次内存的访问而已.
  //isa_exec_once()在调用inst_fetch()的时候传入了s->snpc的地址, 因此inst_fetch()最后还会根据len来更新s->snpc, 从而让s->snpc指向下一条指令
  return decode_exec(s);//进入decode_exec函数，进行译码相关操作
}
