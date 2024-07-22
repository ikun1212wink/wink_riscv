// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

VL_ATTR_COLD void Vtop___024root___eval_static(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_static\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigrprev__TOP__clk = vlSelf->clk;
}

VL_ATTR_COLD void Vtop___024root___eval_initial__TOP(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial__TOP\n"); );
    // Body
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0U] = 0xfU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1U] = 0xeU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2U] = 0xdU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3U] = 0xcU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4U] = 0xbU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5U] = 0xaU;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6U] = 9U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7U] = 8U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8U] = 7U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9U] = 6U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xaU] = 5U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xbU] = 4U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xcU] = 3U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xdU] = 2U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xeU] = 1U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0xfU] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0U] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3U] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4U] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5U] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6U] = 0U;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0U] = 0xf00000000ULL;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3U] = 0xc00000000ULL;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4U] = 0xb00000000ULL;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5U] = 0xa00000000ULL;
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6U] = 0x900000000ULL;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0U] = 0x13U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1U] = 0x23U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2U] = 3U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3U] = 0x67U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4U] = 0x6fU;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5U] = 0x63U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6U] = 0x37U;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7U] = 0x17U;
    vlSelf->top__DOT__Register__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[1U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[2U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[3U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[4U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[5U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[6U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[7U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[8U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[9U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xaU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xbU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xcU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xdU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xeU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0xfU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x10U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x11U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x12U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x13U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x14U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x15U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x16U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x17U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x18U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x19U] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1aU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1bU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1cU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1dU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1eU] = 0U;
    vlSelf->top__DOT__Register__DOT__rf[0x1fU] = 0U;
    vlSelf->top__DOT__Register__DOT__i = 0x20U;
}

VL_ATTR_COLD void Vtop___024root___eval_final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_final\n"); );
}

VL_ATTR_COLD void Vtop___024root___eval_triggers__stl(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf);

VL_ATTR_COLD void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Init
    CData/*0:0*/ __VstlContinue;
    // Body
    vlSelf->__VstlIterCount = 0U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        __VstlContinue = 0U;
        Vtop___024root___eval_triggers__stl(vlSelf);
        if (vlSelf->__VstlTriggered.any()) {
            __VstlContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VstlIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__stl(vlSelf);
#endif
                VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/top.v", 1, "", "Settle region did not converge.");
            }
            vlSelf->__VstlIterCount = ((IData)(1U) 
                                       + vlSelf->__VstlIterCount);
            Vtop___024root___eval_stl(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VstlTriggered.at(0U)) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

void Vtop___024root____Vdpiimwrap_top__DOT__IFU__DOT__pmem_read_TOP(IData/*31:0*/ pc, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_h03e0431e_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h074114c1_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hfe40056e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hab390d39_0;
void Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_read_TOP(IData/*31:0*/ mem_rd_addr, IData/*31:0*/ &pmem_read__Vfuncrtn);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->top__DOT__Pc__DOT__pc_plus4 = ((IData)(4U) 
                                           + vlSelf->pc);
    Vtop___024root____Vdpiimwrap_top__DOT__IFU__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top__DOT__IFU__DOT__pmem_read__6__Vfuncout);
    vlSelf->inst = vlSelf->__Vfunc_top__DOT__IFU__DOT__pmem_read__6__Vfuncout;
    if ((0x6fU == vlSelf->inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->inst) 
                                                 | ((0x800U 
                                                     & (vlSelf->inst 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->inst 
                                                          >> 0x14U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->inst 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->inst 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->inst 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->inst 
                                                          >> 7U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->top__DOT__IDU__DOT__is_u_type = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->top__DOT__IMM__DOT__out5 = (((- (IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->inst 
                                         >> 0x14U));
    vlSelf->top__DOT__IDU__DOT__is_beq = (IData)((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_bne = (IData)((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_blt = (IData)((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_bge = (IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_bltu = (IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__BSU__DOT__signed_rs1 = vlSelf->top__DOT__Register__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0xfU))];
    vlSelf->top__DOT__BSU__DOT__signed_rs2 = vlSelf->top__DOT__Register__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->inst) | ((0x800U 
                                            & (vlSelf->inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->inst << 4U)) | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->top__DOT__IDU__DOT__is_sb = (IData)((0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_sh = (IData)((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_sw = (IData)((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_addi = (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_slti = (IData)((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_sltiu = (IData)(
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_xori = (IData)((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_ori = (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_andi = (IData)((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__jalr = (IData)((0x67U == (0x707fU 
                                                & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_lb = (IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_lh = (IData)((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_lw = (IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_lbu = (IData)((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_lhu = (IData)((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_slt = (IData)((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_sltu = (IData)((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_xor = (IData)((0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_or = (IData)((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT__is_and = (IData)((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->inst)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                             << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                        << 3U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_beq)))));
    vlSelf->top__DOT__branch_type = Vtop__ConstPool__TABLE_h03e0431e_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__IDU__DOT__is_b_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_beq) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                                                         | (IData)(
                                                                   (0x7063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->inst))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__imm_out = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_sw) 
                             << 2U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                        << 1U) | (IData)(vlSelf->top__DOT__IDU__DOT__is_sb)));
    vlSelf->top__DOT__memory_wr_ctrl = Vtop__ConstPool__TABLE_h074114c1_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__IDU__DOT__is_s_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_sb) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_sw)));
    vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0 
        = ((IData)(vlSelf->top__DOT__jalr) | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->inst)));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                             << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                        << 3U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)))));
    vlSelf->top__DOT__memory_rd_ctrl = Vtop__ConstPool__TABLE_hfe40056e_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__mem_rd_en = ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)))));
    vlSelf->top__DOT__IDU__DOT__is_srli = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_srai = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_slli = ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->inst)) 
                                           & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->top__DOT__IDU__DOT__is_sll = ((0x33U == 
                                           (0x7fU & vlSelf->inst)) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->top__DOT__IDU__DOT__is_add = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_sub = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_srl = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_sra = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)));
    vlSelf->__Vtableidx4 = (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                              == vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                             << 8U) | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                         != vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                        << 7U) | ((
                                                   VL_LTS_III(32, vlSelf->top__DOT__BSU__DOT__signed_rs1, vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                   << 6U) 
                                                  | ((VL_GTES_III(32, vlSelf->top__DOT__BSU__DOT__signed_rs1, vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                      << 5U) 
                                                     | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                                          < vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                         << 4U) 
                                                        | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                                             >= vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->top__DOT__branch_type)))))));
    vlSelf->top__DOT__jump_branch = Vtop__ConstPool__TABLE_hab390d39_0
        [vlSelf->__Vtableidx4];
    vlSelf->top__DOT__alu_func = (((((((((0x400U == 
                                          ((((((((((((((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))) 
                                                      | (IData)(vlSelf->top__DOT__jalr)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->inst))))))))))))) 
                                         | (0x200U 
                                            == ((((
                                                   ((((((((((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst)) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst))) 
                                                           | (IData)(vlSelf->top__DOT__jalr)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                          << 7U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                             << 6U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                << 5U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                      << 3U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                         << 2U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                            << 1U) 
                                                                           | (0x37U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->inst)))))))))))))) 
                                        | (0x100U == 
                                           ((((((((((((((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst))) 
                                                       | (IData)(vlSelf->top__DOT__jalr)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                << 9U) 
                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                   << 8U) 
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                      << 7U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                            << 5U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                               << 4U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                  << 3U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                        << 1U) 
                                                                       | (0x37U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->inst)))))))))))))) 
                                       | (0x80U == 
                                          ((((((((((((((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))) 
                                                      | (IData)(vlSelf->top__DOT__jalr)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->inst)))))))))))))) 
                                      | (0x40U == (
                                                   (((((((((((((0x17U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst)) 
                                                               | (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst))) 
                                                              | (IData)(vlSelf->top__DOT__jalr)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                       << 9U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                          << 8U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                             << 7U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                << 6U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                   << 5U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                      << 4U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                         << 3U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                            << 2U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                               << 1U) 
                                                                              | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))) 
                                     | (0x20U == ((
                                                   ((((((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->inst))) 
                                                             | (IData)(vlSelf->top__DOT__jalr)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))) 
                                    | (0x10U == (((
                                                   (((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))) 
                                                            | (IData)(vlSelf->top__DOT__jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->inst)))))))))))))) 
                                   | (8U == (((((((
                                                   (((((((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst)) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->inst))) 
                                                        | (IData)(vlSelf->top__DOT__jalr)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                 << 9U) 
                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                          << 6U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                             << 5U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                << 4U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                   << 3U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                      << 2U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                         << 1U) 
                                                                        | (0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->inst))))))))))))))
                                   ? ((0x400U == ((
                                                   ((((((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->inst)) 
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->inst))) 
                                                             | (IData)(vlSelf->top__DOT__jalr)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                       ? 0U : ((0x200U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))) 
                                                            | (IData)(vlSelf->top__DOT__jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                ? 8U
                                                : (
                                                   (0x100U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst))) 
                                                                | (IData)(vlSelf->top__DOT__jalr)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                    ? 1U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     ((((((((((((((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->inst)) 
                                                                  | (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->inst))) 
                                                                 | (IData)(vlSelf->top__DOT__jalr)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      ((((((((((((((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst)) 
                                                                   | (0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->inst))) 
                                                                  | (IData)(vlSelf->top__DOT__jalr)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                           << 9U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                              << 8U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                 << 7U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                       << 5U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                             << 3U) 
                                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                      ? 0xdU
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       ((((((((((((((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->inst)) 
                                                                    | (0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->inst))) 
                                                                   | (IData)(vlSelf->top__DOT__jalr)) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                       ? 2U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        ((((((((((((((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->inst)) 
                                                                     | (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->inst))) 
                                                                    | (IData)(vlSelf->top__DOT__jalr)) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                             << 9U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                                << 8U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                   << 7U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                      << 6U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                         << 5U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                            << 4U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                        ? 3U
                                                        : 4U)))))))
                                   : ((4U == ((((((
                                                   ((((((((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->inst)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->inst))) 
                                                         | (IData)(vlSelf->top__DOT__jalr)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                              << 5U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                    << 3U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                       << 2U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                          << 1U) 
                                                                         | (0x37U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->inst)))))))))))))
                                       ? 6U : ((2U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->inst)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->inst))) 
                                                            | (IData)(vlSelf->top__DOT__jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                ? 7U
                                                : (
                                                   (1U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->inst)) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->inst))) 
                                                                | (IData)(vlSelf->top__DOT__jalr)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                    ? 0xeU
                                                    : 0U))));
    vlSelf->top__DOT__IDU__DOT__is_r_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_add) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_and))))))))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu_func) == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__w_sel = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0)
                                ? 1U : (((IData)(vlSelf->top__DOT__IDU__DOT__is_addi) 
                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slti) 
                                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_xori) 
                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_ori) 
                                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__is_andi) 
                                                        | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slli) 
                                                           | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srli) 
                                                              | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srai) 
                                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__is_r_type) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_u_type)))))))))))
                                         ? 2U : ((IData)(vlSelf->top__DOT__mem_rd_en)
                                                  ? 3U
                                                  : 0U)));
    if (vlSelf->top__DOT__IDU__DOT__is_r_type) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__BSU__DOT__signed_rs2;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__BSU__DOT__signed_rs2;
    } else {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__imm_out;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__imm_out;
    }
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0 
        = (((IData)(vlSelf->top__DOT__jalr) | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                        | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                                           | ((IData)(vlSelf->top__DOT__IDU__DOT__is_addi) 
                                                              | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slti) 
                                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu) 
                                                                    | ((IData)(vlSelf->top__DOT__IDU__DOT__is_xori) 
                                                                       | ((IData)(vlSelf->top__DOT__IDU__DOT__is_ori) 
                                                                          | ((IData)(vlSelf->top__DOT__IDU__DOT__is_andi) 
                                                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slli) 
                                                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srli) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai))))))))))))))) 
           | (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__signed_b)));
    vlSelf->top__DOT__ALU__DOT__signed_a = (((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))
                                             ? vlSelf->top__DOT__BSU__DOT__signed_rs1
                                             : vlSelf->pc);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             - vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             & vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             | vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             ^ vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                              < vlSelf->top__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             << (0x1fU 
                                                 & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                           + vlSelf->top__DOT__ALU__DOT__signed_b)));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                         (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a - vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a & vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a | vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a >> 
           (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a ^ vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xcU] 
        = ((vlSelf->top__DOT__ALU__DOT__signed_a < vlSelf->top__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xdU] 
        = (VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xeU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a << 
           (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a + vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                       == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__alu_out = vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
    if (vlSelf->top__DOT__mem_rd_en) {
        Vtop___024root____Vdpiimwrap_top__DOT__MEM__DOT__pmem_read_TOP(vlSelf->top__DOT__alu_out, vlSelf->__Vfunc_top__DOT__MEM__DOT__pmem_read__5__Vfuncout);
        vlSelf->top__DOT__MEM__DOT__mem_out = vlSelf->__Vfunc_top__DOT__MEM__DOT__pmem_read__5__Vfuncout;
    }
}

VL_ATTR_COLD void Vtop___024root___eval_stl(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_stl\n"); );
    // Body
    if (vlSelf->__VstlTriggered.at(0U)) {
        Vtop___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VactTriggered.at(0U)) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VactTriggered.at(1U)) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(negedge clk)\n");
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(posedge clk)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->inst = VL_RAND_RESET_I(32);
    vlSelf->pc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_func = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__branch_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory_wr_ctrl = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem_rd_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__w_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__jump_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IDU__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_addi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_slti = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sltiu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_xori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_ori = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_andi = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_slli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_srli = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_srai = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_add = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sub = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sll = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_slt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_xor = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_srl = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_sra = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_or = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_and = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_u_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_b_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_r_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_s_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__Register__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__Register__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__Pc__DOT__pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__signed_a = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__signed_b = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(36);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0 = 0; __Vi0 < 16; ++__Vi0) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IMM__DOT__out5 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[__Vi0] = VL_RAND_RESET_Q(39);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[__Vi0] = VL_RAND_RESET_I(7);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__BSU__DOT__signed_rs1 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__BSU__DOT__signed_rs2 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__MEM__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_top__DOT__MEM__DOT__pmem_read__5__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__IFU__DOT__pmem_read__6__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
