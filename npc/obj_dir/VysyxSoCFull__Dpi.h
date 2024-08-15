// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/wink/ysyx-workbench/ysyxSoC/perip/flash/flash.v:84:30
    extern void flash_read(int addr, int* data);
    // DPI import at /home/wink/ysyx-workbench/ysyxSoC/build/ysyxSoCFull.v:4708:30
    extern void mrom_read(int raddr, int* rdata);
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/IDU.v:270:30
    extern void npc_trap();
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/SRAM.v:51:29
    extern int pmem_read(int raddr);
    // DPI import at /home/wink/ysyx-workbench/npc/vsrc/SRAM.v:52:30
    extern void pmem_write(int waddr, int wdata, char wmask);

#ifdef __cplusplus
}
#endif

#endif  // guard
