#ifndef __TRACE__H__
#define __TRACE__H__
#include <common.h>
#include <elf.h>
void itrace();
extern "C" void trace_func_call(uint32_t pc, uint32_t target,bool tail);
extern "C" void trace_func_ret(uint32_t pc);
void parse_elf(const char *elf_file);
#endif  //!__TRACE__H__