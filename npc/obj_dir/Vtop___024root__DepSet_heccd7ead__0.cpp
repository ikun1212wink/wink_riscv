// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

void Vtop___024root____Vdpiimwrap_top__DOT__trace_func_ret_TOP(IData/*31:0*/ pc);
void Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP(IData/*31:0*/ pc, IData/*31:0*/ alu_out, CData/*0:0*/ tail);
void Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h657a9346_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h074114c1_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hfe40056e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hab390d39_0;
void Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__GPR__DOT__rf__v0;
    __Vdlyvval__top__DOT__GPR__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdly__pc;
    __Vdly__pc = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mepc;
    __Vdly__top__DOT__CSR__DOT__csr_mepc = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mstatus;
    __Vdly__top__DOT__CSR__DOT__csr_mstatus = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mcause;
    __Vdly__top__DOT__CSR__DOT__csr_mcause = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mtvec;
    __Vdly__top__DOT__CSR__DOT__csr_mtvec = 0;
    // Body
    __Vdly__pc = vlSelf->pc;
    if (vlSelf->top__DOT__IDU__DOT__is_jalr) {
        if ((0x8067U == vlSelf->inst)) {
            Vtop___024root____Vdpiimwrap_top__DOT__trace_func_ret_TOP(vlSelf->pc);
        } else if ((1U == (0x1fU & (vlSelf->inst >> 7U)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP(vlSelf->pc, 
                                                                       ((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                                                                         ? vlSelf->top__DOT__alu_out
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                                                          ? vlSelf->top__DOT__r_csr_data
                                                                          : 0U)), 0U);
        } else if ((IData)(((0U == (0xf80U & vlSelf->inst)) 
                            & (0U == vlSelf->top__DOT__imm_out)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP(vlSelf->pc, 
                                                                       ((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                                                                         ? vlSelf->top__DOT__alu_out
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                                                          ? vlSelf->top__DOT__r_csr_data
                                                                          : 0U)), 1U);
        }
    }
    if ((0x6fU == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) {
        if ((1U == (0x1fU & (vlSelf->inst >> 7U)))) {
            Vtop___024root____Vdpiimwrap_top__DOT__trace_func_call_TOP(vlSelf->pc, 
                                                                       ((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                                                                         ? vlSelf->top__DOT__alu_out
                                                                         : 
                                                                        ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                                                          ? vlSelf->top__DOT__r_csr_data
                                                                          : 0U)), 0U);
        }
    }
    __Vdly__top__DOT__CSR__DOT__csr_mcause = vlSelf->top__DOT__CSR__DOT__csr_mcause;
    __Vdly__top__DOT__CSR__DOT__csr_mstatus = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
    __Vdly__top__DOT__CSR__DOT__csr_mtvec = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
    __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->top__DOT__CSR__DOT__csr_mepc;
    __Vdly__pc = ((IData)(vlSelf->rst) ? 0x80000000U
                   : (((IData)(vlSelf->top__DOT__finish_1) 
                       | (IData)(vlSelf->top__DOT__finish_2))
                       ? (((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                           | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))
                           ? ((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                               ? vlSelf->top__DOT__alu_out
                               : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                   ? vlSelf->top__DOT__r_csr_data
                                   : 0U)) : ((IData)(4U) 
                                             + vlSelf->pc))
                       : vlSelf->pc));
    vlSelf->top__DOT__IFU__DOT__rd_sram_en = ((IData)(vlSelf->rst) 
                                              | ((~ (IData)(vlSelf->top__DOT__IFU__DOT__rd_sram_en)) 
                                                 & (((IData)(vlSelf->top__DOT__finish_1) 
                                                     | (IData)(vlSelf->top__DOT__finish_2)) 
                                                    | (IData)(vlSelf->top__DOT__IFU__DOT__rd_sram_en))));
    if (vlSelf->top__DOT__w_csr_en) {
        if ((0x300U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x14U))) {
            if ((0x305U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                            >> 0x14U))) {
                if ((0x341U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mcause 
                        = ((0x342U == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                       >> 0x14U)) ? 0xbU
                            : vlSelf->top__DOT__CSR__DOT__csr_mcause);
                }
                if ((0x341U == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mepc 
                        = vlSelf->top__DOT__alu_out;
                } else if ((0x342U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                       >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mepc 
                        = vlSelf->top__DOT__CSR__DOT__csr_mepc;
                }
            }
            if ((0x305U == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                            >> 0x14U))) {
                __Vdly__top__DOT__CSR__DOT__csr_mtvec 
                    = vlSelf->top__DOT__alu_out;
            } else if ((0x341U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                   >> 0x14U))) {
                if ((0x342U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mtvec 
                        = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
                }
            }
        }
        if ((0x300U == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x14U))) {
            __Vdly__top__DOT__CSR__DOT__csr_mstatus = 0x1800U;
        } else if ((0x305U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                               >> 0x14U))) {
            if ((0x341U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                            >> 0x14U))) {
                if ((0x342U != (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mstatus 
                        = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
                }
            }
        }
    } else {
        if (vlSelf->top__DOT__IDU__DOT__is_ecall) {
            __Vdly__top__DOT__CSR__DOT__csr_mcause = 0xbU;
            __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->pc;
        } else {
            __Vdly__top__DOT__CSR__DOT__csr_mcause 
                = vlSelf->top__DOT__CSR__DOT__csr_mcause;
            __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->top__DOT__CSR__DOT__csr_mepc;
        }
        if ((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__is_ecall)))) {
            __Vdly__top__DOT__CSR__DOT__csr_mstatus 
                = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
            __Vdly__top__DOT__CSR__DOT__csr_mtvec = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
        }
    }
    __Vdlyvval__top__DOT__GPR__DOT__rf__v0 = ((((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                                                | ((0x6fU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h6219f43f__0))) 
                                               & (0U 
                                                  != 
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                      >> 7U))))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top__DOT__w_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__w_sel))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                                       : 
                                                      (0xffffU 
                                                       & vlSelf->top__DOT__LSU__DOT__mem_move_out)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                       : 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                       : 0U)))
                                                    : vlSelf->top__DOT__alu_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__w_sel))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : vlSelf->top__DOT__r_csr_data))
                                               : vlSelf->top__DOT__GPR__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                   >> 7U))]);
    __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0 = (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                  >> 7U));
    vlSelf->top__DOT__LSU__DOT__mem_out = vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__rdata_temp;
    vlSelf->top__DOT__CSR__DOT__csr_mcause = __Vdly__top__DOT__CSR__DOT__csr_mcause;
    vlSelf->top__DOT__CSR__DOT__csr_mstatus = __Vdly__top__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT__CSR__DOT__csr_mtvec = __Vdly__top__DOT__CSR__DOT__csr_mtvec;
    vlSelf->top__DOT__CSR__DOT__csr_mepc = __Vdly__top__DOT__CSR__DOT__csr_mepc;
    vlSelf->pc = __Vdly__pc;
    vlSelf->top__DOT__GPR__DOT__rf[__Vdlyvdim0__top__DOT__GPR__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__GPR__DOT__rf__v0;
    if (((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type) 
         & (IData)(vlSelf->top__DOT__LSU__DOT__signal))) {
        vlSelf->top__DOT__finish_2 = 1U;
        vlSelf->top__DOT__LSU__DOT__signal = 0U;
    } else {
        vlSelf->top__DOT__finish_2 = 0U;
        vlSelf->top__DOT__LSU__DOT__signal = 1U;
    }
    vlSelf->top__DOT__IFU__DOT__rd_sram_data = vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp;
    if (vlSelf->top__DOT__IFU__DOT__rd_sram_en) {
        Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top__DOT__IFU__DOT__SRAM_IFU__DOT__pmem_read__7__Vfuncout);
        vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp 
            = vlSelf->__Vfunc_top__DOT__IFU__DOT__SRAM_IFU__DOT__pmem_read__7__Vfuncout;
    }
    if (vlSelf->top__DOT__IFU__DOT__rd_sram_en) {
        vlSelf->top__DOT__IDU__DOT__sys_funct = 0U;
        vlSelf->top__DOT__IDU__DOT__funct7 = 0U;
        vlSelf->top__DOT__IDU__DOT__funct3 = 0U;
        vlSelf->top__DOT__IDU__DOT__opcode = 0U;
    } else {
        vlSelf->top__DOT__IDU__DOT__sys_funct = (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                 >> 7U);
        vlSelf->top__DOT__IDU__DOT__funct7 = (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                              >> 0x19U);
        vlSelf->top__DOT__IDU__DOT__funct3 = (7U & 
                                              (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                               >> 0xcU));
        vlSelf->top__DOT__IDU__DOT__opcode = (0x7fU 
                                              & vlSelf->top__DOT__IFU__DOT__rd_sram_data);
    }
    vlSelf->inst = vlSelf->top__DOT__IFU__DOT__rd_sram_data;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                       >> 7U)))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                          >> 0x14U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                          >> 7U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->top__DOT__IFU__DOT__rd_sram_data))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->top__DOT__IFU__DOT__rd_sram_data))));
    vlSelf->top__DOT__IMM__DOT__out5 = (((- (IData)(
                                                    (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                         >> 0x14U));
    vlSelf->top__DOT__BSU__DOT__signed_rs1 = vlSelf->top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                   >> 0xfU))];
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                      >> 7U))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                         >> 7U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->top__DOT__IFU__DOT__rd_sram_data);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->top__DOT__IFU__DOT__rd_sram_data);
    vlSelf->top__DOT__BSU__DOT__signed_rs2 = vlSelf->top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                   >> 0x14U))];
    if ((0x6fU == vlSelf->inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                       == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
           == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__imm_out = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf7fcb69d__0 
        = ((1U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
           & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__IDU__DOT__is_u_type = ((0x37U 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                             | (0x17U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)));
    vlSelf->top__DOT__IDU__DOT__is_beq = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_bne = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (1U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_blt = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (4U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_bge = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (5U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_bltu = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (6U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_bgeu = ((0x63U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (7U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_ecall = ((0x73U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                            & (0U == vlSelf->top__DOT__IDU__DOT__sys_funct));
    vlSelf->top__DOT__IDU__DOT__is_mret = ((0x73U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (0x604000U 
                                              == vlSelf->top__DOT__IDU__DOT__sys_funct));
    vlSelf->top__DOT__IDU__DOT__is_sb = ((0x23U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_sh = ((0x23U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (1U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_sw = ((0x23U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (2U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_addi = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_slti = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (2U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_sltiu = ((0x13U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                            & (3U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_xori = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (4U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_ori = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (6U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_andi = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (7U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_jalr = ((0x67U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_lb = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_lh = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (1U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_lw = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & (2U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_lbu = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (4U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_lhu = ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (5U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_slt = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & ((2U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
                                             & (0U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT__funct7))));
    vlSelf->top__DOT__IDU__DOT__is_sltu = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & ((3U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
                                              & (0U 
                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__funct7))));
    vlSelf->top__DOT__IDU__DOT__is_xor = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & ((4U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
                                             & (0U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT__funct7))));
    vlSelf->top__DOT__IDU__DOT__is_or = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                         & ((6U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
                                            & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct7))));
    vlSelf->top__DOT__IDU__DOT__is_and = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & ((7U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)) 
                                             & (0U 
                                                == (IData)(vlSelf->top__DOT__IDU__DOT__funct7))));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hbcaeef59__0 
        = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
           & (5U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_csrrw = ((0x73U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                            & (1U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_csrrs = ((0x73U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                            & (2U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h3639357b__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
           & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_heb385c97__0 
        = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
           & (5U == (IData)(vlSelf->top__DOT__IDU__DOT__funct3)));
    vlSelf->top__DOT__IDU__DOT__is_slli = ((0x13U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                           & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf7fcb69d__0));
    vlSelf->top__DOT__IDU__DOT__is_sll = ((0x33U == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf7fcb69d__0));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_bgeu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_beq))))));
    vlSelf->top__DOT__branch_type = Vtop__ConstPool__TABLE_h657a9346_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__IDU__DOT__is_b_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_beq) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_bgeu))))));
    vlSelf->top__DOT____VdfgTmp_h445074e7__0 = ((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_mret));
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_sw) 
                             << 2U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                        << 1U) | (IData)(vlSelf->top__DOT__IDU__DOT__is_sb)));
    vlSelf->top__DOT__memory_wr_ctrl = Vtop__ConstPool__TABLE_h074114c1_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__IDU__DOT__is_s_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_sb) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_sw)));
    vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
           | (0x6fU == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                             << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                        << 3U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)))));
    vlSelf->top__DOT__memory_rd_ctrl = Vtop__ConstPool__TABLE_hfe40056e_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__IDU__DOT__is_load_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)))));
    vlSelf->top__DOT__IDU__DOT__is_srli = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hbcaeef59__0) 
                                           & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__IDU__DOT__is_srai = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hbcaeef59__0) 
                                           & (0x20U 
                                              == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__w_csr_en = ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs) 
                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw));
    vlSelf->top__DOT__IDU__DOT__is_add = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h3639357b__0) 
                                          & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__IDU__DOT__is_sub = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h3639357b__0) 
                                          & (0x20U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__IDU__DOT__is_srl = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_heb385c97__0) 
                                          & (0U == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
    vlSelf->top__DOT__IDU__DOT__is_sra = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_heb385c97__0) 
                                          & (0x20U 
                                             == (IData)(vlSelf->top__DOT__IDU__DOT__funct7)));
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
    vlSelf->top__DOT__finish_1 = (1U & ((~ (IData)(vlSelf->top__DOT__IDU__DOT__is_load_type)) 
                                        & (~ (IData)(vlSelf->top__DOT__IFU__DOT__rd_sram_en))));
    vlSelf->top__DOT__r_csr_data = (((0x300U == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                 >> 0x14U)) 
                                     & (IData)(vlSelf->top__DOT__w_csr_en))
                                     ? vlSelf->top__DOT__CSR__DOT__csr_mstatus
                                     : (((0x305U == 
                                          (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                           >> 0x14U)) 
                                         & (IData)(vlSelf->top__DOT__w_csr_en))
                                         ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                         : (((0x341U 
                                              == (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                  >> 0x14U)) 
                                             & (IData)(vlSelf->top__DOT__w_csr_en))
                                             ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                             : (((0x342U 
                                                  == 
                                                  (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                   >> 0x14U)) 
                                                 & (IData)(vlSelf->top__DOT__w_csr_en))
                                                 ? vlSelf->top__DOT__CSR__DOT__csr_mcause
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall)
                                                  ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__IDU__DOT__is_mret)
                                                   ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                                   : 0U))))));
    vlSelf->top__DOT__alu_func = (((((((((0x400U == 
                                          ((((((((((((((0x17U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                       | (0x6fU 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))))))))))))) 
                                         | (0x200U 
                                            == ((((
                                                   ((((((((((0x17U 
                                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                            | (0x6fU 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                     | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                         << 2U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                            << 1U) 
                                                                           | (0x37U 
                                                                              == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                        | (0x100U == 
                                           ((((((((((((((0x17U 
                                                         == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                        | (0x6fU 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                 | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                        << 1U) 
                                                                       | (0x37U 
                                                                          == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                       | (0x80U == 
                                          ((((((((((((((0x17U 
                                                        == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                       | (0x6fU 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                      | (0x40U == (
                                                   (((((((((((((0x17U 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                               | (0x6fU 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                        | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                            << 2U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                               << 1U) 
                                                                              | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                     | (0x20U == ((
                                                   ((((((((((((0x17U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                              | (0x6fU 
                                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                       | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                    | (0x10U == (((
                                                   (((((((((((0x17U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                             | (0x6fU 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))) 
                                   | (8U == (((((((
                                                   (((((((0x17U 
                                                          == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                         | (0x6fU 
                                                            == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                  | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                      << 2U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                         << 1U) 
                                                                        | (0x37U 
                                                                           == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))))))))))))))
                                   ? ((0x400U == ((
                                                   ((((((((((((0x17U 
                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                              | (0x6fU 
                                                                 == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                       | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                       ? 0U : ((0x200U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                             | (0x6fU 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                ? 8U
                                                : (
                                                   (0x100U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                 | (0x6fU 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                          | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                    ? 1U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     ((((((((((((((0x17U 
                                                                   == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                  | (0x6fU 
                                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                           | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      ((((((((((((((0x17U 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                   | (0x6fU 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                            | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                      ? 0xdU
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       ((((((((((((((0x17U 
                                                                     == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                    | (0x6fU 
                                                                       == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                             | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                       ? 2U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        ((((((((((((((0x17U 
                                                                      == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                     | (0x6fU 
                                                                        == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                              | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                        ? 3U
                                                        : 4U)))))))
                                   : ((4U == ((((((
                                                   ((((((((0x17U 
                                                           == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                          | (0x6fU 
                                                             == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                   | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                       << 2U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                          << 1U) 
                                                                         | (0x37U 
                                                                            == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                       ? 6U : ((2U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                             | (0x6fU 
                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
                                                ? 7U
                                                : (
                                                   (1U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                                 | (0x6fU 
                                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__opcode))) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
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
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
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
                                                                          | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)))))))))))))
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
    vlSelf->top__DOT____VdfgTmp_h241ef1d5__0 = ((IData)(vlSelf->top__DOT__jump_branch) 
                                                | ((0x6fU 
                                                    == (IData)(vlSelf->top__DOT__IDU__DOT__opcode)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0)));
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
    vlSelf->top__DOT__w_sel = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0)
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
                                         ? 2U : ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type)
                                                  ? 3U
                                                  : 0U)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h6219f43f__0 
        = (((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
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
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srai) 
                                                      | (IData)(vlSelf->top__DOT__w_csr_en)))))))))))))))) 
           | (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type));
    vlSelf->top__DOT__alu_b_sel = ((IData)(vlSelf->top__DOT__IDU__DOT__is_r_type)
                                    ? 0U : ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)
                                             ? 1U : 
                                            ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)
                                              ? 2U : 3U)));
    vlSelf->top__DOT__ALU__DOT__signed_a = (((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h6219f43f__0))
                                             ? vlSelf->top__DOT__BSU__DOT__signed_rs1
                                             : vlSelf->pc);
    if ((0U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__BSU__DOT__signed_rs2;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__BSU__DOT__signed_rs2;
    } else if ((1U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__r_csr_data;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__r_csr_data;
    } else if ((2U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__ALU__DOT__signed_b = 0U;
    } else if ((3U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__imm_out;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__imm_out;
    } else {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__ALU__DOT__signed_b = 0U;
    }
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__signed_b)));
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
    vlSelf->top__DOT__LSU__DOT__mem_move_out = ((2U 
                                                 & vlSelf->top__DOT__alu_out)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__alu_out)
                                                  ? 
                                                 (vlSelf->top__DOT__LSU__DOT__mem_out 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSelf->top__DOT__LSU__DOT__mem_out 
                                                  >> 0x10U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->top__DOT__alu_out)
                                                  ? 
                                                 (vlSelf->top__DOT__LSU__DOT__mem_out 
                                                  >> 8U)
                                                  : vlSelf->top__DOT__LSU__DOT__mem_out));
    if (vlSelf->top__DOT__IDU__DOT__is_s_type) {
        Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_write_TOP(vlSelf->top__DOT__alu_out, vlSelf->top__DOT__BSU__DOT__signed_rs2, (IData)(vlSelf->top__DOT__memory_wr_ctrl));
    }
    vlSelf->top__DOT__LSU__DOT__rd_sram_addr = vlSelf->top__DOT__alu_out;
    if (((IData)(vlSelf->top__DOT__LSU__DOT__signal) 
         & (IData)(vlSelf->top__DOT__IDU__DOT__is_load_type))) {
        Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(vlSelf->top__DOT__LSU__DOT__rd_sram_addr, vlSelf->__Vfunc_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read__5__Vfuncout);
        vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__rdata_temp 
            = vlSelf->__Vfunc_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read__5__Vfuncout;
    }
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
