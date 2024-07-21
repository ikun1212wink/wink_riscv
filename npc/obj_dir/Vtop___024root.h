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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(rst,0,0);
        CData/*0:0*/ top__DOT__jalr;
        CData/*3:0*/ top__DOT__alu_func;
        CData/*1:0*/ top__DOT__w_sel;
        CData/*0:0*/ top__DOT__IDU__DOT__is_lb;
        CData/*0:0*/ top__DOT__IDU__DOT__is_lh;
        CData/*0:0*/ top__DOT__IDU__DOT__is_lw;
        CData/*0:0*/ top__DOT__IDU__DOT__is_lbu;
        CData/*0:0*/ top__DOT__IDU__DOT__is_lhu;
        CData/*0:0*/ top__DOT__IDU__DOT__is_addi;
        CData/*0:0*/ top__DOT__IDU__DOT__is_slti;
        CData/*0:0*/ top__DOT__IDU__DOT__is_sltiu;
        CData/*0:0*/ top__DOT__IDU__DOT__is_xori;
        CData/*0:0*/ top__DOT__IDU__DOT__is_ori;
        CData/*0:0*/ top__DOT__IDU__DOT__is_andi;
        CData/*0:0*/ top__DOT__IDU__DOT__is_slli;
        CData/*0:0*/ top__DOT__IDU__DOT__is_srli;
        CData/*0:0*/ top__DOT__IDU__DOT__is_srai;
        CData/*0:0*/ top__DOT__IDU__DOT__is_add;
        CData/*0:0*/ top__DOT__IDU__DOT__is_sub;
        CData/*0:0*/ top__DOT__IDU__DOT__is_sll;
        CData/*0:0*/ top__DOT__IDU__DOT__is_slt;
        CData/*0:0*/ top__DOT__IDU__DOT__is_sltu;
        CData/*0:0*/ top__DOT__IDU__DOT__is_xor;
        CData/*0:0*/ top__DOT__IDU__DOT__is_srl;
        CData/*0:0*/ top__DOT__IDU__DOT__is_sra;
        CData/*0:0*/ top__DOT__IDU__DOT__is_or;
        CData/*0:0*/ top__DOT__IDU__DOT__is_and;
        CData/*0:0*/ top__DOT__IDU__DOT__is_u_type;
        CData/*0:0*/ top__DOT__IDU__DOT__is_b_type;
        CData/*0:0*/ top__DOT__IDU__DOT__is_r_type;
        CData/*0:0*/ top__DOT__IDU__DOT__is_s_type;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_hdeacc951__0;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_h873f971e__0;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_he69f398c__0;
        CData/*0:0*/ top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0;
        CData/*0:0*/ top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit;
        CData/*0:0*/ top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ __Vtrigrprev__TOP__clk;
        CData/*0:0*/ __VactContinue;
        VL_IN(inst,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ top__DOT__alu_out;
        IData/*31:0*/ top__DOT__rs2_data;
        IData/*31:0*/ top__DOT__imm_out;
        IData/*31:0*/ top__DOT__Register__DOT__i;
        IData/*31:0*/ top__DOT__Pc__DOT__pc_plus4;
        IData/*31:0*/ top__DOT__ALU__DOT__signed_a;
        IData/*31:0*/ top__DOT__ALU__DOT__signed_b;
        IData/*31:0*/ top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ top__DOT__IMM__DOT__out5;
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
    };
    struct {
        VlUnpacked<IData/*31:0*/, 8> top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

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
