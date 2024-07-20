#ifndef __DIFFTEST__H__
#define __DIFFTEST__H__
#include <common.h>
#include <dlfcn.h>
#include <memory.h>
#include <cpu.h>
void init_difftest(char *ref_so_file, long img_size, int port);
#endif  //!__DIFFTEST__H__