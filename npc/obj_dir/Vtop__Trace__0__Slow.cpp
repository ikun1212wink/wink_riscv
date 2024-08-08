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
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBus(c+282,"inst", false,-1, 31,0);
    tracep->declBus(c+283,"pc", false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBus(c+282,"inst", false,-1, 31,0);
    tracep->declBus(c+283,"pc", false,-1, 31,0);
    tracep->declBit(c+126,"jal", false,-1);
    tracep->declBit(c+155,"jalr", false,-1);
    tracep->declBit(c+156,"w_csr_en", false,-1);
    tracep->declBit(c+156,"r_csr_en", false,-1);
    tracep->declBus(c+157,"alu_a", false,-1, 31,0);
    tracep->declBus(c+158,"alu_b", false,-1, 31,0);
    tracep->declBus(c+159,"alu_out", false,-1, 31,0);
    tracep->declBit(c+160,"alu_a_sel", false,-1);
    tracep->declBus(c+161,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+162,"alu_func", false,-1, 3,0);
    tracep->declBus(c+163,"branch_type", false,-1, 2,0);
    tracep->declBus(c+164,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+165,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+166,"mem_rd_en", false,-1);
    tracep->declBit(c+167,"mem_wr_en", false,-1);
    tracep->declBus(c+168,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+169,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+170,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+171,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+142,"w_en", false,-1);
    tracep->declBus(c+172,"w_sel", false,-1, 1,0);
    tracep->declBus(c+284,"w_data", false,-1, 31,0);
    tracep->declBus(c+173,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+143,"jump_jtype", false,-1);
    tracep->declBit(c+174,"jump_ecall", false,-1);
    tracep->declBit(c+175,"jump_mret", false,-1);
    tracep->declBit(c+176,"jump_branch", false,-1);
    tracep->declBus(c+285,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+177,"imm_out", false,-1, 31,0);
    tracep->declBit(c+178,"finish_1", false,-1);
    tracep->declBit(c+112,"finish_2", false,-1);
    tracep->declBit(c+179,"valid_ifu", false,-1);
    tracep->declBit(c+180,"valid_idu", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+157,"SrcA", false,-1, 31,0);
    tracep->declBus(c+158,"SrcB", false,-1, 31,0);
    tracep->declBus(c+162,"alu_func", false,-1, 3,0);
    tracep->declBus(c+159,"ALUout", false,-1, 31,0);
    tracep->declBus(c+157,"signed_a", false,-1, 31,0);
    tracep->declBus(c+158,"signed_b", false,-1, 31,0);
    tracep->declBus(c+157,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+158,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+181,"a0", false,-1, 31,0);
    tracep->declBus(c+182,"a1", false,-1, 31,0);
    tracep->declBus(c+183,"a2", false,-1, 31,0);
    tracep->declBus(c+184,"a3", false,-1, 31,0);
    tracep->declBus(c+185,"a4", false,-1, 31,0);
    tracep->declBus(c+186,"a5", false,-1, 31,0);
    tracep->declBus(c+187,"a6", false,-1, 31,0);
    tracep->declBus(c+188,"a7", false,-1, 31,0);
    tracep->declBus(c+189,"a8", false,-1, 31,0);
    tracep->declBus(c+287,"a9", false,-1, 31,0);
    tracep->declBus(c+287,"a10", false,-1, 31,0);
    tracep->declBus(c+287,"a11", false,-1, 31,0);
    tracep->declBus(c+287,"a12", false,-1, 31,0);
    tracep->declBus(c+190,"a13", false,-1, 31,0);
    tracep->declBus(c+158,"a14", false,-1, 31,0);
    tracep->declBus(c+287,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+288,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+289,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->declBus(c+162,"key", false,-1, 3,0);
    tracep->declArray(c+191,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+288,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+289,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+291,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+159,"out", false,-1, 31,0);
    tracep->declBus(c+162,"key", false,-1, 3,0);
    tracep->declBus(c+287,"default_out", false,-1, 31,0);
    tracep->declArray(c+191,"lut", false,-1, 575,0);
    tracep->declBus(c+292,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+64+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+96+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+209,"lut_out", false,-1, 31,0);
    tracep->declBit(c+210,"hit", false,-1);
    tracep->declBus(c+293,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+170,"rs1", false,-1, 31,0);
    tracep->declBus(c+171,"rs2", false,-1, 31,0);
    tracep->declBus(c+163,"branch_type", false,-1, 2,0);
    tracep->declBit(c+176,"jump_branch", false,-1);
    tracep->declBus(c+170,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+171,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+170,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+171,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+211,"finish", false,-1);
    tracep->declBus(c+283,"pc", false,-1, 31,0);
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBus(c+127,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+127,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+159,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+156,"w_csr_en", false,-1);
    tracep->declBit(c+156,"r_csr_en", false,-1);
    tracep->declBit(c+175,"jump_mret", false,-1);
    tracep->declBit(c+174,"jump_ecall", false,-1);
    tracep->declBus(c+169,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+26,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+27,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+28,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+29,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+294,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+211,"finish", false,-1);
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBus(c+284,"w_data", false,-1, 31,0);
    tracep->declBus(c+128,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+129,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+130,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+142,"w_en", false,-1);
    tracep->declBus(c+170,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+171,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+30+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+282,"inst", false,-1, 31,0);
    tracep->declBit(c+179,"valid_ifu", false,-1);
    tracep->declBit(c+178,"finish_1", false,-1);
    tracep->declBit(c+180,"valid_idu", false,-1);
    tracep->declBit(c+160,"alu_a_sel", false,-1);
    tracep->declBus(c+161,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+142,"w_en", false,-1);
    tracep->declBus(c+172,"w_sel", false,-1, 1,0);
    tracep->declBit(c+143,"jump_jtype", false,-1);
    tracep->declBit(c+174,"jump_ecall", false,-1);
    tracep->declBit(c+175,"jump_mret", false,-1);
    tracep->declBus(c+163,"branch_type", false,-1, 2,0);
    tracep->declBus(c+162,"alu_func", false,-1, 3,0);
    tracep->declBus(c+164,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+165,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+166,"mem_rd_en", false,-1);
    tracep->declBit(c+167,"mem_wr_en", false,-1);
    tracep->declBit(c+126,"jal_signal", false,-1);
    tracep->declBit(c+155,"jalr_signal", false,-1);
    tracep->declBit(c+156,"w_csr_en", false,-1);
    tracep->declBit(c+156,"r_csr_en", false,-1);
    tracep->declBus(c+131,"opcode", false,-1, 6,0);
    tracep->declBus(c+132,"funct3", false,-1, 2,0);
    tracep->declBus(c+133,"funct7", false,-1, 6,0);
    tracep->declBus(c+127,"funct12", false,-1, 11,0);
    tracep->declBus(c+134,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+135,"is_lui", false,-1);
    tracep->declBit(c+136,"is_auipc", false,-1);
    tracep->declBit(c+126,"is_jal", false,-1);
    tracep->declBit(c+155,"is_jalr", false,-1);
    tracep->declBit(c+212,"is_beq", false,-1);
    tracep->declBit(c+213,"is_bne", false,-1);
    tracep->declBit(c+214,"is_blt", false,-1);
    tracep->declBit(c+215,"is_bge", false,-1);
    tracep->declBit(c+216,"is_bltu", false,-1);
    tracep->declBit(c+217,"is_bgeu", false,-1);
    tracep->declBit(c+218,"is_lb", false,-1);
    tracep->declBit(c+219,"is_lh", false,-1);
    tracep->declBit(c+220,"is_lw", false,-1);
    tracep->declBit(c+221,"is_lbu", false,-1);
    tracep->declBit(c+222,"is_lhu", false,-1);
    tracep->declBit(c+223,"is_sb", false,-1);
    tracep->declBit(c+224,"is_sh", false,-1);
    tracep->declBit(c+225,"is_sw", false,-1);
    tracep->declBit(c+226,"is_addi", false,-1);
    tracep->declBit(c+227,"is_slti", false,-1);
    tracep->declBit(c+228,"is_sltiu", false,-1);
    tracep->declBit(c+229,"is_xori", false,-1);
    tracep->declBit(c+230,"is_ori", false,-1);
    tracep->declBit(c+231,"is_andi", false,-1);
    tracep->declBit(c+232,"is_slli", false,-1);
    tracep->declBit(c+233,"is_srli", false,-1);
    tracep->declBit(c+234,"is_srai", false,-1);
    tracep->declBit(c+235,"is_add", false,-1);
    tracep->declBit(c+236,"is_sub", false,-1);
    tracep->declBit(c+237,"is_sll", false,-1);
    tracep->declBit(c+238,"is_slt", false,-1);
    tracep->declBit(c+239,"is_sltu", false,-1);
    tracep->declBit(c+240,"is_xor", false,-1);
    tracep->declBit(c+241,"is_srl", false,-1);
    tracep->declBit(c+242,"is_sra", false,-1);
    tracep->declBit(c+243,"is_or", false,-1);
    tracep->declBit(c+244,"is_and", false,-1);
    tracep->declBit(c+245,"is_csrrs", false,-1);
    tracep->declBit(c+246,"is_csrrw", false,-1);
    tracep->declBit(c+174,"is_ecall", false,-1);
    tracep->declBit(c+175,"is_mret", false,-1);
    tracep->declBit(c+144,"is_add_type", false,-1);
    tracep->declBit(c+247,"is_u_type", false,-1);
    tracep->declBit(c+126,"is_jump_type", false,-1);
    tracep->declBit(c+248,"is_b_type", false,-1);
    tracep->declBit(c+249,"is_r_type", false,-1);
    tracep->declBit(c+250,"is_i_type", false,-1);
    tracep->declBit(c+167,"is_s_type", false,-1);
    tracep->declBit(c+166,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBit(c+251,"jump_en", false,-1);
    tracep->declBus(c+173,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+211,"finish", false,-1);
    tracep->declBit(c+179,"valid_ifu", false,-1);
    tracep->declBus(c+283,"pc", false,-1, 31,0);
    tracep->declBus(c+282,"inst", false,-1, 31,0);
    tracep->declBus(c+283,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+113,"saxi_arvalid", false,-1);
    tracep->declBit(c+114,"saxi_arready", false,-1);
    tracep->declBit(c+115,"saxi_rvalid", false,-1);
    tracep->declBit(c+116,"saxi_rready", false,-1);
    tracep->declBus(c+137,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+117,"inst_old", false,-1, 31,0);
    tracep->pushNamePrefix("SRAM_IFU ");
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBit(c+211,"finish", false,-1);
    tracep->declBus(c+283,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+113,"saxi_arvalid", false,-1);
    tracep->declBit(c+114,"saxi_arready", false,-1);
    tracep->declBit(c+116,"saxi_rready", false,-1);
    tracep->declBit(c+115,"saxi_rvalid", false,-1);
    tracep->declBus(c+137,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+62,"axi_raddr", false,-1, 31,0);
    tracep->declBus(c+118,"axi_data_to_read", false,-1, 31,0);
    tracep->declBus(c+119,"axi_rdata", false,-1, 31,0);
    tracep->declBus(c+286,"delayed_data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+282,"inst", false,-1, 31,0);
    tracep->declBus(c+177,"immout", false,-1, 31,0);
    tracep->declBus(c+131,"opcode", false,-1, 6,0);
    tracep->declBus(c+138,"out1", false,-1, 31,0);
    tracep->declBus(c+138,"out2", false,-1, 31,0);
    tracep->declBus(c+139,"out3", false,-1, 31,0);
    tracep->declBus(c+140,"out4", false,-1, 31,0);
    tracep->declBus(c+252,"out5", false,-1, 31,0);
    tracep->declBus(c+252,"out6", false,-1, 31,0);
    tracep->declBus(c+141,"out7", false,-1, 31,0);
    tracep->declBus(c+252,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+295,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+296,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+131,"key", false,-1, 6,0);
    tracep->declBus(c+287,"default_out", false,-1, 31,0);
    tracep->declArray(c+145,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+295,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+296,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+290,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+297,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+177,"out", false,-1, 31,0);
    tracep->declBus(c+131,"key", false,-1, 6,0);
    tracep->declBus(c+287,"default_out", false,-1, 31,0);
    tracep->declArray(c+145,"lut", false,-1, 311,0);
    tracep->declBus(c+298,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+253+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+269+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+277,"lut_out", false,-1, 31,0);
    tracep->declBit(c+278,"hit", false,-1);
    tracep->declBus(c+299,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBit(c+167,"mem_wr_en", false,-1);
    tracep->declBus(c+164,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+165,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+171,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+159,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+159,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+168,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+180,"valid_idu", false,-1);
    tracep->declBit(c+112,"finish_2", false,-1);
    tracep->declBus(c+159,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+120,"saxi_arvalid", false,-1);
    tracep->declBit(c+121,"saxi_arready", false,-1);
    tracep->declBit(c+122,"saxi_rvalid", false,-1);
    tracep->declBus(c+123,"saxi_rdata", false,-1, 31,0);
    tracep->declBit(c+124,"saxi_rready", false,-1);
    tracep->declBus(c+279,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+123,"mem_out", false,-1, 31,0);
    tracep->pushNamePrefix("SRAM_LSU ");
    tracep->declBit(c+280,"clk", false,-1);
    tracep->declBit(c+281,"rst", false,-1);
    tracep->declBus(c+159,"waddr", false,-1, 31,0);
    tracep->declBus(c+165,"wmask", false,-1, 7,0);
    tracep->declBit(c+167,"w_en", false,-1);
    tracep->declBus(c+171,"wdata", false,-1, 31,0);
    tracep->declBit(c+180,"valid_idu", false,-1);
    tracep->declBus(c+159,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+120,"saxi_arvalid", false,-1);
    tracep->declBit(c+121,"saxi_arready", false,-1);
    tracep->declBit(c+124,"saxi_rready", false,-1);
    tracep->declBit(c+122,"saxi_rvalid", false,-1);
    tracep->declBus(c+123,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+63,"axi_raddr", false,-1, 31,0);
    tracep->declBus(c+125,"axi_data_to_read", false,-1, 31,0);
    tracep->popNamePrefix(3);
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
    VlWide<10>/*319:0*/ __Vtemp_hc54d51f5__0;
    VlWide<18>/*575:0*/ __Vtemp_hcf9c2e3d__0;
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
    bufp->fullIData(oldp+26,(vlSelf->top__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+27,(vlSelf->top__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+31,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+32,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+33,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+34,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+35,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+36,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+37,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+38,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+39,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+50,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+51,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+52,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+53,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+54,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+55,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+56,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+57,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+58,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+59,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+60,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+61,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
    bufp->fullIData(oldp+62,(vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__axi_raddr),32);
    bufp->fullIData(oldp+63,(vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__axi_raddr),32);
    bufp->fullQData(oldp+64,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+66,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+68,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+70,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+72,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+74,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+76,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+78,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+80,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+82,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+84,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+86,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+88,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+90,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+92,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+94,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+96,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+97,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+98,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+99,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+100,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+101,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+102,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+103,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+104,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+105,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+106,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+107,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+108,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+109,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+110,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+111,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullBit(oldp+112,(vlSelf->top__DOT__finish_2));
    bufp->fullBit(oldp+113,(vlSelf->top__DOT__IFU__DOT__saxi_arvalid));
    bufp->fullBit(oldp+114,(vlSelf->top__DOT__IFU__DOT__saxi_arready));
    bufp->fullBit(oldp+115,(vlSelf->top__DOT__IFU__DOT__saxi_rvalid));
    bufp->fullBit(oldp+116,(vlSelf->top__DOT__IFU__DOT__saxi_rready));
    bufp->fullIData(oldp+117,(vlSelf->top__DOT__IFU__DOT__inst_old),32);
    bufp->fullIData(oldp+118,(vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__axi_data_to_read),32);
    bufp->fullIData(oldp+119,(vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__axi_rdata),32);
    bufp->fullBit(oldp+120,(vlSelf->top__DOT__LSU__DOT__saxi_arvalid));
    bufp->fullBit(oldp+121,(vlSelf->top__DOT__LSU__DOT__saxi_arready));
    bufp->fullBit(oldp+122,(vlSelf->top__DOT__LSU__DOT__saxi_rvalid));
    bufp->fullIData(oldp+123,(vlSelf->top__DOT__LSU__DOT__saxi_rdata),32);
    bufp->fullBit(oldp+124,(vlSelf->top__DOT__LSU__DOT__saxi_rready));
    bufp->fullIData(oldp+125,(vlSelf->top__DOT__LSU__DOT__SRAM_LSU__DOT__axi_data_to_read),32);
    bufp->fullBit(oldp+126,((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata))));
    bufp->fullSData(oldp+127,((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+128,((0x1fU & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+129,((0x1fU & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+130,((0x1fU & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                        >> 7U))),5);
    bufp->fullCData(oldp+131,((0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata)),7);
    bufp->fullCData(oldp+132,((7U & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+133,((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+134,((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                               >> 7U)),25);
    bufp->fullBit(oldp+135,((0x37U == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata))));
    bufp->fullBit(oldp+136,((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata))));
    bufp->fullIData(oldp+137,(vlSelf->top__DOT__IFU__DOT__saxi_rdata),32);
    bufp->fullIData(oldp+138,((0xfffff000U & vlSelf->top__DOT__IFU__DOT__saxi_rdata)),32);
    bufp->fullIData(oldp+139,((((- (IData)((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+140,((((- (IData)((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->top__DOT__IFU__DOT__saxi_rdata) 
                                             | ((0x800U 
                                                 & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+141,((((- (IData)((vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                  >> 7U))))),32);
    bufp->fullBit(oldp+142,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullBit(oldp+143,(((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata)) 
                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+144,(((0x17U == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata)) 
                             | ((0x6fU == (0x7fU & vlSelf->top__DOT__IFU__DOT__saxi_rdata)) 
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
    __Vtemp_hc54d51f5__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))));
    __Vtemp_hc54d51f5__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->top__DOT__IFU__DOT__saxi_rdata)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_hc54d51f5__0[2U] = (0x1180U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_hc54d51f5__0[3U] = (0xc000U | ((vlSelf->top__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->top__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_hc54d51f5__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                  << 8U)) 
                                              | (vlSelf->top__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_hc54d51f5__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                              >> 0x18U)))))));
    __Vtemp_hc54d51f5__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                             >> 4U)))))));
    __Vtemp_hc54d51f5__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_hc54d51f5__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                               << 0x11U)) 
                                           | (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                              >> 0x16U)));
    __Vtemp_hc54d51f5__0[9U] = (0x2e0000U | (vlSelf->top__DOT__IFU__DOT__saxi_rdata 
                                             >> 0xfU));
    bufp->fullWData(oldp+145,(__Vtemp_hc54d51f5__0),312);
    bufp->fullBit(oldp+155,(vlSelf->top__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+156,(vlSelf->top__DOT__w_csr_en));
    bufp->fullIData(oldp+157,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__alu_out),32);
    bufp->fullBit(oldp+160,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+161,(vlSelf->top__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+162,(vlSelf->top__DOT__alu_func),4);
    bufp->fullCData(oldp+163,(vlSelf->top__DOT__branch_type),3);
    bufp->fullCData(oldp+164,(vlSelf->top__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+165,(vlSelf->top__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+166,(vlSelf->top__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+167,(vlSelf->top__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+168,(((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
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
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                        : 0U)))),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullCData(oldp+172,(vlSelf->top__DOT__w_sel),2);
    bufp->fullIData(oldp+173,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                                ? vlSelf->top__DOT__alu_out
                                : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                    ? vlSelf->top__DOT__r_csr_data
                                    : 0U))),32);
    bufp->fullBit(oldp+174,(vlSelf->top__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+176,(vlSelf->top__DOT__jump_branch));
    bufp->fullIData(oldp+177,(vlSelf->top__DOT__imm_out),32);
    bufp->fullBit(oldp+178,(((~ (IData)(vlSelf->top__DOT__IDU__DOT__is_load_type)) 
                             & (IData)(vlSelf->top__DOT__valid_ifu))));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__valid_ifu));
    bufp->fullBit(oldp+180,(vlSelf->top__DOT__valid_idu));
    bufp->fullIData(oldp+181,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+182,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+183,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+184,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                < vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+185,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+186,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+187,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+188,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+189,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+190,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+191,(__Vtemp_hcf9c2e3d__0),576);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+210,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+211,(vlSelf->top__DOT____Vcellinp__CSR__finish));
    bufp->fullBit(oldp+212,(vlSelf->top__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+213,(vlSelf->top__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+214,(vlSelf->top__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+215,(vlSelf->top__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+216,(vlSelf->top__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+217,(vlSelf->top__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+218,(vlSelf->top__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+219,(vlSelf->top__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+250,(((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
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
    bufp->fullBit(oldp+251,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullIData(oldp+252,(vlSelf->top__DOT__IMM__DOT__out5),32);
    bufp->fullQData(oldp+253,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+255,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+257,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+259,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+261,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+263,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+265,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+267,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+269,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+270,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+271,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+272,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+273,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+274,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+275,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+276,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+277,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+278,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullIData(oldp+279,(vlSelf->top__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullBit(oldp+280,(vlSelf->clk));
    bufp->fullBit(oldp+281,(vlSelf->rst));
    bufp->fullIData(oldp+282,(vlSelf->inst),32);
    bufp->fullIData(oldp+283,(vlSelf->pc),32);
    bufp->fullIData(oldp+284,(((2U & (IData)(vlSelf->top__DOT__w_sel))
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
    bufp->fullIData(oldp+285,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__IFU__DOT__SRAM_IFU__DOT__delayed_data),32);
    bufp->fullIData(oldp+287,(0U),32);
    bufp->fullIData(oldp+288,(0x10U),32);
    bufp->fullIData(oldp+289,(4U),32);
    bufp->fullIData(oldp+290,(0x20U),32);
    bufp->fullIData(oldp+291,(0U),32);
    bufp->fullIData(oldp+292,(0x24U),32);
    bufp->fullIData(oldp+293,(0x10U),32);
    bufp->fullIData(oldp+294,(5U),32);
    bufp->fullIData(oldp+295,(8U),32);
    bufp->fullIData(oldp+296,(7U),32);
    bufp->fullIData(oldp+297,(1U),32);
    bufp->fullIData(oldp+298,(0x27U),32);
    bufp->fullIData(oldp+299,(8U),32);
}
