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
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, TYPE_J, TYPE_R// none
};

//src1R()将rs1寄存器的值赋给src1指针所指向的变量
#define src1R() do { *src1 = R(rs1); } while (0)

//src2R()将rs2寄存器的值赋给src1指针所指向的变量
#define src2R() do { *src2 = R(rs2); } while (0)

//使用 BITS(i, 31, 20) 提取位范围为 31 到 20 的比特位
//使用 SEXT 进行符号扩展，将提取的比特位转换为有符号整数，并将结果赋给 imm
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)

// BITS(i, 31, 12) 提取位范围为 31 到 12 的比特位
//使用 SEXT 进行符号扩展，将提取的比特位转换为有符号整数
//最后，将结果左移 12 位（<< 12）  这个左移操作是为了将提取的立即数对齐到正确的位置，以符合特定指令的要求
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)

//使用 BITS(i, 31, 25) 提取位范围为 31 到 25 的比特位，并将其左移 5 位
//然后，使用 BITS(i, 11, 7) 提取位范围为 11 到 7 的比特位
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)

#define immJ() do { *imm=  (SEXT(BITS(i,31,31),1)<<20) | (BITS(i, 19, 12)<<12) | (BITS(i,20,20)<<11) | (BITS(i,30,21)<<1) ;} while(0)

//#define immJ() do { *imm = SEXT(( (BITS(i, 31, 31) << 19) | BITS(i, 30, 21) | (BITS(i, 20, 20) << 10) | (BITS(i, 19, 12) << 11) ) << 1, 21);} while(0)

static void decode_operand(Decode *s, int *rd, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);
  *rd     = BITS(i, 11, 7);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_R: src1R(); src2R();         break;
  }
}

//译码的目的是得到指令的操作码和操作数
static int decode_exec(Decode *s) {
  int rd = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

//INSTPAT_INST宏获取指令的32位编码
#define INSTPAT_INST(s) ((s)->isa.inst.val)

//concat:假设 type 的值为 I，那么 concat(TYPE_, type) 的展开结果将为 TYPE_I
//__VA_ARGS__ 是一个特殊的预处理器宏，在 C 语言中用于表示可变参数的序列。
//宏INSTPAT调用decode_operand()函数，可以在执行匹配的同时进行操作数解码，从而更方便地处理指令的不同模式
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &rd, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

//译码方式：模式匹配，NEMU可以通过一个模式字符串来指定指令中opcode
//INSTPAT：instruction pattern（置令格式） 
//0匹配0, 1匹配1, ？匹配1或0， 空格提升可读性不参与匹配 
  INSTPAT_START();
//INSTPAT(             模式字符串,                  指令名称, 指令类型, 指令执行操作);
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui    , U, R(rd) = imm);//把32位立即数值放在目的寄存器 rd 中
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(rd) = s->pc + imm);//构建pc的相对地址，立即数低12位补0

  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(rd) = SEXT(Mr(src1 + imm, 1),8));//内存加载一个1字节的有符号数，并存在寄存器
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, R(rd) = SEXT(Mr(src1 + imm, 2),16));//2字节
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, R(rd) = SEXT(Mr(src1 + imm, 4),32));//4字节
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, R(rd) = Mr(src1 + imm, 1));//从内存中加载一个无符号字节，并将其存储到目标寄存器中
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, R(rd) = Mr(src1 + imm, 2));//2字节无符号

  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(rd) = src1 + imm);//立即数与源寄存器的值相加，并将结果存储到目标寄存器

  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr   , I, R(rd) = s->pc+4;s->dnpc=(src1+imm)&(~1));
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal    , J, R(rd) = s->pc + 4; s->dnpc = s->pc + imm);
  
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add    , R, R(rd) = src1+src2);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub    , R, R(rd) = src1-src2);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll    , R, R(rd) = src1 << (src2 % 32));//逻辑左移（不考虑符号）
  INSTPAT("0000000 ????? ????? 101 ????? 01100 11", slr    , R, R(rd) = src1 >> (src2 % 32));//逻辑右移
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or     , R, R(rd) = src1|src2);//按位或
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and    , R, R(rd) = src1&src2);//按位与
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor    , R, R(rd) = src1^src2);//按位异或
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt    , R, R(rd) = (sword_t)src1 < (sword_t)src2?1:0);//有符号数比大小
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu   , R, R(rd) = (word_t)src1 < (word_t)src2?1:0);
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sra    , R, R(rd) = ((sword_t)src1 >> ((sword_t)src2 % 32)));//算术右移

  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));//rs2的低8位写入指定内存
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));//rs2的低16位写入指定内存
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));//rs2的32位写入指定内存

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();
//进入INSTPAT（）中，它会调用decode_operand()函数匹配指令中对应的寄存器和立即数，然后按“指令执行操作”中的内容进行操作

  R(0) = 0; 
  return 0;
}

int isa_exec_once(Decode *s) {
  //函数inst_fetch()进行取址
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  //函数decode_exec()进译码
  return decode_exec(s);
}
