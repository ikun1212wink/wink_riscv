// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vysyx_23060240__Syms.h"


VL_ATTR_COLD void Vysyx_23060240___024root__trace_init_sub__TOP__0(Vysyx_23060240___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBit(c+343,"difftest", false,-1);
    tracep->declBit(c+344,"itrace_reg", false,-1);
    tracep->pushNamePrefix("ysyx_23060240 ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBit(c+343,"difftest", false,-1);
    tracep->declBit(c+344,"itrace_reg", false,-1);
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
    tracep->declBus(c+345,"w_data", false,-1, 31,0);
    tracep->declBus(c+46,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+47,"jump_jtype", false,-1);
    tracep->declBit(c+48,"jump_ecall", false,-1);
    tracep->declBit(c+49,"jump_mret", false,-1);
    tracep->declBit(c+50,"jump_branch", false,-1);
    tracep->declBus(c+346,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+51,"imm_out", false,-1, 31,0);
    tracep->declBit(c+52,"finish_1", false,-1);
    tracep->declBit(c+53,"wr_finish", false,-1);
    tracep->declBit(c+54,"rd_finish", false,-1);
    tracep->declBit(c+55,"valid_ifu", false,-1);
    tracep->declBit(c+56,"valid_idu", false,-1);
    tracep->declBus(c+57,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+58,"ifu_arvalid", false,-1);
    tracep->declBit(c+59,"ifu_arready", false,-1);
    tracep->declBus(c+347,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+348,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+349,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+350,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+60,"ifu_rready", false,-1);
    tracep->declBit(c+61,"ifu_rvalid", false,-1);
    tracep->declBus(c+62,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+351,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"ifu_rlast", false,-1);
    tracep->declBus(c+353,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+354,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+355,"ifu_awvalid", false,-1);
    tracep->declBit(c+63,"ifu_awready", false,-1);
    tracep->declBus(c+356,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+357,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+358,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+359,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+360,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+361,"ifu_wvalid", false,-1);
    tracep->declBit(c+64,"ifu_wready", false,-1);
    tracep->declBus(c+362,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+363,"ifu_wlast", false,-1);
    tracep->declBit(c+364,"ifu_bready", false,-1);
    tracep->declBit(c+65,"ifu_bvalid", false,-1);
    tracep->declBus(c+365,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+366,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+31,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+66,"lsu_arvalid", false,-1);
    tracep->declBit(c+67,"lsu_arready", false,-1);
    tracep->declBus(c+367,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+368,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+369,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+370,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+68,"lsu_rready", false,-1);
    tracep->declBit(c+69,"lsu_rvalid", false,-1);
    tracep->declBus(c+70,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"lsu_rlast", false,-1);
    tracep->declBus(c+373,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+31,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+71,"lsu_awvalid", false,-1);
    tracep->declBit(c+72,"lsu_awready", false,-1);
    tracep->declBus(c+374,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+375,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+376,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+377,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+43,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+73,"lsu_wvalid", false,-1);
    tracep->declBit(c+74,"lsu_wready", false,-1);
    tracep->declBus(c+378,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+379,"lsu_wlast", false,-1);
    tracep->declBit(c+75,"lsu_bready", false,-1);
    tracep->declBit(c+76,"lsu_bvalid", false,-1);
    tracep->declBus(c+380,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+381,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+77,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"saxi_arvalid", false,-1);
    tracep->declBit(c+79,"saxi_arready", false,-1);
    tracep->declBus(c+382,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+383,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+384,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+385,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+80,"saxi_rready", false,-1);
    tracep->declBit(c+81,"saxi_rvalid", false,-1);
    tracep->declBus(c+82,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+386,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+387,"saxi_rlast", false,-1);
    tracep->declBus(c+388,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+83,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"saxi_awvalid", false,-1);
    tracep->declBit(c+85,"saxi_awready", false,-1);
    tracep->declBus(c+389,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+390,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+391,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+392,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+86,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+87,"saxi_wvalid", false,-1);
    tracep->declBit(c+88,"saxi_wready", false,-1);
    tracep->declBus(c+393,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+394,"saxi_wlast", false,-1);
    tracep->declBit(c+89,"saxi_bready", false,-1);
    tracep->declBit(c+90,"saxi_bvalid", false,-1);
    tracep->declBus(c+395,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+396,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+397,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"uart_arvalid", false,-1);
    tracep->declBit(c+399,"uart_arready", false,-1);
    tracep->declBus(c+400,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+401,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+402,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+403,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+404,"uart_rready", false,-1);
    tracep->declBit(c+405,"uart_rvalid", false,-1);
    tracep->declBus(c+406,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+407,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+408,"uart_rlast", false,-1);
    tracep->declBus(c+409,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+91,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"uart_awvalid", false,-1);
    tracep->declBit(c+93,"uart_awready", false,-1);
    tracep->declBus(c+410,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+412,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+413,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+94,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+95,"uart_wvalid", false,-1);
    tracep->declBit(c+96,"uart_wready", false,-1);
    tracep->declBus(c+414,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+415,"uart_wlast", false,-1);
    tracep->declBit(c+97,"uart_bready", false,-1);
    tracep->declBit(c+98,"uart_bvalid", false,-1);
    tracep->declBus(c+416,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+417,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+99,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+100,"clint_arvalid", false,-1);
    tracep->declBit(c+101,"clint_arready", false,-1);
    tracep->declBus(c+418,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+419,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+421,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+102,"clint_rready", false,-1);
    tracep->declBit(c+103,"clint_rvalid", false,-1);
    tracep->declBus(c+104,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+422,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+423,"clint_rlast", false,-1);
    tracep->declBus(c+424,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+425,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+426,"clint_awvalid", false,-1);
    tracep->declBit(c+427,"clint_awready", false,-1);
    tracep->declBus(c+428,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+429,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+430,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+431,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+432,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+433,"clint_wvalid", false,-1);
    tracep->declBit(c+434,"clint_wready", false,-1);
    tracep->declBus(c+435,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+436,"clint_wlast", false,-1);
    tracep->declBit(c+437,"clint_bready", false,-1);
    tracep->declBit(c+438,"clint_bvalid", false,-1);
    tracep->declBus(c+439,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+440,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+29,"SrcA", false,-1, 31,0);
    tracep->declBus(c+30,"SrcB", false,-1, 31,0);
    tracep->declBus(c+34,"alu_func", false,-1, 3,0);
    tracep->declBus(c+31,"ALUout", false,-1, 31,0);
    tracep->declBus(c+29,"signed_a", false,-1, 31,0);
    tracep->declBus(c+30,"signed_b", false,-1, 31,0);
    tracep->declBus(c+29,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+30,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+105,"a0", false,-1, 31,0);
    tracep->declBus(c+106,"a1", false,-1, 31,0);
    tracep->declBus(c+107,"a2", false,-1, 31,0);
    tracep->declBus(c+108,"a3", false,-1, 31,0);
    tracep->declBus(c+109,"a4", false,-1, 31,0);
    tracep->declBus(c+110,"a5", false,-1, 31,0);
    tracep->declBus(c+111,"a6", false,-1, 31,0);
    tracep->declBus(c+112,"a7", false,-1, 31,0);
    tracep->declBus(c+113,"a8", false,-1, 31,0);
    tracep->declBus(c+441,"a9", false,-1, 31,0);
    tracep->declBus(c+441,"a10", false,-1, 31,0);
    tracep->declBus(c+441,"a11", false,-1, 31,0);
    tracep->declBus(c+441,"a12", false,-1, 31,0);
    tracep->declBus(c+114,"a13", false,-1, 31,0);
    tracep->declBus(c+30,"a14", false,-1, 31,0);
    tracep->declBus(c+441,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+442,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+444,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 3,0);
    tracep->declArray(c+115,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+442,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+443,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+444,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+445,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+31,"out", false,-1, 31,0);
    tracep->declBus(c+34,"key", false,-1, 3,0);
    tracep->declBus(c+441,"default_out", false,-1, 31,0);
    tracep->declArray(c+115,"lut", false,-1, 575,0);
    tracep->declBus(c+446,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+133+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+165+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+181,"lut_out", false,-1, 31,0);
    tracep->declBit(c+182,"hit", false,-1);
    tracep->declBus(c+447,"i", false,-1, 31,0);
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
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+99,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+100,"clint_arvalid", false,-1);
    tracep->declBit(c+101,"clint_arready", false,-1);
    tracep->declBus(c+418,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+419,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+421,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+102,"clint_rready", false,-1);
    tracep->declBit(c+103,"clint_rvalid", false,-1);
    tracep->declBus(c+104,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+422,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+423,"clint_rlast", false,-1);
    tracep->declBus(c+424,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+425,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+426,"clint_awvalid", false,-1);
    tracep->declBit(c+427,"clint_awready", false,-1);
    tracep->declBus(c+428,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+429,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+430,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+431,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+432,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+433,"clint_wvalid", false,-1);
    tracep->declBit(c+434,"clint_wready", false,-1);
    tracep->declBus(c+435,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+436,"clint_wlast", false,-1);
    tracep->declBit(c+437,"clint_bready", false,-1);
    tracep->declBit(c+438,"clint_bvalid", false,-1);
    tracep->declBus(c+439,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+440,"clint_bid", false,-1, 3,0);
    tracep->declQuad(c+183,"mtime", false,-1, 63,0);
    tracep->declBus(c+448,"mtime_addr_low", false,-1, 31,0);
    tracep->declBus(c+449,"mtime_addr_high", false,-1, 31,0);
    tracep->declBus(c+185,"raddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+186,"finish", false,-1);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBus(c+187,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+187,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+31,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+28,"w_csr_en", false,-1);
    tracep->declBit(c+28,"r_csr_en", false,-1);
    tracep->declBit(c+49,"jump_mret", false,-1);
    tracep->declBit(c+48,"jump_ecall", false,-1);
    tracep->declBus(c+41,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+188,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+189,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+190,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+191,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+450,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+444,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+186,"finish", false,-1);
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBus(c+345,"w_data", false,-1, 31,0);
    tracep->declBus(c+192,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+193,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+194,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+44,"w_en", false,-1);
    tracep->declBus(c+42,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+43,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+195+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBit(c+55,"valid_ifu", false,-1);
    tracep->declBit(c+52,"finish_1", false,-1);
    tracep->declBit(c+56,"valid_idu", false,-1);
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
    tracep->declBus(c+227,"opcode", false,-1, 6,0);
    tracep->declBus(c+228,"funct3", false,-1, 2,0);
    tracep->declBus(c+229,"funct7", false,-1, 6,0);
    tracep->declBus(c+187,"funct12", false,-1, 11,0);
    tracep->declBus(c+230,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+231,"is_lui", false,-1);
    tracep->declBit(c+232,"is_auipc", false,-1);
    tracep->declBit(c+26,"is_jal", false,-1);
    tracep->declBit(c+27,"is_jalr", false,-1);
    tracep->declBit(c+233,"is_beq", false,-1);
    tracep->declBit(c+234,"is_bne", false,-1);
    tracep->declBit(c+235,"is_blt", false,-1);
    tracep->declBit(c+236,"is_bge", false,-1);
    tracep->declBit(c+237,"is_bltu", false,-1);
    tracep->declBit(c+238,"is_bgeu", false,-1);
    tracep->declBit(c+239,"is_lb", false,-1);
    tracep->declBit(c+240,"is_lh", false,-1);
    tracep->declBit(c+241,"is_lw", false,-1);
    tracep->declBit(c+242,"is_lbu", false,-1);
    tracep->declBit(c+243,"is_lhu", false,-1);
    tracep->declBit(c+244,"is_sb", false,-1);
    tracep->declBit(c+245,"is_sh", false,-1);
    tracep->declBit(c+246,"is_sw", false,-1);
    tracep->declBit(c+247,"is_addi", false,-1);
    tracep->declBit(c+248,"is_slti", false,-1);
    tracep->declBit(c+249,"is_sltiu", false,-1);
    tracep->declBit(c+250,"is_xori", false,-1);
    tracep->declBit(c+251,"is_ori", false,-1);
    tracep->declBit(c+252,"is_andi", false,-1);
    tracep->declBit(c+253,"is_slli", false,-1);
    tracep->declBit(c+254,"is_srli", false,-1);
    tracep->declBit(c+255,"is_srai", false,-1);
    tracep->declBit(c+256,"is_add", false,-1);
    tracep->declBit(c+257,"is_sub", false,-1);
    tracep->declBit(c+258,"is_sll", false,-1);
    tracep->declBit(c+259,"is_slt", false,-1);
    tracep->declBit(c+260,"is_sltu", false,-1);
    tracep->declBit(c+261,"is_xor", false,-1);
    tracep->declBit(c+262,"is_srl", false,-1);
    tracep->declBit(c+263,"is_sra", false,-1);
    tracep->declBit(c+264,"is_or", false,-1);
    tracep->declBit(c+265,"is_and", false,-1);
    tracep->declBit(c+266,"is_csrrs", false,-1);
    tracep->declBit(c+267,"is_csrrw", false,-1);
    tracep->declBit(c+48,"is_ecall", false,-1);
    tracep->declBit(c+49,"is_mret", false,-1);
    tracep->declBit(c+268,"is_add_type", false,-1);
    tracep->declBit(c+269,"is_u_type", false,-1);
    tracep->declBit(c+26,"is_jump_type", false,-1);
    tracep->declBit(c+270,"is_b_type", false,-1);
    tracep->declBit(c+271,"is_r_type", false,-1);
    tracep->declBit(c+272,"is_i_type", false,-1);
    tracep->declBit(c+39,"is_s_type", false,-1);
    tracep->declBit(c+38,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBit(c+273,"jump_en", false,-1);
    tracep->declBus(c+46,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+274,"finish", false,-1);
    tracep->declBit(c+55,"valid_ifu", false,-1);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBit(c+343,"difftest", false,-1);
    tracep->declBit(c+344,"itrace_reg", false,-1);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+58,"ifu_arvalid", false,-1);
    tracep->declBit(c+59,"ifu_arready", false,-1);
    tracep->declBus(c+347,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+348,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+349,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+350,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+60,"ifu_rready", false,-1);
    tracep->declBit(c+61,"ifu_rvalid", false,-1);
    tracep->declBus(c+62,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+351,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"ifu_rlast", false,-1);
    tracep->declBus(c+353,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+354,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+355,"ifu_awvalid", false,-1);
    tracep->declBit(c+63,"ifu_awready", false,-1);
    tracep->declBus(c+356,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+357,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+358,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+359,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+360,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+361,"ifu_wvalid", false,-1);
    tracep->declBit(c+64,"ifu_wready", false,-1);
    tracep->declBus(c+362,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+363,"ifu_wlast", false,-1);
    tracep->declBit(c+364,"ifu_bready", false,-1);
    tracep->declBit(c+65,"ifu_bvalid", false,-1);
    tracep->declBus(c+365,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+366,"ifu_bid", false,-1, 3,0);
    tracep->declBit(c+451,"rvalid", false,-1);
    tracep->declBit(c+275,"axi_arvalid", false,-1);
    tracep->declBus(c+276,"counter", false,-1, 31,0);
    tracep->declBit(c+277,"axi_rready", false,-1);
    tracep->declBus(c+278,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+51,"immout", false,-1, 31,0);
    tracep->declBus(c+227,"opcode", false,-1, 6,0);
    tracep->declBus(c+279,"out1", false,-1, 31,0);
    tracep->declBus(c+279,"out2", false,-1, 31,0);
    tracep->declBus(c+280,"out3", false,-1, 31,0);
    tracep->declBus(c+281,"out4", false,-1, 31,0);
    tracep->declBus(c+282,"out5", false,-1, 31,0);
    tracep->declBus(c+282,"out6", false,-1, 31,0);
    tracep->declBus(c+283,"out7", false,-1, 31,0);
    tracep->declBus(c+282,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+444,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+227,"key", false,-1, 6,0);
    tracep->declBus(c+441,"default_out", false,-1, 31,0);
    tracep->declArray(c+284,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+452,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+453,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+444,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+454,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+51,"out", false,-1, 31,0);
    tracep->declBus(c+227,"key", false,-1, 6,0);
    tracep->declBus(c+441,"default_out", false,-1, 31,0);
    tracep->declArray(c+284,"lut", false,-1, 311,0);
    tracep->declBus(c+455,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+294+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+310+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+318,"lut_out", false,-1, 31,0);
    tracep->declBit(c+319,"hit", false,-1);
    tracep->declBus(c+456,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBit(c+320,"mem_wr_en", false,-1);
    tracep->declBus(c+36,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+37,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+43,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+31,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+31,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+40,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+56,"valid_idu", false,-1);
    tracep->declBit(c+53,"wr_finish", false,-1);
    tracep->declBit(c+54,"rd_finish", false,-1);
    tracep->declBus(c+31,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+66,"lsu_arvalid", false,-1);
    tracep->declBit(c+67,"lsu_arready", false,-1);
    tracep->declBus(c+367,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+368,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+369,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+370,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+68,"lsu_rready", false,-1);
    tracep->declBit(c+69,"lsu_rvalid", false,-1);
    tracep->declBus(c+70,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"lsu_rlast", false,-1);
    tracep->declBus(c+373,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+31,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+71,"lsu_awvalid", false,-1);
    tracep->declBit(c+72,"lsu_awready", false,-1);
    tracep->declBus(c+374,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+375,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+376,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+377,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+43,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+73,"lsu_wvalid", false,-1);
    tracep->declBit(c+74,"lsu_wready", false,-1);
    tracep->declBus(c+378,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+379,"lsu_wlast", false,-1);
    tracep->declBit(c+75,"lsu_bready", false,-1);
    tracep->declBit(c+76,"lsu_bvalid", false,-1);
    tracep->declBus(c+380,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+381,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+321,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+70,"mem_out", false,-1, 31,0);
    tracep->declBit(c+322,"axi_arvalid", false,-1);
    tracep->declBus(c+323,"counter", false,-1, 31,0);
    tracep->declBit(c+324,"axi_rready", false,-1);
    tracep->declBus(c+325,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+37,"wmask", false,-1, 7,0);
    tracep->declBus(c+77,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"saxi_arvalid", false,-1);
    tracep->declBit(c+79,"saxi_arready", false,-1);
    tracep->declBus(c+382,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+383,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+384,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+385,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+80,"saxi_rready", false,-1);
    tracep->declBit(c+81,"saxi_rvalid", false,-1);
    tracep->declBus(c+82,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+386,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+387,"saxi_rlast", false,-1);
    tracep->declBus(c+388,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+83,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"saxi_awvalid", false,-1);
    tracep->declBit(c+85,"saxi_awready", false,-1);
    tracep->declBus(c+389,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+390,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+391,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+392,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+86,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+87,"saxi_wvalid", false,-1);
    tracep->declBit(c+88,"saxi_wready", false,-1);
    tracep->declBus(c+393,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+394,"saxi_wlast", false,-1);
    tracep->declBit(c+89,"saxi_bready", false,-1);
    tracep->declBit(c+90,"saxi_bvalid", false,-1);
    tracep->declBus(c+395,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+396,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+326,"axi_raddr", false,-1, 31,0);
    tracep->declBus(c+327,"axi_data_to_read", false,-1, 31,0);
    tracep->declBit(c+328,"aw_hand", false,-1);
    tracep->declBus(c+329,"axi_waddr", false,-1, 31,0);
    tracep->declBit(c+330,"w_hand", false,-1);
    tracep->declBus(c+331,"axi_wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+397,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"uart_arvalid", false,-1);
    tracep->declBit(c+399,"uart_arready", false,-1);
    tracep->declBus(c+400,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+401,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+402,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+403,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+404,"uart_rready", false,-1);
    tracep->declBit(c+405,"uart_rvalid", false,-1);
    tracep->declBus(c+406,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+407,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+408,"uart_rlast", false,-1);
    tracep->declBus(c+409,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+91,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"uart_awvalid", false,-1);
    tracep->declBit(c+93,"uart_awready", false,-1);
    tracep->declBus(c+410,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+412,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+413,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+94,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+95,"uart_wvalid", false,-1);
    tracep->declBit(c+96,"uart_wready", false,-1);
    tracep->declBus(c+414,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+415,"uart_wlast", false,-1);
    tracep->declBit(c+97,"uart_bready", false,-1);
    tracep->declBit(c+98,"uart_bvalid", false,-1);
    tracep->declBus(c+416,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+417,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+57,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+457,"uart_addr", false,-1, 31,0);
    tracep->declBit(c+332,"aw_hand", false,-1);
    tracep->declBus(c+333,"waddr", false,-1, 31,0);
    tracep->declBit(c+334,"w_hand", false,-1);
    tracep->declBus(c+335,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("XBAR ");
    tracep->declBit(c+339,"clk", false,-1);
    tracep->declBit(c+340,"rst", false,-1);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+58,"ifu_arvalid", false,-1);
    tracep->declBit(c+59,"ifu_arready", false,-1);
    tracep->declBus(c+347,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+348,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+349,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+350,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+60,"ifu_rready", false,-1);
    tracep->declBit(c+61,"ifu_rvalid", false,-1);
    tracep->declBus(c+62,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+351,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+352,"ifu_rlast", false,-1);
    tracep->declBus(c+353,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+354,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+355,"ifu_awvalid", false,-1);
    tracep->declBit(c+63,"ifu_awready", false,-1);
    tracep->declBus(c+356,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+357,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+358,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+359,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+360,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+361,"ifu_wvalid", false,-1);
    tracep->declBit(c+64,"ifu_wready", false,-1);
    tracep->declBus(c+362,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+363,"ifu_wlast", false,-1);
    tracep->declBit(c+364,"ifu_bready", false,-1);
    tracep->declBit(c+65,"ifu_bvalid", false,-1);
    tracep->declBus(c+365,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+366,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+31,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+66,"lsu_arvalid", false,-1);
    tracep->declBit(c+67,"lsu_arready", false,-1);
    tracep->declBus(c+367,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+368,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+369,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+370,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+68,"lsu_rready", false,-1);
    tracep->declBit(c+69,"lsu_rvalid", false,-1);
    tracep->declBus(c+70,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+371,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+372,"lsu_rlast", false,-1);
    tracep->declBus(c+373,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+31,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+71,"lsu_awvalid", false,-1);
    tracep->declBit(c+72,"lsu_awready", false,-1);
    tracep->declBus(c+374,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+375,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+376,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+377,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+43,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+73,"lsu_wvalid", false,-1);
    tracep->declBit(c+74,"lsu_wready", false,-1);
    tracep->declBus(c+378,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+379,"lsu_wlast", false,-1);
    tracep->declBit(c+75,"lsu_bready", false,-1);
    tracep->declBit(c+76,"lsu_bvalid", false,-1);
    tracep->declBus(c+380,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+381,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+77,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+78,"saxi_arvalid", false,-1);
    tracep->declBit(c+79,"saxi_arready", false,-1);
    tracep->declBus(c+382,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+383,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+384,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+385,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+80,"saxi_rready", false,-1);
    tracep->declBit(c+81,"saxi_rvalid", false,-1);
    tracep->declBus(c+82,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+386,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+387,"saxi_rlast", false,-1);
    tracep->declBus(c+388,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+83,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+84,"saxi_awvalid", false,-1);
    tracep->declBit(c+85,"saxi_awready", false,-1);
    tracep->declBus(c+389,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+390,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+391,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+392,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+86,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+87,"saxi_wvalid", false,-1);
    tracep->declBit(c+88,"saxi_wready", false,-1);
    tracep->declBus(c+393,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+394,"saxi_wlast", false,-1);
    tracep->declBit(c+89,"saxi_bready", false,-1);
    tracep->declBit(c+90,"saxi_bvalid", false,-1);
    tracep->declBus(c+395,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+396,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+397,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"uart_arvalid", false,-1);
    tracep->declBit(c+399,"uart_arready", false,-1);
    tracep->declBus(c+400,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+401,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+402,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+403,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+404,"uart_rready", false,-1);
    tracep->declBit(c+405,"uart_rvalid", false,-1);
    tracep->declBus(c+406,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+407,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+408,"uart_rlast", false,-1);
    tracep->declBus(c+409,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+91,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+92,"uart_awvalid", false,-1);
    tracep->declBit(c+93,"uart_awready", false,-1);
    tracep->declBus(c+410,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+412,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+413,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+94,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+95,"uart_wvalid", false,-1);
    tracep->declBit(c+96,"uart_wready", false,-1);
    tracep->declBus(c+414,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+415,"uart_wlast", false,-1);
    tracep->declBit(c+97,"uart_bready", false,-1);
    tracep->declBit(c+98,"uart_bvalid", false,-1);
    tracep->declBus(c+416,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+417,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+99,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+100,"clint_arvalid", false,-1);
    tracep->declBit(c+101,"clint_arready", false,-1);
    tracep->declBus(c+418,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+419,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+420,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+421,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+102,"clint_rready", false,-1);
    tracep->declBit(c+103,"clint_rvalid", false,-1);
    tracep->declBus(c+104,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+422,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+423,"clint_rlast", false,-1);
    tracep->declBus(c+424,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+425,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+426,"clint_awvalid", false,-1);
    tracep->declBit(c+427,"clint_awready", false,-1);
    tracep->declBus(c+428,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+429,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+430,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+431,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+432,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+433,"clint_wvalid", false,-1);
    tracep->declBit(c+434,"clint_wready", false,-1);
    tracep->declBus(c+435,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+436,"clint_wlast", false,-1);
    tracep->declBit(c+437,"clint_bready", false,-1);
    tracep->declBit(c+438,"clint_bvalid", false,-1);
    tracep->declBus(c+439,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+440,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+336,"arb_ready", false,-1);
    tracep->declBus(c+337,"state", false,-1, 3,0);
    tracep->declBit(c+338,"wait_read", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vysyx_23060240___024root__trace_init_top(Vysyx_23060240___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_init_top\n"); );
    // Body
    Vysyx_23060240___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vysyx_23060240___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060240___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vysyx_23060240___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vysyx_23060240___024root__trace_register(Vysyx_23060240___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vysyx_23060240___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vysyx_23060240___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vysyx_23060240___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vysyx_23060240___024root__trace_full_sub_0(Vysyx_23060240___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vysyx_23060240___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_full_top_0\n"); );
    // Init
    Vysyx_23060240___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vysyx_23060240___024root*>(voidSelf);
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vysyx_23060240___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vysyx_23060240___024root__trace_full_sub_0(Vysyx_23060240___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vysyx_23060240__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vysyx_23060240___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<18>/*575:0*/ __Vtemp_h6f9acf39__0;
    VlWide<10>/*319:0*/ __Vtemp_h28d4ba3b__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
    bufp->fullIData(oldp+17,(vlSelf->ysyx_23060240__DOT__GPR__DOT__i),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+23,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+24,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+25,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullBit(oldp+26,((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
    bufp->fullBit(oldp+27,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+28,(vlSelf->ysyx_23060240__DOT__w_csr_en));
    bufp->fullIData(oldp+29,(vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+30,(vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+31,(vlSelf->ysyx_23060240__DOT__alu_out),32);
    bufp->fullBit(oldp+32,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type) 
                            | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+33,(vlSelf->ysyx_23060240__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+34,(vlSelf->ysyx_23060240__DOT__alu_func),4);
    bufp->fullCData(oldp+35,(vlSelf->ysyx_23060240__DOT__branch_type),3);
    bufp->fullCData(oldp+36,(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+37,(vlSelf->ysyx_23060240__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+38,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+39,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+40,(((4U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                               ? ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                   ? 0U : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                            ? vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out
                                            : (0xffffU 
                                               & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out)))
                               : ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                   ? ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                          >> 0xfU)))) 
                                           << 0x10U) 
                                          | (0xffffU 
                                             & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                       : (0xffU & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                   : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                       ? (((- (IData)(
                                                      (1U 
                                                       & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                          >> 7U)))) 
                                           << 8U) | 
                                          (0xffU & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                       : 0U)))),32);
    bufp->fullIData(oldp+41,(vlSelf->ysyx_23060240__DOT__r_csr_data),32);
    bufp->fullIData(oldp+42,(vlSelf->ysyx_23060240__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+43,(vlSelf->ysyx_23060240__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_u_type) 
                            | ((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                               | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullCData(oldp+45,(vlSelf->ysyx_23060240__DOT__w_sel),2);
    bufp->fullIData(oldp+46,(((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h241ef1d5__0)
                               ? vlSelf->ysyx_23060240__DOT__alu_out
                               : ((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h445074e7__0)
                                   ? vlSelf->ysyx_23060240__DOT__r_csr_data
                                   : 0U))),32);
    bufp->fullBit(oldp+47,(((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                            | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+48,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+49,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+50,(vlSelf->ysyx_23060240__DOT__jump_branch));
    bufp->fullIData(oldp+51,(vlSelf->ysyx_23060240__DOT__imm_out),32);
    bufp->fullBit(oldp+52,(((~ ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_load_type) 
                                | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type))) 
                            & (IData)(vlSelf->ysyx_23060240__DOT__valid_ifu))));
    bufp->fullBit(oldp+53,(((IData)(vlSelf->ysyx_23060240__DOT__lsu_bready) 
                            & (IData)(vlSelf->ysyx_23060240__DOT__lsu_bvalid))));
    bufp->fullBit(oldp+54,(vlSelf->ysyx_23060240__DOT__rd_finish));
    bufp->fullBit(oldp+55,(vlSelf->ysyx_23060240__DOT__valid_ifu));
    bufp->fullBit(oldp+56,(vlSelf->ysyx_23060240__DOT__valid_idu));
    bufp->fullCData(oldp+57,(vlSelf->ysyx_23060240__DOT__uart_reg),8);
    bufp->fullBit(oldp+58,(vlSelf->ysyx_23060240__DOT__ifu_arvalid));
    bufp->fullBit(oldp+59,(vlSelf->ysyx_23060240__DOT__ifu_arready));
    bufp->fullBit(oldp+60,(vlSelf->ysyx_23060240__DOT__ifu_rready));
    bufp->fullBit(oldp+61,(vlSelf->ysyx_23060240__DOT__ifu_rvalid));
    bufp->fullIData(oldp+62,(vlSelf->ysyx_23060240__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+63,(vlSelf->ysyx_23060240__DOT__ifu_awready));
    bufp->fullBit(oldp+64,(vlSelf->ysyx_23060240__DOT__ifu_wready));
    bufp->fullBit(oldp+65,(vlSelf->ysyx_23060240__DOT__ifu_bvalid));
    bufp->fullBit(oldp+66,(vlSelf->ysyx_23060240__DOT__lsu_arvalid));
    bufp->fullBit(oldp+67,(vlSelf->ysyx_23060240__DOT__lsu_arready));
    bufp->fullBit(oldp+68,(vlSelf->ysyx_23060240__DOT__lsu_rready));
    bufp->fullBit(oldp+69,(vlSelf->ysyx_23060240__DOT__lsu_rvalid));
    bufp->fullIData(oldp+70,(vlSelf->ysyx_23060240__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+71,(vlSelf->ysyx_23060240__DOT__lsu_awvalid));
    bufp->fullBit(oldp+72,(vlSelf->ysyx_23060240__DOT__lsu_awready));
    bufp->fullBit(oldp+73,(vlSelf->ysyx_23060240__DOT__lsu_wvalid));
    bufp->fullBit(oldp+74,(vlSelf->ysyx_23060240__DOT__lsu_wready));
    bufp->fullBit(oldp+75,(vlSelf->ysyx_23060240__DOT__lsu_bready));
    bufp->fullBit(oldp+76,(vlSelf->ysyx_23060240__DOT__lsu_bvalid));
    bufp->fullIData(oldp+77,(vlSelf->ysyx_23060240__DOT__saxi_araddr),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyx_23060240__DOT__saxi_arvalid));
    bufp->fullBit(oldp+79,(vlSelf->ysyx_23060240__DOT__saxi_arready));
    bufp->fullBit(oldp+80,(vlSelf->ysyx_23060240__DOT__saxi_rready));
    bufp->fullBit(oldp+81,(vlSelf->ysyx_23060240__DOT__saxi_rvalid));
    bufp->fullIData(oldp+82,(vlSelf->ysyx_23060240__DOT__saxi_rdata),32);
    bufp->fullIData(oldp+83,(vlSelf->ysyx_23060240__DOT__saxi_awaddr),32);
    bufp->fullBit(oldp+84,(vlSelf->ysyx_23060240__DOT__saxi_awvalid));
    bufp->fullBit(oldp+85,(vlSelf->ysyx_23060240__DOT__saxi_awready));
    bufp->fullIData(oldp+86,(vlSelf->ysyx_23060240__DOT__saxi_wdata),32);
    bufp->fullBit(oldp+87,(vlSelf->ysyx_23060240__DOT__saxi_wvalid));
    bufp->fullBit(oldp+88,(vlSelf->ysyx_23060240__DOT__saxi_wready));
    bufp->fullBit(oldp+89,(vlSelf->ysyx_23060240__DOT__saxi_bready));
    bufp->fullBit(oldp+90,(vlSelf->ysyx_23060240__DOT__saxi_bvalid));
    bufp->fullIData(oldp+91,(vlSelf->ysyx_23060240__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+92,(vlSelf->ysyx_23060240__DOT__uart_awvalid));
    bufp->fullBit(oldp+93,(vlSelf->ysyx_23060240__DOT__uart_awready));
    bufp->fullIData(oldp+94,(vlSelf->ysyx_23060240__DOT__uart_wdata),32);
    bufp->fullBit(oldp+95,(vlSelf->ysyx_23060240__DOT__uart_wvalid));
    bufp->fullBit(oldp+96,(vlSelf->ysyx_23060240__DOT__uart_wready));
    bufp->fullBit(oldp+97,(vlSelf->ysyx_23060240__DOT__uart_bready));
    bufp->fullBit(oldp+98,(vlSelf->ysyx_23060240__DOT__uart_bvalid));
    bufp->fullIData(oldp+99,(vlSelf->ysyx_23060240__DOT__clint_araddr),32);
    bufp->fullBit(oldp+100,(vlSelf->ysyx_23060240__DOT__clint_arvalid));
    bufp->fullBit(oldp+101,(vlSelf->ysyx_23060240__DOT__clint_arready));
    bufp->fullBit(oldp+102,(vlSelf->ysyx_23060240__DOT__clint_rready));
    bufp->fullBit(oldp+103,(vlSelf->ysyx_23060240__DOT__clint_rvalid));
    bufp->fullIData(oldp+104,(vlSelf->ysyx_23060240__DOT__clint_rdata),32);
    bufp->fullIData(oldp+105,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+106,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+107,((VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+108,(((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+109,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+110,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+111,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+112,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+113,((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                               - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+114,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                             (0x1fU 
                                              & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b))),32);
    __Vtemp_h6f9acf39__0[0U] = 0U;
    __Vtemp_h6f9acf39__0[1U] = (0xfU | (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b 
                                        << 4U));
    __Vtemp_h6f9acf39__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                          << 8U) | 
                                         (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b 
                                          >> 0x1cU)));
    __Vtemp_h6f9acf39__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                          >> 0x18U));
    __Vtemp_h6f9acf39__0[4U] = 0xc000U;
    __Vtemp_h6f9acf39__0[5U] = 0xb0000U;
    __Vtemp_h6f9acf39__0[6U] = 0xa00000U;
    __Vtemp_h6f9acf39__0[7U] = (0x9000000U | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                               - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                              << 0x1cU));
    __Vtemp_h6f9acf39__0[8U] = (0x80000000U | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                - vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                               >> 4U));
    __Vtemp_h6f9acf39__0[9U] = (vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b);
    __Vtemp_h6f9acf39__0[0xaU] = (7U | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                         | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                        << 4U));
    __Vtemp_h6f9acf39__0[0xbU] = (0x60U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                            << 8U) 
                                           | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                               | vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                              >> 0x1cU)));
    __Vtemp_h6f9acf39__0[0xcU] = (0x500U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                              ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                             << 0xcU) 
                                            | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                               >> 0x18U)));
    __Vtemp_h6f9acf39__0[0xdU] = (0x4000U | ((((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                 ^ vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                >> 0x14U)));
    __Vtemp_h6f9acf39__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                   < vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_h6f9acf39__0[0xfU] = (0x200000U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a, vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_h6f9acf39__0[0x10U] = (0x1000000U | (((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                   + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b)) 
                                                    >> 8U)));
    __Vtemp_h6f9acf39__0[0x11U] = ((vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_a 
                                    + vlSelf->ysyx_23060240__DOT__ALU__DOT__signed_b) 
                                   >> 4U);
    bufp->fullWData(oldp+115,(__Vtemp_h6f9acf39__0),576);
    bufp->fullQData(oldp+133,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+135,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+137,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+139,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+141,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+143,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+145,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+147,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+149,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+151,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+153,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+155,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+157,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+159,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+161,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+163,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+165,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+166,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+169,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+170,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+171,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+172,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+173,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+174,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+175,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+176,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+177,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+178,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+180,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+181,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+182,(vlSelf->ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+183,(vlSelf->ysyx_23060240__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+185,(vlSelf->ysyx_23060240__DOT__CLINT__DOT__raddr),32);
    bufp->fullBit(oldp+186,(vlSelf->ysyx_23060240__DOT____Vcellinp__CSR__finish));
    bufp->fullSData(oldp+187,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+188,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+189,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+190,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+191,(vlSelf->ysyx_23060240__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullCData(oldp+192,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+193,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+194,((0x1fU & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                        >> 7U))),5);
    bufp->fullIData(oldp+195,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+196,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+197,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+198,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+199,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+200,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+201,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+202,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+203,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+204,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+205,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+206,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+207,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+208,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+209,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+210,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+211,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+212,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+213,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+214,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+215,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+216,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+217,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+218,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+219,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+220,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+221,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+222,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+223,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+224,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+225,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+226,(vlSelf->ysyx_23060240__DOT__GPR__DOT__rf[31]),32);
    bufp->fullCData(oldp+227,((0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)),7);
    bufp->fullCData(oldp+228,((7U & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+229,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+230,((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                               >> 7U)),25);
    bufp->fullBit(oldp+231,((0x37U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
    bufp->fullBit(oldp+232,((0x17U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata))));
    bufp->fullBit(oldp+233,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+234,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+235,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+236,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+237,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+238,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+239,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+240,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+241,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+242,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+243,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+244,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+245,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+246,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+247,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+248,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+249,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+250,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+251,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+252,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+253,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+254,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+255,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+256,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+257,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+258,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+259,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+260,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+261,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+262,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+263,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+264,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+265,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+266,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+267,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+268,(((0x17U == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyx_23060240__DOT__ifu_rdata)) 
                                | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr) 
                                   | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_b_type) 
                                      | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_s_type) 
                                         | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb) 
                                            | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh) 
                                               | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw) 
                                                  | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu) 
                                                     | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu) 
                                                        | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_add) 
                                                           | (IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi))))))))))))));
    bufp->fullBit(oldp+269,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+270,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+271,(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+272,(((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_jalr) 
                             | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lb) 
                                | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lh) 
                                   | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lw) 
                                      | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lbu) 
                                         | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_lhu) 
                                            | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_addi) 
                                               | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slti) 
                                                  | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_sltiu) 
                                                     | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_xori) 
                                                        | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_ori) 
                                                           | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_andi) 
                                                              | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_slli) 
                                                                 | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srli) 
                                                                    | ((IData)(vlSelf->ysyx_23060240__DOT__IDU__DOT__is_srai) 
                                                                       | (IData)(vlSelf->ysyx_23060240__DOT__w_csr_en))))))))))))))))));
    bufp->fullBit(oldp+273,(((IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->ysyx_23060240__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullBit(oldp+274,(vlSelf->ysyx_23060240__DOT____Vcellinp__IFU__finish));
    bufp->fullBit(oldp+275,(vlSelf->ysyx_23060240__DOT__IFU__DOT__axi_arvalid));
    bufp->fullIData(oldp+276,(vlSelf->ysyx_23060240__DOT__IFU__DOT__counter),32);
    bufp->fullBit(oldp+277,(vlSelf->ysyx_23060240__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+278,(vlSelf->ysyx_23060240__DOT__IFU__DOT__counter_rready),32);
    bufp->fullIData(oldp+279,((0xfffff000U & vlSelf->ysyx_23060240__DOT__ifu_rdata)),32);
    bufp->fullIData(oldp+280,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+281,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyx_23060240__DOT__ifu_rdata) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+282,(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5),32);
    bufp->fullIData(oldp+283,((((- (IData)((vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                  >> 7U))))),32);
    __Vtemp_h28d4ba3b__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5))));
    __Vtemp_h28d4ba3b__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->ysyx_23060240__DOT__ifu_rdata)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyx_23060240__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_h28d4ba3b__0[2U] = (0x1180U | ((vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_h28d4ba3b__0[3U] = (0xc000U | ((vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_h28d4ba3b__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                  << 8U)) 
                                              | (vlSelf->ysyx_23060240__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_h28d4ba3b__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                              >> 0x18U)))))));
    __Vtemp_h28d4ba3b__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                             >> 4U)))))));
    __Vtemp_h28d4ba3b__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h28d4ba3b__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                               << 0x11U)) 
                                           | (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                              >> 0x16U)));
    __Vtemp_h28d4ba3b__0[9U] = (0x2e0000U | (vlSelf->ysyx_23060240__DOT__ifu_rdata 
                                             >> 0xfU));
    bufp->fullWData(oldp+284,(__Vtemp_h28d4ba3b__0),312);
    bufp->fullQData(oldp+294,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+296,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+298,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+300,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+302,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+304,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+306,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+308,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+310,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+311,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+312,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+314,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+315,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+316,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+317,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+318,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+319,(vlSelf->ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+320,(vlSelf->ysyx_23060240__DOT____Vcellinp__LSU__mem_wr_en));
    bufp->fullIData(oldp+321,(vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullBit(oldp+322,(vlSelf->ysyx_23060240__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+323,(vlSelf->ysyx_23060240__DOT__LSU__DOT__counter),32);
    bufp->fullBit(oldp+324,(vlSelf->ysyx_23060240__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+325,(vlSelf->ysyx_23060240__DOT__LSU__DOT__counter_rready),32);
    bufp->fullIData(oldp+326,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_raddr),32);
    bufp->fullIData(oldp+327,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_data_to_read),32);
    bufp->fullBit(oldp+328,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__aw_hand));
    bufp->fullIData(oldp+329,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_waddr),32);
    bufp->fullBit(oldp+330,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__w_hand));
    bufp->fullIData(oldp+331,(vlSelf->ysyx_23060240__DOT__SRAM__DOT__axi_wdata),32);
    bufp->fullBit(oldp+332,(vlSelf->ysyx_23060240__DOT__UART__DOT__aw_hand));
    bufp->fullIData(oldp+333,(vlSelf->ysyx_23060240__DOT__UART__DOT__waddr),32);
    bufp->fullBit(oldp+334,(vlSelf->ysyx_23060240__DOT__UART__DOT__w_hand));
    bufp->fullIData(oldp+335,(vlSelf->ysyx_23060240__DOT__UART__DOT__wdata),32);
    bufp->fullBit(oldp+336,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__arb_ready));
    bufp->fullCData(oldp+337,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__state),4);
    bufp->fullBit(oldp+338,(vlSelf->ysyx_23060240__DOT__XBAR__DOT__wait_read));
    bufp->fullBit(oldp+339,(vlSelf->clk));
    bufp->fullBit(oldp+340,(vlSelf->rst));
    bufp->fullIData(oldp+341,(vlSelf->inst),32);
    bufp->fullIData(oldp+342,(vlSelf->pc),32);
    bufp->fullBit(oldp+343,(vlSelf->difftest));
    bufp->fullBit(oldp+344,(vlSelf->itrace_reg));
    bufp->fullIData(oldp+345,(((2U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                                    ? ((4U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                        ? ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                             ? vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out
                                             : (0xffffU 
                                                & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out)))
                                        : ((2U & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                                : (0xffU 
                                                   & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyx_23060240__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyx_23060240__DOT__LSU__DOT__mem_move_out))
                                                : 0U)))
                                    : vlSelf->ysyx_23060240__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->ysyx_23060240__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->pc)
                                    : vlSelf->ysyx_23060240__DOT__r_csr_data))),32);
    bufp->fullIData(oldp+346,(((IData)(4U) + vlSelf->pc)),32);
    bufp->fullCData(oldp+347,(vlSelf->ysyx_23060240__DOT__ifu_arid),4);
    bufp->fullCData(oldp+348,(vlSelf->ysyx_23060240__DOT__ifu_arlen),8);
    bufp->fullCData(oldp+349,(vlSelf->ysyx_23060240__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+350,(vlSelf->ysyx_23060240__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+351,(vlSelf->ysyx_23060240__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+352,(vlSelf->ysyx_23060240__DOT__ifu_rlast));
    bufp->fullCData(oldp+353,(vlSelf->ysyx_23060240__DOT__ifu_rid),4);
    bufp->fullIData(oldp+354,(vlSelf->ysyx_23060240__DOT__ifu_awaddr),32);
    bufp->fullBit(oldp+355,(vlSelf->ysyx_23060240__DOT__ifu_awvalid));
    bufp->fullCData(oldp+356,(vlSelf->ysyx_23060240__DOT__ifu_awid),4);
    bufp->fullCData(oldp+357,(vlSelf->ysyx_23060240__DOT__ifu_awlen),8);
    bufp->fullCData(oldp+358,(vlSelf->ysyx_23060240__DOT__ifu_awsize),3);
    bufp->fullCData(oldp+359,(vlSelf->ysyx_23060240__DOT__ifu_awburst),2);
    bufp->fullIData(oldp+360,(vlSelf->ysyx_23060240__DOT__ifu_wdata),32);
    bufp->fullBit(oldp+361,(vlSelf->ysyx_23060240__DOT__ifu_wvalid));
    bufp->fullCData(oldp+362,(vlSelf->ysyx_23060240__DOT__ifu_wstrb),4);
    bufp->fullBit(oldp+363,(vlSelf->ysyx_23060240__DOT__ifu_wlast));
    bufp->fullBit(oldp+364,(vlSelf->ysyx_23060240__DOT__ifu_bready));
    bufp->fullCData(oldp+365,(vlSelf->ysyx_23060240__DOT__ifu_bresp),2);
    bufp->fullCData(oldp+366,(vlSelf->ysyx_23060240__DOT__ifu_bid),4);
    bufp->fullCData(oldp+367,(vlSelf->ysyx_23060240__DOT__lsu_arid),4);
    bufp->fullCData(oldp+368,(vlSelf->ysyx_23060240__DOT__lsu_arlen),8);
    bufp->fullCData(oldp+369,(vlSelf->ysyx_23060240__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+370,(vlSelf->ysyx_23060240__DOT__lsu_arburst),2);
    bufp->fullCData(oldp+371,(vlSelf->ysyx_23060240__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+372,(vlSelf->ysyx_23060240__DOT__lsu_rlast));
    bufp->fullCData(oldp+373,(vlSelf->ysyx_23060240__DOT__lsu_rid),4);
    bufp->fullCData(oldp+374,(vlSelf->ysyx_23060240__DOT__lsu_awid),4);
    bufp->fullCData(oldp+375,(vlSelf->ysyx_23060240__DOT__lsu_awlen),8);
    bufp->fullCData(oldp+376,(vlSelf->ysyx_23060240__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+377,(vlSelf->ysyx_23060240__DOT__lsu_awburst),2);
    bufp->fullCData(oldp+378,(vlSelf->ysyx_23060240__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+379,(vlSelf->ysyx_23060240__DOT__lsu_wlast));
    bufp->fullCData(oldp+380,(vlSelf->ysyx_23060240__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+381,(vlSelf->ysyx_23060240__DOT__lsu_bid),4);
    bufp->fullCData(oldp+382,(vlSelf->ysyx_23060240__DOT__saxi_arid),4);
    bufp->fullCData(oldp+383,(vlSelf->ysyx_23060240__DOT__saxi_arlen),8);
    bufp->fullCData(oldp+384,(vlSelf->ysyx_23060240__DOT__saxi_arsize),3);
    bufp->fullCData(oldp+385,(vlSelf->ysyx_23060240__DOT__saxi_arburst),2);
    bufp->fullCData(oldp+386,(vlSelf->ysyx_23060240__DOT__saxi_rresp),2);
    bufp->fullBit(oldp+387,(vlSelf->ysyx_23060240__DOT__saxi_rlast));
    bufp->fullCData(oldp+388,(vlSelf->ysyx_23060240__DOT__saxi_rid),4);
    bufp->fullCData(oldp+389,(vlSelf->ysyx_23060240__DOT__saxi_awid),4);
    bufp->fullCData(oldp+390,(vlSelf->ysyx_23060240__DOT__saxi_awlen),8);
    bufp->fullCData(oldp+391,(vlSelf->ysyx_23060240__DOT__saxi_awsize),3);
    bufp->fullCData(oldp+392,(vlSelf->ysyx_23060240__DOT__saxi_awburst),2);
    bufp->fullCData(oldp+393,(vlSelf->ysyx_23060240__DOT__saxi_wstrb),4);
    bufp->fullBit(oldp+394,(vlSelf->ysyx_23060240__DOT__saxi_wlast));
    bufp->fullCData(oldp+395,(vlSelf->ysyx_23060240__DOT__saxi_bresp),2);
    bufp->fullCData(oldp+396,(vlSelf->ysyx_23060240__DOT__saxi_bid),4);
    bufp->fullIData(oldp+397,(vlSelf->ysyx_23060240__DOT__uart_araddr),32);
    bufp->fullBit(oldp+398,(vlSelf->ysyx_23060240__DOT__uart_arvalid));
    bufp->fullBit(oldp+399,(vlSelf->ysyx_23060240__DOT__uart_arready));
    bufp->fullCData(oldp+400,(vlSelf->ysyx_23060240__DOT__uart_arid),4);
    bufp->fullCData(oldp+401,(vlSelf->ysyx_23060240__DOT__uart_arlen),8);
    bufp->fullCData(oldp+402,(vlSelf->ysyx_23060240__DOT__uart_arsize),3);
    bufp->fullCData(oldp+403,(vlSelf->ysyx_23060240__DOT__uart_arburst),2);
    bufp->fullBit(oldp+404,(vlSelf->ysyx_23060240__DOT__uart_rready));
    bufp->fullBit(oldp+405,(vlSelf->ysyx_23060240__DOT__uart_rvalid));
    bufp->fullIData(oldp+406,(vlSelf->ysyx_23060240__DOT__uart_rdata),32);
    bufp->fullCData(oldp+407,(vlSelf->ysyx_23060240__DOT__uart_rresp),2);
    bufp->fullBit(oldp+408,(vlSelf->ysyx_23060240__DOT__uart_rlast));
    bufp->fullCData(oldp+409,(vlSelf->ysyx_23060240__DOT__uart_rid),4);
    bufp->fullCData(oldp+410,(vlSelf->ysyx_23060240__DOT__uart_awid),4);
    bufp->fullCData(oldp+411,(vlSelf->ysyx_23060240__DOT__uart_awlen),8);
    bufp->fullCData(oldp+412,(vlSelf->ysyx_23060240__DOT__uart_awsize),3);
    bufp->fullCData(oldp+413,(vlSelf->ysyx_23060240__DOT__uart_awburst),2);
    bufp->fullCData(oldp+414,(vlSelf->ysyx_23060240__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+415,(vlSelf->ysyx_23060240__DOT__uart_wlast));
    bufp->fullCData(oldp+416,(vlSelf->ysyx_23060240__DOT__uart_bresp),2);
    bufp->fullCData(oldp+417,(vlSelf->ysyx_23060240__DOT__uart_bid),4);
    bufp->fullCData(oldp+418,(vlSelf->ysyx_23060240__DOT__clint_arid),4);
    bufp->fullCData(oldp+419,(vlSelf->ysyx_23060240__DOT__clint_arlen),8);
    bufp->fullCData(oldp+420,(vlSelf->ysyx_23060240__DOT__clint_arsize),3);
    bufp->fullCData(oldp+421,(vlSelf->ysyx_23060240__DOT__clint_arburst),2);
    bufp->fullCData(oldp+422,(vlSelf->ysyx_23060240__DOT__clint_rresp),2);
    bufp->fullBit(oldp+423,(vlSelf->ysyx_23060240__DOT__clint_rlast));
    bufp->fullCData(oldp+424,(vlSelf->ysyx_23060240__DOT__clint_rid),4);
    bufp->fullIData(oldp+425,(vlSelf->ysyx_23060240__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+426,(vlSelf->ysyx_23060240__DOT__clint_awvalid));
    bufp->fullBit(oldp+427,(vlSelf->ysyx_23060240__DOT__clint_awready));
    bufp->fullCData(oldp+428,(vlSelf->ysyx_23060240__DOT__clint_awid),4);
    bufp->fullCData(oldp+429,(vlSelf->ysyx_23060240__DOT__clint_awlen),8);
    bufp->fullCData(oldp+430,(vlSelf->ysyx_23060240__DOT__clint_awsize),3);
    bufp->fullCData(oldp+431,(vlSelf->ysyx_23060240__DOT__clint_awburst),2);
    bufp->fullIData(oldp+432,(vlSelf->ysyx_23060240__DOT__clint_wdata),32);
    bufp->fullBit(oldp+433,(vlSelf->ysyx_23060240__DOT__clint_wvalid));
    bufp->fullBit(oldp+434,(vlSelf->ysyx_23060240__DOT__clint_wready));
    bufp->fullCData(oldp+435,(vlSelf->ysyx_23060240__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+436,(vlSelf->ysyx_23060240__DOT__clint_wlast));
    bufp->fullBit(oldp+437,(vlSelf->ysyx_23060240__DOT__clint_bready));
    bufp->fullBit(oldp+438,(vlSelf->ysyx_23060240__DOT__clint_bvalid));
    bufp->fullCData(oldp+439,(vlSelf->ysyx_23060240__DOT__clint_bresp),2);
    bufp->fullCData(oldp+440,(vlSelf->ysyx_23060240__DOT__clint_bid),4);
    bufp->fullIData(oldp+441,(0U),32);
    bufp->fullIData(oldp+442,(0x10U),32);
    bufp->fullIData(oldp+443,(4U),32);
    bufp->fullIData(oldp+444,(0x20U),32);
    bufp->fullIData(oldp+445,(0U),32);
    bufp->fullIData(oldp+446,(0x24U),32);
    bufp->fullIData(oldp+447,(0x10U),32);
    bufp->fullIData(oldp+448,(0xa0000048U),32);
    bufp->fullIData(oldp+449,(0xa000005cU),32);
    bufp->fullIData(oldp+450,(5U),32);
    bufp->fullBit(oldp+451,(vlSelf->ysyx_23060240__DOT__IFU__DOT__rvalid));
    bufp->fullIData(oldp+452,(8U),32);
    bufp->fullIData(oldp+453,(7U),32);
    bufp->fullIData(oldp+454,(1U),32);
    bufp->fullIData(oldp+455,(0x27U),32);
    bufp->fullIData(oldp+456,(8U),32);
    bufp->fullIData(oldp+457,(0xa00003f8U),32);
}
