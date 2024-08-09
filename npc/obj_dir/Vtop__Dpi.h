// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTOP__DPI_H_
#define VERILATED_VTOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/IDU.v:270:30
    extern void npc_trap();
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/SRAM_LSU.v:45:29
    extern int pmem_read(int raddr);
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/SRAM_LSU.v:139:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
