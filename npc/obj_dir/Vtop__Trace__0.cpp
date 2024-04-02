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
    VlWide<18>/*575:0*/ __Vtemp_h944d4386__0;
    VlWide<10>/*319:0*/ __Vtemp_he4d5656d__0;
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
        bufp->chgBit(oldp+16,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
        bufp->chgCData(oldp+17,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
        bufp->chgCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
        bufp->chgCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
        bufp->chgCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
        bufp->chgCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
        bufp->chgCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
        bufp->chgCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
        bufp->chgIData(oldp+25,(vlSelf->top__DOT__Register__DOT__i),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__imm_out),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__IMM__DOT__out4),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__IMM__DOT__out6),32);
        bufp->chgQData(oldp+29,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
        bufp->chgQData(oldp+31,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
        bufp->chgQData(oldp+33,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
        bufp->chgQData(oldp+35,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
        bufp->chgQData(oldp+37,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
        bufp->chgQData(oldp+39,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
        bufp->chgQData(oldp+41,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
        bufp->chgQData(oldp+43,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
        bufp->chgIData(oldp+45,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+46,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+47,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+48,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+49,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
        bufp->chgBit(oldp+54,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgIData(oldp+55,(vlSelf->top__DOT__rs1_data),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT__alu_out),32);
        bufp->chgIData(oldp+57,((vlSelf->top__DOT__rs1_data 
                                 + vlSelf->top__DOT__imm_out)),32);
        bufp->chgIData(oldp+58,((vlSelf->top__DOT__rs1_data 
                                 << (0x1fU & vlSelf->top__DOT__imm_out))),32);
        bufp->chgIData(oldp+59,((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+60,(((vlSelf->top__DOT__rs1_data 
                                  < vlSelf->top__DOT__imm_out)
                                  ? 1U : 0U)),32);
        bufp->chgIData(oldp+61,((vlSelf->top__DOT__rs1_data 
                                 ^ vlSelf->top__DOT__imm_out)),32);
        bufp->chgIData(oldp+62,((vlSelf->top__DOT__rs1_data 
                                 >> (0x1fU & vlSelf->top__DOT__imm_out))),32);
        bufp->chgIData(oldp+63,((vlSelf->top__DOT__rs1_data 
                                 | vlSelf->top__DOT__imm_out)),32);
        bufp->chgIData(oldp+64,((vlSelf->top__DOT__rs1_data 
                                 - vlSelf->top__DOT__imm_out)),32);
        bufp->chgIData(oldp+65,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                               (0x1fU 
                                                & vlSelf->top__DOT__imm_out))),32);
        __Vtemp_h944d4386__0[0U] = 0U;
        __Vtemp_h944d4386__0[1U] = (0xfU | (vlSelf->top__DOT__imm_out 
                                            << 4U));
        __Vtemp_h944d4386__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                                             (0x1fU 
                                                              & vlSelf->top__DOT__imm_out)) 
                                              << 8U) 
                                             | (vlSelf->top__DOT__imm_out 
                                                >> 0x1cU)));
        __Vtemp_h944d4386__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                                             (0x1fU 
                                                              & vlSelf->top__DOT__imm_out)) 
                                              >> 0x18U));
        __Vtemp_h944d4386__0[4U] = 0xc000U;
        __Vtemp_h944d4386__0[5U] = 0xb0000U;
        __Vtemp_h944d4386__0[6U] = 0xa00000U;
        __Vtemp_h944d4386__0[7U] = (0x9000000U | ((vlSelf->top__DOT__rs1_data 
                                                   - vlSelf->top__DOT__imm_out) 
                                                  << 0x1cU));
        __Vtemp_h944d4386__0[8U] = (0x80000000U | (
                                                   (vlSelf->top__DOT__rs1_data 
                                                    - vlSelf->top__DOT__imm_out) 
                                                   >> 4U));
        __Vtemp_h944d4386__0[9U] = 0U;
        __Vtemp_h944d4386__0[0xaU] = (7U | ((vlSelf->top__DOT__rs1_data 
                                             | vlSelf->top__DOT__imm_out) 
                                            << 4U));
        __Vtemp_h944d4386__0[0xbU] = (0x60U | (((vlSelf->top__DOT__rs1_data 
                                                 >> 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__imm_out)) 
                                                << 8U) 
                                               | ((vlSelf->top__DOT__rs1_data 
                                                   | vlSelf->top__DOT__imm_out) 
                                                  >> 0x1cU)));
        __Vtemp_h944d4386__0[0xcU] = (0x500U | (((vlSelf->top__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__imm_out) 
                                                 << 0xcU) 
                                                | ((vlSelf->top__DOT__rs1_data 
                                                    >> 
                                                    (0x1fU 
                                                     & vlSelf->top__DOT__imm_out)) 
                                                   >> 0x18U)));
        __Vtemp_h944d4386__0[0xdU] = (0x4000U | (((
                                                   (vlSelf->top__DOT__rs1_data 
                                                    < vlSelf->top__DOT__imm_out)
                                                    ? 1U
                                                    : 0U) 
                                                  << 0x10U) 
                                                 | ((vlSelf->top__DOT__rs1_data 
                                                     ^ vlSelf->top__DOT__imm_out) 
                                                    >> 0x14U)));
        __Vtemp_h944d4386__0[0xeU] = (0x30000U | ((
                                                   (VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                                                     ? 1U
                                                     : 0U) 
                                                   << 0x14U) 
                                                  | (((vlSelf->top__DOT__rs1_data 
                                                       < vlSelf->top__DOT__imm_out)
                                                       ? 1U
                                                       : 0U) 
                                                     >> 0x10U)));
        __Vtemp_h944d4386__0[0xfU] = (0x200000U | (
                                                   ((vlSelf->top__DOT__rs1_data 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__imm_out)) 
                                                    << 0x18U) 
                                                   | ((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                                                        ? 1U
                                                        : 0U) 
                                                      >> 0xcU)));
        __Vtemp_h944d4386__0[0x10U] = (0x1000000U | 
                                       (((vlSelf->top__DOT__rs1_data 
                                          + vlSelf->top__DOT__imm_out) 
                                         << 0x1cU) 
                                        | ((vlSelf->top__DOT__rs1_data 
                                            << (0x1fU 
                                                & vlSelf->top__DOT__imm_out)) 
                                           >> 8U)));
        __Vtemp_h944d4386__0[0x11U] = ((vlSelf->top__DOT__rs1_data 
                                        + vlSelf->top__DOT__imm_out) 
                                       >> 4U);
        bufp->chgWData(oldp+66,(__Vtemp_h944d4386__0),576);
        bufp->chgQData(oldp+84,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
        bufp->chgQData(oldp+86,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
        bufp->chgQData(oldp+88,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
        bufp->chgQData(oldp+90,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
        bufp->chgQData(oldp+92,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
        bufp->chgQData(oldp+94,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
        bufp->chgQData(oldp+96,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
        bufp->chgQData(oldp+98,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
        bufp->chgQData(oldp+100,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
        bufp->chgQData(oldp+102,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
        bufp->chgQData(oldp+104,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
        bufp->chgQData(oldp+106,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
        bufp->chgQData(oldp+108,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
        bufp->chgQData(oldp+110,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
        bufp->chgQData(oldp+112,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
        bufp->chgQData(oldp+114,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
        bufp->chgIData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
        bufp->chgIData(oldp+119,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
        bufp->chgIData(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
        bufp->chgIData(oldp+121,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
        bufp->chgIData(oldp+122,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
        bufp->chgIData(oldp+123,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
        bufp->chgIData(oldp+124,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
        bufp->chgIData(oldp+125,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
        bufp->chgIData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
        bufp->chgIData(oldp+127,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
        bufp->chgIData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
        bufp->chgIData(oldp+129,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
        bufp->chgIData(oldp+130,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
        bufp->chgIData(oldp+131,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
        bufp->chgIData(oldp+132,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+133,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
        bufp->chgIData(oldp+134,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
        bufp->chgIData(oldp+135,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
        bufp->chgIData(oldp+136,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
        bufp->chgIData(oldp+137,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
        bufp->chgIData(oldp+138,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
        bufp->chgIData(oldp+139,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
        bufp->chgIData(oldp+140,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
        bufp->chgIData(oldp+141,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
        bufp->chgIData(oldp+142,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
        bufp->chgIData(oldp+143,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
        bufp->chgIData(oldp+144,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
        bufp->chgIData(oldp+145,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
        bufp->chgIData(oldp+146,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
        bufp->chgIData(oldp+147,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
        bufp->chgIData(oldp+148,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
        bufp->chgIData(oldp+149,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
        bufp->chgIData(oldp+150,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
        bufp->chgIData(oldp+151,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
        bufp->chgIData(oldp+152,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
        bufp->chgIData(oldp+153,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
        bufp->chgIData(oldp+154,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
        bufp->chgIData(oldp+155,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
        bufp->chgIData(oldp+156,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
        bufp->chgIData(oldp+157,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
        bufp->chgIData(oldp+158,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
        bufp->chgIData(oldp+159,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
        bufp->chgIData(oldp+160,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
        bufp->chgIData(oldp+161,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
        bufp->chgIData(oldp+162,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
        bufp->chgIData(oldp+163,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
        bufp->chgIData(oldp+164,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    }
    bufp->chgBit(oldp+165,(vlSelf->clk));
    bufp->chgBit(oldp+166,(vlSelf->rst));
    bufp->chgIData(oldp+167,(vlSelf->inst),32);
    bufp->chgIData(oldp+168,(vlSelf->pc),32);
    bufp->chgIData(oldp+169,(vlSelf->top__DOT__Register__DOT__rf
                             [(0x1fU & (vlSelf->inst 
                                        >> 0x14U))]),32);
    bufp->chgCData(oldp+170,((0x7fU & vlSelf->inst)),7);
    bufp->chgCData(oldp+171,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->chgCData(oldp+172,((vlSelf->inst >> 0x19U)),7);
    bufp->chgSData(oldp+173,((vlSelf->inst >> 0x14U)),12);
    bufp->chgIData(oldp+174,((0xfffff000U & vlSelf->inst)),32);
    bufp->chgIData(oldp+175,((((- (IData)((vlSelf->inst 
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
    bufp->chgIData(oldp+176,((((- (IData)((vlSelf->inst 
                                           >> 0x1fU))) 
                               << 0xcU) | ((0xfe0U 
                                            & (vlSelf->inst 
                                               >> 0x14U)) 
                                           | (0x1fU 
                                              & (vlSelf->inst 
                                                 >> 7U))))),32);
    __Vtemp_he4d5656d__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out6))));
    __Vtemp_he4d5656d__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->inst 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->inst)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out6))) 
                                           >> 0x20U)));
    __Vtemp_he4d5656d__0[2U] = (0x1180U | ((vlSelf->top__DOT__IMM__DOT__out6 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_he4d5656d__0[3U] = (0xc000U | ((vlSelf->top__DOT__IMM__DOT__out4 
                                            << 0x15U) 
                                           | (vlSelf->top__DOT__IMM__DOT__out6 
                                              >> 0x12U)));
    __Vtemp_he4d5656d__0[4U] = (0xce00000U | ((vlSelf->top__DOT__IMM__DOT__out4 
                                               << 0x1cU) 
                                              | (vlSelf->top__DOT__IMM__DOT__out4 
                                                 >> 0xbU)));
    __Vtemp_he4d5656d__0[5U] = (0xf0000000U | (vlSelf->top__DOT__IMM__DOT__out4 
                                               >> 4U));
    __Vtemp_he4d5656d__0[6U] = (6U | (0xfffffff8U & 
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
    __Vtemp_he4d5656d__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->inst 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_he4d5656d__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->inst 
                                               << 0x11U)) 
                                           | (vlSelf->inst 
                                              >> 0x16U)));
    __Vtemp_he4d5656d__0[9U] = (0x2e0000U | (vlSelf->inst 
                                             >> 0xfU));
    bufp->chgWData(oldp+177,(__Vtemp_he4d5656d__0),312);
    bufp->chgIData(oldp+187,(((IData)(4U) + vlSelf->pc)),32);
    bufp->chgCData(oldp+188,((0x1fU & (vlSelf->inst 
                                       >> 0xfU))),5);
    bufp->chgCData(oldp+189,((0x1fU & (vlSelf->inst 
                                       >> 0x14U))),5);
    bufp->chgCData(oldp+190,((0x1fU & (vlSelf->inst 
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
