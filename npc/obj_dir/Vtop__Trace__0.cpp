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
    VlWide<10>/*319:0*/ __Vtemp_hc64486e3__0;
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
        bufp->chgCData(oldp+16,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+24,(vlSelf->top__DOT__Register__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__jalr));
        bufp->chgBit(oldp+26,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))));
        bufp->chgBit(oldp+27,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type)))));
        bufp->chgCData(oldp+28,(vlSelf->top__DOT__alu_func),4);
        bufp->chgCData(oldp+29,(vlSelf->top__DOT__branch_type),3);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__memory_rd_ctrl),3);
        bufp->chgCData(oldp+31,(vlSelf->top__DOT__memory_wr_ctrl),2);
        bufp->chgCData(oldp+32,(vlSelf->top__DOT__w_sel),2);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__imm_out),32);
        bufp->chgBit(oldp+34,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
        bufp->chgBit(oldp+35,(vlSelf->top__DOT__IDU__DOT__is_beq));
        bufp->chgBit(oldp+36,(vlSelf->top__DOT__IDU__DOT__is_bne));
        bufp->chgBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__is_blt));
        bufp->chgBit(oldp+38,(vlSelf->top__DOT__IDU__DOT__is_bge));
        bufp->chgBit(oldp+39,(vlSelf->top__DOT__IDU__DOT__is_bltu));
        bufp->chgBit(oldp+40,(vlSelf->top__DOT__IDU__DOT__is_lb));
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__IDU__DOT__is_lh));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__IDU__DOT__is_lw));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__IDU__DOT__is_lbu));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__IDU__DOT__is_lhu));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__IDU__DOT__is_sb));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__IDU__DOT__is_sh));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__IDU__DOT__is_sw));
        bufp->chgBit(oldp+48,(vlSelf->top__DOT__IDU__DOT__is_addi));
        bufp->chgBit(oldp+49,(vlSelf->top__DOT__IDU__DOT__is_slti));
        bufp->chgBit(oldp+50,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
        bufp->chgBit(oldp+51,(vlSelf->top__DOT__IDU__DOT__is_xori));
        bufp->chgBit(oldp+52,(vlSelf->top__DOT__IDU__DOT__is_ori));
        bufp->chgBit(oldp+53,(vlSelf->top__DOT__IDU__DOT__is_andi));
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__IDU__DOT__is_slli));
        bufp->chgBit(oldp+55,(vlSelf->top__DOT__IDU__DOT__is_srli));
        bufp->chgBit(oldp+56,(vlSelf->top__DOT__IDU__DOT__is_srai));
        bufp->chgBit(oldp+57,(vlSelf->top__DOT__IDU__DOT__is_add));
        bufp->chgBit(oldp+58,(vlSelf->top__DOT__IDU__DOT__is_sub));
        bufp->chgBit(oldp+59,(vlSelf->top__DOT__IDU__DOT__is_sll));
        bufp->chgBit(oldp+60,(vlSelf->top__DOT__IDU__DOT__is_slt));
        bufp->chgBit(oldp+61,(vlSelf->top__DOT__IDU__DOT__is_sltu));
        bufp->chgBit(oldp+62,(vlSelf->top__DOT__IDU__DOT__is_xor));
        bufp->chgBit(oldp+63,(vlSelf->top__DOT__IDU__DOT__is_srl));
        bufp->chgBit(oldp+64,(vlSelf->top__DOT__IDU__DOT__is_sra));
        bufp->chgBit(oldp+65,(vlSelf->top__DOT__IDU__DOT__is_or));
        bufp->chgBit(oldp+66,(vlSelf->top__DOT__IDU__DOT__is_and));
        bufp->chgBit(oldp+67,(vlSelf->top__DOT__IDU__DOT__is_u_type));
        bufp->chgBit(oldp+68,(vlSelf->top__DOT__IDU__DOT__is_b_type));
        bufp->chgBit(oldp+69,(vlSelf->top__DOT__IDU__DOT__is_r_type));
        bufp->chgBit(oldp+70,(((IData)(vlSelf->top__DOT__jalr) 
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
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)))))))))))))))));
        bufp->chgBit(oldp+71,(vlSelf->top__DOT__IDU__DOT__is_s_type));
        bufp->chgIData(oldp+72,(vlSelf->top__DOT__IMM__DOT__out5),32);
        bufp->chgQData(oldp+73,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+75,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+77,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+79,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+81,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+83,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+85,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+87,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+98,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__alu_out),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
        bufp->chgBit(oldp+104,(vlSelf->top__DOT__jump_branch));
        bufp->chgIData(oldp+105,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+106,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+107,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+108,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                   < vlSelf->top__DOT__ALU__DOT__signed_b)
                                   ? 1U : 0U)),32);
        bufp->chgIData(oldp+109,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+110,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
        bufp->chgIData(oldp+111,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+112,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+113,((vlSelf->top__DOT__ALU__DOT__signed_a 
                                  - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
        bufp->chgIData(oldp+114,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
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
        bufp->chgWData(oldp+115,(__Vtemp_hcf9c2e3d__0),576);
        bufp->chgQData(oldp+133,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+135,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+137,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+139,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+141,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+143,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+145,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+147,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+149,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+151,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+153,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+155,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+157,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+159,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+161,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+163,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+165,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+166,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+167,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+168,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+169,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+170,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+171,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+172,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+173,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+174,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+175,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+176,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+177,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+178,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+179,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+180,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+181,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+182,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
        bufp->chgIData(oldp+183,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
        bufp->chgIData(oldp+184,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
        bufp->chgIData(oldp+185,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
        bufp->chgIData(oldp+186,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
        bufp->chgIData(oldp+187,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
        bufp->chgIData(oldp+188,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
        bufp->chgIData(oldp+189,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
        bufp->chgIData(oldp+190,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
        bufp->chgIData(oldp+191,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
        bufp->chgIData(oldp+192,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
        bufp->chgIData(oldp+193,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
        bufp->chgIData(oldp+194,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
        bufp->chgIData(oldp+195,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
        bufp->chgIData(oldp+196,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
        bufp->chgIData(oldp+197,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
        bufp->chgIData(oldp+198,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
        bufp->chgIData(oldp+199,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
        bufp->chgIData(oldp+200,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
        bufp->chgIData(oldp+201,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
        bufp->chgIData(oldp+202,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
        bufp->chgIData(oldp+203,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
        bufp->chgIData(oldp+204,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
        bufp->chgIData(oldp+205,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
        bufp->chgIData(oldp+206,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
        bufp->chgIData(oldp+207,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
        bufp->chgIData(oldp+208,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
        bufp->chgIData(oldp+209,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
        bufp->chgIData(oldp+210,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
        bufp->chgIData(oldp+211,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
        bufp->chgIData(oldp+212,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
        bufp->chgIData(oldp+213,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+214,(vlSelf->clk));
    bufp->chgBit(oldp+215,(vlSelf->rst));
    bufp->chgIData(oldp+216,(vlSelf->inst),32);
    bufp->chgIData(oldp+217,(vlSelf->pc),32);
    bufp->chgBit(oldp+218,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+219,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                            | ((0x6fU == (0x7fU & vlSelf->inst)) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0)))));
    bufp->chgIData(oldp+220,(((2U & (IData)(vlSelf->top__DOT__w_sel))
                               ? ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                   ? 0U : vlSelf->top__DOT__alu_out)
                               : ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                   ? ((IData)(4U) + vlSelf->pc)
                                   : 0U))),32);
    bufp->chgBit(oldp+221,(((0x6fU == (0x7fU & vlSelf->inst)) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0))));
    bufp->chgBit(oldp+222,(((IData)(vlSelf->top__DOT__jump_branch) 
                            | ((0x6fU == (0x7fU & vlSelf->inst)) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0)))));
    bufp->chgIData(oldp+223,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+224,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+225,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+226,((vlSelf->inst >> 0x19U)),7);
    bufp->chgSData(oldp+227,((vlSelf->inst >> 0x14U)),12);
    bufp->chgBit(oldp+228,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+229,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->chgBit(oldp+230,((IData)((0x7063U == (0x707fU 
                                                & vlSelf->inst)))));
    bufp->chgBit(oldp+231,(((0x17U == (0x7fU & vlSelf->inst)) 
                            | ((0x6fU == (0x7fU & vlSelf->inst)) 
                               | ((IData)(vlSelf->top__DOT__jalr) 
                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_b_type) 
                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                        | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                           | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                              | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                    | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                                       | ((IData)(vlSelf->top__DOT__IDU__DOT__is_add) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi))))))))))))));
    bufp->chgIData(oldp+232,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+233,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0x800U 
                                            & (vlSelf->inst 
                                               << 4U)) 
                                           | ((0x7e0U 
                                               & (vlSelf->inst 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlSelf->inst 
                                                    >> 7U)))))),32);
    bufp->chgIData(oldp+234,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0x14U) | ((0xff000U 
                                             & vlSelf->inst) 
                                            | ((0x800U 
                                                & (vlSelf->inst 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlSelf->inst 
                                                     >> 0x14U)))))),32);
    bufp->chgIData(oldp+235,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    __Vtemp_hc64486e3__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))));
    __Vtemp_hc64486e3__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->inst 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->inst)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_hc64486e3__0[2U] = (0x1180U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_hc64486e3__0[3U] = (0xc000U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->top__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_hc64486e3__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->inst 
                                                  << 8U)) 
                                              | (vlSelf->top__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_hc64486e3__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->inst 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->inst 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->inst 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->inst 
                                                              >> 0x18U)))))));
    __Vtemp_hc64486e3__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->inst 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->inst 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->inst 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->inst 
                                             >> 4U)))))));
    __Vtemp_hc64486e3__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->inst 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_hc64486e3__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->inst 
                                               << 0x11U)) 
                                           | (vlSelf->inst 
                                              >> 0x16U)));
    __Vtemp_hc64486e3__0[9U] = (0x2e0000U | (vlSelf->inst 
                                             >> 0xfU));
    bufp->chgWData(oldp+236,(__Vtemp_hc64486e3__0),312);
    bufp->chgCData(oldp+246,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+247,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+248,((0x1fU & (vlSelf->inst 
                                       >> 7U))),5);
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
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
