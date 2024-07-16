// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNPC.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VNPC___024root.h"

void VNPC___024root____Vdpiimwrap_NPC__DOT__IDU__DOT__npc_trap_TOP();

VL_INLINE_OPT void VNPC___024root___ico_sequent__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___ico_sequent__TOP__0\n"); );
    // Body
    if ((0x6fU == vlSelf->inst)) {
        VNPC___024root____Vdpiimwrap_NPC__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
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
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
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
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
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
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->inst))));
    vlSelf->NPC__DOT__IDU__DOT__is_u_type = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->inst)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->inst)));
    vlSelf->NPC__DOT__IMM__DOT__out5 = (((- (IData)(
                                                    (vlSelf->inst 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->inst 
                                         >> 0x14U));
    vlSelf->NPC__DOT__IDU__DOT__is_b_type = ((IData)(
                                                     (0x63U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                             | ((IData)(
                                                        (0x1063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                | ((IData)(
                                                           (0x4063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->inst))) 
                                                   | ((IData)(
                                                              (0x5063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->inst))) 
                                                      | ((IData)(
                                                                 (0x6063U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->inst))) 
                                                         | (IData)(
                                                                   (0x7063U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->inst))))))));
    vlSelf->NPC__DOT__rs2_data = vlSelf->NPC__DOT__Register__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->NPC__DOT__IDU__DOT__is_s_type = ((IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->inst))) 
                                             | ((IData)(
                                                        (0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->inst))) 
                                                | (IData)(
                                                          (0x2023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->inst)))));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0xfe0U & (vlSelf->inst >> 0x14U)) | 
              (0x1fU & (vlSelf->inst >> 7U))));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | (vlSelf->inst >> 0x14U));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0x14U) 
           | ((0xff000U & vlSelf->inst) | ((0x800U 
                                            & (vlSelf->inst 
                                               >> 9U)) 
                                           | (0x7feU 
                                              & (vlSelf->inst 
                                                 >> 0x14U)))));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->inst >> 0x1fU))) << 0xcU) 
           | ((0x800U & (vlSelf->inst << 4U)) | ((0x7e0U 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)) 
                                                 | (0x1eU 
                                                    & (vlSelf->inst 
                                                       >> 7U)))));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->inst);
    vlSelf->NPC__DOT__IDU__DOT__is_lb = (IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_lh = (IData)((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_lw = (IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_lbu = (IData)((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_lhu = (IData)((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_addi = (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_slti = (IData)((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_sltiu = (IData)(
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_xori = (IData)((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_ori = (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_andi = (IData)((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_jalr = (IData)((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_slt = (IData)((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_sltu = (IData)((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_xor = (IData)((0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_or = (IData)((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_and = (IData)((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->inst)));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->NPC__DOT__IMM__DOT__out5)));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->NPC__DOT__IMM__DOT__out5)));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->NPC__DOT__IMM__DOT__out5)));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->inst) == 
                          vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->inst) == vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->NPC__DOT__imm_out = ((IData)(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit)
                                  ? vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->NPC__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0 
        = ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr) 
           | (0x6fU == (0x7fU & vlSelf->inst)));
    vlSelf->NPC__DOT__IDU__DOT__is_srli = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0U == 
                                              (vlSelf->inst 
                                               >> 0x19U)));
    vlSelf->NPC__DOT__IDU__DOT__is_srai = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0x20U 
                                              == (vlSelf->inst 
                                                  >> 0x19U)));
    vlSelf->NPC__DOT__IDU__DOT__is_slli = ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->inst)) 
                                           & (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->NPC__DOT__IDU__DOT__is_sll = ((0x33U == 
                                           (0x7fU & vlSelf->inst)) 
                                          & (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->NPC__DOT__IDU__DOT__is_add = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->NPC__DOT__IDU__DOT__is_sub = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)));
    vlSelf->NPC__DOT__IDU__DOT__is_srl = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0U == 
                                             (vlSelf->inst 
                                              >> 0x19U)));
    vlSelf->NPC__DOT__IDU__DOT__is_sra = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0x20U 
                                             == (vlSelf->inst 
                                                 >> 0x19U)));
    vlSelf->NPC__DOT__alu_func = (((((((((0x400U == 
                                          ((((((((((((((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->inst)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->inst))) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                 << 0xaU) 
                                                | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                          << 7U) 
                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                             << 6U) 
                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                << 5U) 
                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                      << 3U) 
                                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                         << 2U) 
                                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                             << 0xaU) 
                                            | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                << 9U) 
                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                   << 8U) 
                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                      << 7U) 
                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                            << 5U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                               << 4U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                  << 3U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                    << 0xaU) 
                                                   | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                       << 9U) 
                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                          << 8U) 
                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                             << 7U) 
                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                << 6U) 
                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                   << 5U) 
                                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                      << 4U) 
                                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                         << 3U) 
                                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                            << 2U) 
                                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                 << 9U) 
                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                          << 6U) 
                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                             << 5U) 
                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                << 4U) 
                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                   << 3U) 
                                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                      << 2U) 
                                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                       << 0xaU) 
                                                      | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                            << 3U) 
                                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                        << 0xaU) 
                                                       | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                           << 9U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                              << 8U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                                 << 7U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                       << 5U) 
                                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                             << 3U) 
                                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                              << 3U) 
                                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                          << 0xaU) 
                                                         | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                             << 9U) 
                                                            | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                                << 8U) 
                                                               | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                                   << 7U) 
                                                                  | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                      << 6U) 
                                                                     | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                         << 5U) 
                                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                            << 4U) 
                                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                               << 3U) 
                                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                 | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                               << 0xaU) 
                                              | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                              << 5U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                    << 3U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                       << 2U) 
                                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
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
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr)) 
                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                               | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->NPC__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->inst)))))))))))))
                                                    ? 0xeU
                                                    : 0U))));
    vlSelf->NPC__DOT__IDU__DOT__is_r_type = ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_add) 
                                             | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sub) 
                                                | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sll) 
                                                   | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slt) 
                                                      | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltu) 
                                                         | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xor) 
                                                            | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srl) 
                                                               | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sra) 
                                                                  | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_and))))))))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__alu_func) == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->NPC__DOT__alu_func) == 
              vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->NPC__DOT__w_sel = ((IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0)
                                ? 1U : (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi) 
                                         | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti) 
                                            | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu) 
                                               | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori) 
                                                  | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori) 
                                                     | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi) 
                                                        | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli) 
                                                           | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli) 
                                                              | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai) 
                                                                 | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_r_type) 
                                                                    | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_u_type)))))))))))
                                         ? 2U : (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb) 
                                                  | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh) 
                                                     | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw) 
                                                        | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu)))))
                                                  ? 3U
                                                  : 0U)));
    if (vlSelf->NPC__DOT__IDU__DOT__is_r_type) {
        vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->NPC__DOT__rs2_data;
        vlSelf->NPC__DOT__ALU__DOT__signed_b = vlSelf->NPC__DOT__rs2_data;
    } else {
        vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->NPC__DOT__imm_out;
        vlSelf->NPC__DOT__ALU__DOT__signed_b = vlSelf->NPC__DOT__imm_out;
    }
    vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0 
        = (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr) 
            | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb) 
               | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh) 
                  | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw) 
                     | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu) 
                        | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu) 
                           | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi) 
                              | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slti) 
                                 | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_sltiu) 
                                    | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_xori) 
                                       | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_ori) 
                                          | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_andi) 
                                             | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_slli) 
                                                | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_srli) 
                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai))))))))))))))) 
           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_r_type));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->NPC__DOT__ALU__DOT__signed_b)));
    vlSelf->NPC__DOT__ALU__DOT__signed_a = (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type) 
                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))
                                             ? vlSelf->NPC__DOT__Register__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))]
                                             : vlSelf->pc);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                                                           (0x1fU 
                                                            & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             - vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             | vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             ^ vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                              < vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             << (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                           + vlSelf->NPC__DOT__ALU__DOT__signed_b)));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                         (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a - vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a | vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a >> 
           (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a ^ vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xcU] 
        = ((vlSelf->NPC__DOT__ALU__DOT__signed_a < vlSelf->NPC__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xdU] 
        = (VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xeU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a << 
           (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a + vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                       == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->NPC__DOT__alu_out = vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
}

void VNPC___024root___eval_ico(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_ico\n"); );
    // Body
    if (vlSelf->__VicoTriggered.at(0U)) {
        VNPC___024root___ico_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void VNPC___024root___eval_act(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_act\n"); );
}

VL_INLINE_OPT void VNPC___024root___nba_sequent__TOP__0(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__NPC__DOT__Register__DOT__rf__v0;
    __Vdlyvdim0__NPC__DOT__Register__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__NPC__DOT__Register__DOT__rf__v0;
    __Vdlyvval__NPC__DOT__Register__DOT__rf__v0 = 0;
    // Body
    __Vdlyvval__NPC__DOT__Register__DOT__rf__v0 = (
                                                   (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_u_type) 
                                                     | ((0x6fU 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->inst)) 
                                                        | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))) 
                                                    & (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (vlSelf->inst 
                                                           >> 7U))))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->NPC__DOT__w_sel))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->NPC__DOT__w_sel))
                                                      ? 0U
                                                      : vlSelf->NPC__DOT__alu_out)
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->NPC__DOT__w_sel))
                                                      ? 
                                                     ((IData)(4U) 
                                                      + vlSelf->pc)
                                                      : 0U))
                                                    : 
                                                   vlSelf->NPC__DOT__Register__DOT__rf
                                                   [
                                                   (0x1fU 
                                                    & (vlSelf->inst 
                                                       >> 7U))]);
    __Vdlyvdim0__NPC__DOT__Register__DOT__rf__v0 = 
        (0x1fU & (vlSelf->inst >> 7U));
    vlSelf->NPC__DOT__Register__DOT__rf[__Vdlyvdim0__NPC__DOT__Register__DOT__rf__v0] 
        = __Vdlyvval__NPC__DOT__Register__DOT__rf__v0;
    vlSelf->NPC__DOT__rs2_data = vlSelf->NPC__DOT__Register__DOT__rf
        [(0x1fU & (vlSelf->inst >> 0x14U))];
    vlSelf->pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : (((0x6fU == (0x7fU & vlSelf->inst)) 
                       | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))
                       ? vlSelf->NPC__DOT__alu_out : vlSelf->NPC__DOT__Pc__DOT__pc_plus4));
    vlSelf->NPC__DOT__Pc__DOT__pc_plus4 = ((IData)(4U) 
                                           + vlSelf->pc);
}

