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
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBus(c+195,"inst", false,-1, 31,0);
    tracep->declBus(c+196,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBus(c+195,"inst", false,-1, 31,0);
    tracep->declBus(c+196,"pc", false,-1, 31,0);
    tracep->declBus(c+83,"alu_a", false,-1, 31,0);
    tracep->declBus(c+51,"alu_b", false,-1, 31,0);
    tracep->declBus(c+84,"alu_out", false,-1, 31,0);
    tracep->declBus(c+197,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+198,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+52,"alu_a_sel", false,-1);
    tracep->declBit(c+220,"alu_b_sel", false,-1);
    tracep->declBus(c+51,"imm_out", false,-1, 31,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+221,"alu_func", false,-1, 3,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+83,"SrcA", false,-1, 31,0);
    tracep->declBus(c+51,"SrcB", false,-1, 31,0);
    tracep->declBus(c+221,"alu_func", false,-1, 3,0);
    tracep->declBus(c+84,"ALUout", false,-1, 31,0);
    tracep->declBus(c+83,"signed_a", false,-1, 31,0);
    tracep->declBus(c+51,"signed_b", false,-1, 31,0);
    tracep->declBus(c+83,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+51,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+85,"a0", false,-1, 31,0);
    tracep->declBus(c+86,"a1", false,-1, 31,0);
    tracep->declBus(c+87,"a2", false,-1, 31,0);
    tracep->declBus(c+88,"a3", false,-1, 31,0);
    tracep->declBus(c+89,"a4", false,-1, 31,0);
    tracep->declBus(c+90,"a5", false,-1, 31,0);
    tracep->declBus(c+91,"a6", false,-1, 31,0);
    tracep->declBus(c+222,"a7", false,-1, 31,0);
    tracep->declBus(c+92,"a8", false,-1, 31,0);
    tracep->declBus(c+222,"a9", false,-1, 31,0);
    tracep->declBus(c+222,"a10", false,-1, 31,0);
    tracep->declBus(c+222,"a11", false,-1, 31,0);
    tracep->declBus(c+222,"a12", false,-1, 31,0);
    tracep->declBus(c+93,"a13", false,-1, 31,0);
    tracep->declBus(c+51,"a14", false,-1, 31,0);
    tracep->declBus(c+222,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+223,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+224,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+221,"key", false,-1, 3,0);
    tracep->declArray(c+94,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+223,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+224,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+226,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+84,"out", false,-1, 31,0);
    tracep->declBus(c+221,"key", false,-1, 3,0);
    tracep->declBus(c+222,"default_out", false,-1, 31,0);
    tracep->declArray(c+94,"lut", false,-1, 575,0);
    tracep->declBus(c+227,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+112+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+144+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+160,"lut_out", false,-1, 31,0);
    tracep->declBit(c+17,"hit", false,-1);
    tracep->declBus(c+228,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+195,"inst", false,-1, 31,0);
    tracep->declBit(c+52,"alu_a_sel", false,-1);
    tracep->declBit(c+220,"alu_b_sel", false,-1);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+221,"alu_func", false,-1, 3,0);
    tracep->declBus(c+199,"opcode", false,-1, 6,0);
    tracep->declBus(c+200,"funct3", false,-1, 2,0);
    tracep->declBus(c+201,"funct7", false,-1, 6,0);
    tracep->declBus(c+202,"funct12", false,-1, 11,0);
    tracep->declBit(c+220,"alu_a_sel_imm", false,-1);
    tracep->declBit(c+229,"alu_a_sel_pc", false,-1);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+230,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+231,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+232,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+52,"out", false,-1, 0,0);
    tracep->declBus(c+199,"key", false,-1, 6,0);
    tracep->declBus(c+220,"default_out", false,-1, 0,0);
    tracep->declQuad(c+233,"lut", false,-1, 63,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+230,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+231,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+232,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+232,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+52,"out", false,-1, 0,0);
    tracep->declBus(c+199,"key", false,-1, 6,0);
    tracep->declBus(c+220,"default_out", false,-1, 0,0);
    tracep->declQuad(c+233,"lut", false,-1, 63,0);
    tracep->declBus(c+230,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"pair_list", true,(i+0), 7,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+26+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+34+i*1,"data_list", true,(i+0), 0,0);
    }
    tracep->declBus(c+53,"lut_out", false,-1, 0,0);
    tracep->declBit(c+54,"hit", false,-1);
    tracep->declBus(c+235,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+195,"inst", false,-1, 31,0);
    tracep->declBus(c+51,"immout", false,-1, 31,0);
    tracep->declBus(c+199,"opcode", false,-1, 6,0);
    tracep->declBus(c+203,"out1", false,-1, 31,0);
    tracep->declBus(c+203,"out2", false,-1, 31,0);
    tracep->declBus(c+204,"out3", false,-1, 31,0);
    tracep->declBus(c+55,"out4", false,-1, 31,0);
    tracep->declBus(c+55,"out5", false,-1, 31,0);
    tracep->declBus(c+56,"out6", false,-1, 31,0);
    tracep->declBus(c+205,"out7", false,-1, 31,0);
    tracep->declBus(c+56,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+230,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+231,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+199,"key", false,-1, 6,0);
    tracep->declBus(c+222,"default_out", false,-1, 31,0);
    tracep->declArray(c+206,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+230,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+231,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+225,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+232,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+199,"key", false,-1, 6,0);
    tracep->declBus(c+222,"default_out", false,-1, 31,0);
    tracep->declArray(c+206,"lut", false,-1, 311,0);
    tracep->declBus(c+236,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+57+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+42+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+73+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+81,"lut_out", false,-1, 31,0);
    tracep->declBit(c+82,"hit", false,-1);
    tracep->declBus(c+235,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBit(c+194,"rst", false,-1);
    tracep->declBus(c+196,"pc", false,-1, 31,0);
    tracep->declBus(c+216,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+237,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+225,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+193,"clk", false,-1);
    tracep->declBus(c+84,"w_data", false,-1, 31,0);
    tracep->declBus(c+217,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+218,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+219,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+197,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+198,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+161+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+50,"i", false,-1, 31,0);
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
    VlWide<18>/*575:0*/ __Vtemp_h0b59cd22__0;
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
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),8);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),8);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),8);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),8);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),8);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),8);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),8);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),8);
    bufp->fullCData(oldp+26,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+27,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+28,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullBit(oldp+34,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[0]));
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[1]));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[2]));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[3]));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[4]));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[5]));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[6]));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__data_list[7]));
    bufp->fullCData(oldp+42,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+44,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+46,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+47,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+48,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+49,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__Register__DOT__i),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__imm_out),32);
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__alu_a_sel));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__lut_out));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__IDU__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__IMM__DOT__out4),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__IMM__DOT__out6),32);
    bufp->fullQData(oldp+57,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+59,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+61,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+63,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+65,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+67,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+69,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+74,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+76,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+77,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+78,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+79,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+80,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+81,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+83,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+84,(vlSelf->top__DOT__alu_out),32);
    bufp->fullIData(oldp+85,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              + vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+86,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              << (0x1fU & vlSelf->top__DOT__imm_out))),32);
    bufp->fullIData(oldp+87,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__imm_out)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+88,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                               < vlSelf->top__DOT__imm_out)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+89,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              ^ vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+90,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              >> (0x1fU & vlSelf->top__DOT__imm_out))),32);
    bufp->fullIData(oldp+91,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              | vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+92,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              - vlSelf->top__DOT__imm_out)),32);
    bufp->fullIData(oldp+93,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                            (0x1fU 
                                             & vlSelf->top__DOT__imm_out))),32);
    __Vtemp_h0b59cd22__0[0U] = 0U;
    __Vtemp_h0b59cd22__0[1U] = (0xfU | (vlSelf->top__DOT__imm_out 
                                        << 4U));
    __Vtemp_h0b59cd22__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->top__DOT__imm_out)) 
                                          << 8U) | 
                                         (vlSelf->top__DOT__imm_out 
                                          >> 0x1cU)));
    __Vtemp_h0b59cd22__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->top__DOT__imm_out)) 
                                          >> 0x18U));
    __Vtemp_h0b59cd22__0[4U] = 0xc000U;
    __Vtemp_h0b59cd22__0[5U] = 0xb0000U;
    __Vtemp_h0b59cd22__0[6U] = 0xa00000U;
    __Vtemp_h0b59cd22__0[7U] = (0x9000000U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                               - vlSelf->top__DOT__imm_out) 
                                              << 0x1cU));
    __Vtemp_h0b59cd22__0[8U] = (0x80000000U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                - vlSelf->top__DOT__imm_out) 
                                               >> 4U));
    __Vtemp_h0b59cd22__0[9U] = 0U;
    __Vtemp_h0b59cd22__0[0xaU] = (7U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                         | vlSelf->top__DOT__imm_out) 
                                        << 4U));
    __Vtemp_h0b59cd22__0[0xbU] = (0x60U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__imm_out)) 
                                            << 8U) 
                                           | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                               | vlSelf->top__DOT__imm_out) 
                                              >> 0x1cU)));
    __Vtemp_h0b59cd22__0[0xcU] = (0x500U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                              ^ vlSelf->top__DOT__imm_out) 
                                             << 0xcU) 
                                            | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->top__DOT__imm_out)) 
                                               >> 0x18U)));
    __Vtemp_h0b59cd22__0[0xdU] = (0x4000U | ((((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                < vlSelf->top__DOT__imm_out)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                 ^ vlSelf->top__DOT__imm_out) 
                                                >> 0x14U)));
    __Vtemp_h0b59cd22__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__imm_out)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   < vlSelf->top__DOT__imm_out)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_h0b59cd22__0[0xfU] = (0x200000U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__imm_out)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__imm_out)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_h0b59cd22__0[0x10U] = (0x1000000U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   + vlSelf->top__DOT__imm_out) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__imm_out)) 
                                                    >> 8U)));
    __Vtemp_h0b59cd22__0[0x11U] = ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                    + vlSelf->top__DOT__imm_out) 
                                   >> 4U);
    bufp->fullWData(oldp+94,(__Vtemp_h0b59cd22__0),576);
    bufp->fullQData(oldp+112,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+114,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+116,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+122,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+124,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    bufp->fullBit(oldp+193,(vlSelf->clk));
    bufp->fullBit(oldp+194,(vlSelf->rst));
    bufp->fullIData(oldp+195,(vlSelf->inst),32);
    bufp->fullIData(oldp+196,(vlSelf->pc),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Register__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Register__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0x14U))]),32);
    bufp->fullCData(oldp+199,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+200,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+201,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+202,((vlSelf->inst >> 0x14U)),12);
    bufp->fullIData(oldp+203,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+204,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+205,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+206,(__Vtemp_he4d5656d__0),312);
    bufp->fullIData(oldp+216,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+217,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+218,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+219,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullBit(oldp+220,(1U));
    bufp->fullCData(oldp+221,(0U),4);
    bufp->fullIData(oldp+222,(0U),32);
    bufp->fullIData(oldp+223,(0x10U),32);
    bufp->fullIData(oldp+224,(4U),32);
    bufp->fullIData(oldp+225,(0x20U),32);
    bufp->fullIData(oldp+226,(0U),32);
    bufp->fullIData(oldp+227,(0x24U),32);
    bufp->fullIData(oldp+228,(0x10U),32);
    bufp->fullBit(oldp+229,(0U));
    bufp->fullIData(oldp+230,(8U),32);
    bufp->fullIData(oldp+231,(7U),32);
    bufp->fullIData(oldp+232,(1U),32);
    bufp->fullQData(oldp+233,(0x2e6fc7dfcf074727ULL),64);
    bufp->fullIData(oldp+235,(8U),32);
    bufp->fullIData(oldp+236,(0x27U),32);
    bufp->fullIData(oldp+237,(5U),32);
}
