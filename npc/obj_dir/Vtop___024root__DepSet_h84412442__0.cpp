// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop___024root.h"

extern "C" void trace_func_call(int pc, int alu_out, svBit tail);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP(IData/*31:0*/ pc, IData/*31:0*/ alu_out, CData/*0:0*/ tail) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    int alu_out__Vcvt;
    for (size_t alu_out__Vidx = 0; alu_out__Vidx < 1; ++alu_out__Vidx) alu_out__Vcvt = alu_out;
    svBit tail__Vcvt;
    for (size_t tail__Vidx = 0; tail__Vidx < 1; ++tail__Vidx) tail__Vcvt = tail;
    trace_func_call(pc__Vcvt, alu_out__Vcvt, tail__Vcvt);
}

extern "C" void trace_func_ret(int pc);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__trace_func_ret_TOP(IData/*31:0*/ pc) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__trace_func_ret_TOP\n"); );
    // Body
    int pc__Vcvt;
    for (size_t pc__Vidx = 0; pc__Vidx < 1; ++pc__Vidx) pc__Vcvt = pc;
    trace_func_ret(pc__Vcvt);
}

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
    vlSelf->__VactTriggered.at(0U) = ((~ (IData)(vlSelf->clk)) 
                                      & (IData)(vlSelf->__Vtrigrprev__TOP__clk));
    vlSelf->__VactTriggered.at(1U) = ((IData)(vlSelf->clk) 
                                      & (~ (IData)(vlSelf->__Vtrigrprev__TOP__clk)));
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop___024root___dump_triggers__act(vlSelf);
    }
#endif
}
