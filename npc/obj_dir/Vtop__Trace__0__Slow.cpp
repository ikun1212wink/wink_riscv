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
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+310,"inst", false,-1, 31,0);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBit(c+312,"difftest", false,-1);
    tracep->declBit(c+313,"itrace_reg", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+310,"inst", false,-1, 31,0);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBit(c+312,"difftest", false,-1);
    tracep->declBit(c+313,"itrace_reg", false,-1);
    tracep->declBit(c+314,"jal", false,-1);
    tracep->declBit(c+26,"jalr", false,-1);
    tracep->declBit(c+27,"w_csr_en", false,-1);
    tracep->declBit(c+27,"r_csr_en", false,-1);
    tracep->declBus(c+28,"alu_a", false,-1, 31,0);
    tracep->declBus(c+29,"alu_b", false,-1, 31,0);
    tracep->declBus(c+30,"alu_out", false,-1, 31,0);
    tracep->declBit(c+31,"alu_a_sel", false,-1);
    tracep->declBus(c+32,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+33,"alu_func", false,-1, 3,0);
    tracep->declBus(c+34,"branch_type", false,-1, 2,0);
    tracep->declBus(c+35,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+36,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+37,"mem_rd_en", false,-1);
    tracep->declBit(c+38,"mem_wr_en", false,-1);
    tracep->declBus(c+39,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+40,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+41,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+42,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+315,"w_en", false,-1);
    tracep->declBus(c+43,"w_sel", false,-1, 1,0);
    tracep->declBus(c+316,"w_data", false,-1, 31,0);
    tracep->declBus(c+44,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+317,"jump_jtype", false,-1);
    tracep->declBit(c+45,"jump_ecall", false,-1);
    tracep->declBit(c+46,"jump_mret", false,-1);
    tracep->declBit(c+47,"jump_branch", false,-1);
    tracep->declBus(c+318,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+48,"imm_out", false,-1, 31,0);
    tracep->declBit(c+49,"finish_1", false,-1);
    tracep->declBit(c+50,"wr_finish", false,-1);
    tracep->declBit(c+51,"rd_finish", false,-1);
    tracep->declBit(c+52,"valid_ifu", false,-1);
    tracep->declBit(c+53,"valid_idu", false,-1);
    tracep->declBus(c+54,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+311,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"ifu_arvalid", false,-1);
    tracep->declBit(c+56,"ifu_arready", false,-1);
    tracep->declBit(c+57,"ifu_rready", false,-1);
    tracep->declBit(c+58,"ifu_rvalid", false,-1);
    tracep->declBus(c+59,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+345,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+346,"ifu_awvalid", false,-1);
    tracep->declBit(c+347,"ifu_awready", false,-1);
    tracep->declBus(c+348,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+349,"ifu_wvalid", false,-1);
    tracep->declBit(c+350,"ifu_wready", false,-1);
    tracep->declBit(c+351,"ifu_bready", false,-1);
    tracep->declBit(c+352,"ifu_bvalid", false,-1);
    tracep->declBus(c+30,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+60,"lsu_arvalid", false,-1);
    tracep->declBit(c+61,"lsu_arready", false,-1);
    tracep->declBit(c+62,"lsu_rready", false,-1);
    tracep->declBit(c+63,"lsu_rvalid", false,-1);
    tracep->declBus(c+64,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+30,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"lsu_awvalid", false,-1);
    tracep->declBit(c+66,"lsu_awready", false,-1);
    tracep->declBus(c+42,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+67,"lsu_wvalid", false,-1);
    tracep->declBit(c+68,"lsu_wready", false,-1);
    tracep->declBit(c+69,"lsu_bready", false,-1);
    tracep->declBit(c+70,"lsu_bvalid", false,-1);
    tracep->declBus(c+319,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"saxi_arvalid", false,-1);
    tracep->declBit(c+72,"saxi_arready", false,-1);
    tracep->declBit(c+73,"saxi_rready", false,-1);
    tracep->declBit(c+74,"saxi_rvalid", false,-1);
    tracep->declBus(c+75,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+76,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"saxi_awvalid", false,-1);
    tracep->declBit(c+78,"saxi_awready", false,-1);
    tracep->declBus(c+79,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+80,"saxi_wvalid", false,-1);
    tracep->declBit(c+81,"saxi_wready", false,-1);
    tracep->declBit(c+82,"saxi_bready", false,-1);
    tracep->declBit(c+83,"saxi_bvalid", false,-1);
    tracep->declBus(c+353,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+354,"uart_arvalid", false,-1);
    tracep->declBit(c+355,"uart_arready", false,-1);
    tracep->declBit(c+354,"uart_rready", false,-1);
    tracep->declBit(c+356,"uart_rvalid", false,-1);
    tracep->declBus(c+357,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+84,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+85,"uart_awvalid", false,-1);
    tracep->declBit(c+86,"uart_awready", false,-1);
    tracep->declBus(c+87,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+88,"uart_wvalid", false,-1);
    tracep->declBit(c+89,"uart_wready", false,-1);
    tracep->declBit(c+90,"uart_bready", false,-1);
    tracep->declBit(c+91,"uart_bvalid", false,-1);
    tracep->declBus(c+92,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"clint_arvalid", false,-1);
    tracep->declBit(c+94,"clint_arready", false,-1);
    tracep->declBit(c+95,"clint_rready", false,-1);
    tracep->declBit(c+96,"clint_rvalid", false,-1);
    tracep->declBus(c+97,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+358,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+359,"clint_awvalid", false,-1);
    tracep->declBit(c+360,"clint_awready", false,-1);
    tracep->declBus(c+361,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+362,"clint_wvalid", false,-1);
    tracep->declBit(c+363,"clint_wready", false,-1);
    tracep->declBit(c+364,"clint_bready", false,-1);
    tracep->declBit(c+365,"clint_bvalid", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+28,"SrcA", false,-1, 31,0);
    tracep->declBus(c+29,"SrcB", false,-1, 31,0);
    tracep->declBus(c+33,"alu_func", false,-1, 3,0);
    tracep->declBus(c+30,"ALUout", false,-1, 31,0);
    tracep->declBus(c+28,"signed_a", false,-1, 31,0);
    tracep->declBus(c+29,"signed_b", false,-1, 31,0);
    tracep->declBus(c+28,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+29,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+98,"a0", false,-1, 31,0);
    tracep->declBus(c+99,"a1", false,-1, 31,0);
    tracep->declBus(c+100,"a2", false,-1, 31,0);
    tracep->declBus(c+101,"a3", false,-1, 31,0);
    tracep->declBus(c+102,"a4", false,-1, 31,0);
    tracep->declBus(c+103,"a5", false,-1, 31,0);
    tracep->declBus(c+104,"a6", false,-1, 31,0);
    tracep->declBus(c+105,"a7", false,-1, 31,0);
    tracep->declBus(c+106,"a8", false,-1, 31,0);
    tracep->declBus(c+353,"a9", false,-1, 31,0);
    tracep->declBus(c+353,"a10", false,-1, 31,0);
    tracep->declBus(c+353,"a11", false,-1, 31,0);
    tracep->declBus(c+353,"a12", false,-1, 31,0);
    tracep->declBus(c+107,"a13", false,-1, 31,0);
    tracep->declBus(c+29,"a14", false,-1, 31,0);
    tracep->declBus(c+353,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+367,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+33,"key", false,-1, 3,0);
    tracep->declArray(c+108,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+366,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+367,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+369,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+30,"out", false,-1, 31,0);
    tracep->declBus(c+33,"key", false,-1, 3,0);
    tracep->declBus(c+353,"default_out", false,-1, 31,0);
    tracep->declArray(c+108,"lut", false,-1, 575,0);
    tracep->declBus(c+370,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+126+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+158+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+174,"lut_out", false,-1, 31,0);
    tracep->declBit(c+175,"hit", false,-1);
    tracep->declBus(c+371,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("ARB ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+311,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"ifu_arvalid", false,-1);
    tracep->declBit(c+56,"ifu_arready", false,-1);
    tracep->declBit(c+57,"ifu_rready", false,-1);
    tracep->declBit(c+58,"ifu_rvalid", false,-1);
    tracep->declBus(c+59,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+345,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+346,"ifu_awvalid", false,-1);
    tracep->declBit(c+347,"ifu_awready", false,-1);
    tracep->declBus(c+348,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+349,"ifu_wvalid", false,-1);
    tracep->declBit(c+350,"ifu_wready", false,-1);
    tracep->declBit(c+351,"ifu_bready", false,-1);
    tracep->declBit(c+352,"ifu_bvalid", false,-1);
    tracep->declBus(c+30,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+60,"lsu_arvalid", false,-1);
    tracep->declBit(c+61,"lsu_arready", false,-1);
    tracep->declBit(c+62,"lsu_rready", false,-1);
    tracep->declBit(c+63,"lsu_rvalid", false,-1);
    tracep->declBus(c+64,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+30,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"lsu_awvalid", false,-1);
    tracep->declBit(c+66,"lsu_awready", false,-1);
    tracep->declBus(c+42,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+67,"lsu_wvalid", false,-1);
    tracep->declBit(c+68,"lsu_wready", false,-1);
    tracep->declBit(c+69,"lsu_bready", false,-1);
    tracep->declBit(c+70,"lsu_bvalid", false,-1);
    tracep->declBus(c+319,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"saxi_arvalid", false,-1);
    tracep->declBit(c+72,"saxi_arready", false,-1);
    tracep->declBit(c+73,"saxi_rready", false,-1);
    tracep->declBit(c+74,"saxi_rvalid", false,-1);
    tracep->declBus(c+75,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+76,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"saxi_awvalid", false,-1);
    tracep->declBit(c+78,"saxi_awready", false,-1);
    tracep->declBus(c+79,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+80,"saxi_wvalid", false,-1);
    tracep->declBit(c+81,"saxi_wready", false,-1);
    tracep->declBit(c+82,"saxi_bready", false,-1);
    tracep->declBit(c+83,"saxi_bvalid", false,-1);
    tracep->declBus(c+353,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+354,"uart_arvalid", false,-1);
    tracep->declBit(c+355,"uart_arready", false,-1);
    tracep->declBit(c+354,"uart_rready", false,-1);
    tracep->declBit(c+356,"uart_rvalid", false,-1);
    tracep->declBus(c+357,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+84,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+85,"uart_awvalid", false,-1);
    tracep->declBit(c+86,"uart_awready", false,-1);
    tracep->declBus(c+87,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+88,"uart_wvalid", false,-1);
    tracep->declBit(c+89,"uart_wready", false,-1);
    tracep->declBit(c+90,"uart_bready", false,-1);
    tracep->declBit(c+91,"uart_bvalid", false,-1);
    tracep->declBus(c+92,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"clint_arvalid", false,-1);
    tracep->declBit(c+94,"clint_arready", false,-1);
    tracep->declBit(c+95,"clint_rready", false,-1);
    tracep->declBit(c+96,"clint_rvalid", false,-1);
    tracep->declBus(c+97,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+358,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+359,"clint_awvalid", false,-1);
    tracep->declBit(c+360,"clint_awready", false,-1);
    tracep->declBus(c+361,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+362,"clint_wvalid", false,-1);
    tracep->declBit(c+363,"clint_wready", false,-1);
    tracep->declBit(c+364,"clint_bready", false,-1);
    tracep->declBit(c+365,"clint_bvalid", false,-1);
    tracep->declBus(c+369,"IDLE", false,-1, 31,0);
    tracep->declBus(c+372,"IFU_READ", false,-1, 31,0);
    tracep->declBus(c+373,"LSU_READ", false,-1, 31,0);
    tracep->declBus(c+176,"current_state", false,-1, 1,0);
    tracep->declBus(c+177,"next_state", false,-1, 1,0);
    tracep->declBit(c+178,"is_uart", false,-1);
    tracep->declBit(c+179,"is_clint", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+41,"rs1", false,-1, 31,0);
    tracep->declBus(c+42,"rs2", false,-1, 31,0);
    tracep->declBus(c+34,"branch_type", false,-1, 2,0);
    tracep->declBit(c+47,"jump_branch", false,-1);
    tracep->declBus(c+41,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+42,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+41,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+42,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+92,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+93,"clint_arvalid", false,-1);
    tracep->declBit(c+94,"clint_arready", false,-1);
    tracep->declBit(c+95,"clint_rready", false,-1);
    tracep->declBit(c+96,"clint_rvalid", false,-1);
    tracep->declBus(c+97,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+358,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+359,"clint_awvalid", false,-1);
    tracep->declBit(c+360,"clint_awready", false,-1);
    tracep->declBus(c+361,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+362,"clint_wvalid", false,-1);
    tracep->declBit(c+363,"clint_wready", false,-1);
    tracep->declBit(c+364,"clint_bready", false,-1);
    tracep->declBit(c+365,"clint_bvalid", false,-1);
    tracep->declQuad(c+180,"mtime", false,-1, 63,0);
    tracep->declBus(c+374,"mtime_addr_low", false,-1, 31,0);
    tracep->declBus(c+375,"mtime_addr_high", false,-1, 31,0);
    tracep->declBus(c+182,"raddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+183,"finish", false,-1);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBus(c+320,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+320,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+30,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+27,"w_csr_en", false,-1);
    tracep->declBit(c+27,"r_csr_en", false,-1);
    tracep->declBit(c+46,"jump_mret", false,-1);
    tracep->declBit(c+45,"jump_ecall", false,-1);
    tracep->declBus(c+40,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+184,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+185,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+186,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+187,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+376,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+183,"finish", false,-1);
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBus(c+316,"w_data", false,-1, 31,0);
    tracep->declBus(c+321,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+322,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+323,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+315,"w_en", false,-1);
    tracep->declBus(c+41,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+42,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+188+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+310,"inst", false,-1, 31,0);
    tracep->declBit(c+52,"valid_ifu", false,-1);
    tracep->declBit(c+49,"finish_1", false,-1);
    tracep->declBit(c+53,"valid_idu", false,-1);
    tracep->declBit(c+31,"alu_a_sel", false,-1);
    tracep->declBus(c+32,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+315,"w_en", false,-1);
    tracep->declBus(c+43,"w_sel", false,-1, 1,0);
    tracep->declBit(c+317,"jump_jtype", false,-1);
    tracep->declBit(c+45,"jump_ecall", false,-1);
    tracep->declBit(c+46,"jump_mret", false,-1);
    tracep->declBus(c+34,"branch_type", false,-1, 2,0);
    tracep->declBus(c+33,"alu_func", false,-1, 3,0);
    tracep->declBus(c+35,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+36,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+37,"mem_rd_en", false,-1);
    tracep->declBit(c+38,"mem_wr_en", false,-1);
    tracep->declBit(c+314,"jal_signal", false,-1);
    tracep->declBit(c+26,"jalr_signal", false,-1);
    tracep->declBit(c+27,"w_csr_en", false,-1);
    tracep->declBit(c+27,"r_csr_en", false,-1);
    tracep->declBus(c+324,"opcode", false,-1, 6,0);
    tracep->declBus(c+325,"funct3", false,-1, 2,0);
    tracep->declBus(c+326,"funct7", false,-1, 6,0);
    tracep->declBus(c+320,"funct12", false,-1, 11,0);
    tracep->declBus(c+327,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+328,"is_lui", false,-1);
    tracep->declBit(c+329,"is_auipc", false,-1);
    tracep->declBit(c+314,"is_jal", false,-1);
    tracep->declBit(c+26,"is_jalr", false,-1);
    tracep->declBit(c+220,"is_beq", false,-1);
    tracep->declBit(c+221,"is_bne", false,-1);
    tracep->declBit(c+222,"is_blt", false,-1);
    tracep->declBit(c+223,"is_bge", false,-1);
    tracep->declBit(c+224,"is_bltu", false,-1);
    tracep->declBit(c+225,"is_bgeu", false,-1);
    tracep->declBit(c+226,"is_lb", false,-1);
    tracep->declBit(c+227,"is_lh", false,-1);
    tracep->declBit(c+228,"is_lw", false,-1);
    tracep->declBit(c+229,"is_lbu", false,-1);
    tracep->declBit(c+230,"is_lhu", false,-1);
    tracep->declBit(c+231,"is_sb", false,-1);
    tracep->declBit(c+232,"is_sh", false,-1);
    tracep->declBit(c+233,"is_sw", false,-1);
    tracep->declBit(c+234,"is_addi", false,-1);
    tracep->declBit(c+235,"is_slti", false,-1);
    tracep->declBit(c+236,"is_sltiu", false,-1);
    tracep->declBit(c+237,"is_xori", false,-1);
    tracep->declBit(c+238,"is_ori", false,-1);
    tracep->declBit(c+239,"is_andi", false,-1);
    tracep->declBit(c+240,"is_slli", false,-1);
    tracep->declBit(c+241,"is_srli", false,-1);
    tracep->declBit(c+242,"is_srai", false,-1);
    tracep->declBit(c+243,"is_add", false,-1);
    tracep->declBit(c+244,"is_sub", false,-1);
    tracep->declBit(c+245,"is_sll", false,-1);
    tracep->declBit(c+246,"is_slt", false,-1);
    tracep->declBit(c+247,"is_sltu", false,-1);
    tracep->declBit(c+248,"is_xor", false,-1);
    tracep->declBit(c+249,"is_srl", false,-1);
    tracep->declBit(c+250,"is_sra", false,-1);
    tracep->declBit(c+251,"is_or", false,-1);
    tracep->declBit(c+252,"is_and", false,-1);
    tracep->declBit(c+253,"is_csrrs", false,-1);
    tracep->declBit(c+254,"is_csrrw", false,-1);
    tracep->declBit(c+45,"is_ecall", false,-1);
    tracep->declBit(c+46,"is_mret", false,-1);
    tracep->declBit(c+330,"is_add_type", false,-1);
    tracep->declBit(c+255,"is_u_type", false,-1);
    tracep->declBit(c+314,"is_jump_type", false,-1);
    tracep->declBit(c+256,"is_b_type", false,-1);
    tracep->declBit(c+257,"is_r_type", false,-1);
    tracep->declBit(c+258,"is_i_type", false,-1);
    tracep->declBit(c+38,"is_s_type", false,-1);
    tracep->declBit(c+37,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+259,"jump_en", false,-1);
    tracep->declBus(c+44,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+260,"finish", false,-1);
    tracep->declBit(c+52,"valid_ifu", false,-1);
    tracep->declBus(c+311,"pc", false,-1, 31,0);
    tracep->declBus(c+310,"inst", false,-1, 31,0);
    tracep->declBit(c+312,"difftest", false,-1);
    tracep->declBit(c+313,"itrace_reg", false,-1);
    tracep->declBus(c+311,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+55,"ifu_arvalid", false,-1);
    tracep->declBit(c+56,"ifu_arready", false,-1);
    tracep->declBit(c+57,"ifu_rready", false,-1);
    tracep->declBit(c+58,"ifu_rvalid", false,-1);
    tracep->declBus(c+59,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+345,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+346,"ifu_awvalid", false,-1);
    tracep->declBit(c+347,"ifu_awready", false,-1);
    tracep->declBus(c+348,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+349,"ifu_wvalid", false,-1);
    tracep->declBit(c+350,"ifu_wready", false,-1);
    tracep->declBit(c+351,"ifu_bready", false,-1);
    tracep->declBit(c+352,"ifu_bvalid", false,-1);
    tracep->declBit(c+377,"rvalid", false,-1);
    tracep->declBit(c+261,"axi_arvalid", false,-1);
    tracep->declBus(c+262,"counter", false,-1, 31,0);
    tracep->declBit(c+263,"axi_rready", false,-1);
    tracep->declBus(c+264,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+310,"inst", false,-1, 31,0);
    tracep->declBus(c+48,"immout", false,-1, 31,0);
    tracep->declBus(c+324,"opcode", false,-1, 6,0);
    tracep->declBus(c+331,"out1", false,-1, 31,0);
    tracep->declBus(c+331,"out2", false,-1, 31,0);
    tracep->declBus(c+332,"out3", false,-1, 31,0);
    tracep->declBus(c+333,"out4", false,-1, 31,0);
    tracep->declBus(c+265,"out5", false,-1, 31,0);
    tracep->declBus(c+265,"out6", false,-1, 31,0);
    tracep->declBus(c+334,"out7", false,-1, 31,0);
    tracep->declBus(c+265,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+48,"out", false,-1, 31,0);
    tracep->declBus(c+324,"key", false,-1, 6,0);
    tracep->declBus(c+353,"default_out", false,-1, 31,0);
    tracep->declArray(c+335,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+378,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+379,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+368,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+48,"out", false,-1, 31,0);
    tracep->declBus(c+324,"key", false,-1, 6,0);
    tracep->declBus(c+353,"default_out", false,-1, 31,0);
    tracep->declArray(c+335,"lut", false,-1, 311,0);
    tracep->declBus(c+380,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+266+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+282+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+290,"lut_out", false,-1, 31,0);
    tracep->declBit(c+291,"hit", false,-1);
    tracep->declBus(c+381,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBit(c+292,"mem_wr_en", false,-1);
    tracep->declBus(c+35,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+36,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+42,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+30,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+30,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+39,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+53,"valid_idu", false,-1);
    tracep->declBit(c+50,"wr_finish", false,-1);
    tracep->declBit(c+51,"rd_finish", false,-1);
    tracep->declBus(c+30,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+60,"lsu_arvalid", false,-1);
    tracep->declBit(c+61,"lsu_arready", false,-1);
    tracep->declBit(c+62,"lsu_rready", false,-1);
    tracep->declBit(c+63,"lsu_rvalid", false,-1);
    tracep->declBus(c+64,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+30,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+65,"lsu_awvalid", false,-1);
    tracep->declBit(c+66,"lsu_awready", false,-1);
    tracep->declBus(c+42,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+67,"lsu_wvalid", false,-1);
    tracep->declBit(c+68,"lsu_wready", false,-1);
    tracep->declBit(c+69,"lsu_bready", false,-1);
    tracep->declBit(c+70,"lsu_bvalid", false,-1);
    tracep->declBus(c+293,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+294,"mem_out", false,-1, 31,0);
    tracep->declBit(c+295,"axi_arvalid", false,-1);
    tracep->declBus(c+296,"counter", false,-1, 31,0);
    tracep->declBit(c+297,"axi_rready", false,-1);
    tracep->declBus(c+298,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+36,"wmask", false,-1, 7,0);
    tracep->declBus(c+319,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+71,"saxi_arvalid", false,-1);
    tracep->declBit(c+72,"saxi_arready", false,-1);
    tracep->declBit(c+73,"saxi_rready", false,-1);
    tracep->declBit(c+74,"saxi_rvalid", false,-1);
    tracep->declBus(c+75,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+76,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+77,"saxi_awvalid", false,-1);
    tracep->declBit(c+78,"saxi_awready", false,-1);
    tracep->declBus(c+79,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+80,"saxi_wvalid", false,-1);
    tracep->declBit(c+81,"saxi_wready", false,-1);
    tracep->declBit(c+82,"saxi_bready", false,-1);
    tracep->declBit(c+83,"saxi_bvalid", false,-1);
    tracep->declBus(c+299,"axi_raddr", false,-1, 31,0);
    tracep->declBit(c+300,"aw_hand", false,-1);
    tracep->declBus(c+301,"axi_waddr", false,-1, 31,0);
    tracep->declBit(c+302,"w_hand", false,-1);
    tracep->declBus(c+303,"axi_wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+308,"clk", false,-1);
    tracep->declBit(c+309,"rst", false,-1);
    tracep->declBus(c+353,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+354,"uart_arvalid", false,-1);
    tracep->declBit(c+355,"uart_arready", false,-1);
    tracep->declBit(c+354,"uart_rready", false,-1);
    tracep->declBit(c+356,"uart_rvalid", false,-1);
    tracep->declBus(c+357,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+84,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+85,"uart_awvalid", false,-1);
    tracep->declBit(c+86,"uart_awready", false,-1);
    tracep->declBus(c+87,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+88,"uart_wvalid", false,-1);
    tracep->declBit(c+89,"uart_wready", false,-1);
    tracep->declBit(c+90,"uart_bready", false,-1);
    tracep->declBit(c+91,"uart_bvalid", false,-1);
    tracep->declBus(c+54,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+382,"uart_addr", false,-1, 31,0);
    tracep->declBit(c+304,"aw_hand", false,-1);
    tracep->declBus(c+305,"waddr", false,-1, 31,0);
    tracep->declBit(c+306,"w_hand", false,-1);
    tracep->declBus(c+307,"wdata", false,-1, 31,0);
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
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__GPR__DOT__i),32);
    bufp->fullCData(oldp+18,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+19,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+20,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+21,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+22,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+23,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+24,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullBit(oldp+26,(vlSelf->top__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+27,(vlSelf->top__DOT__w_csr_en));
    bufp->fullIData(oldp+28,(vlSelf->top__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+29,(vlSelf->top__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+30,(vlSelf->top__DOT__alu_out),32);
    bufp->fullBit(oldp+31,(((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+32,(vlSelf->top__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+33,(vlSelf->top__DOT__alu_func),4);
    bufp->fullCData(oldp+34,(vlSelf->top__DOT__branch_type),3);
    bufp->fullCData(oldp+35,(vlSelf->top__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+36,(vlSelf->top__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+37,(vlSelf->top__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+38,(vlSelf->top__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+39,(((4U & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
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
    bufp->fullIData(oldp+40,(vlSelf->top__DOT__r_csr_data),32);
    bufp->fullIData(oldp+41,(vlSelf->top__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullCData(oldp+43,(vlSelf->top__DOT__w_sel),2);
    bufp->fullIData(oldp+44,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                               ? vlSelf->top__DOT__alu_out
                               : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                   ? vlSelf->top__DOT__r_csr_data
                                   : 0U))),32);
    bufp->fullBit(oldp+45,(vlSelf->top__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+46,(vlSelf->top__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+47,(vlSelf->top__DOT__jump_branch));
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__imm_out),32);
    bufp->fullBit(oldp+49,(((~ ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type))) 
                            & (IData)(vlSelf->top__DOT__valid_ifu))));
    bufp->fullBit(oldp+50,(((IData)(vlSelf->top__DOT__lsu_bready) 
                            & ((0xa00003f8U == vlSelf->top__DOT__alu_out)
                                ? (IData)(vlSelf->top__DOT__uart_bvalid)
                                : (IData)(vlSelf->top__DOT__saxi_bvalid)))));
    bufp->fullBit(oldp+51,(vlSelf->top__DOT__rd_finish));
    bufp->fullBit(oldp+52,(vlSelf->top__DOT__valid_ifu));
    bufp->fullBit(oldp+53,(vlSelf->top__DOT__valid_idu));
    bufp->fullCData(oldp+54,(vlSelf->top__DOT__uart_reg),8);
    bufp->fullBit(oldp+55,(vlSelf->top__DOT__ifu_arvalid));
    bufp->fullBit(oldp+56,(vlSelf->top__DOT__ifu_arready));
    bufp->fullBit(oldp+57,(vlSelf->top__DOT__ifu_rready));
    bufp->fullBit(oldp+58,(vlSelf->top__DOT__ifu_rvalid));
    bufp->fullIData(oldp+59,(((1U == (IData)(vlSelf->top__DOT__ARB__DOT__current_state))
                               ? vlSelf->top__DOT__saxi_rdata
                               : 0U)),32);
    bufp->fullBit(oldp+60,(vlSelf->top__DOT__lsu_arvalid));
    bufp->fullBit(oldp+61,(vlSelf->top__DOT__lsu_arready));
    bufp->fullBit(oldp+62,(vlSelf->top__DOT__lsu_rready));
    bufp->fullBit(oldp+63,(vlSelf->top__DOT__lsu_rvalid));
    bufp->fullIData(oldp+64,(((IData)(vlSelf->top__DOT__ARB__DOT____VdfgTmp_hf8a63299__0)
                               ? vlSelf->top__DOT__saxi_rdata
                               : ((IData)(vlSelf->top__DOT__ARB__DOT____VdfgTmp_h7deb6f76__0)
                                   ? ((0xa0000048U 
                                       == vlSelf->top__DOT__clint_araddr)
                                       ? (IData)(vlSelf->top__DOT__CLINT__DOT__mtime)
                                       : ((0xa000005cU 
                                           == vlSelf->top__DOT__clint_araddr)
                                           ? (IData)(
                                                     (vlSelf->top__DOT__CLINT__DOT__mtime 
                                                      >> 0x20U))
                                           : 0U)) : 0U))),32);
    bufp->fullBit(oldp+65,(vlSelf->top__DOT__lsu_awvalid));
    bufp->fullBit(oldp+66,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                             ? (IData)(vlSelf->top__DOT__uart_awready)
                             : (IData)(vlSelf->top__DOT__saxi_awready))));
    bufp->fullBit(oldp+67,(vlSelf->top__DOT__lsu_wvalid));
    bufp->fullBit(oldp+68,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                             ? (IData)(vlSelf->top__DOT__uart_wready)
                             : (IData)(vlSelf->top__DOT__saxi_wready))));
    bufp->fullBit(oldp+69,(vlSelf->top__DOT__lsu_bready));
    bufp->fullBit(oldp+70,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                             ? (IData)(vlSelf->top__DOT__uart_bvalid)
                             : (IData)(vlSelf->top__DOT__saxi_bvalid))));
    bufp->fullBit(oldp+71,(vlSelf->top__DOT__saxi_arvalid));
    bufp->fullBit(oldp+72,(vlSelf->top__DOT__saxi_arready));
    bufp->fullBit(oldp+73,(vlSelf->top__DOT__saxi_rready));
    bufp->fullBit(oldp+74,(vlSelf->top__DOT__saxi_rvalid));
    bufp->fullIData(oldp+75,(vlSelf->top__DOT__saxi_rdata),32);
    bufp->fullIData(oldp+76,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                               ? 0U : vlSelf->top__DOT__alu_out)),32);
    bufp->fullBit(oldp+77,(vlSelf->top__DOT__saxi_awvalid));
    bufp->fullBit(oldp+78,(vlSelf->top__DOT__saxi_awready));
    bufp->fullIData(oldp+79,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                               ? 0U : vlSelf->top__DOT__BSU__DOT__signed_rs2)),32);
    bufp->fullBit(oldp+80,(vlSelf->top__DOT__saxi_wvalid));
    bufp->fullBit(oldp+81,(vlSelf->top__DOT__saxi_wready));
    bufp->fullBit(oldp+82,(vlSelf->top__DOT__saxi_bready));
    bufp->fullBit(oldp+83,(vlSelf->top__DOT__saxi_bvalid));
    bufp->fullIData(oldp+84,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                               ? vlSelf->top__DOT__alu_out
                               : 0U)),32);
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__uart_awvalid));
    bufp->fullBit(oldp+86,(vlSelf->top__DOT__uart_awready));
    bufp->fullIData(oldp+87,(((0xa00003f8U == vlSelf->top__DOT__alu_out)
                               ? vlSelf->top__DOT__BSU__DOT__signed_rs2
                               : 0U)),32);
    bufp->fullBit(oldp+88,(((0xa00003f8U == vlSelf->top__DOT__alu_out) 
                            & (IData)(vlSelf->top__DOT__lsu_wvalid))));
    bufp->fullBit(oldp+89,(vlSelf->top__DOT__uart_wready));
    bufp->fullBit(oldp+90,(vlSelf->top__DOT__uart_bready));
    bufp->fullBit(oldp+91,(vlSelf->top__DOT__uart_bvalid));
    bufp->fullIData(oldp+92,(vlSelf->top__DOT__clint_araddr),32);
    bufp->fullBit(oldp+93,(vlSelf->top__DOT__clint_arvalid));
    bufp->fullBit(oldp+94,(vlSelf->top__DOT__clint_arready));
    bufp->fullBit(oldp+95,(vlSelf->top__DOT__clint_rready));
    bufp->fullBit(oldp+96,(vlSelf->top__DOT__clint_rvalid));
    bufp->fullIData(oldp+97,(((0xa0000048U == vlSelf->top__DOT__clint_araddr)
                               ? (IData)(vlSelf->top__DOT__CLINT__DOT__mtime)
                               : ((0xa000005cU == vlSelf->top__DOT__clint_araddr)
                                   ? (IData)((vlSelf->top__DOT__CLINT__DOT__mtime 
                                              >> 0x20U))
                                   : 0U))),32);
    bufp->fullIData(oldp+98,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              + vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+99,((vlSelf->top__DOT__ALU__DOT__signed_a 
                              << (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+100,((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+101,(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                < vlSelf->top__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+102,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+103,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+104,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               | vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+105,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               & vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+106,((vlSelf->top__DOT__ALU__DOT__signed_a 
                               - vlSelf->top__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+107,(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+108,(__Vtemp_hcf9c2e3d__0),576);
    bufp->fullQData(oldp+126,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+128,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+130,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+132,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+134,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+136,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+138,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+140,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+142,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+144,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+146,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+148,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+150,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+152,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+154,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+156,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+158,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+159,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+160,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+161,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+162,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+163,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+164,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+165,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+166,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+167,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+168,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+169,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+170,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+171,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+172,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+173,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+174,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+175,(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullCData(oldp+176,(vlSelf->top__DOT__ARB__DOT__current_state),2);
    bufp->fullCData(oldp+177,(vlSelf->top__DOT__ARB__DOT__next_state),2);
    bufp->fullBit(oldp+178,((0xa00003f8U == vlSelf->top__DOT__alu_out)));
    bufp->fullBit(oldp+179,(vlSelf->top__DOT__ARB__DOT__is_clint));
    bufp->fullQData(oldp+180,(vlSelf->top__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+182,(vlSelf->top__DOT__CLINT__DOT__raddr),32);
    bufp->fullBit(oldp+183,(vlSelf->top__DOT____Vcellinp__CSR__finish));
    bufp->fullIData(oldp+184,(vlSelf->top__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+188,(vlSelf->top__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+189,(vlSelf->top__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+190,(vlSelf->top__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+191,(vlSelf->top__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+192,(vlSelf->top__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+193,(vlSelf->top__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+194,(vlSelf->top__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+195,(vlSelf->top__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+196,(vlSelf->top__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+197,(vlSelf->top__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+198,(vlSelf->top__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+199,(vlSelf->top__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+200,(vlSelf->top__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+201,(vlSelf->top__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+202,(vlSelf->top__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+203,(vlSelf->top__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+204,(vlSelf->top__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+205,(vlSelf->top__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+206,(vlSelf->top__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+207,(vlSelf->top__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+208,(vlSelf->top__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+209,(vlSelf->top__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+210,(vlSelf->top__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+211,(vlSelf->top__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+212,(vlSelf->top__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+213,(vlSelf->top__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+214,(vlSelf->top__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+215,(vlSelf->top__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+216,(vlSelf->top__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+217,(vlSelf->top__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+218,(vlSelf->top__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+219,(vlSelf->top__DOT__GPR__DOT__rf[31]),32);
    bufp->fullBit(oldp+220,(vlSelf->top__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+221,(vlSelf->top__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+222,(vlSelf->top__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+223,(vlSelf->top__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+224,(vlSelf->top__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+225,(vlSelf->top__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+226,(vlSelf->top__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+227,(vlSelf->top__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+228,(vlSelf->top__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+229,(vlSelf->top__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+230,(vlSelf->top__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+231,(vlSelf->top__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+232,(vlSelf->top__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+233,(vlSelf->top__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+234,(vlSelf->top__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+235,(vlSelf->top__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+236,(vlSelf->top__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+237,(vlSelf->top__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+238,(vlSelf->top__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+239,(vlSelf->top__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+240,(vlSelf->top__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+241,(vlSelf->top__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+242,(vlSelf->top__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+243,(vlSelf->top__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+244,(vlSelf->top__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+245,(vlSelf->top__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+246,(vlSelf->top__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+247,(vlSelf->top__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+248,(vlSelf->top__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+249,(vlSelf->top__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+250,(vlSelf->top__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+251,(vlSelf->top__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+252,(vlSelf->top__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+253,(vlSelf->top__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+254,(vlSelf->top__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+255,(vlSelf->top__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+256,(vlSelf->top__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+257,(vlSelf->top__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+258,(((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
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
    bufp->fullBit(oldp+259,(((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullBit(oldp+260,(vlSelf->top__DOT____Vcellinp__IFU__finish));
    bufp->fullBit(oldp+261,(vlSelf->top__DOT__IFU__DOT__axi_arvalid));
    bufp->fullIData(oldp+262,(vlSelf->top__DOT__IFU__DOT__counter),32);
    bufp->fullBit(oldp+263,(vlSelf->top__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+264,(vlSelf->top__DOT__IFU__DOT__counter_rready),32);
    bufp->fullIData(oldp+265,(vlSelf->top__DOT__IMM__DOT__out5),32);
    bufp->fullQData(oldp+266,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+268,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+270,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+272,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+274,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+276,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+278,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+280,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+282,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+283,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+284,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+285,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+286,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+287,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+288,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+289,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+290,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+291,(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+292,(vlSelf->top__DOT____Vcellinp__LSU__mem_wr_en));
    bufp->fullIData(oldp+293,(vlSelf->top__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullIData(oldp+294,(vlSelf->top__DOT__LSU__DOT__mem_out),32);
    bufp->fullBit(oldp+295,(vlSelf->top__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+296,(vlSelf->top__DOT__LSU__DOT__counter),32);
    bufp->fullBit(oldp+297,(vlSelf->top__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+298,(vlSelf->top__DOT__LSU__DOT__counter_rready),32);
    bufp->fullIData(oldp+299,(vlSelf->top__DOT__SRAM__DOT__axi_raddr),32);
    bufp->fullBit(oldp+300,(vlSelf->top__DOT__SRAM__DOT__aw_hand));
    bufp->fullIData(oldp+301,(vlSelf->top__DOT__SRAM__DOT__axi_waddr),32);
    bufp->fullBit(oldp+302,(vlSelf->top__DOT__SRAM__DOT__w_hand));
    bufp->fullIData(oldp+303,(vlSelf->top__DOT__SRAM__DOT__axi_wdata),32);
    bufp->fullBit(oldp+304,(vlSelf->top__DOT__UART__DOT__aw_hand));
    bufp->fullIData(oldp+305,(vlSelf->top__DOT__UART__DOT__waddr),32);
    bufp->fullBit(oldp+306,(vlSelf->top__DOT__UART__DOT__w_hand));
    bufp->fullIData(oldp+307,(vlSelf->top__DOT__UART__DOT__wdata),32);
    bufp->fullBit(oldp+308,(vlSelf->clk));
    bufp->fullBit(oldp+309,(vlSelf->rst));
    bufp->fullIData(oldp+310,(vlSelf->inst),32);
    bufp->fullIData(oldp+311,(vlSelf->pc),32);
    bufp->fullBit(oldp+312,(vlSelf->difftest));
    bufp->fullBit(oldp+313,(vlSelf->itrace_reg));
    bufp->fullBit(oldp+314,((0x6fU == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+315,(((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
                                | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullIData(oldp+316,(((2U & (IData)(vlSelf->top__DOT__w_sel))
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
    bufp->fullBit(oldp+317,(((0x6fU == (0x7fU & vlSelf->inst)) 
                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullIData(oldp+318,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullIData(oldp+319,(((1U == (IData)(vlSelf->top__DOT__ARB__DOT__current_state))
                                ? vlSelf->pc : ((IData)(vlSelf->top__DOT__ARB__DOT____VdfgTmp_hf8a63299__0)
                                                 ? vlSelf->top__DOT__alu_out
                                                 : 0U))),32);
    bufp->fullSData(oldp+320,((vlSelf->inst >> 0x14U)),12);
    bufp->fullCData(oldp+321,((0x1fU & (vlSelf->inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+322,((0x1fU & (vlSelf->inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+323,((0x1fU & (vlSelf->inst 
                                        >> 7U))),5);
    bufp->fullCData(oldp+324,((0x7fU & vlSelf->inst)),7);
    bufp->fullCData(oldp+325,((7U & (vlSelf->inst >> 0xcU))),3);
    bufp->fullCData(oldp+326,((vlSelf->inst >> 0x19U)),7);
    bufp->fullIData(oldp+327,((vlSelf->inst >> 7U)),25);
    bufp->fullBit(oldp+328,((0x37U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+329,((0x17U == (0x7fU & vlSelf->inst))));
    bufp->fullBit(oldp+330,(((0x17U == (0x7fU & vlSelf->inst)) 
                             | ((0x6fU == (0x7fU & vlSelf->inst)) 
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
    bufp->fullIData(oldp+331,((0xfffff000U & vlSelf->inst)),32);
    bufp->fullIData(oldp+332,((((- (IData)((vlSelf->inst 
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
    bufp->fullIData(oldp+333,((((- (IData)((vlSelf->inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->inst) 
                                             | ((0x800U 
                                                 & (vlSelf->inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+334,((((- (IData)((vlSelf->inst 
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
    bufp->fullWData(oldp+335,(__Vtemp_hc64486e3__0),312);
    bufp->fullIData(oldp+345,(vlSelf->top__DOT__ifu_awaddr),32);
    bufp->fullBit(oldp+346,(vlSelf->top__DOT__ifu_awvalid));
    bufp->fullBit(oldp+347,(vlSelf->top__DOT__ifu_awready));
    bufp->fullIData(oldp+348,(vlSelf->top__DOT__ifu_wdata),32);
    bufp->fullBit(oldp+349,(vlSelf->top__DOT__ifu_wvalid));
    bufp->fullBit(oldp+350,(vlSelf->top__DOT__ifu_wready));
    bufp->fullBit(oldp+351,(vlSelf->top__DOT__ifu_bready));
    bufp->fullBit(oldp+352,(vlSelf->top__DOT__ifu_bvalid));
    bufp->fullIData(oldp+353,(0U),32);
    bufp->fullBit(oldp+354,(0U));
    bufp->fullBit(oldp+355,(vlSelf->top__DOT__uart_arready));
    bufp->fullBit(oldp+356,(vlSelf->top__DOT__uart_rvalid));
    bufp->fullIData(oldp+357,(vlSelf->top__DOT__uart_rdata),32);
    bufp->fullIData(oldp+358,(vlSelf->top__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+359,(vlSelf->top__DOT__clint_awvalid));
    bufp->fullBit(oldp+360,(vlSelf->top__DOT__clint_awready));
    bufp->fullIData(oldp+361,(vlSelf->top__DOT__clint_wdata),32);
    bufp->fullBit(oldp+362,(vlSelf->top__DOT__clint_wvalid));
    bufp->fullBit(oldp+363,(vlSelf->top__DOT__clint_wready));
    bufp->fullBit(oldp+364,(vlSelf->top__DOT__clint_bready));
    bufp->fullBit(oldp+365,(vlSelf->top__DOT__clint_bvalid));
    bufp->fullIData(oldp+366,(0x10U),32);
    bufp->fullIData(oldp+367,(4U),32);
    bufp->fullIData(oldp+368,(0x20U),32);
    bufp->fullIData(oldp+369,(0U),32);
    bufp->fullIData(oldp+370,(0x24U),32);
    bufp->fullIData(oldp+371,(0x10U),32);
    bufp->fullIData(oldp+372,(1U),32);
    bufp->fullIData(oldp+373,(2U),32);
    bufp->fullIData(oldp+374,(0xa0000048U),32);
    bufp->fullIData(oldp+375,(0xa000005cU),32);
    bufp->fullIData(oldp+376,(5U),32);
    bufp->fullBit(oldp+377,(vlSelf->top__DOT__IFU__DOT__rvalid));
    bufp->fullIData(oldp+378,(8U),32);
    bufp->fullIData(oldp+379,(7U),32);
    bufp->fullIData(oldp+380,(0x27U),32);
    bufp->fullIData(oldp+381,(8U),32);
    bufp->fullIData(oldp+382,(0xa00003f8U),32);
}