VL_INLINE_OPT void VNPC___024root___nba_sequent__TOP__1(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___nba_sequent__TOP__1\n"); );
    // Body
    if (vlSelf->NPC__DOT__IDU__DOT__is_r_type) {
        vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->NPC__DOT__rs2_data;
        vlSelf->NPC__DOT__ALU__DOT__signed_b = vlSelf->NPC__DOT__rs2_data;
    } else {
        vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->NPC__DOT__imm_out;
        vlSelf->NPC__DOT__ALU__DOT__signed_b = vlSelf->NPC__DOT__imm_out;
    }
    vlSelf->NPC__DOT__ALU__DOT__signed_a = (((IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type) 
                                             | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))
                                             ? vlSelf->NPC__DOT__Register__DOT__rf
                                            [(0x1fU 
                                              & (vlSelf->inst 
                                                 >> 0xfU))]
                                             : vlSelf->pc);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->NPC__DOT__ALU__DOT__signed_b)));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                                                           (0x1fU 
                                                            & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             - vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             | vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             ^ vlSelf->NPC__DOT__ALU__DOT__signed_b))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                              < vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             << (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)))));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                           + vlSelf->NPC__DOT__ALU__DOT__signed_b)));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                         (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a - vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a | vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a >> 
           (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a ^ vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xcU] 
        = ((vlSelf->NPC__DOT__ALU__DOT__signed_a < vlSelf->NPC__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xdU] 
        = (VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xeU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a << 
           (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->NPC__DOT__ALU__DOT__signed_a + vlSelf->NPC__DOT__ALU__DOT__signed_b);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                       == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->NPC__DOT__alu_func) 
                          == vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->NPC__DOT__alu_out = vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
}

void VNPC___024root___eval_nba(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VNPC___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
        VNPC___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void VNPC___024root___eval_triggers__ico(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__ico(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
void VNPC___024root___eval_triggers__act(VNPC___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__act(VNPC___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VNPC___024root___dump_triggers__nba(VNPC___024root* vlSelf);
#endif  // VL_DEBUG

void VNPC___024root___eval(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval\n"); );
    // Init
    CData/*0:0*/ __VicoContinue;
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    vlSelf->__VicoIterCount = 0U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        __VicoContinue = 0U;
        VNPC___024root___eval_triggers__ico(vlSelf);
        if (vlSelf->__VicoTriggered.any()) {
            __VicoContinue = 1U;
            if (VL_UNLIKELY((0x64U < vlSelf->__VicoIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__ico(vlSelf);
#endif
                VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/NPC.v", 1, "", "Input combinational region did not converge.");
            }
            vlSelf->__VicoIterCount = ((IData)(1U) 
                                       + vlSelf->__VicoIterCount);
            VNPC___024root___eval_ico(vlSelf);
        }
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VNPC___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VNPC___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/NPC.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VNPC___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VNPC___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/NPC.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VNPC___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VNPC___024root___eval_debug_assertions(VNPC___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
