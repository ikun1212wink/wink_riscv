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
    tracep->declBit(c+216,"clk", false,-1);
    tracep->declBit(c+217,"rst", false,-1);
    tracep->declBus(c+218,"inst", false,-1, 31,0);
    tracep->declBus(c+219,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+216,"clk", false,-1);
    tracep->declBit(c+217,"rst", false,-1);
    tracep->declBus(c+218,"inst", false,-1, 31,0);
    tracep->declBus(c+219,"pc", false,-1, 31,0);
    tracep->declBit(c+220,"jal", false,-1);
    tracep->declBit(c+26,"jalr", false,-1);
    tracep->declBus(c+27,"alu_a", false,-1, 31,0);
    tracep->declBus(c+28,"alu_b", false,-1, 31,0);
    tracep->declBus(c+29,"alu_out", false,-1, 31,0);
    tracep->declBit(c+30,"alu_a_sel", false,-1);
    tracep->declBit(c+31,"alu_b_sel", false,-1);
    tracep->declBus(c+32,"alu_func", false,-1, 3,0);
    tracep->declBus(c+33,"branch_type", false,-1, 2,0);
    tracep->declBus(c+34,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+35,"memory_wr_ctrl", false,-1, 1,0);
    tracep->declBit(c+36,"mem_rd_en", false,-1);
    tracep->declBit(c+37,"mem_wr_en", false,-1);
    tracep->declBus(c+38,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+39,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+221,"w_en", false,-1);
    tracep->declBus(c+40,"w_sel", false,-1, 1,0);
    tracep->declBus(c+222,"w_data", false,-1, 31,0);
    tracep->declBit(c+223,"jump_jtype", false,-1);
    tracep->declBit(c+41,"jump_branch", false,-1);
    tracep->declBit(c+224,"jump_en", false,-1);
    tracep->declBus(c+225,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+42,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+27,"SrcA", false,-1, 31,0);
    tracep->declBus(c+28,"SrcB", false,-1, 31,0);
    tracep->declBus(c+32,"alu_func", false,-1, 3,0);
    tracep->declBus(c+29,"ALUout", false,-1, 31,0);
    tracep->declBus(c+27,"signed_a", false,-1, 31,0);
    tracep->declBus(c+28,"signed_b", false,-1, 31,0);
    tracep->declBus(c+27,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+28,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+43,"a0", false,-1, 31,0);
    tracep->declBus(c+44,"a1", false,-1, 31,0);
    tracep->declBus(c+45,"a2", false,-1, 31,0);
    tracep->declBus(c+46,"a3", false,-1, 31,0);
    tracep->declBus(c+47,"a4", false,-1, 31,0);
    tracep->declBus(c+48,"a5", false,-1, 31,0);
    tracep->declBus(c+49,"a6", false,-1, 31,0);
    tracep->declBus(c+50,"a7", false,-1, 31,0);
    tracep->declBus(c+51,"a8", false,-1, 31,0);
    tracep->declBus(c+251,"a9", false,-1, 31,0);
    tracep->declBus(c+251,"a10", false,-1, 31,0);
    tracep->declBus(c+251,"a11", false,-1, 31,0);
    tracep->declBus(c+251,"a12", false,-1, 31,0);
    tracep->declBus(c+52,"a13", false,-1, 31,0);
    tracep->declBus(c+28,"a14", false,-1, 31,0);
    tracep->declBus(c+251,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+252,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+32,"key", false,-1, 3,0);
    tracep->declArray(c+53,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+252,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+253,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+255,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+29,"out", false,-1, 31,0);
    tracep->declBus(c+32,"key", false,-1, 3,0);
    tracep->declBus(c+251,"default_out", false,-1, 31,0);
    tracep->declArray(c+53,"lut", false,-1, 575,0);
    tracep->declBus(c+256,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+71+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+103+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+119,"lut_out", false,-1, 31,0);
    tracep->declBit(c+120,"hit", false,-1);
    tracep->declBus(c+257,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+38,"rs1", false,-1, 31,0);
    tracep->declBus(c+39,"rs2", false,-1, 31,0);
    tracep->declBus(c+33,"branch_type", false,-1, 2,0);
    tracep->declBit(c+41,"jump_branch", false,-1);
    tracep->declBus(c+38,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+39,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+38,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+39,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+218,"inst", false,-1, 31,0);
    tracep->declBit(c+30,"alu_a_sel", false,-1);
    tracep->declBit(c+31,"alu_b_sel", false,-1);
    tracep->declBit(c+221,"w_en", false,-1);
    tracep->declBus(c+40,"w_sel", false,-1, 1,0);
    tracep->declBit(c+223,"jump_jtype", false,-1);
    tracep->declBus(c+33,"branch_type", false,-1, 2,0);
    tracep->declBus(c+32,"alu_func", false,-1, 3,0);
    tracep->declBus(c+34,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+35,"memory_wr_ctrl", false,-1, 1,0);
    tracep->declBit(c+36,"mem_rd_en", false,-1);
    tracep->declBit(c+37,"mem_wr_en", false,-1);
    tracep->declBit(c+220,"is_jal", false,-1);
    tracep->declBit(c+26,"is_jalr", false,-1);
    tracep->declBus(c+226,"opcode", false,-1, 6,0);
    tracep->declBus(c+227,"funct3", false,-1, 2,0);
    tracep->declBus(c+228,"funct7", false,-1, 6,0);
    tracep->declBus(c+229,"funct12", false,-1, 11,0);
    tracep->declBit(c+230,"is_lui", false,-1);
    tracep->declBit(c+231,"is_auipc", false,-1);
    tracep->declBit(c+121,"is_beq", false,-1);
    tracep->declBit(c+122,"is_bne", false,-1);
    tracep->declBit(c+123,"is_blt", false,-1);
    tracep->declBit(c+124,"is_bge", false,-1);
    tracep->declBit(c+125,"is_bltu", false,-1);
    tracep->declBit(c+232,"is_bgeu", false,-1);
    tracep->declBit(c+126,"is_lb", false,-1);
    tracep->declBit(c+127,"is_lh", false,-1);
    tracep->declBit(c+128,"is_lw", false,-1);
    tracep->declBit(c+129,"is_lbu", false,-1);
    tracep->declBit(c+130,"is_lhu", false,-1);
    tracep->declBit(c+131,"is_sb", false,-1);
    tracep->declBit(c+132,"is_sh", false,-1);
    tracep->declBit(c+133,"is_sw", false,-1);
    tracep->declBit(c+134,"is_addi", false,-1);
    tracep->declBit(c+135,"is_slti", false,-1);
    tracep->declBit(c+136,"is_sltiu", false,-1);
    tracep->declBit(c+137,"is_xori", false,-1);
    tracep->declBit(c+138,"is_ori", false,-1);
    tracep->declBit(c+139,"is_andi", false,-1);
    tracep->declBit(c+140,"is_slli", false,-1);
    tracep->declBit(c+141,"is_srli", false,-1);
    tracep->declBit(c+142,"is_srai", false,-1);
    tracep->declBit(c+143,"is_add", false,-1);
    tracep->declBit(c+144,"is_sub", false,-1);
    tracep->declBit(c+145,"is_sll", false,-1);
    tracep->declBit(c+146,"is_slt", false,-1);
    tracep->declBit(c+147,"is_sltu", false,-1);
    tracep->declBit(c+148,"is_xor", false,-1);
    tracep->declBit(c+149,"is_srl", false,-1);
    tracep->declBit(c+150,"is_sra", false,-1);
    tracep->declBit(c+151,"is_or", false,-1);
    tracep->declBit(c+152,"is_and", false,-1);
    tracep->declBit(c+233,"is_add_type", false,-1);
    tracep->declBit(c+153,"is_u_type", false,-1);
    tracep->declBit(c+220,"is_jump_type", false,-1);
    tracep->declBit(c+154,"is_b_type", false,-1);
    tracep->declBit(c+155,"is_r_type", false,-1);
    tracep->declBit(c+156,"is_i_type", false,-1);
    tracep->declBit(c+37,"is_s_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+218,"inst", false,-1, 31,0);
    tracep->declBus(c+42,"immout", false,-1, 31,0);
    tracep->declBus(c+226,"opcode", false,-1, 6,0);
    tracep->declBus(c+234,"out1", false,-1, 31,0);
    tracep->declBus(c+234,"out2", false,-1, 31,0);
    tracep->declBus(c+235,"out3", false,-1, 31,0);
    tracep->declBus(c+236,"out4", false,-1, 31,0);
    tracep->declBus(c+157,"out5", false,-1, 31,0);
    tracep->declBus(c+157,"out6", false,-1, 31,0);
    tracep->declBus(c+237,"out7", false,-1, 31,0);
    tracep->declBus(c+157,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+258,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+259,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+42,"out", false,-1, 31,0);
    tracep->declBus(c+226,"key", false,-1, 6,0);
    tracep->declBus(c+251,"default_out", false,-1, 31,0);
    tracep->declArray(c+238,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+258,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+259,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+260,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+42,"out", false,-1, 31,0);
    tracep->declBus(c+226,"key", false,-1, 6,0);
    tracep->declBus(c+251,"default_out", false,-1, 31,0);
    tracep->declArray(c+238,"lut", false,-1, 311,0);
    tracep->declBus(c+261,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+158+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+17+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+174+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+182,"lut_out", false,-1, 31,0);
    tracep->declBit(c+183,"hit", false,-1);
    tracep->declBus(c+262,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("MEM ");
    tracep->declBus(c+219,"pc", false,-1, 31,0);
    tracep->declBit(c+36,"mem_rd_en", false,-1);
    tracep->declBit(c+37,"mem_wr_en", false,-1);
    tracep->declBus(c+34,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+35,"memory_wr_ctrl", false,-1, 1,0);
    tracep->declBus(c+39,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+29,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+29,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+218,"inst", false,-1, 31,0);
    tracep->declBus(c+222,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+263,"mem_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Pc ");
    tracep->declBit(c+216,"clk", false,-1);
    tracep->declBit(c+217,"rst", false,-1);
    tracep->declBit(c+224,"jump_en", false,-1);
    tracep->declBus(c+29,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+219,"pc", false,-1, 31,0);
    tracep->declBus(c+225,"pc_plus4", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Register ");
    tracep->declBus(c+264,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+254,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+216,"clk", false,-1);
    tracep->declBus(c+222,"w_data", false,-1, 31,0);
    tracep->declBus(c+248,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+249,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+250,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+221,"w_en", false,-1);
    tracep->declBus(c+38,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+39,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+184+i*1,"rf", true,(i+0), 31,0);
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
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__alu_out),32);
    bufp->fullBit(oldp+30,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0))));
    bufp->fullBit(oldp+31,((1U & (~ (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type)))));
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__alu_func),4);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__branch_type),3);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__memory_wr_ctrl),2);
    bufp->fullBit(oldp+36,(((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)))))));
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullCData(oldp+40,(vlSelf->top__DOT__w_sel),2);
    bufp->fullBit(oldp+41,(vlSelf->top__DOT__jump_branch));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__imm_out),32);
    bufp->fullIData(oldp+43,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+44,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+45,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+46,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                               < vlSelf->top__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+47,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+48,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+49,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+50,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+51,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+52,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+53,(__Vtemp_hcf9c2e3d__0),576);
    bufp->fullQData(oldp+71,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+73,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+75,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+77,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+79,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+81,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+83,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+85,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+87,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+89,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+91,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+93,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+95,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+97,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+99,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+101,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+123,(vlSelf->top__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+125,(vlSelf->top__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+126,(vlSelf->top__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+127,(vlSelf->top__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+128,(vlSelf->top__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+130,(vlSelf->top__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+131,(vlSelf->top__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+132,(vlSelf->top__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+133,(vlSelf->top__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+134,(vlSelf->top__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+135,(vlSelf->top__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+136,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+137,(vlSelf->top__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+138,(vlSelf->top__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+139,(vlSelf->top__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+140,(vlSelf->top__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+141,(vlSelf->top__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+142,(vlSelf->top__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+143,(vlSelf->top__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+144,(vlSelf->top__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+145,(vlSelf->top__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+146,(vlSelf->top__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+147,(vlSelf->top__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+148,(vlSelf->top__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+149,(vlSelf->top__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+150,(vlSelf->top__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+151,(vlSelf->top__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+152,(vlSelf->top__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+153,(vlSelf->top__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+154,(vlSelf->top__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+156,(((IData)(vlSelf->top__DOT__jalr) 
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
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__IMM__DOT__out5),32);
    bufp->fullQData(oldp+158,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+160,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+162,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+164,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+166,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+168,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+170,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+172,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+175,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+176,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+178,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+179,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+180,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+181,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__Register__DOT__rf[0]),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__Register__DOT__rf[1]),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__Register__DOT__rf[2]),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__Register__DOT__rf[3]),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__Register__DOT__rf[4]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__Register__DOT__rf[5]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__Register__DOT__rf[6]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__Register__DOT__rf[7]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__Register__DOT__rf[8]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__Register__DOT__rf[9]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__Register__DOT__rf[10]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__Register__DOT__rf[11]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__Register__DOT__rf[12]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__Register__DOT__rf[13]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__Register__DOT__rf[14]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__Register__DOT__rf[15]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__Register__DOT__rf[16]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__Register__DOT__rf[17]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__Register__DOT__rf[18]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__Register__DOT__rf[19]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__Register__DOT__rf[20]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__Register__DOT__rf[21]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__Register__DOT__rf[22]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__Register__DOT__rf[23]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__Register__DOT__rf[24]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__Register__DOT__rf[25]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__Register__DOT__rf[26]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__Register__DOT__rf[27]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__Register__DOT__rf[28]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__Register__DOT__rf[29]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__Register__DOT__rf[30]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__Register__DOT__rf[31]),32);
    bufp->fullBit(oldp+216,(vlSelf->clk));
    bufp->fullBit(oldp+217,(vlSelf->rst));
    bufp->fullIData(oldp+218,(vlSelf->inst),32);
    bufp->fullIData(oldp+219,(vlSelf->pc),32);
    bufp->fullBit(oldp+220,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+221,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h42947eb4__0)))));
    bufp->fullIData(oldp+222,(((2U & (IData)(vlSelf->top__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? 0U : vlSelf->top__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : 0U))),32);
    bufp->fullBit(oldp+223,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0))));
    bufp->fullBit(oldp+224,(((IData)(vlSelf->top__DOT__jump_branch) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_h834c0bbe__0)))));
    bufp->fullIData(oldp+225,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+226,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+227,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+228,((vlSelf->inst >> 0x19U)),7);
    bufp->fullSData(oldp+229,((vlSelf->inst >> 0x14U)),12);
    bufp->fullBit(oldp+230,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+231,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+232,((IData)((0x7063U == (0x707fU 
                                                 & vlSelf->inst)))));
    bufp->fullBit(oldp+233,(((0x17U == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+234,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+235,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+236,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+237,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+238,(__Vtemp_hc64486e3__0),312);
    bufp->fullCData(oldp+248,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+249,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+250,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+251,(0U),32);
    bufp->fullIData(oldp+252,(0x10U),32);
    bufp->fullIData(oldp+253,(4U),32);
    bufp->fullIData(oldp+254,(0x20U),32);
    bufp->fullIData(oldp+255,(0U),32);
    bufp->fullIData(oldp+256,(0x24U),32);
    bufp->fullIData(oldp+257,(0x10U),32);
    bufp->fullIData(oldp+258,(8U),32);
    bufp->fullIData(oldp+259,(7U),32);
    bufp->fullIData(oldp+260,(1U),32);
    bufp->fullIData(oldp+261,(0x27U),32);
    bufp->fullIData(oldp+262,(8U),32);
    bufp->fullIData(oldp+263,(vlSelf->top__DOT__MEM__DOT__mem_out),32);
    bufp->fullIData(oldp+264,(5U),32);
}
