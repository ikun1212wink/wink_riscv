// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060240__Syms.h"


void Vysyx_23060240___024root__trace_chg_sub_0(Vysyx_23060240___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vysyx_23060240___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_chg_top_0\n"); );
    // Init
    Vysyx_23060240___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060240___024root*>(voidSelf);
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vysyx_23060240___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vysyx_23060240___024root__trace_chg_sub_0(Vysyx_23060240___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    VlWide<18>/*575:0*/ __Vtemp_h6f9acf39__0;
    VlWide<10>/*319:0*/ __Vtemp_h28d4ba3b__0;
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgCData(oldp+0,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
        bufp->chgCData(oldp+1,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
        bufp->chgCData(oldp+2,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
        bufp->chgCData(oldp+3,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
        bufp->chgCData(oldp+4,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
        bufp->chgCData(oldp+5,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
        bufp->chgCData(oldp+6,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
        bufp->chgCData(oldp+7,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
        bufp->chgCData(oldp+8,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
        bufp->chgCData(oldp+9,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
        bufp->chgCData(oldp+10,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
        bufp->chgCData(oldp+11,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
        bufp->chgCData(oldp+12,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
        bufp->chgCData(oldp+13,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
        bufp->chgCData(oldp+14,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
        bufp->chgCData(oldp+15,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
        bufp->chgIData(oldp+16,(vlSelf->ysyx_23060240__DOT__GPR__DOT__i),32);
        bufp->chgCData(oldp+17,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+18,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+19,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+20,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+21,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+22,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+23,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+24,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+25,((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
        bufp->chgBit(oldp+26,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr));
        bufp->chgBit(oldp+27,(vlSelf->ysyx_23060240__DOT__w_csr_en));
        bufp->chgIData(oldp+28,(vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a),32);
        bufp->chgIData(oldp+29,(vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b),32);
        bufp->chgIData(oldp+30,(vlSelf->ysyx_23060240__DOT__alu_out),32);
        bufp->chgBit(oldp+31,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type) 
                               | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
        bufp->chgCData(oldp+32,(vlSelf->ysyx_23060240__DOT__alu_b_sel),2);
        bufp->chgCData(oldp+33,(vlSelf->ysyx_23060240__DOT__alu_func),4);
        bufp->chgCData(oldp+34,(vlSelf->ysyx_23060240__DOT__branch_type),3);
        bufp->chgCData(oldp+35,(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl),3);
        bufp->chgCData(oldp+36,(vlSelf->ysyx_23060240__DOT__memory_wr_ctrl),8);
        bufp->chgBit(oldp+37,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_load_type));
        bufp->chgBit(oldp+38,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type));
        bufp->chgIData(oldp+39,(((4U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                  ? ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                      ? 0U : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                               ? vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out
                                               : (0xffffU 
                                                  & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out)))
                                  : ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                      ? ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                             >> 0xfU)))) 
                                              << 0x10U) 
                                             | (0xffffU 
                                                & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                          : (0xffU 
                                             & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                      : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                          : 0U)))),32);
        bufp->chgIData(oldp+40,(vlSelf->ysyx_23060240__DOT__r_csr_data),32);
        bufp->chgIData(oldp+41,(vlSelf->ysyx_23060240__DOT__BSU__DOT__signed_rs1),32);
        bufp->chgIData(oldp+42,(vlSelf->ysyx_23060240__DOT__BSU__DOT__signed_rs2),32);
        bufp->chgBit(oldp+43,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_u_type) 
                               | ((0x6fU == (0x7fU 
                                             & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                                  | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
        bufp->chgCData(oldp+44,(vlSelf->ysyx_23060240__DOT__w_sel),2);
        bufp->chgIData(oldp+45,(((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h241ef1d5__0)
                                  ? vlSelf->ysyx_23060240__DOT__alu_out
                                  : ((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h445074e7__0)
                                      ? vlSelf->ysyx_23060240__DOT__r_csr_data
                                      : 0U))),32);
        bufp->chgBit(oldp+46,(((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                               | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
        bufp->chgBit(oldp+47,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ecall));
        bufp->chgBit(oldp+48,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_mret));
        bufp->chgBit(oldp+49,(vlSelf->ysyx_23060240__DOT__jump_branch));
        bufp->chgIData(oldp+50,(vlSelf->ysyx_23060240__DOT__imm_out),32);
        bufp->chgBit(oldp+51,(((~ ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_load_type) 
                                   | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type))) 
                               & (IData)(vlSelf->ysyx_23060240__DOT__valid_ifu))));
        bufp->chgBit(oldp+52,(((IData)(vlSelf->ysyx_23060240__DOT__lsu_bready) 
                               & (IData)(vlSelf->ysyx_23060240__DOT__lsu_bvalid))));
        bufp->chgBit(oldp+53,(vlSelf->ysyx_23060240__DOT__rd_finish));
        bufp->chgBit(oldp+54,(vlSelf->ysyx_23060240__DOT__valid_ifu));
        bufp->chgBit(oldp+55,(vlSelf->ysyx_23060240__DOT__valid_idu));
        bufp->chgCData(oldp+56,(vlSelf->ysyx_23060240__DOT__uart_reg),8);
        bufp->chgBit(oldp+57,(vlSelf->ysyx_23060240__DOT__ifu_arvalid));
        bufp->chgBit(oldp+58,(vlSelf->ysyx_23060240__DOT__ifu_arready));
        bufp->chgBit(oldp+59,(vlSelf->ysyx_23060240__DOT__ifu_rready));
        bufp->chgBit(oldp+60,(vlSelf->ysyx_23060240__DOT__ifu_rvalid));
        bufp->chgIData(oldp+61,(vlSelf->ysyx_23060240__DOT__ifu_rdata),32);
        bufp->chgBit(oldp+62,(vlSelf->ysyx_23060240__DOT__ifu_awready));
        bufp->chgBit(oldp+63,(vlSelf->ysyx_23060240__DOT__ifu_wready));
        bufp->chgBit(oldp+64,(vlSelf->ysyx_23060240__DOT__ifu_bvalid));
        bufp->chgBit(oldp+65,(vlSelf->ysyx_23060240__DOT__lsu_arvalid));
        bufp->chgBit(oldp+66,(vlSelf->ysyx_23060240__DOT__lsu_arready));
        bufp->chgBit(oldp+67,(vlSelf->ysyx_23060240__DOT__lsu_rready));
        bufp->chgBit(oldp+68,(vlSelf->ysyx_23060240__DOT__lsu_rvalid));
        bufp->chgIData(oldp+69,(vlSelf->ysyx_23060240__DOT__lsu_rdata),32);
        bufp->chgBit(oldp+70,(vlSelf->ysyx_23060240__DOT__lsu_awvalid));
        bufp->chgBit(oldp+71,(vlSelf->ysyx_23060240__DOT__lsu_awready));
        bufp->chgBit(oldp+72,(vlSelf->ysyx_23060240__DOT__lsu_wvalid));
        bufp->chgBit(oldp+73,(vlSelf->ysyx_23060240__DOT__lsu_wready));
        bufp->chgBit(oldp+74,(vlSelf->ysyx_23060240__DOT__lsu_bready));
        bufp->chgBit(oldp+75,(vlSelf->ysyx_23060240__DOT__lsu_bvalid));
        bufp->chgIData(oldp+76,(vlSelf->ysyx_23060240__DOT__saxi_araddr),32);
        bufp->chgBit(oldp+77,(vlSelf->ysyx_23060240__DOT__saxi_arvalid));
        bufp->chgBit(oldp+78,(vlSelf->ysyx_23060240__DOT__saxi_arready));
        bufp->chgBit(oldp+79,(vlSelf->ysyx_23060240__DOT__saxi_rready));
        bufp->chgBit(oldp+80,(vlSelf->ysyx_23060240__DOT__saxi_rvalid));
        bufp->chgIData(oldp+81,(vlSelf->ysyx_23060240__DOT__saxi_rdata),32);
        bufp->chgIData(oldp+82,(vlSelf->ysyx_23060240__DOT__saxi_awaddr),32);
        bufp->chgBit(oldp+83,(vlSelf->ysyx_23060240__DOT__saxi_awvalid));
        bufp->chgBit(oldp+84,(vlSelf->ysyx_23060240__DOT__saxi_awready));
        bufp->chgIData(oldp+85,(vlSelf->ysyx_23060240__DOT__saxi_wdata),32);
        bufp->chgBit(oldp+86,(vlSelf->ysyx_23060240__DOT__saxi_wvalid));
        bufp->chgBit(oldp+87,(vlSelf->ysyx_23060240__DOT__saxi_wready));
        bufp->chgBit(oldp+88,(vlSelf->ysyx_23060240__DOT__saxi_bready));
        bufp->chgBit(oldp+89,(vlSelf->ysyx_23060240__DOT__saxi_bvalid));
        bufp->chgIData(oldp+90,(vlSelf->ysyx_23060240__DOT__uart_awaddr),32);
        bufp->chgBit(oldp+91,(vlSelf->ysyx_23060240__DOT__uart_awvalid));
        bufp->chgBit(oldp+92,(vlSelf->ysyx_23060240__DOT__uart_awready));
        bufp->chgIData(oldp+93,(vlSelf->ysyx_23060240__DOT__uart_wdata),32);
        bufp->chgBit(oldp+94,(vlSelf->ysyx_23060240__DOT__uart_wvalid));
        bufp->chgBit(oldp+95,(vlSelf->ysyx_23060240__DOT__uart_wready));
        bufp->chgBit(oldp+96,(vlSelf->ysyx_23060240__DOT__uart_bready));
        bufp->chgBit(oldp+97,(vlSelf->ysyx_23060240__DOT__uart_bvalid));
        bufp->chgIData(oldp+98,(vlSelf->ysyx_23060240__DOT__clint_araddr),32);
        bufp->chgBit(oldp+99,(vlSelf->ysyx_23060240__DOT__clint_arvalid));
        bufp->chgBit(oldp+100,(vlSelf->ysyx_23060240__DOT__clint_arready));
        bufp->chgBit(oldp+101,(vlSelf->ysyx_23060240__DOT__clint_rready));
        bufp->chgBit(oldp+102,(vlSelf->ysyx_23060240__DOT__clint_rvalid));
        bufp->chgIData(oldp+103,(vlSelf->ysyx_23060240__DOT__clint_rdata),32);
        bufp->chgIData(oldp+104,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+105,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  << (0x1fU & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+106,((VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+107,(((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                   < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+108,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+109,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  >> (0x1fU & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+110,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+111,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+112,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                  - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+113,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                                (0x1fU 
                                                 & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
        __Vtemp_h6f9acf39__0[0U] = 0U;
        __Vtemp_h6f9acf39__0[1U] = (0xfU | (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b 
                                            << 4U));
        __Vtemp_h6f9acf39__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                                             (0x1fU 
                                                              & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                              << 8U) 
                                             | (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b 
                                                >> 0x1cU)));
        __Vtemp_h6f9acf39__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                                             (0x1fU 
                                                              & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                              >> 0x18U));
        __Vtemp_h6f9acf39__0[4U] = 0xc000U;
        __Vtemp_h6f9acf39__0[5U] = 0xb0000U;
        __Vtemp_h6f9acf39__0[6U] = 0xa00000U;
        __Vtemp_h6f9acf39__0[7U] = (0x9000000U | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                   - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU));
        __Vtemp_h6f9acf39__0[8U] = (0x80000000U | (
                                                   (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                    - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                   >> 4U));
        __Vtemp_h6f9acf39__0[9U] = (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                    & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b);
        __Vtemp_h6f9acf39__0[0xaU] = (7U | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                             | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                            << 4U));
        __Vtemp_h6f9acf39__0[0xbU] = (0x60U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                                << 8U) 
                                               | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                   | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                  >> 0x1cU)));
        __Vtemp_h6f9acf39__0[0xcU] = (0x500U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                  ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                 << 0xcU) 
                                                | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                                   >> 0x18U)));
        __Vtemp_h6f9acf39__0[0xdU] = (0x4000U | (((
                                                   (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                    < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                     ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                    >> 0x14U)));
        __Vtemp_h6f9acf39__0[0xeU] = (0x30000U | ((
                                                   (VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                     ? 1U
                                                     : 0U) 
                                                   << 0x14U) 
                                                  | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                       < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                       ? 1U
                                                       : 0U) 
                                                     >> 0x10U)));
        __Vtemp_h6f9acf39__0[0xfU] = (0x200000U | (
                                                   ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                                    << 0x18U) 
                                                   | ((VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                        ? 1U
                                                        : 0U) 
                                                      >> 0xcU)));
        __Vtemp_h6f9acf39__0[0x10U] = (0x1000000U | 
                                       (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                          + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                         << 0x1cU) 
                                        | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                            << (0x1fU 
                                                & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                           >> 8U)));
        __Vtemp_h6f9acf39__0[0x11U] = ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                        + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                       >> 4U);
        bufp->chgWData(oldp+114,(__Vtemp_h6f9acf39__0),576);
        bufp->chgQData(oldp+132,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+134,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+136,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+138,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+140,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+142,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+144,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+146,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+148,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+150,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+152,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+154,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+156,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+158,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+160,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+162,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+164,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+165,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+166,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+167,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+168,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+169,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+170,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+171,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+172,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+173,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+174,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+175,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+176,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+177,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+178,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+179,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+180,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+181,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
        bufp->chgQData(oldp+182,(vlSelf->ysyx_23060240__DOT__CLINT__DOT__mtime),64);
        bufp->chgIData(oldp+184,(vlSelf->ysyx_23060240__DOT__CLINT__DOT__raddr),32);
        bufp->chgBit(oldp+185,(vlSelf->ysyx_23060240__DOT____Vcellinp__CSR__finish));
        bufp->chgSData(oldp+186,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                  >> 0x14U)),12);
        bufp->chgIData(oldp+187,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mepc),32);
        bufp->chgIData(oldp+188,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mcause),32);
        bufp->chgIData(oldp+189,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mstatus),32);
        bufp->chgIData(oldp+190,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mtvec),32);
        bufp->chgCData(oldp+191,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                           >> 0xfU))),5);
        bufp->chgCData(oldp+192,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                           >> 0x14U))),5);
        bufp->chgCData(oldp+193,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                           >> 7U))),5);
        bufp->chgIData(oldp+194,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[0]),32);
        bufp->chgIData(oldp+195,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[1]),32);
        bufp->chgIData(oldp+196,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[2]),32);
        bufp->chgIData(oldp+197,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[3]),32);
        bufp->chgIData(oldp+198,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[4]),32);
        bufp->chgIData(oldp+199,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[5]),32);
        bufp->chgIData(oldp+200,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[6]),32);
        bufp->chgIData(oldp+201,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[7]),32);
        bufp->chgIData(oldp+202,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[8]),32);
        bufp->chgIData(oldp+203,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[9]),32);
        bufp->chgIData(oldp+204,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[10]),32);
        bufp->chgIData(oldp+205,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[11]),32);
        bufp->chgIData(oldp+206,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[12]),32);
        bufp->chgIData(oldp+207,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[13]),32);
        bufp->chgIData(oldp+208,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[14]),32);
        bufp->chgIData(oldp+209,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[15]),32);
        bufp->chgIData(oldp+210,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[16]),32);
        bufp->chgIData(oldp+211,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[17]),32);
        bufp->chgIData(oldp+212,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[18]),32);
        bufp->chgIData(oldp+213,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[19]),32);
        bufp->chgIData(oldp+214,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[20]),32);
        bufp->chgIData(oldp+215,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[21]),32);
        bufp->chgIData(oldp+216,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[22]),32);
        bufp->chgIData(oldp+217,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[23]),32);
        bufp->chgIData(oldp+218,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[24]),32);
        bufp->chgIData(oldp+219,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[25]),32);
        bufp->chgIData(oldp+220,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[26]),32);
        bufp->chgIData(oldp+221,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[27]),32);
        bufp->chgIData(oldp+222,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[28]),32);
        bufp->chgIData(oldp+223,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[29]),32);
        bufp->chgIData(oldp+224,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[30]),32);
        bufp->chgIData(oldp+225,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[31]),32);
        bufp->chgCData(oldp+226,((0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)),7);
        bufp->chgCData(oldp+227,((7U & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                        >> 0xcU))),3);
        bufp->chgCData(oldp+228,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                  >> 0x19U)),7);
        bufp->chgIData(oldp+229,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                  >> 7U)),25);
        bufp->chgBit(oldp+230,((0x37U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
        bufp->chgBit(oldp+231,((0x17U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
        bufp->chgBit(oldp+232,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_beq));
        bufp->chgBit(oldp+233,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bne));
        bufp->chgBit(oldp+234,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_blt));
        bufp->chgBit(oldp+235,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bge));
        bufp->chgBit(oldp+236,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bltu));
        bufp->chgBit(oldp+237,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bgeu));
        bufp->chgBit(oldp+238,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb));
        bufp->chgBit(oldp+239,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh));
        bufp->chgBit(oldp+240,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw));
        bufp->chgBit(oldp+241,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu));
        bufp->chgBit(oldp+242,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu));
        bufp->chgBit(oldp+243,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sb));
        bufp->chgBit(oldp+244,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sh));
        bufp->chgBit(oldp+245,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sw));
        bufp->chgBit(oldp+246,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi));
        bufp->chgBit(oldp+247,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slti));
        bufp->chgBit(oldp+248,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltiu));
        bufp->chgBit(oldp+249,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xori));
        bufp->chgBit(oldp+250,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ori));
        bufp->chgBit(oldp+251,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_andi));
        bufp->chgBit(oldp+252,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slli));
        bufp->chgBit(oldp+253,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srli));
        bufp->chgBit(oldp+254,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srai));
        bufp->chgBit(oldp+255,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_add));
        bufp->chgBit(oldp+256,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sub));
        bufp->chgBit(oldp+257,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sll));
        bufp->chgBit(oldp+258,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slt));
        bufp->chgBit(oldp+259,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltu));
        bufp->chgBit(oldp+260,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xor));
        bufp->chgBit(oldp+261,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srl));
        bufp->chgBit(oldp+262,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sra));
        bufp->chgBit(oldp+263,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_or));
        bufp->chgBit(oldp+264,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_and));
        bufp->chgBit(oldp+265,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_csrrs));
        bufp->chgBit(oldp+266,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_csrrw));
        bufp->chgBit(oldp+267,(((0x17U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                                | ((0x6fU == (0x7fU 
                                              & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                                   | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr) 
                                      | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_b_type) 
                                         | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type) 
                                            | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb) 
                                               | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh) 
                                                  | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw) 
                                                     | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu) 
                                                        | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu) 
                                                           | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_add) 
                                                              | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi))))))))))))));
        bufp->chgBit(oldp+268,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_u_type));
        bufp->chgBit(oldp+269,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_b_type));
        bufp->chgBit(oldp+270,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_r_type));
        bufp->chgBit(oldp+271,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr) 
                                | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb) 
                                   | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh) 
                                      | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw) 
                                         | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu) 
                                            | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu) 
                                               | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi) 
                                                  | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slti) 
                                                     | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltiu) 
                                                        | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xori) 
                                                           | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ori) 
                                                              | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_andi) 
                                                                 | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slli) 
                                                                    | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srli) 
                                                                       | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srai) 
                                                                          | (IData)(vlSelf->ysyx_23060240__DOT__w_csr_en))))))))))))))))));
        bufp->chgBit(oldp+272,(((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h241ef1d5__0) 
                                | (IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h445074e7__0))));
        bufp->chgBit(oldp+273,(vlSelf->ysyx_23060240__DOT____Vcellinp__IFU__finish));
        bufp->chgBit(oldp+274,(vlSelf->ysyx_23060240__DOT__IFU__DOT__axi_arvalid));
        bufp->chgIData(oldp+275,(vlSelf->ysyx_23060240__DOT__IFU__DOT__counter),32);
        bufp->chgBit(oldp+276,(vlSelf->ysyx_23060240__DOT__IFU__DOT__axi_rready));
        bufp->chgIData(oldp+277,(vlSelf->ysyx_23060240__DOT__IFU__DOT__counter_rready),32);
        bufp->chgIData(oldp+278,((0xfffff000U & vlSelf->ysyx_23060240__DOT__ifu_rdata)),32);
        bufp->chgIData(oldp+279,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0x800U 
                                                & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                        >> 7U)))))),32);
        bufp->chgIData(oldp+280,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0x14U) | ((0xff000U 
                                                 & vlSelf->ysyx_23060240__DOT__ifu_rdata) 
                                                | ((0x800U 
                                                    & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                       >> 9U)) 
                                                   | (0x7feU 
                                                      & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                         >> 0x14U)))))),32);
        bufp->chgIData(oldp+281,(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5),32);
        bufp->chgIData(oldp+282,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                               >> 0x1fU))) 
                                   << 0xcU) | ((0xfe0U 
                                                & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1fU 
                                                  & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                     >> 7U))))),32);
        __Vtemp_h28d4ba3b__0[0U] = (IData)((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5))));
        __Vtemp_h28d4ba3b__0[1U] = ((0xffffff80U & 
                                     (((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                   >> 0x1fU))) 
                                       << 0x13U) | 
                                      ((0x7f000U & 
                                        (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                         >> 0xdU)) 
                                       | (0xf80U & vlSelf->ysyx_23060240__DOT__ifu_rdata)))) 
                                    | (IData)(((0x1300000000ULL 
                                                | (QData)((IData)(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5))) 
                                               >> 0x20U)));
        __Vtemp_h28d4ba3b__0[2U] = (0x1180U | ((vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                                << 0xeU) 
                                               | (0x7fU 
                                                  & ((- (IData)(
                                                                (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                 >> 0x1fU))) 
                                                     >> 0xdU))));
        __Vtemp_h28d4ba3b__0[3U] = (0xc000U | ((vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                                << 0x15U) 
                                               | (vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                                  >> 0x12U)));
        __Vtemp_h28d4ba3b__0[4U] = (0xce00000U | ((0xe0000000U 
                                                   & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                      << 8U)) 
                                                  | (vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                                     >> 0xbU)));
        __Vtemp_h28d4ba3b__0[5U] = (0xf0000000U | (0xfffffffU 
                                                   & ((0xfff0000U 
                                                       & ((- (IData)(
                                                                     (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                      >> 0x1fU))) 
                                                          << 0x10U)) 
                                                      | ((0xff00U 
                                                          & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                             >> 4U)) 
                                                         | ((0x80U 
                                                             & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                >> 0xdU)) 
                                                            | (0x7fU 
                                                               & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                  >> 0x18U)))))));
        __Vtemp_h28d4ba3b__0[6U] = (6U | (0xfffffff8U 
                                          & (((- (IData)(
                                                         (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                          >> 0x1fU))) 
                                              << 0xfU) 
                                             | ((0x4000U 
                                                 & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                    << 7U)) 
                                                | ((0x3f00U 
                                                    & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                       >> 0x11U)) 
                                                   | (0xf0U 
                                                      & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                         >> 4U)))))));
        __Vtemp_h28d4ba3b__0[7U] = (0x318U | ((0xffc00000U 
                                               & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                  << 0xaU)) 
                                              | (7U 
                                                 & ((- (IData)(
                                                               (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                >> 0x1fU))) 
                                                    >> 0x11U))));
        __Vtemp_h28d4ba3b__0[8U] = (0xdc00U | ((0xe0000000U 
                                                & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                   << 0x11U)) 
                                               | (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                  >> 0x16U)));
        __Vtemp_h28d4ba3b__0[9U] = (0x2e0000U | (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                 >> 0xfU));
        bufp->chgWData(oldp+283,(__Vtemp_h28d4ba3b__0),312);
        bufp->chgQData(oldp+293,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+295,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+297,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+299,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+301,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+303,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+305,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+307,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+309,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+310,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+311,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+312,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+313,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+314,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+315,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+316,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+317,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+318,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+319,(vlSelf->ysyx_23060240__DOT____Vcellinp__LSU__mem_wr_en));
        bufp->chgIData(oldp+320,(vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out),32);
        bufp->chgBit(oldp+321,(vlSelf->ysyx_23060240__DOT__LSU__DOT__axi_arvalid));
        bufp->chgIData(oldp+322,(vlSelf->ysyx_23060240__DOT__LSU__DOT__counter),32);
        bufp->chgBit(oldp+323,(vlSelf->ysyx_23060240__DOT__LSU__DOT__axi_rready));
        bufp->chgIData(oldp+324,(vlSelf->ysyx_23060240__DOT__LSU__DOT__counter_rready),32);
        bufp->chgIData(oldp+325,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_raddr),32);
        bufp->chgIData(oldp+326,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_data_to_read),32);
        bufp->chgBit(oldp+327,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__aw_hand));
        bufp->chgIData(oldp+328,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_waddr),32);
        bufp->chgBit(oldp+329,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__w_hand));
        bufp->chgIData(oldp+330,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_wdata),32);
        bufp->chgBit(oldp+331,(vlSelf->ysyx_23060240__DOT__UART__DOT__aw_hand));
        bufp->chgIData(oldp+332,(vlSelf->ysyx_23060240__DOT__UART__DOT__waddr),32);
        bufp->chgBit(oldp+333,(vlSelf->ysyx_23060240__DOT__UART__DOT__w_hand));
        bufp->chgIData(oldp+334,(vlSelf->ysyx_23060240__DOT__UART__DOT__wdata),32);
        bufp->chgBit(oldp+335,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__arb_ready));
        bufp->chgCData(oldp+336,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__state),4);
        bufp->chgBit(oldp+337,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__wait_read));
    }
    bufp->chgBit(oldp+338,(vlSelf->clk));
    bufp->chgBit(oldp+339,(vlSelf->rst));
    bufp->chgIData(oldp+340,(vlSelf->inst),32);
    bufp->chgIData(oldp+341,(vlSelf->pc),32);
    bufp->chgBit(oldp+342,(vlSelf->difftest));
    bufp->chgBit(oldp+343,(vlSelf->itrace_reg));
    bufp->chgIData(oldp+344,(((2U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                               ? ((1U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                                   ? ((4U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                       ? ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                                    ? vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out)))
                                       : ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                               : (0xffU 
                                                  & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                           : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                               : 0U)))
                                   : vlSelf->ysyx_23060240__DOT__alu_out)
                               : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : vlSelf->ysyx_23060240__DOT__r_csr_data))),32);
    bufp->chgIData(oldp+345,(((IData)(4U) + vlSelf->pc)),32);
}

void Vysyx_23060240___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_cleanup\n"); );
    // Init
    Vysyx_23060240___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060240___024root*>(voidSelf);
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
