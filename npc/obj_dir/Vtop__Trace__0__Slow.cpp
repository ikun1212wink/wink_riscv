// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBus(c+168,"inst", false,-1, 31,0);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBus(c+168,"inst", false,-1, 31,0);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->declBus(c+56,"alu_a", false,-1, 31,0);
    tracep->declBus(c+27,"alu_b", false,-1, 31,0);
    tracep->declBus(c+57,"alu_out", false,-1, 31,0);
    tracep->declBus(c+56,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+170,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+192,"alu_a_sel", false,-1);
    tracep->declBit(c+192,"alu_b_sel", false,-1);
    tracep->declBus(c+27,"imm_out", false,-1, 31,0);
    tracep->declBit(c+192,"w_en", false,-1);
    tracep->declBus(c+193,"alu_func", false,-1, 3,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+56,"SrcA", false,-1, 31,0);
    tracep->declBus(c+27,"SrcB", false,-1, 31,0);
    tracep->declBus(c+193,"alu_func", false,-1, 3,0);
    tracep->declBus(c+57,"ALUout", false,-1, 31,0);
    tracep->declBus(c+56,"signed_a", false,-1, 31,0);
    tracep->declBus(c+27,"signed_b", false,-1, 31,0);
    tracep->declBus(c+56,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+27,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+58,"a0", false,-1, 31,0);
    tracep->declBus(c+59,"a1", false,-1, 31,0);
    tracep->declBus(c+60,"a2", false,-1, 31,0);
    tracep->declBus(c+61,"a3", false,-1, 31,0);
    tracep->declBus(c+62,"a4", false,-1, 31,0);
    tracep->declBus(c+63,"a5", false,-1, 31,0);
    tracep->declBus(c+64,"a6", false,-1, 31,0);
    tracep->declBus(c+194,"a7", false,-1, 31,0);
    tracep->declBus(c+65,"a8", false,-1, 31,0);
    tracep->declBus(c+194,"a9", false,-1, 31,0);
    tracep->declBus(c+194,"a10", false,-1, 31,0);
    tracep->declBus(c+194,"a11", false,-1, 31,0);
    tracep->declBus(c+194,"a12", false,-1, 31,0);
    tracep->declBus(c+66,"a13", false,-1, 31,0);
    tracep->declBus(c+27,"a14", false,-1, 31,0);
    tracep->declBus(c+194,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+195,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+57,"out", false,-1, 31,0);
    tracep->declBus(c+193,"key", false,-1, 3,0);
    tracep->declArray(c+67,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+195,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+196,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+198,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+57,"out", false,-1, 31,0);
    tracep->declBus(c+193,"key", false,-1, 3,0);
    tracep->declBus(c+194,"default_out", false,-1, 31,0);
    tracep->declArray(c+67,"lut", false,-1, 575,0);
    tracep->declBus(c+199,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+85+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+117+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+133,"lut_out", false,-1, 31,0);
    tracep->declBit(c+17,"hit", false,-1);
    tracep->declBus(c+200,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+168,"inst", false,-1, 31,0);
    tracep->declBit(c+192,"alu_a_sel", false,-1);
    tracep->declBit(c+192,"alu_b_sel", false,-1);
    tracep->declBit(c+192,"w_en", false,-1);
    tracep->declBus(c+193,"alu_func", false,-1, 3,0);
    tracep->declBus(c+171,"opcode", false,-1, 6,0);
    tracep->declBus(c+172,"funct3", false,-1, 2,0);
    tracep->declBus(c+173,"funct7", false,-1, 6,0);
    tracep->declBus(c+174,"funct12", false,-1, 11,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+168,"inst", false,-1, 31,0);
    tracep->declBus(c+27,"immout", false,-1, 31,0);
    tracep->declBus(c+171,"opcode", false,-1, 6,0);
    tracep->declBus(c+175,"out1", false,-1, 31,0);
    tracep->declBus(c+175,"out2", false,-1, 31,0);
    tracep->declBus(c+176,"out3", false,-1, 31,0);
    tracep->declBus(c+28,"out4", false,-1, 31,0);
    tracep->declBus(c+28,"out5", false,-1, 31,0);
    tracep->declBus(c+29,"out6", false,-1, 31,0);
    tracep->declBus(c+177,"out7", false,-1, 31,0);
    tracep->declBus(c+29,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+27,"out", false,-1, 31,0);
    tracep->declBus(c+171,"key", false,-1, 6,0);
    tracep->declBus(c+194,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+201,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+202,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+203,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+27,"out", false,-1, 31,0);
    tracep->declBus(c+171,"key", false,-1, 6,0);
    tracep->declBus(c+194,"default_out", false,-1, 31,0);
    tracep->declArray(c+178,"lut", false,-1, 311,0);
    tracep->declBus(c+204,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+30+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+46+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+54,"lut_out", false,-1, 31,0);
    tracep->declBit(c+55,"hit", false,-1);
    tracep->declBus(c+205,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBit(c+167,"rst", false,-1);
    tracep->declBus(c+169,"pc", false,-1, 31,0);
    tracep->declBus(c+188,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+206,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+197,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+166,"clk", false,-1);
    tracep->declBus(c+57,"w_data", false,-1, 31,0);
    tracep->declBus(c+189,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+190,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+191,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+192,"w_en", false,-1);
    tracep->declBus(c+56,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+170,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+134+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+26,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<18>/*575:0*/ __Vtemp_h944d4386__0;
    VlWide<10>/*319:0*/ __Vtemp_he4d5656d__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+14,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+16,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
    bufp->fullBit(oldp+17,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__Register__DOT__i),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__imm_out),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__IMM__DOT__out4),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__IMM__DOT__out6),32);
    bufp->fullQData(oldp+30,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+32,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+34,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+36,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+38,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+40,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+42,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+44,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__rs1_data),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__alu_out),32);
    bufp->fullIData(oldp+58,((vlSelf->top__DOT__rs1_data 
                              + vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+59,((vlSelf->top__DOT__rs1_data 
                              << (0x1fU & vlSelf->top__DOT__imm_out))),32);
    bufp->fullIData(oldp+60,((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+61,(((vlSelf->top__DOT__rs1_data 
                               < vlSelf->top__DOT__imm_out)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+62,((vlSelf->top__DOT__rs1_data 
                              ^ vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+63,((vlSelf->top__DOT__rs1_data 
                              >> (0x1fU & vlSelf->top__DOT__imm_out))),32);
    bufp->fullIData(oldp+64,((vlSelf->top__DOT__rs1_data 
                              | vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+65,((vlSelf->top__DOT__rs1_data 
                              - vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+66,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                            (0x1fU 
                                             & vlSelf->top__DOT__imm_out))),32);
    __Vtemp_h944d4386__0[0U] = 0U;
    __Vtemp_h944d4386__0[1U] = (0xfU | (vlSelf->top__DOT__imm_out 
                                        << 4U));
    __Vtemp_h944d4386__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__rs1_data, 
                                                         (0x1fU 
                                                          & vlSelf->top__DOT__imm_out)) 
                                          << 8U) | 
                                         (vlSelf->top__DOT__imm_out 
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
    __Vtemp_h944d4386__0[8U] = (0x80000000U | ((vlSelf->top__DOT__rs1_data 
                                                - vlSelf->top__DOT__imm_out) 
                                               >> 4U));
    __Vtemp_h944d4386__0[9U] = 0U;
    __Vtemp_h944d4386__0[0xaU] = (7U | ((vlSelf->top__DOT__rs1_data 
                                         | vlSelf->top__DOT__imm_out) 
                                        << 4U));
    __Vtemp_h944d4386__0[0xbU] = (0x60U | (((vlSelf->top__DOT__rs1_data 
                                             >> (0x1fU 
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
    __Vtemp_h944d4386__0[0xdU] = (0x4000U | ((((vlSelf->top__DOT__rs1_data 
                                                < vlSelf->top__DOT__imm_out)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__rs1_data 
                                                 ^ vlSelf->top__DOT__imm_out) 
                                                >> 0x14U)));
    __Vtemp_h944d4386__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->top__DOT__rs1_data 
                                                   < vlSelf->top__DOT__imm_out)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_h944d4386__0[0xfU] = (0x200000U | (((vlSelf->top__DOT__rs1_data 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__imm_out)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->top__DOT__rs1_data, vlSelf->top__DOT__imm_out)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_h944d4386__0[0x10U] = (0x1000000U | (((vlSelf->top__DOT__rs1_data 
                                                   + vlSelf->top__DOT__imm_out) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->top__DOT__rs1_data 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__imm_out)) 
                                                    >> 8U)));
    __Vtemp_h944d4386__0[0x11U] = ((vlSelf->top__DOT__rs1_data 
                                    + vlSelf->top__DOT__imm_out) 
                                   >> 4U);
    bufp->fullWData(oldp+67,(__Vtemp_h944d4386__0),576);
    bufp->fullQData(oldp+85,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+91,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+95,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+103,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+105,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+107,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+109,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+111,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+113,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+115,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+129,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+130,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
    bufp->fullIData(oldp+135,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
    bufp->fullIData(oldp+136,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    bufp->fullBit(oldp+166,(vlSelf->clk));
    bufp->fullBit(oldp+167,(vlSelf->rst));
    bufp->fullIData(oldp+168,(vlSelf->inst),32);
    bufp->fullIData(oldp+169,(vlSelf->pc),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Register__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]),32);
    bufp->fullCData(oldp+171,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+172,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+173,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+174,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+175,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+176,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+177,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+178,(__Vtemp_he4d5656d__0),312);
    bufp->fullIData(oldp+188,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+189,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+190,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+191,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+192,(1U));
    bufp->fullCData(oldp+193,(0U),4);
    bufp->fullIData(oldp+194,(0U),32);
    bufp->fullIData(oldp+195,(0x10U),32);
    bufp->fullIData(oldp+196,(4U),32);
    bufp->fullIData(oldp+197,(0x20U),32);
    bufp->fullIData(oldp+198,(0U),32);
    bufp->fullIData(oldp+199,(0x24U),32);
    bufp->fullIData(oldp+200,(0x10U),32);
    bufp->fullIData(oldp+201,(8U),32);
    bufp->fullIData(oldp+202,(7U),32);
    bufp->fullIData(oldp+203,(1U),32);
    bufp->fullIData(oldp+204,(0x27U),32);
    bufp->fullIData(oldp+205,(8U),32);
    bufp->fullIData(oldp+206,(5U),32);
}
