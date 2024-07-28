#ifndef __TRACE__H__
#define __TRACE__H__
#include <common.h>
#include <device/map.h>
void trace_dread(paddr_t addr, int len, IOMap *map);
void trace_dwrite(paddr_t addr, int len, word_t data, IOMap *map);
void etrace(word_t mcause,word_t mstatus,word_t mepc,word_t mtvec);
void output_inst();
void disassemble(char *str, int size, uint64_t pc, uint8_t *code, int nbyte);

#endif  //!__TRACE__H__