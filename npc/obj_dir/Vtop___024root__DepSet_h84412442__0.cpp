// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void npc_trap();

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP\n"); );
    // Body
    npc_trap();
}

extern "C" int pmem_read(int mem_rd_addr);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_read_TOP(IData/*31:0*/ mem_rd_addr, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_read_TOP\n"); );
    // Body
    int mem_rd_addr__Vcvt;
    for (size_t mem_rd_addr__Vidx = 0; mem_rd_addr__Vidx < 1; ++mem_rd_addr__Vidx) mem_rd_addr__Vcvt = mem_rd_addr;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(mem_rd_addr__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

extern "C" void pmem_write(int mem_wr_addr, int mem_wr_data, char memory_wr_ctrl);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_write_TOP(IData/*31:0*/ mem_wr_addr, IData/*31:0*/ mem_wr_data, CData/*7:0*/ memory_wr_ctrl) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_write_TOP\n"); );
    // Body
    int mem_wr_addr__Vcvt;
    for (size_t mem_wr_addr__Vidx = 0; mem_wr_addr__Vidx < 1; ++mem_wr_addr__Vidx) mem_wr_addr__Vcvt = mem_wr_addr;
    int mem_wr_data__Vcvt;
    for (size_t mem_wr_data__Vidx = 0; mem_wr_data__Vidx < 1; ++mem_wr_data__Vidx) mem_wr_data__Vcvt = mem_wr_data;
    char memory_wr_ctrl__Vcvt;
    for (size_t memory_wr_ctrl__Vidx = 0; memory_wr_ctrl__Vidx < 1; ++memory_wr_ctrl__Vidx) memory_wr_ctrl__Vcvt = memory_wr_ctrl;
    pmem_write(mem_wr_addr__Vcvt, mem_wr_data__Vcvt, memory_wr_ctrl__Vcvt);
}

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__IFU__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ &pmem_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__IFU__DOT__pmem_read_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int pmem_read__Vfuncrtn__Vcvt;
    pmem_read__Vfuncrtn__Vcvt = pmem_read(pc__Vcvt);
    pmem_read__Vfuncrtn = pmem_read__Vfuncrtn__Vcvt;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.at(0U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__top__DOT__IDU__DOT__is_s_type));
    vlSelf->__VactTriggered.at(2U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
    vlSelf->__Vtrigrprev__TOP__top__DOT__IDU__DOT__is_s_type 
        = vlSelf->top__DOT__IDU__DOT__is_s_type;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.at(1U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
