#ifndef __COMMON__H__
#define __COMMON__H__
#include "verilated.h"
#include "verilated_vcd_c.h"
#include "Vtop.h"
#include <stdint.h>
#include <inttypes.h>
#include <stdbool.h>
#include <string.h>
#include <getopt.h>
#include <marco.h>
#include <assert.h>
#include <stdlib.h>

#define COLOR_RED     "\033[0;31m"
#define COLOR_GREEN   "\033[0;32m"
#define COLOR_YELLOW  "\033[0;33m"
#define COLOR_BLUE    "\033[0;34m"
#define COLOR_MAGENTA "\033[0;35m"
#define COLOR_CYAN    "\033[0;36m"
#define COLOR_RESET   "\033[0m"

typedef MUXDEF(CONFIG_ISA64, uint64_t, uint32_t) word_t;
typedef MUXDEF(CONFIG_ISA64, int64_t, int32_t)  sword_t;
#define FMT_WORD MUXDEF(CONFIG_ISA64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef word_t vaddr_t;
typedef MUXDEF(PMEM64, uint64_t, uint32_t) paddr_t;
#define FMT_PADDR MUXDEF(PMEM64, "0x%016" PRIx64, "0x%08" PRIx32)
typedef uint16_t ioaddr_t;

extern int quit_sdb;

#endif  //!__COMMON__H__