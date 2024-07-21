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
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/IDU.v:20:30
    extern void npc_trap();
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/top.v:108:30
    extern void trace_func_call(int pc, int alu_out, svBit tail);
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/top.v:109:30
    extern void trace_func_ret(int pc);

#ifdef __cplusplus
}
#endif

#endif  // guard
