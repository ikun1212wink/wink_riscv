#ifndef __TRACE__H__
#define __TRACE__H__
#include <common.h>
#include <elf.h>
void itrace();
void parse_elf(const char *elf_file);
#endif  //!__TRACE__H__