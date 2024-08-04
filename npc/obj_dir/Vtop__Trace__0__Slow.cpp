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
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBit(c+264,"rst", false,-1);
    tracep->declBus(c+265,"inst", false,-1, 31,0);
    tracep->declBus(c+266,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBit(c+264,"rst", false,-1);
    tracep->declBus(c+265,"inst", false,-1, 31,0);
    tracep->declBus(c+266,"pc", false,-1, 31,0);
    tracep->declBit(c+26,"jal", false,-1);
    tracep->declBit(c+27,"jalr", false,-1);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+28,"r_csr_en", false,-1);
    tracep->declBus(c+29,"alu_a", false,-1, 31,0);
    tracep->declBus(c+30,"alu_b", false,-1, 31,0);
    tracep->declBus(c+31,"alu_out", false,-1, 31,0);
    tracep->declBit(c+32,"alu_a_sel", false,-1);
    tracep->declBus(c+33,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+34,"alu_func", false,-1, 3,0);
    tracep->declBus(c+35,"branch_type", false,-1, 2,0);
    tracep->declBus(c+36,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+37,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+38,"mem_rd_en", false,-1);
    tracep->declBit(c+39,"mem_wr_en", false,-1);
    tracep->declBus(c+40,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+42,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+44,"w_en", false,-1);
    tracep->declBus(c+45,"w_sel", false,-1, 1,0);
    tracep->declBus(c+267,"w_data", false,-1, 31,0);
    tracep->declBus(c+46,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+47,"jump_jtype", false,-1);
    tracep->declBit(c+48,"jump_ecall", false,-1);
    tracep->declBit(c+49,"jump_mret", false,-1);
    tracep->declBit(c+50,"jump_branch", false,-1);
    tracep->declBus(c+268,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+51,"imm_out", false,-1, 31,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+29,"SrcA", false,-1, 31,0);
    tracep->declBus(c+30,"SrcB", false,-1, 31,0);
    tracep->declBus(c+34,"alu_func", false,-1, 3,0);
    tracep->declBus(c+31,"ALUout", false,-1, 31,0);
    tracep->declBus(c+29,"signed_a", false,-1, 31,0);
    tracep->declBus(c+30,"signed_b", false,-1, 31,0);
    tracep->declBus(c+29,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+30,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+52,"a0", false,-1, 31,0);
    tracep->declBus(c+53,"a1", false,-1, 31,0);
    tracep->declBus(c+54,"a2", false,-1, 31,0);
    tracep->declBus(c+55,"a3", false,-1, 31,0);
    tracep->declBus(c+56,"a4", false,-1, 31,0);
    tracep->declBus(c+57,"a5", false,-1, 31,0);
    tracep->declBus(c+58,"a6", false,-1, 31,0);
    tracep->declBus(c+59,"a7", false,-1, 31,0);
    tracep->declBus(c+60,"a8", false,-1, 31,0);
    tracep->declBus(c+269,"a9", false,-1, 31,0);
    tracep->declBus(c+269,"a10", false,-1, 31,0);
    tracep->declBus(c+269,"a11", false,-1, 31,0);
    tracep->declBus(c+269,"a12", false,-1, 31,0);
    tracep->declBus(c+61,"a13", false,-1, 31,0);
    tracep->declBus(c+30,"a14", false,-1, 31,0);
    tracep->declBus(c+269,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+270,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 3,0);
    tracep->declArray(c+62,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+270,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+271,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+273,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 3,0);
    tracep->declBus(c+269,"default_out", false,-1, 31,0);
    tracep->declArray(c+62,"lut", false,-1, 575,0);
    tracep->declBus(c+274,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+80+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+112+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+128,"lut_out", false,-1, 31,0);
    tracep->declBit(c+129,"hit", false,-1);
    tracep->declBus(c+275,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+42,"rs1", false,-1, 31,0);
    tracep->declBus(c+43,"rs2", false,-1, 31,0);
    tracep->declBus(c+35,"branch_type", false,-1, 2,0);
    tracep->declBit(c+50,"jump_branch", false,-1);
    tracep->declBus(c+42,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+43,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+42,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+43,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBus(c+266,"pc", false,-1, 31,0);
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBus(c+130,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+130,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+31,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+28,"r_csr_en", false,-1);
    tracep->declBit(c+49,"jump_mret", false,-1);
    tracep->declBit(c+48,"jump_ecall", false,-1);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+131,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+132,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+133,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+134,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+276,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBus(c+267,"w_data", false,-1, 31,0);
    tracep->declBus(c+135,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+136,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+137,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+44,"w_en", false,-1);
    tracep->declBus(c+42,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+138+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+265,"inst", false,-1, 31,0);
    tracep->declBit(c+32,"alu_a_sel", false,-1);
    tracep->declBus(c+33,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+44,"w_en", false,-1);
    tracep->declBus(c+45,"w_sel", false,-1, 1,0);
    tracep->declBit(c+47,"jump_jtype", false,-1);
    tracep->declBit(c+48,"jump_ecall", false,-1);
    tracep->declBit(c+49,"jump_mret", false,-1);
    tracep->declBus(c+35,"branch_type", false,-1, 2,0);
    tracep->declBus(c+34,"alu_func", false,-1, 3,0);
    tracep->declBus(c+36,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+37,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+38,"mem_rd_en", false,-1);
    tracep->declBit(c+39,"mem_wr_en", false,-1);
    tracep->declBit(c+26,"jal_signal", false,-1);
    tracep->declBit(c+27,"jalr_signal", false,-1);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+28,"r_csr_en", false,-1);
    tracep->declBus(c+170,"opcode", false,-1, 6,0);
    tracep->declBus(c+171,"funct3", false,-1, 2,0);
    tracep->declBus(c+172,"funct7", false,-1, 6,0);
    tracep->declBus(c+130,"funct12", false,-1, 11,0);
    tracep->declBus(c+173,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+174,"is_lui", false,-1);
    tracep->declBit(c+175,"is_auipc", false,-1);
    tracep->declBit(c+26,"is_jal", false,-1);
    tracep->declBit(c+27,"is_jalr", false,-1);
    tracep->declBit(c+176,"is_beq", false,-1);
    tracep->declBit(c+177,"is_bne", false,-1);
    tracep->declBit(c+178,"is_blt", false,-1);
    tracep->declBit(c+179,"is_bge", false,-1);
    tracep->declBit(c+180,"is_bltu", false,-1);
    tracep->declBit(c+181,"is_bgeu", false,-1);
    tracep->declBit(c+182,"is_lb", false,-1);
    tracep->declBit(c+183,"is_lh", false,-1);
    tracep->declBit(c+184,"is_lw", false,-1);
    tracep->declBit(c+185,"is_lbu", false,-1);
    tracep->declBit(c+186,"is_lhu", false,-1);
    tracep->declBit(c+187,"is_sb", false,-1);
    tracep->declBit(c+188,"is_sh", false,-1);
    tracep->declBit(c+189,"is_sw", false,-1);
    tracep->declBit(c+190,"is_addi", false,-1);
    tracep->declBit(c+191,"is_slti", false,-1);
    tracep->declBit(c+192,"is_sltiu", false,-1);
    tracep->declBit(c+193,"is_xori", false,-1);
    tracep->declBit(c+194,"is_ori", false,-1);
    tracep->declBit(c+195,"is_andi", false,-1);
    tracep->declBit(c+196,"is_slli", false,-1);
    tracep->declBit(c+197,"is_srli", false,-1);
    tracep->declBit(c+198,"is_srai", false,-1);
    tracep->declBit(c+199,"is_add", false,-1);
    tracep->declBit(c+200,"is_sub", false,-1);
    tracep->declBit(c+201,"is_sll", false,-1);
    tracep->declBit(c+202,"is_slt", false,-1);
    tracep->declBit(c+203,"is_sltu", false,-1);
    tracep->declBit(c+204,"is_xor", false,-1);
    tracep->declBit(c+205,"is_srl", false,-1);
    tracep->declBit(c+206,"is_sra", false,-1);
    tracep->declBit(c+207,"is_or", false,-1);
    tracep->declBit(c+208,"is_and", false,-1);
    tracep->declBit(c+209,"is_csrrs", false,-1);
    tracep->declBit(c+210,"is_csrrw", false,-1);
    tracep->declBit(c+48,"is_ecall", false,-1);
    tracep->declBit(c+49,"is_mret", false,-1);
    tracep->declBit(c+211,"is_add_type", false,-1);
    tracep->declBit(c+212,"is_u_type", false,-1);
    tracep->declBit(c+26,"is_jump_type", false,-1);
    tracep->declBit(c+213,"is_b_type", false,-1);
    tracep->declBit(c+214,"is_r_type", false,-1);
    tracep->declBit(c+215,"is_i_type", false,-1);
    tracep->declBit(c+39,"is_s_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBit(c+264,"rst", false,-1);
    tracep->declBit(c+216,"jump_en", false,-1);
    tracep->declBus(c+46,"jump_pc", false,-1, 31,0);
    tracep->declBus(c+266,"pc", false,-1, 31,0);
    tracep->declBus(c+265,"inst", false,-1, 31,0);
    tracep->declBus(c+266,"raddr", false,-1, 31,0);
    tracep->declBus(c+217,"rd_sram_data", false,-1, 31,0);
    tracep->declBit(c+218,"rd_sram_en", false,-1);
    tracep->pushNamePrefix("SRAM_IFU ");
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBus(c+266,"raddr", false,-1, 31,0);
    tracep->declBit(c+218,"r_en", false,-1);
    tracep->declBus(c+217,"rdata", false,-1, 31,0);
    tracep->declBus(c+219,"rdata_temp", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+265,"inst", false,-1, 31,0);
    tracep->declBus(c+51,"immout", false,-1, 31,0);
    tracep->declBus(c+170,"opcode", false,-1, 6,0);
    tracep->declBus(c+220,"out1", false,-1, 31,0);
    tracep->declBus(c+220,"out2", false,-1, 31,0);
    tracep->declBus(c+221,"out3", false,-1, 31,0);
    tracep->declBus(c+222,"out4", false,-1, 31,0);
    tracep->declBus(c+223,"out5", false,-1, 31,0);
    tracep->declBus(c+223,"out6", false,-1, 31,0);
    tracep->declBus(c+224,"out7", false,-1, 31,0);
    tracep->declBus(c+223,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+277,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+278,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 6,0);
    tracep->declBus(c+269,"default_out", false,-1, 31,0);
    tracep->declArray(c+225,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+277,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+278,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+272,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+279,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+170,"key", false,-1, 6,0);
    tracep->declBus(c+269,"default_out", false,-1, 31,0);
    tracep->declArray(c+225,"lut", false,-1, 311,0);
    tracep->declBus(c+280,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+235+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+251+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+259,"lut_out", false,-1, 31,0);
    tracep->declBit(c+260,"hit", false,-1);
    tracep->declBus(c+281,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+263,"clk", false,-1);
    tracep->declBit(c+38,"mem_rd_en", false,-1);
    tracep->declBit(c+39,"mem_wr_en", false,-1);
    tracep->declBus(c+36,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+37,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+43,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+31,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+31,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+40,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+261,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+262,"mem_out", false,-1, 31,0);
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
    VlWide<10>/*319:0*/ __Vtemp_h90c3dc8b__0;
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
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__GPR__DOT__i),32);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullBit(oldp+26,((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data))));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+28,(vlSelf->top__DOT__w_csr_en));
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__alu_out),32);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__alu_func),4);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__branch_type),3);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+37,(vlSelf->top__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__mem_rd_en));
    bufp->fullBit(oldp+39,(vlSelf->top__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+40,(((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
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
                                       : (0xffU & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                   : ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                       : 0U)))),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+44,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                            | ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data)) 
                               | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullCData(oldp+45,(vlSelf->top__DOT__w_sel),2);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                               ? vlSelf->top__DOT__alu_out
                               : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                   ? vlSelf->top__DOT__r_csr_data
                                   : 0U))),32);
    bufp->fullBit(oldp+47,(((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data)) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+48,(vlSelf->top__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+49,(vlSelf->top__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+50,(vlSelf->top__DOT__jump_branch));
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__imm_out),32);
    bufp->fullIData(oldp+52,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+53,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+54,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+55,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                               < vlSelf->top__DOT__ALU__DOT__signed_b)
                               ? 1U : 0U)),32);
    bufp->fullIData(oldp+56,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+57,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+58,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+59,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+60,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+61,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+62,(__Vtemp_hcf9c2e3d__0),576);
    bufp->fullQData(oldp+80,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+82,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+84,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+86,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+88,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+90,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+92,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+94,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+96,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+98,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+100,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+102,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+104,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+106,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+108,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+110,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+112,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+113,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+114,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+115,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+116,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+120,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+121,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+122,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+124,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+127,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+129,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullSData(oldp+130,((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+131,(vlSelf->top__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+132,(vlSelf->top__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+133,(vlSelf->top__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+134,(vlSelf->top__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullCData(oldp+135,((0x1fU & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+136,((0x1fU & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+137,((0x1fU & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                        >> 7U))),5);
    bufp->fullIData(oldp+138,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+139,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+140,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+141,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+142,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+143,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+144,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+145,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+146,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+147,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+148,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+149,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+150,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+151,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+152,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+153,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+154,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+155,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+156,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
    bufp->fullCData(oldp+170,((0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data)),7);
    bufp->fullCData(oldp+171,((7U & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+172,((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+173,((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                               >> 7U)),25);
    bufp->fullBit(oldp+174,((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data))));
    bufp->fullBit(oldp+175,((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data))));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+177,(vlSelf->top__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+178,(vlSelf->top__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+181,(vlSelf->top__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+182,(vlSelf->top__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+183,(vlSelf->top__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+184,(vlSelf->top__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+185,(vlSelf->top__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+186,(vlSelf->top__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+187,(vlSelf->top__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+188,(vlSelf->top__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+189,(vlSelf->top__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+190,(vlSelf->top__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+191,(vlSelf->top__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+192,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+193,(vlSelf->top__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+194,(vlSelf->top__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+195,(vlSelf->top__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+196,(vlSelf->top__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+197,(vlSelf->top__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+198,(vlSelf->top__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+199,(vlSelf->top__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+200,(vlSelf->top__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+201,(vlSelf->top__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+202,(vlSelf->top__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+203,(vlSelf->top__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+204,(vlSelf->top__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+205,(vlSelf->top__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+206,(vlSelf->top__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+207,(vlSelf->top__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+208,(vlSelf->top__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+209,(vlSelf->top__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+211,(((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data)) 
                             | ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__rd_sram_data)) 
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
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+215,(((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
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
    bufp->fullBit(oldp+216,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__IFU__DOT__rd_sram_data),32);
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__IFU__DOT__rd_sram_en));
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__rdata_temp),32);
    bufp->fullIData(oldp+220,((0xfffff000U & vlSelf->top__DOT__IFU__DOT__rd_sram_data)),32);
    bufp->fullIData(oldp+221,((((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+222,((((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT__IFU__DOT__rd_sram_data) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+223,(vlSelf->top__DOT__IMM__DOT__out5),32);
    bufp->fullIData(oldp+224,((((- (IData)((vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                  >> 7U))))),32);
    __Vtemp_h90c3dc8b__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))));
    __Vtemp_h90c3dc8b__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->top__DOT__IFU__DOT__rd_sram_data)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_h90c3dc8b__0[2U] = (0x1180U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_h90c3dc8b__0[3U] = (0xc000U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->top__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_h90c3dc8b__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                  << 8U)) 
                                              | (vlSelf->top__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_h90c3dc8b__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                              >> 0x18U)))))));
    __Vtemp_h90c3dc8b__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                             >> 4U)))))));
    __Vtemp_h90c3dc8b__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h90c3dc8b__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                               << 0x11U)) 
                                           | (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                              >> 0x16U)));
    __Vtemp_h90c3dc8b__0[9U] = (0x2e0000U | (vlSelf->top__DOT__IFU__DOT__rd_sram_data 
                                             >> 0xfU));
    bufp->fullWData(oldp+225,(__Vtemp_h90c3dc8b__0),312);
    bufp->fullQData(oldp+235,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+237,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+239,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+241,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+243,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+245,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+247,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+249,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+251,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+253,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+254,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+255,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+256,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+257,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+258,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+259,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+260,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+261,(vlSelf->top__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__LSU__DOT__mem_out),32);
    bufp->fullBit(oldp+263,(vlSelf->clk));
    bufp->fullBit(oldp+264,(vlSelf->rst));
    bufp->fullIData(oldp+265,(vlSelf->inst),32);
    bufp->fullIData(oldp+266,(vlSelf->pc),32);
    bufp->fullIData(oldp+267,(((2U & (IData)(vlSelf->top__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? ((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                        ? ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                             ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                             : (0xffffU 
                                                & vlSelf->top__DOT__LSU__DOT__mem_move_out)))
                                        : ((2U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                : (0xffU 
                                                   & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                : 0U)))
                                    : vlSelf->top__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->top__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : vlSelf->top__DOT__r_csr_data))),32);
    bufp->fullIData(oldp+268,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+269,(0U),32);
    bufp->fullIData(oldp+270,(0x10U),32);
    bufp->fullIData(oldp+271,(4U),32);
    bufp->fullIData(oldp+272,(0x20U),32);
    bufp->fullIData(oldp+273,(0U),32);
    bufp->fullIData(oldp+274,(0x24U),32);
    bufp->fullIData(oldp+275,(0x10U),32);
    bufp->fullIData(oldp+276,(5U),32);
    bufp->fullIData(oldp+277,(8U),32);
    bufp->fullIData(oldp+278,(7U),32);
    bufp->fullIData(oldp+279,(1U),32);
    bufp->fullIData(oldp+280,(0x27U),32);
    bufp->fullIData(oldp+281,(8U),32);
}
