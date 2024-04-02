// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated.h"

class Vtop__Syms;

class Vtop___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    CData/*6:0*/ top__DOT__IDU__DOT__opcode;
    CData/*2:0*/ top__DOT__IDU__DOT__funct3;
    CData/*6:0*/ top__DOT__IDU__DOT__funct7;
    CData/*0:0*/ top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit;
    CData/*0:0*/ __Vtrigrprev__TOP__clk;
    CData/*0:0*/ __VactContinue;
    VL_IN(inst,31,0);
    VL_OUT(pc,31,0);
    IData/*31:0*/ top__DOT__alu_out;
    IData/*31:0*/ top__DOT__rs1_data;
    IData/*31:0*/ top__DOT__imm_out;
    IData/*31:0*/ top__DOT__Register__DOT__i;
    IData/*31:0*/ top__DOT__Pc__DOT__pc_plus4;
    IData/*31:0*/ top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ top__DOT__IMM__DOT__out4;
    IData/*31:0*/ top__DOT__IMM__DOT__out6;
    IData/*31:0*/ top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<IData/*31:0*/, 32> top__DOT__Register__DOT__rf;
    VlUnpacked<QData/*35:0*/, 16> top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*3:0*/, 16> top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 16> top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list;
    VlUnpacked<QData/*38:0*/, 8> top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*6:0*/, 8> top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list;
    VlUnpacked<IData/*31:0*/, 8> top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop___024root(Vtop__Syms* symsp, const char* v__name);
    ~Vtop___024root();
    VL_UNCOPYABLE(Vtop___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
