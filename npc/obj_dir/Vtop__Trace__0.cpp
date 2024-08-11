// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<18>/*575:0*/ __Vtemp_hcf9c2e3d__0;
    VlWide<10>/*319:0*/ __Vtemp_h025a3fbe__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+5,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+6,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+8,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+10,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+11,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
        bufp->chgCData(oldp+12,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
        bufp->chgCData(oldp+13,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
        bufp->chgCData(oldp+14,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
        bufp->chgCData(oldp+15,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__GPR__DOT__i),32);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+25,((0x6fU == (0x7fU & vlSelf->top__DOT__ifu_rdata))));
        bufp->chgBit(oldp+26,(vlSelf->top__DOT__IDU__DOT__is_jalr));
        bufp->chgBit(oldp+27,(vlSelf->top__DOT__w_csr_en));
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
        bufp->chgIData(oldp+30,(vlSelf->top__DOT__alu_out),32);
        bufp->chgBit(oldp+31,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__alu_b_sel),2);
        bufp->chgCData(oldp+33,(vlSelf->top__DOT__alu_func),4);
        bufp->chgCData(oldp+34,(vlSelf->top__DOT__branch_type),3);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__memory_rd_ctrl),3);
        bufp->chgCData(oldp+36,(vlSelf->top__DOT__memory_wr_ctrl),8);
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__is_load_type));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__IDU__DOT__is_s_type));
        bufp->chgIData(oldp+39,(((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                  ? ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                      ? 0U : ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                               ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                               : (0xffffU 
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
                                          : 0U)))),32);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__r_csr_data),32);
        bufp->chgIData(oldp+41,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
        bufp->chgIData(oldp+42,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
        bufp->chgBit(oldp+43,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__ifu_rdata)) 
                                  | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
        bufp->chgCData(oldp+44,(vlSelf->top__DOT__w_sel),2);
        bufp->chgIData(oldp+45,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                                  ? vlSelf->top__DOT__alu_out
                                  : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                      ? vlSelf->top__DOT__r_csr_data
                                      : 0U))),32);
        bufp->chgBit(oldp+46,(((0x6fU == (0x7fU & vlSelf->top__DOT__ifu_rdata)) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__IDU__DOT__is_ecall));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__IDU__DOT__is_mret));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__jump_branch));
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__imm_out),32);
        bufp->chgBit(oldp+51,(((~ ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type) 
                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type))) 
                               & (IData)(vlSelf->top__DOT__valid_ifu))));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->top__DOT__lsu_bready) 
                               & (IData)(vlSelf->top__DOT__lsu_bvalid))));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__rd_finish));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__valid_ifu));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__valid_idu));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__ifu_arvalid));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__ifu_arready));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__ifu_rready));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__ifu_rvalid));
        bufp->chgIData(oldp+60,(vlSelf->top__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__lsu_arvalid));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__lsu_arready));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__lsu_rready));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__lsu_rvalid));
        bufp->chgIData(oldp+65,(vlSelf->top__DOT__lsu_rdata),32);
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__lsu_awvalid));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__lsu_awready));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__lsu_wvalid));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__lsu_wready));
        bufp->chgBit(oldp+70,(vlSelf->top__DOT__lsu_bready));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__lsu_bvalid));
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__saxi_araddr),32);
        bufp->chgBit(oldp+73,(vlSelf->top__DOT__saxi_arvalid));
        bufp->chgBit(oldp+74,(vlSelf->top__DOT__saxi_arready));
        bufp->chgBit(oldp+75,(vlSelf->top__DOT__saxi_rready));
        bufp->chgBit(oldp+76,(vlSelf->top__DOT__saxi_rvalid));
        bufp->chgIData(oldp+77,(vlSelf->top__DOT__saxi_rdata),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT__saxi_awaddr),32);
        bufp->chgBit(oldp+79,(vlSelf->top__DOT__saxi_awvalid));
        bufp->chgBit(oldp+80,(vlSelf->top__DOT__saxi_awready));
        bufp->chgIData(oldp+81,(vlSelf->top__DOT__saxi_wdata),32);
        bufp->chgBit(oldp+82,(vlSelf->top__DOT__saxi_wvalid));
        bufp->chgBit(oldp+83,(vlSelf->top__DOT__saxi_wready));
        bufp->chgBit(oldp+84,(vlSelf->top__DOT__saxi_bready));
        bufp->chgBit(oldp+85,(vlSelf->top__DOT__saxi_bvalid));
        bufp->chgIData(oldp+86,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+87,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+88,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+89,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  < vlSelf->top__DOT__ALU__DOT__signed_b)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+90,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+91,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+92,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+93,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+94,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                 - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+95,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                               (0x1fU 
                                                & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
        __Vtemp_hcf9c2e3d__0[0U] = 0U;
        __Vtemp_hcf9c2e3d__0[1U] = (0xfU | (vlSelf->top__DOT__ALU__DOT__signed_b 
                                            << 4U));
        __Vtemp_hcf9c2e3d__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                             (0x1fU 
                                                              & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                              << 8U) 
                                             | (vlSelf->top__DOT__ALU__DOT__signed_b 
                                                >> 0x1cU)));
        __Vtemp_hcf9c2e3d__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                             (0x1fU 
                                                              & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                              >> 0x18U));
        __Vtemp_hcf9c2e3d__0[4U] = 0xc000U;
        __Vtemp_hcf9c2e3d__0[5U] = 0xb0000U;
        __Vtemp_hcf9c2e3d__0[6U] = 0xa00000U;
        __Vtemp_hcf9c2e3d__0[7U] = (0x9000000U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   - vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU));
        __Vtemp_hcf9c2e3d__0[8U] = (0x80000000U | (
                                                   (vlSelf->top__DOT__ALU__DOT__signed_a 
                                                    - vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                   >> 4U));
        __Vtemp_hcf9c2e3d__0[9U] = (vlSelf->top__DOT__ALU__DOT__signed_a 
                                    & vlSelf->top__DOT__ALU__DOT__signed_b);
        __Vtemp_hcf9c2e3d__0[0xaU] = (7U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             | vlSelf->top__DOT__ALU__DOT__signed_b) 
                                            << 4U));
        __Vtemp_hcf9c2e3d__0[0xbU] = (0x60U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                                << 8U) 
                                               | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   | vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                  >> 0x1cU)));
        __Vtemp_hcf9c2e3d__0[0xcU] = (0x500U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                  ^ vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                 << 0xcU) 
                                                | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                                   >> 0x18U)));
        __Vtemp_hcf9c2e3d__0[0xdU] = (0x4000U | (((
                                                   (vlSelf->top__DOT__ALU__DOT__signed_a 
                                                    < vlSelf->top__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                     ^ vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                    >> 0x14U)));
        __Vtemp_hcf9c2e3d__0[0xeU] = (0x30000U | ((
                                                   (VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                                     ? 1U
                                                     : 0U) 
                                                   << 0x14U) 
                                                  | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                       < vlSelf->top__DOT__ALU__DOT__signed_b)
                                                       ? 1U
                                                       : 0U) 
                                                     >> 0x10U)));
        __Vtemp_hcf9c2e3d__0[0xfU] = (0x200000U | (
                                                   ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                                    << 0x18U) 
                                                   | ((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                                        ? 1U
                                                        : 0U) 
                                                      >> 0xcU)));
        __Vtemp_hcf9c2e3d__0[0x10U] = (0x1000000U | 
                                       (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                          + vlSelf->top__DOT__ALU__DOT__signed_b) 
                                         << 0x1cU) 
                                        | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                            << (0x1fU 
                                                & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                           >> 8U)));
        __Vtemp_hcf9c2e3d__0[0x11U] = ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                        + vlSelf->top__DOT__ALU__DOT__signed_b) 
                                       >> 4U);
        bufp->chgWData(oldp+96,(__Vtemp_hcf9c2e3d__0),576);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+116,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+122,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+124,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+130,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+132,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+134,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+136,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+138,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+140,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+142,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+144,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+163,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+164,(vlSelf->top__DOT__ARB__DOT__arb_ready));
        bufp->chgCData(oldp+165,(vlSelf->top__DOT__ARB__DOT__state),3);
        bufp->chgBit(oldp+166,(vlSelf->top__DOT__ARB__DOT__wait_read));
        bufp->chgBit(oldp+167,(vlSelf->top__DOT____Vcellinp__CSR__finish));
        bufp->chgSData(oldp+168,((vlSelf->top__DOT__ifu_rdata 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__CSR__DOT__csr_mepc),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__CSR__DOT__csr_mcause),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__CSR__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__CSR__DOT__csr_mtvec),32);
        bufp->chgCData(oldp+173,((0x1fU & (vlSelf->top__DOT__ifu_rdata 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+174,((0x1fU & (vlSelf->top__DOT__ifu_rdata 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+175,((0x1fU & (vlSelf->top__DOT__ifu_rdata 
                                           >> 7U))),5);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
        bufp->chgCData(oldp+208,((0x7fU & vlSelf->top__DOT__ifu_rdata)),7);
        bufp->chgCData(oldp+209,((7U & (vlSelf->top__DOT__ifu_rdata 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+210,((vlSelf->top__DOT__ifu_rdata 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+211,((vlSelf->top__DOT__ifu_rdata 
                                  >> 7U)),25);
        bufp->chgBit(oldp+212,((0x37U == (0x7fU & vlSelf->top__DOT__ifu_rdata))));
        bufp->chgBit(oldp+213,((0x17U == (0x7fU & vlSelf->top__DOT__ifu_rdata))));
        bufp->chgBit(oldp+214,(vlSelf->top__DOT__IDU__DOT__is_beq));
        bufp->chgBit(oldp+215,(vlSelf->top__DOT__IDU__DOT__is_bne));
        bufp->chgBit(oldp+216,(vlSelf->top__DOT__IDU__DOT__is_blt));
        bufp->chgBit(oldp+217,(vlSelf->top__DOT__IDU__DOT__is_bge));
        bufp->chgBit(oldp+218,(vlSelf->top__DOT__IDU__DOT__is_bltu));
        bufp->chgBit(oldp+219,(vlSelf->top__DOT__IDU__DOT__is_bgeu));
        bufp->chgBit(oldp+220,(vlSelf->top__DOT__IDU__DOT__is_lb));
        bufp->chgBit(oldp+221,(vlSelf->top__DOT__IDU__DOT__is_lh));
        bufp->chgBit(oldp+222,(vlSelf->top__DOT__IDU__DOT__is_lw));
        bufp->chgBit(oldp+223,(vlSelf->top__DOT__IDU__DOT__is_lbu));
        bufp->chgBit(oldp+224,(vlSelf->top__DOT__IDU__DOT__is_lhu));
        bufp->chgBit(oldp+225,(vlSelf->top__DOT__IDU__DOT__is_sb));
        bufp->chgBit(oldp+226,(vlSelf->top__DOT__IDU__DOT__is_sh));
        bufp->chgBit(oldp+227,(vlSelf->top__DOT__IDU__DOT__is_sw));
        bufp->chgBit(oldp+228,(vlSelf->top__DOT__IDU__DOT__is_addi));
        bufp->chgBit(oldp+229,(vlSelf->top__DOT__IDU__DOT__is_slti));
        bufp->chgBit(oldp+230,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
        bufp->chgBit(oldp+231,(vlSelf->top__DOT__IDU__DOT__is_xori));
        bufp->chgBit(oldp+232,(vlSelf->top__DOT__IDU__DOT__is_ori));
        bufp->chgBit(oldp+233,(vlSelf->top__DOT__IDU__DOT__is_andi));
        bufp->chgBit(oldp+234,(vlSelf->top__DOT__IDU__DOT__is_slli));
        bufp->chgBit(oldp+235,(vlSelf->top__DOT__IDU__DOT__is_srli));
        bufp->chgBit(oldp+236,(vlSelf->top__DOT__IDU__DOT__is_srai));
        bufp->chgBit(oldp+237,(vlSelf->top__DOT__IDU__DOT__is_add));
        bufp->chgBit(oldp+238,(vlSelf->top__DOT__IDU__DOT__is_sub));
        bufp->chgBit(oldp+239,(vlSelf->top__DOT__IDU__DOT__is_sll));
        bufp->chgBit(oldp+240,(vlSelf->top__DOT__IDU__DOT__is_slt));
        bufp->chgBit(oldp+241,(vlSelf->top__DOT__IDU__DOT__is_sltu));
        bufp->chgBit(oldp+242,(vlSelf->top__DOT__IDU__DOT__is_xor));
        bufp->chgBit(oldp+243,(vlSelf->top__DOT__IDU__DOT__is_srl));
        bufp->chgBit(oldp+244,(vlSelf->top__DOT__IDU__DOT__is_sra));
        bufp->chgBit(oldp+245,(vlSelf->top__DOT__IDU__DOT__is_or));
        bufp->chgBit(oldp+246,(vlSelf->top__DOT__IDU__DOT__is_and));
        bufp->chgBit(oldp+247,(vlSelf->top__DOT__IDU__DOT__is_csrrs));
        bufp->chgBit(oldp+248,(vlSelf->top__DOT__IDU__DOT__is_csrrw));
        bufp->chgBit(oldp+249,(((0x17U == (0x7fU & vlSelf->top__DOT__ifu_rdata)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__ifu_rdata)) 
                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_b_type) 
                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                        | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                                           | ((IData)(vlSelf->top__DOT__IDU__DOT__is_add) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi))))))))))))));
        bufp->chgBit(oldp+250,(vlSelf->top__DOT__IDU__DOT__is_u_type));
        bufp->chgBit(oldp+251,(vlSelf->top__DOT__IDU__DOT__is_b_type));
        bufp->chgBit(oldp+252,(vlSelf->top__DOT__IDU__DOT__is_r_type));
        bufp->chgBit(oldp+253,(((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
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
                                                                          | (IData)(vlSelf->top__DOT__w_csr_en))))))))))))))))));
        bufp->chgBit(oldp+254,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                                | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))));
        bufp->chgBit(oldp+255,(vlSelf->top__DOT____Vcellinp__IFU__finish));
        bufp->chgBit(oldp+256,(vlSelf->top__DOT__IFU__DOT__axi_arvalid));
        bufp->chgIData(oldp+257,(vlSelf->top__DOT__IFU__DOT__counter),32);
        bufp->chgBit(oldp+258,(vlSelf->top__DOT__IFU__DOT__axi_rready));
        bufp->chgIData(oldp+259,(vlSelf->top__DOT__IFU__DOT__counter_rready),32);
        bufp->chgIData(oldp+260,((0xfffff000U & vlSelf->top__DOT__ifu_rdata)),32);
        bufp->chgIData(oldp+261,((((- (IData)((vlSelf->top__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->top__DOT__ifu_rdata 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->top__DOT__ifu_rdata 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->top__DOT__ifu_rdata 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+262,((((- (IData)((vlSelf->top__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->top__DOT__ifu_rdata) 
                                                | ((0x800U 
                                                    & (vlSelf->top__DOT__ifu_rdata 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->top__DOT__ifu_rdata 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+263,(vlSelf->top__DOT__IMM__DOT__out5),32);
        bufp->chgIData(oldp+264,((((- (IData)((vlSelf->top__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->top__DOT__ifu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->top__DOT__ifu_rdata 
                                                     >> 7U))))),32);
        __Vtemp_h025a3fbe__0[0U] = (IData)((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))));
        __Vtemp_h025a3fbe__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                                                   >> 0x1fU))) 
                                       << 0x13U) | 
                                      ((0x7f000U & 
                                        (vlSelf->top__DOT__ifu_rdata 
                                         >> 0xdU)) 
                                       | (0xf80U & vlSelf->top__DOT__ifu_rdata)))) 
                                    | (IData)(((0x1300000000ULL 
                                                | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))) 
                                               >> 0x20U)));
        __Vtemp_h025a3fbe__0[2U] = (0x1180U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                                << 0xeU) 
                                               | (0x7fU 
                                                  & ((- (IData)(
                                                                (vlSelf->top__DOT__ifu_rdata 
                                                                 >> 0x1fU))) 
                                                     >> 0xdU))));
        __Vtemp_h025a3fbe__0[3U] = (0xc000U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                                << 0x15U) 
                                               | (vlSelf->top__DOT__IMM__DOT__out5 
                                                  >> 0x12U)));
        __Vtemp_h025a3fbe__0[4U] = (0xce00000U | ((0xe0000000U 
                                                   & (vlSelf->top__DOT__ifu_rdata 
                                                      << 8U)) 
                                                  | (vlSelf->top__DOT__IMM__DOT__out5 
                                                     >> 0xbU)));
        __Vtemp_h025a3fbe__0[5U] = (0xf0000000U | (0xfffffffU 
                                                   & ((0xfff0000U 
                                                       & ((- (IData)(
                                                                     (vlSelf->top__DOT__ifu_rdata 
                                                                      >> 0x1fU))) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & (vlSelf->top__DOT__ifu_rdata 
                                                             >> 4U)) 
                                                         | ((0x80U 
                                                             & (vlSelf->top__DOT__ifu_rdata 
                                                                >> 0xdU)) 
                                                            | (0x7fU 
                                                               & (vlSelf->top__DOT__ifu_rdata 
                                                                  >> 0x18U)))))));
        __Vtemp_h025a3fbe__0[6U] = (6U | (0xfffffff8U 
                                          & (((- (IData)(
                                                         (vlSelf->top__DOT__ifu_rdata 
                                                          >> 0x1fU))) 
                                              << 0xfU) 
                                             | ((0x4000U 
                                                 & (vlSelf->top__DOT__ifu_rdata 
                                                    << 7U)) 
                                                | ((0x3f00U 
                                                    & (vlSelf->top__DOT__ifu_rdata 
                                                       >> 0x11U)) 
                                                   | (0xf0U 
                                                      & (vlSelf->top__DOT__ifu_rdata 
                                                         >> 4U)))))));
        __Vtemp_h025a3fbe__0[7U] = (0x318U | ((0xffc00000U 
                                               & (vlSelf->top__DOT__ifu_rdata 
                                                  << 0xaU)) 
                                              | (7U 
                                                 & ((- (IData)(
                                                               (vlSelf->top__DOT__ifu_rdata 
                                                                >> 0x1fU))) 
                                                    >> 0x11U))));
        __Vtemp_h025a3fbe__0[8U] = (0xdc00U | ((0xe0000000U 
                                                & (vlSelf->top__DOT__ifu_rdata 
                                                   << 0x11U)) 
                                               | (vlSelf->top__DOT__ifu_rdata 
                                                  >> 0x16U)));
        __Vtemp_h025a3fbe__0[9U] = (0x2e0000U | (vlSelf->top__DOT__ifu_rdata 
                                                 >> 0xfU));
        bufp->chgWData(oldp+265,(__Vtemp_h025a3fbe__0),312);
        bufp->chgQData(oldp+275,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+277,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+279,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+281,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+283,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+285,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+287,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+289,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+291,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+292,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+293,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+294,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+295,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+296,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+297,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+298,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+299,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+300,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+301,(vlSelf->top__DOT____Vcellinp__LSU__mem_wr_en));
        bufp->chgIData(oldp+302,(vlSelf->top__DOT__LSU__DOT__mem_move_out),32);
        bufp->chgBit(oldp+303,(vlSelf->top__DOT__LSU__DOT__axi_arvalid));
        bufp->chgIData(oldp+304,(vlSelf->top__DOT__LSU__DOT__counter),32);
        bufp->chgBit(oldp+305,(vlSelf->top__DOT__LSU__DOT__axi_rready));
        bufp->chgIData(oldp+306,(vlSelf->top__DOT__LSU__DOT__counter_rready),32);
        bufp->chgIData(oldp+307,(vlSelf->top__DOT__SRAM_LSU__DOT__axi_raddr),32);
        bufp->chgIData(oldp+308,(vlSelf->top__DOT__SRAM_LSU__DOT__axi_data_to_read),32);
        bufp->chgBit(oldp+309,(vlSelf->top__DOT__SRAM_LSU__DOT__aw_hand));
        bufp->chgIData(oldp+310,(vlSelf->top__DOT__SRAM_LSU__DOT__axi_waddr),32);
        bufp->chgBit(oldp+311,(vlSelf->top__DOT__SRAM_LSU__DOT__w_hand));
        bufp->chgIData(oldp+312,(vlSelf->top__DOT__SRAM_LSU__DOT__axi_wdata),32);
    }
    bufp->chgBit(oldp+313,(vlSelf->clk));
    bufp->chgBit(oldp+314,(vlSelf->rst));
    bufp->chgIData(oldp+315,(vlSelf->inst),32);
    bufp->chgIData(oldp+316,(vlSelf->pc),32);
    bufp->chgIData(oldp+317,(((2U & (IData)(vlSelf->top__DOT__w_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                   ? ((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                       ? ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                    ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->top__DOT__LSU__DOT__mem_move_out)))
                                       : ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                               : (0xffU 
                                                  & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                           : ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                               : 0U)))
                                   : vlSelf->top__DOT__alu_out)
                               : ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : vlSelf->top__DOT__r_csr_data))),32);
    bufp->chgIData(oldp+318,(((IData)(4U) + vlSelf->pc)),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
