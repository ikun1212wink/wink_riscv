// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VNPC__Syms.h"


VL_ATTR_COLD void VNPC___024root__trace_init_sub__TOP__0(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+201,"clk", false,-1);
    tracep->declBit(c+202,"rst", false,-1);
    tracep->declBus(c+203,"inst", false,-1, 31,0);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("NPC ");
    tracep->declBit(c+201,"clk", false,-1);
    tracep->declBit(c+202,"rst", false,-1);
    tracep->declBus(c+203,"inst", false,-1, 31,0);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->declBus(c+89,"alu_a", false,-1, 31,0);
    tracep->declBus(c+90,"alu_b", false,-1, 31,0);
    tracep->declBus(c+91,"alu_out", false,-1, 31,0);
    tracep->declBit(c+26,"alu_a_sel", false,-1);
    tracep->declBit(c+27,"alu_b_sel", false,-1);
    tracep->declBus(c+28,"alu_func", false,-1, 3,0);
    tracep->declBus(c+205,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+92,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+206,"w_en", false,-1);
    tracep->declBus(c+29,"w_sel", false,-1, 1,0);
    tracep->declBus(c+207,"w_data", false,-1, 31,0);
    tracep->declBit(c+208,"jump_en", false,-1);
    tracep->declBus(c+209,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+30,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+89,"SrcA", false,-1, 31,0);
    tracep->declBus(c+90,"SrcB", false,-1, 31,0);
    tracep->declBus(c+28,"alu_func", false,-1, 3,0);
    tracep->declBus(c+91,"ALUout", false,-1, 31,0);
    tracep->declBus(c+89,"signed_a", false,-1, 31,0);
    tracep->declBus(c+90,"signed_b", false,-1, 31,0);
    tracep->declBus(c+89,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+90,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+93,"a0", false,-1, 31,0);
    tracep->declBus(c+94,"a1", false,-1, 31,0);
    tracep->declBus(c+95,"a2", false,-1, 31,0);
    tracep->declBus(c+96,"a3", false,-1, 31,0);
    tracep->declBus(c+97,"a4", false,-1, 31,0);
    tracep->declBus(c+98,"a5", false,-1, 31,0);
    tracep->declBus(c+99,"a6", false,-1, 31,0);
    tracep->declBus(c+244,"a7", false,-1, 31,0);
    tracep->declBus(c+100,"a8", false,-1, 31,0);
    tracep->declBus(c+244,"a9", false,-1, 31,0);
    tracep->declBus(c+244,"a10", false,-1, 31,0);
    tracep->declBus(c+244,"a11", false,-1, 31,0);
    tracep->declBus(c+244,"a12", false,-1, 31,0);
    tracep->declBus(c+101,"a13", false,-1, 31,0);
    tracep->declBus(c+90,"a14", false,-1, 31,0);
    tracep->declBus(c+244,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+245,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+246,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+91,"out", false,-1, 31,0);
    tracep->declBus(c+28,"key", false,-1, 3,0);
    tracep->declArray(c+102,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+245,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+246,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+248,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+91,"out", false,-1, 31,0);
    tracep->declBus(c+28,"key", false,-1, 3,0);
    tracep->declBus(c+244,"default_out", false,-1, 31,0);
    tracep->declArray(c+102,"lut", false,-1, 575,0);
    tracep->declBus(c+249,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+120+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+152+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+168,"lut_out", false,-1, 31,0);
    tracep->declBit(c+31,"hit", false,-1);
    tracep->declBus(c+250,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+203,"inst", false,-1, 31,0);
    tracep->declBit(c+26,"alu_a_sel", false,-1);
    tracep->declBit(c+27,"alu_b_sel", false,-1);
    tracep->declBit(c+206,"w_en", false,-1);
    tracep->declBus(c+29,"w_sel", false,-1, 1,0);
    tracep->declBit(c+208,"jump_en", false,-1);
    tracep->declBus(c+28,"alu_func", false,-1, 3,0);
    tracep->declBus(c+210,"opcode", false,-1, 6,0);
    tracep->declBus(c+211,"funct3", false,-1, 2,0);
    tracep->declBus(c+212,"funct7", false,-1, 6,0);
    tracep->declBus(c+213,"funct12", false,-1, 11,0);
    tracep->declBit(c+214,"is_lui", false,-1);
    tracep->declBit(c+215,"is_auipc", false,-1);
    tracep->declBit(c+216,"is_jal", false,-1);
    tracep->declBit(c+32,"is_jalr", false,-1);
    tracep->declBit(c+217,"is_beq", false,-1);
    tracep->declBit(c+218,"is_bne", false,-1);
    tracep->declBit(c+219,"is_blt", false,-1);
    tracep->declBit(c+220,"is_bge", false,-1);
    tracep->declBit(c+221,"is_bltu", false,-1);
    tracep->declBit(c+222,"is_bgeu", false,-1);
    tracep->declBit(c+33,"is_lb", false,-1);
    tracep->declBit(c+34,"is_lh", false,-1);
    tracep->declBit(c+35,"is_lw", false,-1);
    tracep->declBit(c+36,"is_lbu", false,-1);
    tracep->declBit(c+37,"is_lhu", false,-1);
    tracep->declBit(c+223,"is_sb", false,-1);
    tracep->declBit(c+224,"is_sh", false,-1);
    tracep->declBit(c+225,"is_sw", false,-1);
    tracep->declBit(c+38,"is_addi", false,-1);
    tracep->declBit(c+39,"is_slti", false,-1);
    tracep->declBit(c+40,"is_sltiu", false,-1);
    tracep->declBit(c+41,"is_xori", false,-1);
    tracep->declBit(c+42,"is_ori", false,-1);
    tracep->declBit(c+43,"is_andi", false,-1);
    tracep->declBit(c+44,"is_slli", false,-1);
    tracep->declBit(c+45,"is_srli", false,-1);
    tracep->declBit(c+46,"is_srai", false,-1);
    tracep->declBit(c+47,"is_add", false,-1);
    tracep->declBit(c+48,"is_sub", false,-1);
    tracep->declBit(c+49,"is_sll", false,-1);
    tracep->declBit(c+50,"is_slt", false,-1);
    tracep->declBit(c+51,"is_sltu", false,-1);
    tracep->declBit(c+52,"is_xor", false,-1);
    tracep->declBit(c+53,"is_srl", false,-1);
    tracep->declBit(c+54,"is_sra", false,-1);
    tracep->declBit(c+55,"is_or", false,-1);
    tracep->declBit(c+56,"is_and", false,-1);
    tracep->declBit(c+226,"is_add_type", false,-1);
    tracep->declBit(c+57,"is_u_type", false,-1);
    tracep->declBit(c+216,"is_jump_type", false,-1);
    tracep->declBit(c+58,"is_b_type", false,-1);
    tracep->declBit(c+59,"is_r_type", false,-1);
    tracep->declBit(c+60,"is_i_type", false,-1);
    tracep->declBit(c+61,"is_s_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+203,"inst", false,-1, 31,0);
    tracep->declBus(c+30,"immout", false,-1, 31,0);
    tracep->declBus(c+210,"opcode", false,-1, 6,0);
    tracep->declBus(c+227,"out1", false,-1, 31,0);
    tracep->declBus(c+227,"out2", false,-1, 31,0);
    tracep->declBus(c+228,"out3", false,-1, 31,0);
    tracep->declBus(c+229,"out4", false,-1, 31,0);
    tracep->declBus(c+62,"out5", false,-1, 31,0);
    tracep->declBus(c+62,"out6", false,-1, 31,0);
    tracep->declBus(c+230,"out7", false,-1, 31,0);
    tracep->declBus(c+62,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+251,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+252,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+210,"key", false,-1, 6,0);
    tracep->declBus(c+244,"default_out", false,-1, 31,0);
    tracep->declArray(c+231,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+251,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+252,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+247,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+253,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+210,"key", false,-1, 6,0);
    tracep->declBus(c+244,"default_out", false,-1, 31,0);
    tracep->declArray(c+231,"lut", false,-1, 311,0);
    tracep->declBus(c+254,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+63+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+79+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+87,"lut_out", false,-1, 31,0);
    tracep->declBit(c+88,"hit", false,-1);
    tracep->declBus(c+255,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+201,"clk", false,-1);
    tracep->declBit(c+202,"rst", false,-1);
    tracep->declBit(c+208,"jump_en", false,-1);
    tracep->declBus(c+91,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+204,"pc", false,-1, 31,0);
    tracep->declBus(c+209,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+256,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+247,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+201,"clk", false,-1);
    tracep->declBus(c+207,"w_data", false,-1, 31,0);
    tracep->declBus(c+241,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+242,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+243,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+206,"w_en", false,-1);
    tracep->declBus(c+205,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+92,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+169+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+25,"i", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VNPC___024root__trace_init_top(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_init_top\n"); );
    // Body
    VNPC___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNPC___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VNPC___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VNPC___024root__trace_register(VNPC___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VNPC___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VNPC___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VNPC___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VNPC___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_top_0\n"); );
    // Init
    VNPC___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VNPC___024root*>(voidSelf);
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VNPC___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VNPC___024root__trace_full_sub_0(VNPC___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VNPC__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNPC___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<18>/*575:0*/ __Vtemp_ha10a2321__0;
    VlWide<10>/*319:0*/ __Vtemp_ha5c2c123__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+13,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+14,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+15,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+16,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
    bufp->fullCData(oldp+17,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+18,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+19,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+20,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+21,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+22,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+23,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+24,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+25,(vlSelf->NPC__DOT__Register__DOT__i),32);
    bufp->fullBit(oldp+26,(((IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))));
    bufp->fullBit(oldp+27,((1U & (~ (IData)(vlSelf->NPC__DOT__IDU__DOT__is_r_type)))));
    bufp->fullCData(oldp+28,(vlSelf->NPC__DOT__alu_func),4);
    bufp->fullCData(oldp+29,(vlSelf->NPC__DOT__w_sel),2);
    bufp->fullIData(oldp+30,(vlSelf->NPC__DOT__imm_out),32);
    bufp->fullBit(oldp+31,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+32,(vlSelf->NPC__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+33,(vlSelf->NPC__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+34,(vlSelf->NPC__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+35,(vlSelf->NPC__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+36,(vlSelf->NPC__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+37,(vlSelf->NPC__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+38,(vlSelf->NPC__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+39,(vlSelf->NPC__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+40,(vlSelf->NPC__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+41,(vlSelf->NPC__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+42,(vlSelf->NPC__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+43,(vlSelf->NPC__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+44,(vlSelf->NPC__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+45,(vlSelf->NPC__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+46,(vlSelf->NPC__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+47,(vlSelf->NPC__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+48,(vlSelf->NPC__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+49,(vlSelf->NPC__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+50,(vlSelf->NPC__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+51,(vlSelf->NPC__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+52,(vlSelf->NPC__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+53,(vlSelf->NPC__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+54,(vlSelf->NPC__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+55,(vlSelf->NPC__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+56,(vlSelf->NPC__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+57,(vlSelf->NPC__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+58,(vlSelf->NPC__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+59,(vlSelf->NPC__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+60,(((IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr) 
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
                                                                   | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_srai)))))))))))))))));
    bufp->fullBit(oldp+61,(vlSelf->NPC__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+62,(vlSelf->NPC__DOT__IMM__DOT__out5),32);
    bufp->fullQData(oldp+63,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+65,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+67,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+69,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+71,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+73,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+75,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+77,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+79,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+80,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+81,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+82,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+83,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+84,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+85,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+86,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+87,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+88,(vlSelf->NPC__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+89,(vlSelf->NPC__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+90,(vlSelf->NPC__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+91,(vlSelf->NPC__DOT__alu_out),32);
    bufp->fullIData(oldp+92,(vlSelf->NPC__DOT__rs2_data),32);
    bufp->fullIData(oldp+93,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                              + vlSelf->NPC__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+94,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                              << (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+95,((VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+96,(((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                               < vlSelf->NPC__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+97,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                              ^ vlSelf->NPC__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+98,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                              >> (0x1fU & vlSelf->NPC__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+99,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                              | vlSelf->NPC__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+100,((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                               - vlSelf->NPC__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+101,(VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                                             (0x1fU 
                                              & vlSelf->NPC__DOT__ALU__DOT__signed_b))),32);
    __Vtemp_ha10a2321__0[0U] = 0U;
    __Vtemp_ha10a2321__0[1U] = (0xfU | (vlSelf->NPC__DOT__ALU__DOT__signed_b 
                                        << 4U));
    __Vtemp_ha10a2321__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                          << 8U) | 
                                         (vlSelf->NPC__DOT__ALU__DOT__signed_b 
                                          >> 0x1cU)));
    __Vtemp_ha10a2321__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->NPC__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                          >> 0x18U));
    __Vtemp_ha10a2321__0[4U] = 0xc000U;
    __Vtemp_ha10a2321__0[5U] = 0xb0000U;
    __Vtemp_ha10a2321__0[6U] = 0xa00000U;
    __Vtemp_ha10a2321__0[7U] = (0x9000000U | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                               - vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                              << 0x1cU));
    __Vtemp_ha10a2321__0[8U] = (0x80000000U | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                - vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                               >> 4U));
    __Vtemp_ha10a2321__0[9U] = 0U;
    __Vtemp_ha10a2321__0[0xaU] = (7U | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                         | vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                        << 4U));
    __Vtemp_ha10a2321__0[0xbU] = (0x60U | (((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                            << 8U) 
                                           | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                               | vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                              >> 0x1cU)));
    __Vtemp_ha10a2321__0[0xcU] = (0x500U | (((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                              ^ vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                             << 0xcU) 
                                            | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                               >> 0x18U)));
    __Vtemp_ha10a2321__0[0xdU] = (0x4000U | ((((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                < vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                 ^ vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                                >> 0x14U)));
    __Vtemp_ha10a2321__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                   < vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_ha10a2321__0[0xfU] = (0x200000U | (((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->NPC__DOT__ALU__DOT__signed_a, vlSelf->NPC__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_ha10a2321__0[0x10U] = (0x1000000U | (((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                   + vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->NPC__DOT__ALU__DOT__signed_b)) 
                                                    >> 8U)));
    __Vtemp_ha10a2321__0[0x11U] = ((vlSelf->NPC__DOT__ALU__DOT__signed_a 
                                    + vlSelf->NPC__DOT__ALU__DOT__signed_b) 
                                   >> 4U);
    bufp->fullWData(oldp+102,(__Vtemp_ha10a2321__0),576);
    bufp->fullQData(oldp+120,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+122,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+124,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+126,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+128,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+130,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+132,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+134,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+136,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+138,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+140,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+142,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+144,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+146,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+148,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+150,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+152,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+153,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+154,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+155,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+156,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+157,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+158,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+159,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+160,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+161,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+162,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+163,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+164,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+165,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+166,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+167,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+168,(vlSelf->NPC__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+169,(vlSelf->NPC__DOT__Register__DOT__rf[0]),32);
    bufp->fullIData(oldp+170,(vlSelf->NPC__DOT__Register__DOT__rf[1]),32);
    bufp->fullIData(oldp+171,(vlSelf->NPC__DOT__Register__DOT__rf[2]),32);
    bufp->fullIData(oldp+172,(vlSelf->NPC__DOT__Register__DOT__rf[3]),32);
    bufp->fullIData(oldp+173,(vlSelf->NPC__DOT__Register__DOT__rf[4]),32);
    bufp->fullIData(oldp+174,(vlSelf->NPC__DOT__Register__DOT__rf[5]),32);
    bufp->fullIData(oldp+175,(vlSelf->NPC__DOT__Register__DOT__rf[6]),32);
    bufp->fullIData(oldp+176,(vlSelf->NPC__DOT__Register__DOT__rf[7]),32);
    bufp->fullIData(oldp+177,(vlSelf->NPC__DOT__Register__DOT__rf[8]),32);
    bufp->fullIData(oldp+178,(vlSelf->NPC__DOT__Register__DOT__rf[9]),32);
    bufp->fullIData(oldp+179,(vlSelf->NPC__DOT__Register__DOT__rf[10]),32);
    bufp->fullIData(oldp+180,(vlSelf->NPC__DOT__Register__DOT__rf[11]),32);
    bufp->fullIData(oldp+181,(vlSelf->NPC__DOT__Register__DOT__rf[12]),32);
    bufp->fullIData(oldp+182,(vlSelf->NPC__DOT__Register__DOT__rf[13]),32);
    bufp->fullIData(oldp+183,(vlSelf->NPC__DOT__Register__DOT__rf[14]),32);
    bufp->fullIData(oldp+184,(vlSelf->NPC__DOT__Register__DOT__rf[15]),32);
    bufp->fullIData(oldp+185,(vlSelf->NPC__DOT__Register__DOT__rf[16]),32);
    bufp->fullIData(oldp+186,(vlSelf->NPC__DOT__Register__DOT__rf[17]),32);
    bufp->fullIData(oldp+187,(vlSelf->NPC__DOT__Register__DOT__rf[18]),32);
    bufp->fullIData(oldp+188,(vlSelf->NPC__DOT__Register__DOT__rf[19]),32);
    bufp->fullIData(oldp+189,(vlSelf->NPC__DOT__Register__DOT__rf[20]),32);
    bufp->fullIData(oldp+190,(vlSelf->NPC__DOT__Register__DOT__rf[21]),32);
    bufp->fullIData(oldp+191,(vlSelf->NPC__DOT__Register__DOT__rf[22]),32);
    bufp->fullIData(oldp+192,(vlSelf->NPC__DOT__Register__DOT__rf[23]),32);
    bufp->fullIData(oldp+193,(vlSelf->NPC__DOT__Register__DOT__rf[24]),32);
    bufp->fullIData(oldp+194,(vlSelf->NPC__DOT__Register__DOT__rf[25]),32);
    bufp->fullIData(oldp+195,(vlSelf->NPC__DOT__Register__DOT__rf[26]),32);
    bufp->fullIData(oldp+196,(vlSelf->NPC__DOT__Register__DOT__rf[27]),32);
    bufp->fullIData(oldp+197,(vlSelf->NPC__DOT__Register__DOT__rf[28]),32);
    bufp->fullIData(oldp+198,(vlSelf->NPC__DOT__Register__DOT__rf[29]),32);
    bufp->fullIData(oldp+199,(vlSelf->NPC__DOT__Register__DOT__rf[30]),32);
    bufp->fullIData(oldp+200,(vlSelf->NPC__DOT__Register__DOT__rf[31]),32);
    bufp->fullBit(oldp+201,(vlSelf->clk));
    bufp->fullBit(oldp+202,(vlSelf->rst));
    bufp->fullIData(oldp+203,(vlSelf->inst),32);
    bufp->fullIData(oldp+204,(vlSelf->pc),32);
    bufp->fullIData(oldp+205,(vlSelf->NPC__DOT__Register__DOT__rf
                              [(0x1fU & (vlSelf->inst 
                                         >> 0xfU))]),32);
    bufp->fullBit(oldp+206,(((IData)(vlSelf->NPC__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgTmp_h42947eb4__0)))));
    bufp->fullIData(oldp+207,(((2U & (IData)(vlSelf->NPC__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->NPC__DOT__w_sel))
                                    ? 0U : vlSelf->NPC__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->NPC__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : 0U))),32);
    bufp->fullBit(oldp+208,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->NPC__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullIData(oldp+209,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+210,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+211,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+212,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+213,((vlSelf->inst >> 0x14U)),12);
    bufp->fullBit(oldp+214,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+215,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+216,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+217,((IData)((0x63U == (0x707fU 
                                               & vlSelf->inst)))));
    bufp->fullBit(oldp+218,((IData)((0x1063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+219,((IData)((0x4063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+220,((IData)((0x5063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+221,((IData)((0x6063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+222,((IData)((0x7063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+223,((IData)((0x23U == (0x707fU 
                                               & vlSelf->inst)))));
    bufp->fullBit(oldp+224,((IData)((0x1023U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+225,((IData)((0x2023U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+226,(((0x17U == (0x7fU & vlSelf->inst)) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_jalr) 
                                   | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_b_type) 
                                      | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_s_type) 
                                         | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lb) 
                                            | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lh) 
                                               | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lw) 
                                                  | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lbu) 
                                                     | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_lhu) 
                                                        | ((IData)(vlSelf->NPC__DOT__IDU__DOT__is_add) 
                                                           | (IData)(vlSelf->NPC__DOT__IDU__DOT__is_addi))))))))))))));
    bufp->fullIData(oldp+227,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+228,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+229,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+230,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->inst 
                                                  >> 7U))))),32);
    __Vtemp_ha5c2c123__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->NPC__DOT__IMM__DOT__out5))));
    __Vtemp_ha5c2c123__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->inst 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->inst)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->NPC__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_ha5c2c123__0[2U] = (0x1180U | ((vlSelf->NPC__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->inst 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_ha5c2c123__0[3U] = (0xc000U | ((vlSelf->NPC__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->NPC__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_ha5c2c123__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->inst 
                                                  << 8U)) 
                                              | (vlSelf->NPC__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_ha5c2c123__0[5U] = (0xf0000000U | (0xfffffffU 
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
    __Vtemp_ha5c2c123__0[6U] = (6U | (0xfffffff8U & 
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
    __Vtemp_ha5c2c123__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->inst 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_ha5c2c123__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->inst 
                                               << 0x11U)) 
                                           | (vlSelf->inst 
                                              >> 0x16U)));
    __Vtemp_ha5c2c123__0[9U] = (0x2e0000U | (vlSelf->inst 
                                             >> 0xfU));
    bufp->fullWData(oldp+231,(__Vtemp_ha5c2c123__0),312);
    bufp->fullCData(oldp+241,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+242,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+243,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+244,(0U),32);
    bufp->fullIData(oldp+245,(0x10U),32);
    bufp->fullIData(oldp+246,(4U),32);
    bufp->fullIData(oldp+247,(0x20U),32);
    bufp->fullIData(oldp+248,(0U),32);
    bufp->fullIData(oldp+249,(0x24U),32);
    bufp->fullIData(oldp+250,(0x10U),32);
    bufp->fullIData(oldp+251,(8U),32);
    bufp->fullIData(oldp+252,(7U),32);
    bufp->fullIData(oldp+253,(1U),32);
    bufp->fullIData(oldp+254,(0x27U),32);
    bufp->fullIData(oldp+255,(8U),32);
    bufp->fullIData(oldp+256,(5U),32);
}
