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
    vlSelf->top__DOT__GPR__DOT__rf[0U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[1U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[2U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[3U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[4U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[5U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[6U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[7U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[8U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[9U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xaU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xbU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xcU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xdU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xeU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0xfU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x10U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x11U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x12U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x13U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x14U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x15U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x16U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x17U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x18U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x19U] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1aU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1bU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1cU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1dU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1eU] = 0U;
    vlSelf->top__DOT__GPR__DOT__rf[0x1fU] = 0U;
    vlSelf->top__DOT__GPR__DOT__i = 0x20U;
    vlSelf->top__DOT__LSU__DOT__rd_sram_en = 0U;
    vlSelf->pc = 0x80000000U;
    vlSelf->top__DOT__CSR__DOT__csr_mstatus = 0x1800U;
    vlSelf->top__DOT__CSR__DOT__csr_mcause = 0xbU;
    vlSelf->top__DOT__CSR__DOT__csr_mepc = 0U;
    vlSelf->top__DOT__CSR__DOT__csr_mtvec = 0U;
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

void Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h657a9346_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h074114c1_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hfe40056e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hab390d39_0;
void Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_ATTR_COLD void Vtop___024root___stl_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___stl_sequent__TOP__0\n"); );
    // Body
    vlSelf->inst = vlSelf->top__DOT__IFU__DOT__rd_sram_data;
    Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(vlSelf->pc, vlSelf->__Vfunc_top__DOT__IFU__DOT__SRAM_IFU__DOT__pmem_read__3__Vfuncout);
    if (vlSelf->top__DOT__IFU__DOT__rd_sram_en) {
        vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp 
            = vlSelf->__Vfunc_top__DOT__IFU__DOT__SRAM_IFU__DOT__pmem_read__3__Vfuncout;
        vlSelf->top__DOT__IDU__DOT__sys_funct = 0U;
        vlSelf->top__DOT__IDU__DOT__funct7 = 0U;
        vlSelf->top__DOT__IDU__DOT__funct3 = 0U;
        vlSelf->top__DOT__IDU__DOT__opcode = 0U;
    } else {
        vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp = 0U;
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
    vlSelf->top__DOT__LSU__DOT__rd_sram_en = vlSelf->top__DOT__IDU__DOT__is_load_type;
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
    if (vlSelf->top__DOT__LSU__DOT__rd_sram_en) {
        Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_write_TOP(vlSelf->top__DOT__alu_out, vlSelf->top__DOT__BSU__DOT__signed_rs2, (IData)(vlSelf->top__DOT__memory_wr_ctrl));
    }
    Vtop___024root____Vdpiimwrap_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read_TOP(vlSelf->top__DOT__alu_out, vlSelf->__Vfunc_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read__1__Vfuncout);
    vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__rdata_temp 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type)
            ? vlSelf->__Vfunc_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read__1__Vfuncout
            : 0U);
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
    vlSelf->top__DOT__mem_rd_data = ((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                      ? ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                          ? 0U : ((1U 
                                                   & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                   ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                                   : 
                                                  (0xffffU 
                                                   & vlSelf->top__DOT__LSU__DOT__mem_move_out)))
                                      : ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                          ? ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                 >> 0xfU)))) 
                                                  << 0x10U) 
                                                 | (0xffffU 
                                                    & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                              : (0xffU 
                                                 & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                          : ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                              ? (((- (IData)(
                                                             (1U 
                                                              & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | (0xffU 
                                                    & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                              : 0U)));
    vlSelf->top__DOT__finish_2 = ((0U != vlSelf->top__DOT__mem_rd_data) 
                                  & (IData)(vlSelf->top__DOT__IDU__DOT__is_load_type));
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
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk)\n");
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
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk)\n");
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
    vlSelf->top__DOT__w_csr_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__alu_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__alu_b_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__alu_func = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__branch_type = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory_rd_ctrl = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__memory_wr_ctrl = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__mem_rd_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__r_csr_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__w_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__jump_branch = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__imm_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__finish_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__finish_2 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT____VdfgTmp_h241ef1d5__0 = 0;
    vlSelf->top__DOT____VdfgTmp_h445074e7__0 = 0;
    vlSelf->top__DOT__IDU__DOT__opcode = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__IDU__DOT__funct7 = VL_RAND_RESET_I(7);
    vlSelf->top__DOT__IDU__DOT__sys_funct = VL_RAND_RESET_I(25);
    vlSelf->top__DOT__IDU__DOT__is_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_beq = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bne = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_blt = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bge = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bltu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_bgeu = VL_RAND_RESET_I(1);
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
    vlSelf->top__DOT__IDU__DOT__is_csrrs = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_csrrw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_ecall = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_mret = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_u_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_b_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_r_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_s_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT__is_load_type = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h6219f43f__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hf7fcb69d__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hbcaeef59__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h3639357b__0 = 0;
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_heb385c97__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->top__DOT__GPR__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__GPR__DOT__i = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__LSU__DOT__mem_move_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__mem_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__LSU__DOT__rd_sram_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__rdata_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__rd_sram_data = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__IFU__DOT__rd_sram_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CSR__DOT__csr_mepc = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CSR__DOT__csr_mcause = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CSR__DOT__csr_mstatus = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__CSR__DOT__csr_mtvec = VL_RAND_RESET_I(32);
    vlSelf->__Vfunc_top__DOT__LSU__DOT__SRAM_LSU__DOT__pmem_read__1__Vfuncout = 0;
    vlSelf->__Vfunc_top__DOT__IFU__DOT__SRAM_IFU__DOT__pmem_read__3__Vfuncout = 0;
    vlSelf->__Vtableidx1 = 0;
    vlSelf->__Vtableidx2 = 0;
    vlSelf->__Vtableidx3 = 0;
    vlSelf->__Vtableidx4 = 0;
    vlSelf->__Vtrigrprev__TOP__clk = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
