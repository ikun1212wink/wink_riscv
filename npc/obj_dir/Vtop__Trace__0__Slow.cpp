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
    tracep->declBit(c+215,"clk", false,-1);
    tracep->declBit(c+216,"rst", false,-1);
    tracep->declBus(c+217,"inst", false,-1, 31,0);
    tracep->declBus(c+218,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+215,"clk", false,-1);
    tracep->declBit(c+216,"rst", false,-1);
    tracep->declBus(c+217,"inst", false,-1, 31,0);
    tracep->declBus(c+218,"pc", false,-1, 31,0);
    tracep->declBit(c+219,"jal", false,-1);
    tracep->declBit(c+26,"jalr", false,-1);
    tracep->declBus(c+100,"alu_a", false,-1, 31,0);
    tracep->declBus(c+101,"alu_b", false,-1, 31,0);
    tracep->declBus(c+102,"alu_out", false,-1, 31,0);
    tracep->declBit(c+27,"alu_a_sel", false,-1);
    tracep->declBit(c+28,"alu_b_sel", false,-1);
    tracep->declBus(c+29,"alu_func", false,-1, 3,0);
    tracep->declBus(c+30,"branch_type", false,-1, 2,0);
    tracep->declBus(c+31,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+32,"memory_wr_ctrl", false,-1, 1,0);
    tracep->declBus(c+103,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+33,"w_sel", false,-1, 1,0);
    tracep->declBus(c+221,"w_data", false,-1, 31,0);
    tracep->declBit(c+222,"jump_jtype", false,-1);
    tracep->declBit(c+105,"jump_branch", false,-1);
    tracep->declBit(c+223,"jump_en", false,-1);
    tracep->declBus(c+224,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+34,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+100,"SrcA", false,-1, 31,0);
    tracep->declBus(c+101,"SrcB", false,-1, 31,0);
    tracep->declBus(c+29,"alu_func", false,-1, 3,0);
    tracep->declBus(c+102,"ALUout", false,-1, 31,0);
    tracep->declBus(c+100,"signed_a", false,-1, 31,0);
    tracep->declBus(c+101,"signed_b", false,-1, 31,0);
    tracep->declBus(c+100,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+101,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+106,"a0", false,-1, 31,0);
    tracep->declBus(c+107,"a1", false,-1, 31,0);
    tracep->declBus(c+108,"a2", false,-1, 31,0);
    tracep->declBus(c+109,"a3", false,-1, 31,0);
    tracep->declBus(c+110,"a4", false,-1, 31,0);
    tracep->declBus(c+111,"a5", false,-1, 31,0);
    tracep->declBus(c+112,"a6", false,-1, 31,0);
    tracep->declBus(c+113,"a7", false,-1, 31,0);
    tracep->declBus(c+114,"a8", false,-1, 31,0);
    tracep->declBus(c+250,"a9", false,-1, 31,0);
    tracep->declBus(c+250,"a10", false,-1, 31,0);
    tracep->declBus(c+250,"a11", false,-1, 31,0);
    tracep->declBus(c+250,"a12", false,-1, 31,0);
    tracep->declBus(c+115,"a13", false,-1, 31,0);
    tracep->declBus(c+101,"a14", false,-1, 31,0);
    tracep->declBus(c+250,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+251,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+252,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->declBus(c+29,"key", false,-1, 3,0);
    tracep->declArray(c+116,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+251,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+252,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+102,"out", false,-1, 31,0);
    tracep->declBus(c+29,"key", false,-1, 3,0);
    tracep->declBus(c+250,"default_out", false,-1, 31,0);
    tracep->declArray(c+116,"lut", false,-1, 575,0);
    tracep->declBus(c+255,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+134+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+166+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+182,"lut_out", false,-1, 31,0);
    tracep->declBit(c+35,"hit", false,-1);
    tracep->declBus(c+256,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+103,"rs1", false,-1, 31,0);
    tracep->declBus(c+104,"rs2", false,-1, 31,0);
    tracep->declBus(c+30,"branch_type", false,-1, 2,0);
    tracep->declBit(c+105,"jump_branch", false,-1);
    tracep->declBus(c+103,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+104,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+103,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+104,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+217,"inst", false,-1, 31,0);
    tracep->declBit(c+27,"alu_a_sel", false,-1);
    tracep->declBit(c+28,"alu_b_sel", false,-1);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+33,"w_sel", false,-1, 1,0);
    tracep->declBit(c+222,"jump_jtype", false,-1);
    tracep->declBus(c+30,"branch_type", false,-1, 2,0);
    tracep->declBus(c+29,"alu_func", false,-1, 3,0);
    tracep->declBus(c+31,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+32,"memory_wr_ctrl", false,-1, 1,0);
    tracep->declBit(c+219,"is_jal", false,-1);
    tracep->declBit(c+26,"is_jalr", false,-1);
    tracep->declBus(c+225,"opcode", false,-1, 6,0);
    tracep->declBus(c+226,"funct3", false,-1, 2,0);
    tracep->declBus(c+227,"funct7", false,-1, 6,0);
    tracep->declBus(c+228,"funct12", false,-1, 11,0);
    tracep->declBit(c+229,"is_lui", false,-1);
    tracep->declBit(c+230,"is_auipc", false,-1);
    tracep->declBit(c+36,"is_beq", false,-1);
    tracep->declBit(c+37,"is_bne", false,-1);
    tracep->declBit(c+38,"is_blt", false,-1);
    tracep->declBit(c+39,"is_bge", false,-1);
    tracep->declBit(c+40,"is_bltu", false,-1);
    tracep->declBit(c+231,"is_bgeu", false,-1);
    tracep->declBit(c+41,"is_lb", false,-1);
    tracep->declBit(c+42,"is_lh", false,-1);
    tracep->declBit(c+43,"is_lw", false,-1);
    tracep->declBit(c+44,"is_lbu", false,-1);
    tracep->declBit(c+45,"is_lhu", false,-1);
    tracep->declBit(c+46,"is_sb", false,-1);
    tracep->declBit(c+47,"is_sh", false,-1);
    tracep->declBit(c+48,"is_sw", false,-1);
    tracep->declBit(c+49,"is_addi", false,-1);
    tracep->declBit(c+50,"is_slti", false,-1);
    tracep->declBit(c+51,"is_sltiu", false,-1);
    tracep->declBit(c+52,"is_xori", false,-1);
    tracep->declBit(c+53,"is_ori", false,-1);
    tracep->declBit(c+54,"is_andi", false,-1);
    tracep->declBit(c+55,"is_slli", false,-1);
    tracep->declBit(c+56,"is_srli", false,-1);
    tracep->declBit(c+57,"is_srai", false,-1);
    tracep->declBit(c+58,"is_add", false,-1);
    tracep->declBit(c+59,"is_sub", false,-1);
    tracep->declBit(c+60,"is_sll", false,-1);
    tracep->declBit(c+61,"is_slt", false,-1);
    tracep->declBit(c+62,"is_sltu", false,-1);
    tracep->declBit(c+63,"is_xor", false,-1);
    tracep->declBit(c+64,"is_srl", false,-1);
    tracep->declBit(c+65,"is_sra", false,-1);
    tracep->declBit(c+66,"is_or", false,-1);
    tracep->declBit(c+67,"is_and", false,-1);
    tracep->declBit(c+232,"is_add_type", false,-1);
    tracep->declBit(c+68,"is_u_type", false,-1);
    tracep->declBit(c+219,"is_jump_type", false,-1);
    tracep->declBit(c+69,"is_b_type", false,-1);
    tracep->declBit(c+70,"is_r_type", false,-1);
    tracep->declBit(c+71,"is_i_type", false,-1);
    tracep->declBit(c+72,"is_s_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+217,"inst", false,-1, 31,0);
    tracep->declBus(c+34,"immout", false,-1, 31,0);
    tracep->declBus(c+225,"opcode", false,-1, 6,0);
    tracep->declBus(c+233,"out1", false,-1, 31,0);
    tracep->declBus(c+233,"out2", false,-1, 31,0);
    tracep->declBus(c+234,"out3", false,-1, 31,0);
    tracep->declBus(c+235,"out4", false,-1, 31,0);
    tracep->declBus(c+73,"out5", false,-1, 31,0);
    tracep->declBus(c+73,"out6", false,-1, 31,0);
    tracep->declBus(c+236,"out7", false,-1, 31,0);
    tracep->declBus(c+73,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+257,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+258,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->declBus(c+225,"key", false,-1, 6,0);
    tracep->declBus(c+250,"default_out", false,-1, 31,0);
    tracep->declArray(c+237,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+257,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+258,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+259,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+34,"out", false,-1, 31,0);
    tracep->declBus(c+225,"key", false,-1, 6,0);
    tracep->declBus(c+250,"default_out", false,-1, 31,0);
    tracep->declArray(c+237,"lut", false,-1, 311,0);
    tracep->declBus(c+260,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+74+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+90+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+98,"lut_out", false,-1, 31,0);
    tracep->declBit(c+99,"hit", false,-1);
    tracep->declBus(c+261,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+215,"clk", false,-1);
    tracep->declBit(c+216,"rst", false,-1);
    tracep->declBit(c+223,"jump_en", false,-1);
    tracep->declBus(c+102,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+218,"pc", false,-1, 31,0);
    tracep->declBus(c+224,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+262,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+253,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+215,"clk", false,-1);
    tracep->declBus(c+221,"w_data", false,-1, 31,0);
    tracep->declBus(c+247,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+248,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+249,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+220,"w_en", false,-1);
    tracep->declBus(c+103,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+104,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+183+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+25,"i", false,-1, 31,0);
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
    VlWide<18>/*575:0*/ __Vtemp_hcf9c2e3d__0;
    VlWide<10>/*319:0*/ __Vtemp_hc64486e3__0;
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
    bufp->fullCData(oldp+17,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullIData(oldp+25,(vlSelf->top__DOT__Register__DOT__i),32);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__jalr));
    bufp->fullBit(oldp+27,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))));
    bufp->fullBit(oldp+28,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type)))));
    bufp->fullCData(oldp+29,(vlSelf->top__DOT__alu_func),4);
    bufp->fullCData(oldp+30,(vlSelf->top__DOT__branch_type),3);
    bufp->fullCData(oldp+31,(vlSelf->top__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__memory_wr_ctrl),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__w_sel),2);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__imm_out),32);
    bufp->fullBit(oldp+35,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+36,(vlSelf->top__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+40,(vlSelf->top__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+42,(vlSelf->top__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+43,(vlSelf->top__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+44,(vlSelf->top__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+54,(vlSelf->top__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+59,(vlSelf->top__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+64,(vlSelf->top__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+66,(vlSelf->top__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+68,(vlSelf->top__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+70,(vlSelf->top__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+71,(((IData)(vlSelf->top__DOT__jalr) 
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
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+73,(vlSelf->top__DOT__IMM__DOT__out5),32);
    bufp->fullQData(oldp+74,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+76,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+80,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+82,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+84,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+86,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+88,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+90,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+91,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+93,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+94,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+95,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+99,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__alu_out),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+105,(vlSelf->top__DOT__jump_branch));
    bufp->fullIData(oldp+106,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+107,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+108,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+109,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                < vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+110,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+111,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+112,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+113,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+114,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+115,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                             (0x1fU 
                                              & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    __Vtemp_hcf9c2e3d__0[0U] = 0U;
    __Vtemp_hcf9c2e3d__0[1U] = (0xfU | (vlSelf->top__DOT__ALU__DOT__signed_b 
                                        << 4U));
    __Vtemp_hcf9c2e3d__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                          << 8U) | 
                                         (vlSelf->top__DOT__ALU__DOT__signed_b 
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
    __Vtemp_hcf9c2e3d__0[8U] = (0x80000000U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                - vlSelf->top__DOT__ALU__DOT__signed_b) 
                                               >> 4U));
    __Vtemp_hcf9c2e3d__0[9U] = (vlSelf->top__DOT__ALU__DOT__signed_a 
                                & vlSelf->top__DOT__ALU__DOT__signed_b);
    __Vtemp_hcf9c2e3d__0[0xaU] = (7U | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                         | vlSelf->top__DOT__ALU__DOT__signed_b) 
                                        << 4U));
    __Vtemp_hcf9c2e3d__0[0xbU] = (0x60U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
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
    __Vtemp_hcf9c2e3d__0[0xdU] = (0x4000U | ((((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                < vlSelf->top__DOT__ALU__DOT__signed_b)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                 ^ vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                >> 0x14U)));
    __Vtemp_hcf9c2e3d__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   < vlSelf->top__DOT__ALU__DOT__signed_b)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_hcf9c2e3d__0[0xfU] = (0x200000U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_hcf9c2e3d__0[0x10U] = (0x1000000U | (((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                   + vlSelf->top__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->top__DOT__ALU__DOT__signed_b)) 
                                                    >> 8U)));
    __Vtemp_hcf9c2e3d__0[0x11U] = ((vlSelf->top__DOT__ALU__DOT__signed_a 
                                    + vlSelf->top__DOT__ALU__DOT__signed_b) 
                                   >> 4U);
    bufp->fullWData(oldp+116,(__Vtemp_hcf9c2e3d__0),576);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+162,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+164,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullIData(oldp+183,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    bufp->fullBit(oldp+215,(vlSelf->clk));
    bufp->fullBit(oldp+216,(vlSelf->rst));
    bufp->fullIData(oldp+217,(vlSelf->inst),32);
    bufp->fullIData(oldp+218,(vlSelf->pc),32);
    bufp->fullBit(oldp+219,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+220,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0)))));
    bufp->fullIData(oldp+221,(((2U & (IData)(vlSelf->top__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? 0U : vlSelf->top__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : 0U))),32);
    bufp->fullBit(oldp+222,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0))));
    bufp->fullBit(oldp+223,(((IData)(vlSelf->top__DOT__jump_branch) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0)))));
    bufp->fullIData(oldp+224,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+225,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+226,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+227,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+228,((vlSelf->inst >> 0x14U)),12);
    bufp->fullBit(oldp+229,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+230,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+231,((IData)((0x7063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+232,(((0x17U == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+233,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+234,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+235,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+236,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+237,(__Vtemp_hc64486e3__0),312);
    bufp->fullCData(oldp+247,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+248,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+249,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+250,(0U),32);
    bufp->fullIData(oldp+251,(0x10U),32);
    bufp->fullIData(oldp+252,(4U),32);
    bufp->fullIData(oldp+253,(0x20U),32);
    bufp->fullIData(oldp+254,(0U),32);
    bufp->fullIData(oldp+255,(0x24U),32);
    bufp->fullIData(oldp+256,(0x10U),32);
    bufp->fullIData(oldp+257,(8U),32);
    bufp->fullIData(oldp+258,(7U),32);
    bufp->fullIData(oldp+259,(1U),32);
    bufp->fullIData(oldp+260,(0x27U),32);
    bufp->fullIData(oldp+261,(8U),32);
    bufp->fullIData(oldp+262,(5U),32);
}
