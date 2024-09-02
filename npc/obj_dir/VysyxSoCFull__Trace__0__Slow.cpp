// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VysyxSoCFull__Syms.h"


VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_sub__TOP__0(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1124,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1125,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1132,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1134,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1135,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1136,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1139,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1140,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1141,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1142,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1143,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1124,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1125,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1126,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1127,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1128,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1129,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1130,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1131,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1132,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1133,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1134,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1135,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1136,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1137,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1138,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1139,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1140,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1141,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1142,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1143,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+723,"spi_sck", false,-1);
    tracep->declBus(c+724,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1144,"spi_mosi", false,-1);
    tracep->declBit(c+1145,"spi_miso", false,-1);
    tracep->declBit(c+1142,"uart_rx", false,-1);
    tracep->declBit(c+1143,"uart_tx", false,-1);
    tracep->declBit(c+1146,"psram_sck", false,-1);
    tracep->declBit(c+1147,"psram_ce_n", false,-1);
    tracep->declBus(c+1018,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1148,"sdram_clk", false,-1);
    tracep->declBit(c+725,"sdram_cke", false,-1);
    tracep->declBit(c+726,"sdram_cs", false,-1);
    tracep->declBit(c+727,"sdram_ras", false,-1);
    tracep->declBit(c+728,"sdram_cas", false,-1);
    tracep->declBit(c+729,"sdram_we", false,-1);
    tracep->declBus(c+730,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+731,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+732,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+733,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1124,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1125,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1126,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1134,"ps2_clk", false,-1);
    tracep->declBit(c+1135,"ps2_data", false,-1);
    tracep->declBus(c+1136,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1137,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1138,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1139,"vga_hsync", false,-1);
    tracep->declBit(c+1140,"vga_vsync", false,-1);
    tracep->declBit(c+1141,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+968,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+32,"in_psel", false,-1);
    tracep->declBit(c+33,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1019,"in_pready", false,-1);
    tracep->declBus(c+1020,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+972,"in_pslverr", false,-1);
    tracep->declBus(c+968,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+32,"out_psel", false,-1);
    tracep->declBit(c+33,"out_penable", false,-1);
    tracep->declBus(c+1163,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"out_pwrite", false,-1);
    tracep->declBus(c+970,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1019,"out_pready", false,-1);
    tracep->declBus(c+1020,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+972,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+32,"auto_in_psel", false,-1);
    tracep->declBit(c+33,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+968,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1019,"auto_in_pready", false,-1);
    tracep->declBit(c+972,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1020,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+672,"auto_out_6_psel", false,-1);
    tracep->declBit(c+673,"auto_out_6_penable", false,-1);
    tracep->declBit(c+969,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+968,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+734,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1164,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+735,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+674,"auto_out_5_psel", false,-1);
    tracep->declBit(c+675,"auto_out_5_penable", false,-1);
    tracep->declBit(c+969,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+973,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1166,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+676,"auto_out_4_psel", false,-1);
    tracep->declBit(c+677,"auto_out_4_penable", false,-1);
    tracep->declBit(c+969,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+974,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1169,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1170,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+678,"auto_out_3_psel", false,-1);
    tracep->declBit(c+679,"auto_out_3_penable", false,-1);
    tracep->declBit(c+969,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+974,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1172,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+975,"auto_out_2_psel", false,-1);
    tracep->declBit(c+680,"auto_out_2_penable", false,-1);
    tracep->declBit(c+969,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+968,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1164,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+34,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+976,"auto_out_1_psel", false,-1);
    tracep->declBit(c+977,"auto_out_1_penable", false,-1);
    tracep->declBit(c+969,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+974,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+978,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1164,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+979,"auto_out_0_psel", false,-1);
    tracep->declBit(c+980,"auto_out_0_penable", false,-1);
    tracep->declBit(c+969,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+973,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+736,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1164,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+737,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+981,"sel_0", false,-1);
    tracep->declBit(c+982,"sel_1", false,-1);
    tracep->declBit(c+983,"sel_2", false,-1);
    tracep->declBit(c+984,"sel_3", false,-1);
    tracep->declBit(c+985,"sel_4", false,-1);
    tracep->declBit(c+986,"sel_5", false,-1);
    tracep->declBit(c+987,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+35,"auto_in_awready", false,-1);
    tracep->declBit(c+36,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+35,"auto_in_wready", false,-1);
    tracep->declBit(c+40,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1021,"auto_in_bready", false,-1);
    tracep->declBit(c+1022,"auto_in_bvalid", false,-1);
    tracep->declBus(c+43,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+681,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1023,"auto_in_rready", false,-1);
    tracep->declBit(c+1024,"auto_in_rvalid", false,-1);
    tracep->declBus(c+49,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+682,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+681,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+32,"auto_out_psel", false,-1);
    tracep->declBit(c+33,"auto_out_penable", false,-1);
    tracep->declBit(c+969,"auto_out_pwrite", false,-1);
    tracep->declBus(c+968,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+970,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1019,"auto_out_pready", false,-1);
    tracep->declBit(c+972,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1020,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+33,"nodeOut_penable", false,-1);
    tracep->declBus(c+50,"state", false,-1, 1,0);
    tracep->declBit(c+44,"accept_read", false,-1);
    tracep->declBit(c+35,"accept_write", false,-1);
    tracep->declBit(c+51,"is_write_r", false,-1);
    tracep->declBit(c+969,"is_write", false,-1);
    tracep->declBus(c+49,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+43,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+52,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+53,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+54,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+55,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+988,"resp", false,-1, 1,0);
    tracep->declBus(c+56,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+681,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1024,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+57,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1022,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+58,"auto_in_awready", false,-1);
    tracep->declBit(c+59,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1174,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+64,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_in_bready", false,-1);
    tracep->declBit(c+1025,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+683,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+1027,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+684,"auto_in_rlast", false,-1);
    tracep->declBit(c+1030,"auto_out_awready", false,-1);
    tracep->declBit(c+71,"auto_out_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+72,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1031,"auto_out_wready", false,-1);
    tracep->declBit(c+73,"auto_out_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_out_wlast", false,-1);
    tracep->declBit(c+1032,"auto_out_bready", false,-1);
    tracep->declBit(c+1033,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1034,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1035,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1036,"auto_out_arready", false,-1);
    tracep->declBit(c+75,"auto_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+76,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+70,"auto_out_rready", false,-1);
    tracep->declBit(c+1027,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+685,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1037,"auto_out_rlast", false,-1);
    tracep->declBit(c+73,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+77,"w_idle", false,-1);
    tracep->declBit(c+1038,"in_awready", false,-1);
    tracep->declBit(c+78,"busy", false,-1);
    tracep->declBus(c+79,"r_addr", false,-1, 31,0);
    tracep->declBus(c+80,"r_len", false,-1, 7,0);
    tracep->declBus(c+81,"len", false,-1, 7,0);
    tracep->declBus(c+82,"addr", false,-1, 31,0);
    tracep->declBit(c+83,"busy_1", false,-1);
    tracep->declBus(c+84,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+85,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+86,"len_1", false,-1, 7,0);
    tracep->declBus(c+87,"addr_1", false,-1, 31,0);
    tracep->declBit(c+88,"wbeats_latched", false,-1);
    tracep->declBit(c+71,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+89,"wbeats_valid", false,-1);
    tracep->declBus(c+90,"w_counter", false,-1, 8,0);
    tracep->declBus(c+91,"w_todo", false,-1, 8,0);
    tracep->declBit(c+74,"w_last", false,-1);
    tracep->declBit(c+1032,"nodeOut_bready", false,-1);
    tracep->declBus(c+92,"error_0", false,-1, 1,0);
    tracep->declBus(c+93,"error_1", false,-1, 1,0);
    tracep->declBus(c+94,"error_2", false,-1, 1,0);
    tracep->declBus(c+95,"error_3", false,-1, 1,0);
    tracep->declBus(c+96,"error_4", false,-1, 1,0);
    tracep->declBus(c+97,"error_5", false,-1, 1,0);
    tracep->declBus(c+98,"error_6", false,-1, 1,0);
    tracep->declBus(c+99,"error_7", false,-1, 1,0);
    tracep->declBus(c+100,"error_8", false,-1, 1,0);
    tracep->declBus(c+101,"error_9", false,-1, 1,0);
    tracep->declBus(c+102,"error_10", false,-1, 1,0);
    tracep->declBus(c+103,"error_11", false,-1, 1,0);
    tracep->declBus(c+104,"error_12", false,-1, 1,0);
    tracep->declBus(c+105,"error_13", false,-1, 1,0);
    tracep->declBus(c+106,"error_14", false,-1, 1,0);
    tracep->declBus(c+107,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+66,"io_enq_ready", false,-1);
    tracep->declBit(c+67,"io_enq_valid", false,-1);
    tracep->declBus(c+1174,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+68,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1175,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+69,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1176,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1039,"io_deq_ready", false,-1);
    tracep->declBit(c+75,"io_deq_valid", false,-1);
    tracep->declBus(c+46,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+108,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+109,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+48,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+110,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+111,"ram", false,-1, 48,0);
    tracep->declBit(c+113,"full", false,-1);
    tracep->declBit(c+75,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1040,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+58,"io_enq_ready", false,-1);
    tracep->declBit(c+59,"io_enq_valid", false,-1);
    tracep->declBus(c+1174,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+60,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1175,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+61,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1176,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1041,"io_deq_ready", false,-1);
    tracep->declBit(c+114,"io_deq_valid", false,-1);
    tracep->declBus(c+37,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+115,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+116,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+117,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+118,"ram", false,-1, 48,0);
    tracep->declBit(c+120,"full", false,-1);
    tracep->declBit(c+114,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1042,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+62,"io_enq_ready", false,-1);
    tracep->declBit(c+63,"io_enq_valid", false,-1);
    tracep->declBus(c+64,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1174,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1164,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1043,"io_deq_ready", false,-1);
    tracep->declBit(c+121,"io_deq_valid", false,-1);
    tracep->declBus(c+41,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+42,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+122,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+123,"ram", false,-1, 36,0);
    tracep->declBit(c+125,"full", false,-1);
    tracep->declBit(c+121,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1044,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4ram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1045,"auto_in_awready", false,-1);
    tracep->declBit(c+126,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+686,"auto_in_wready", false,-1);
    tracep->declBit(c+128,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_in_bready", false,-1);
    tracep->declBit(c+129,"auto_in_bvalid", false,-1);
    tracep->declBus(c+130,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1047,"auto_in_arready", false,-1);
    tracep->declBit(c+132,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1048,"auto_in_rready", false,-1);
    tracep->declBit(c+134,"auto_in_rvalid", false,-1);
    tracep->declBus(c+135,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+137,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1047,"nodeIn_arready", false,-1);
    tracep->declBit(c+1045,"nodeIn_awready", false,-1);
    tracep->declBit(c+138,"w_sel0", false,-1);
    tracep->declBit(c+129,"w_full", false,-1);
    tracep->declBus(c+130,"w_id", false,-1, 3,0);
    tracep->declBit(c+139,"r_sel1", false,-1);
    tracep->declBit(c+140,"w_sel1", false,-1);
    tracep->declBit(c+134,"r_full", false,-1);
    tracep->declBus(c+135,"r_id", false,-1, 3,0);
    tracep->declBit(c+1049,"ren", false,-1);
    tracep->declBit(c+141,"rdata_REG", false,-1);
    tracep->declBus(c+142,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+143,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+144,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+145,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+146,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1049,"R0_en", false,-1);
    tracep->declBit(c+1122,"R0_clk", false,-1);
    tracep->declBus(c+147,"R0_data", false,-1, 31,0);
    tracep->declBus(c+148,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1050,"W0_en", false,-1);
    tracep->declBit(c+1122,"W0_clk", false,-1);
    tracep->declBus(c+41,"W0_data", false,-1, 31,0);
    tracep->declBus(c+42,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+58,"auto_in_awready", false,-1);
    tracep->declBit(c+59,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1174,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+64,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_in_wlast", false,-1);
    tracep->declBit(c+65,"auto_in_bready", false,-1);
    tracep->declBit(c+1025,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+683,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_in_arready", false,-1);
    tracep->declBit(c+67,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+1027,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+684,"auto_in_rlast", false,-1);
    tracep->declBit(c+58,"auto_out_awready", false,-1);
    tracep->declBit(c+59,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1174,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_out_wready", false,-1);
    tracep->declBit(c+63,"auto_out_wvalid", false,-1);
    tracep->declBus(c+64,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_out_bready", false,-1);
    tracep->declBit(c+1025,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+683,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_out_arready", false,-1);
    tracep->declBit(c+67,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_out_rready", false,-1);
    tracep->declBit(c+1027,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+684,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1051,"auto_in_awready", false,-1);
    tracep->declBit(c+149,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1031,"auto_in_wready", false,-1);
    tracep->declBit(c+73,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_in_wlast", false,-1);
    tracep->declBit(c+1032,"auto_in_bready", false,-1);
    tracep->declBit(c+1033,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1034,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1052,"auto_in_arready", false,-1);
    tracep->declBit(c+150,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+1027,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1037,"auto_in_rlast", false,-1);
    tracep->declBit(c+1045,"auto_out_2_awready", false,-1);
    tracep->declBit(c+126,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+127,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+686,"auto_out_2_wready", false,-1);
    tracep->declBit(c+128,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1046,"auto_out_2_bready", false,-1);
    tracep->declBit(c+129,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+130,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+131,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1047,"auto_out_2_arready", false,-1);
    tracep->declBit(c+132,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+133,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1048,"auto_out_2_rready", false,-1);
    tracep->declBit(c+134,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+135,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+136,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+137,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+151,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+152,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+153,"auto_out_1_arready", false,-1);
    tracep->declBit(c+154,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+687,"auto_out_1_rready", false,-1);
    tracep->declBit(c+156,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+157,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+35,"auto_out_0_awready", false,-1);
    tracep->declBit(c+36,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+35,"auto_out_0_wready", false,-1);
    tracep->declBit(c+40,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1021,"auto_out_0_bready", false,-1);
    tracep->declBit(c+1022,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+43,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+681,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_0_arready", false,-1);
    tracep->declBit(c+45,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1023,"auto_out_0_rready", false,-1);
    tracep->declBit(c+1024,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+49,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+682,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+681,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1033,"in_0_bvalid", false,-1);
    tracep->declBit(c+1027,"in_0_rvalid", false,-1);
    tracep->declBit(c+1051,"nodeIn_awready", false,-1);
    tracep->declBit(c+159,"requestARIO_0_0", false,-1);
    tracep->declBit(c+160,"requestARIO_0_1", false,-1);
    tracep->declBit(c+161,"requestARIO_0_2", false,-1);
    tracep->declBit(c+162,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+163,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+164,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+165,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+187,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+188,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+189,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+190,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+191,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+192,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+193,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+194,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+195,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+196,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+197,"latched", false,-1);
    tracep->declBit(c+198,"in_0_awvalid", false,-1);
    tracep->declBit(c+199,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+200,"in_0_wvalid", false,-1);
    tracep->declBit(c+201,"idle_3", false,-1);
    tracep->declBit(c+1053,"anyValid", false,-1);
    tracep->declBus(c+1054,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+202,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1055,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1056,"prefixOR_1", false,-1);
    tracep->declBit(c+1057,"winner_3_1", false,-1);
    tracep->declBit(c+1058,"winner_3_2", false,-1);
    tracep->declBit(c+203,"state_3_0", false,-1);
    tracep->declBit(c+204,"state_3_1", false,-1);
    tracep->declBit(c+205,"state_3_2", false,-1);
    tracep->declBit(c+1059,"muxState_3_0", false,-1);
    tracep->declBit(c+1060,"muxState_3_1", false,-1);
    tracep->declBit(c+1061,"muxState_3_2", false,-1);
    tracep->declBit(c+206,"idle_4", false,-1);
    tracep->declBit(c+1062,"anyValid_1", false,-1);
    tracep->declBus(c+1063,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+207,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1064,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1065,"winner_4_0", false,-1);
    tracep->declBit(c+1066,"winner_4_2", false,-1);
    tracep->declBit(c+208,"state_4_0", false,-1);
    tracep->declBit(c+209,"state_4_2", false,-1);
    tracep->declBit(c+1067,"muxState_4_0", false,-1);
    tracep->declBit(c+1068,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+210,"io_enq_ready", false,-1);
    tracep->declBit(c+199,"io_enq_valid", false,-1);
    tracep->declBus(c+211,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1069,"io_deq_ready", false,-1);
    tracep->declBit(c+212,"io_deq_valid", false,-1);
    tracep->declBus(c+213,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+214,"wrap", false,-1);
    tracep->declBit(c+215,"wrap_1", false,-1);
    tracep->declBit(c+216,"maybe_full", false,-1);
    tracep->declBit(c+217,"ptr_match", false,-1);
    tracep->declBit(c+218,"empty", false,-1);
    tracep->declBit(c+219,"full", false,-1);
    tracep->declBit(c+212,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1070,"do_deq", false,-1);
    tracep->declBit(c+1071,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+215,"R0_addr", false,-1);
    tracep->declBit(c+1177,"R0_en", false,-1);
    tracep->declBit(c+1122,"R0_clk", false,-1);
    tracep->declBus(c+220,"R0_data", false,-1, 2,0);
    tracep->declBit(c+214,"W0_addr", false,-1);
    tracep->declBit(c+1071,"W0_en", false,-1);
    tracep->declBit(c+1122,"W0_clk", false,-1);
    tracep->declBus(c+211,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+221+i*1,"Memory", true,(i+0), 2,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4yank ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1030,"auto_in_awready", false,-1);
    tracep->declBit(c+71,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+72,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1031,"auto_in_wready", false,-1);
    tracep->declBit(c+73,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_in_wlast", false,-1);
    tracep->declBit(c+1032,"auto_in_bready", false,-1);
    tracep->declBit(c+1033,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1034,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1035,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1036,"auto_in_arready", false,-1);
    tracep->declBit(c+75,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+76,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+70,"auto_in_rready", false,-1);
    tracep->declBit(c+1027,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+685,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1037,"auto_in_rlast", false,-1);
    tracep->declBit(c+1051,"auto_out_awready", false,-1);
    tracep->declBit(c+149,"auto_out_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1031,"auto_out_wready", false,-1);
    tracep->declBit(c+73,"auto_out_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+74,"auto_out_wlast", false,-1);
    tracep->declBit(c+1032,"auto_out_bready", false,-1);
    tracep->declBit(c+1033,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1034,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1052,"auto_out_arready", false,-1);
    tracep->declBit(c+150,"auto_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+70,"auto_out_rready", false,-1);
    tracep->declBit(c+1027,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1037,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+223,"io_enq_ready", false,-1);
    tracep->declBit(c+688,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1072,"io_deq_ready", false,-1);
    tracep->declBit(c+224,"io_deq_valid", false,-1);
    tracep->declBit(c+225,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+225,"ram_real_last", false,-1);
    tracep->declBit(c+224,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+226,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+227,"io_enq_ready", false,-1);
    tracep->declBit(c+689,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+228,"io_deq_valid", false,-1);
    tracep->declBit(c+229,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+229,"ram_real_last", false,-1);
    tracep->declBit(c+228,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+230,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+231,"io_enq_ready", false,-1);
    tracep->declBit(c+690,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1074,"io_deq_ready", false,-1);
    tracep->declBit(c+232,"io_deq_valid", false,-1);
    tracep->declBit(c+233,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+233,"ram_real_last", false,-1);
    tracep->declBit(c+232,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+234,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+235,"io_enq_ready", false,-1);
    tracep->declBit(c+691,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+236,"io_deq_valid", false,-1);
    tracep->declBit(c+237,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+237,"ram_real_last", false,-1);
    tracep->declBit(c+236,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+238,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+239,"io_enq_ready", false,-1);
    tracep->declBit(c+692,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1076,"io_deq_ready", false,-1);
    tracep->declBit(c+240,"io_deq_valid", false,-1);
    tracep->declBit(c+241,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+241,"ram_real_last", false,-1);
    tracep->declBit(c+240,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+242,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+243,"io_enq_ready", false,-1);
    tracep->declBit(c+693,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1077,"io_deq_ready", false,-1);
    tracep->declBit(c+244,"io_deq_valid", false,-1);
    tracep->declBit(c+245,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+245,"ram_real_last", false,-1);
    tracep->declBit(c+244,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+246,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+247,"io_enq_ready", false,-1);
    tracep->declBit(c+694,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1078,"io_deq_ready", false,-1);
    tracep->declBit(c+248,"io_deq_valid", false,-1);
    tracep->declBit(c+249,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+249,"ram_real_last", false,-1);
    tracep->declBit(c+248,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+250,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+251,"io_enq_ready", false,-1);
    tracep->declBit(c+695,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1079,"io_deq_ready", false,-1);
    tracep->declBit(c+252,"io_deq_valid", false,-1);
    tracep->declBit(c+253,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+253,"ram_real_last", false,-1);
    tracep->declBit(c+252,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+254,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+255,"io_enq_ready", false,-1);
    tracep->declBit(c+696,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1080,"io_deq_ready", false,-1);
    tracep->declBit(c+256,"io_deq_valid", false,-1);
    tracep->declBit(c+257,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+257,"ram_real_last", false,-1);
    tracep->declBit(c+256,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+258,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+259,"io_enq_ready", false,-1);
    tracep->declBit(c+697,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1081,"io_deq_ready", false,-1);
    tracep->declBit(c+260,"io_deq_valid", false,-1);
    tracep->declBit(c+261,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+261,"ram_real_last", false,-1);
    tracep->declBit(c+260,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+262,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+263,"io_enq_ready", false,-1);
    tracep->declBit(c+698,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1082,"io_deq_ready", false,-1);
    tracep->declBit(c+264,"io_deq_valid", false,-1);
    tracep->declBit(c+265,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+265,"ram_real_last", false,-1);
    tracep->declBit(c+264,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+266,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+267,"io_enq_ready", false,-1);
    tracep->declBit(c+699,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1083,"io_deq_ready", false,-1);
    tracep->declBit(c+268,"io_deq_valid", false,-1);
    tracep->declBit(c+269,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+269,"ram_real_last", false,-1);
    tracep->declBit(c+268,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+270,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+271,"io_enq_ready", false,-1);
    tracep->declBit(c+700,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1084,"io_deq_ready", false,-1);
    tracep->declBit(c+272,"io_deq_valid", false,-1);
    tracep->declBit(c+273,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+273,"ram_real_last", false,-1);
    tracep->declBit(c+272,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+274,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+275,"io_enq_ready", false,-1);
    tracep->declBit(c+701,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1085,"io_deq_ready", false,-1);
    tracep->declBit(c+276,"io_deq_valid", false,-1);
    tracep->declBit(c+277,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+277,"ram_real_last", false,-1);
    tracep->declBit(c+276,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+278,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+279,"io_enq_ready", false,-1);
    tracep->declBit(c+702,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1086,"io_deq_ready", false,-1);
    tracep->declBit(c+280,"io_deq_valid", false,-1);
    tracep->declBit(c+281,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+281,"ram_real_last", false,-1);
    tracep->declBit(c+280,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+282,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+283,"io_enq_ready", false,-1);
    tracep->declBit(c+703,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1087,"io_deq_ready", false,-1);
    tracep->declBit(c+284,"io_deq_valid", false,-1);
    tracep->declBit(c+285,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+285,"ram_real_last", false,-1);
    tracep->declBit(c+284,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+286,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+287,"io_enq_ready", false,-1);
    tracep->declBit(c+704,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1088,"io_deq_ready", false,-1);
    tracep->declBit(c+288,"io_deq_valid", false,-1);
    tracep->declBit(c+289,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+289,"ram_real_last", false,-1);
    tracep->declBit(c+288,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+290,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+291,"io_enq_ready", false,-1);
    tracep->declBit(c+705,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1089,"io_deq_ready", false,-1);
    tracep->declBit(c+292,"io_deq_valid", false,-1);
    tracep->declBit(c+293,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+293,"ram_real_last", false,-1);
    tracep->declBit(c+292,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+294,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+295,"io_enq_ready", false,-1);
    tracep->declBit(c+706,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1090,"io_deq_ready", false,-1);
    tracep->declBit(c+296,"io_deq_valid", false,-1);
    tracep->declBit(c+297,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+297,"ram_real_last", false,-1);
    tracep->declBit(c+296,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+298,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+299,"io_enq_ready", false,-1);
    tracep->declBit(c+707,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1091,"io_deq_ready", false,-1);
    tracep->declBit(c+300,"io_deq_valid", false,-1);
    tracep->declBit(c+301,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+301,"ram_real_last", false,-1);
    tracep->declBit(c+300,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+302,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+303,"io_enq_ready", false,-1);
    tracep->declBit(c+708,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1092,"io_deq_ready", false,-1);
    tracep->declBit(c+304,"io_deq_valid", false,-1);
    tracep->declBit(c+305,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+305,"ram_real_last", false,-1);
    tracep->declBit(c+304,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+306,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+307,"io_enq_ready", false,-1);
    tracep->declBit(c+709,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1093,"io_deq_ready", false,-1);
    tracep->declBit(c+308,"io_deq_valid", false,-1);
    tracep->declBit(c+309,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+309,"ram_real_last", false,-1);
    tracep->declBit(c+308,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+310,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+311,"io_enq_ready", false,-1);
    tracep->declBit(c+710,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1094,"io_deq_ready", false,-1);
    tracep->declBit(c+312,"io_deq_valid", false,-1);
    tracep->declBit(c+313,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+313,"ram_real_last", false,-1);
    tracep->declBit(c+312,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+314,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+315,"io_enq_ready", false,-1);
    tracep->declBit(c+711,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1095,"io_deq_ready", false,-1);
    tracep->declBit(c+316,"io_deq_valid", false,-1);
    tracep->declBit(c+317,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+317,"ram_real_last", false,-1);
    tracep->declBit(c+316,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+318,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+319,"io_enq_ready", false,-1);
    tracep->declBit(c+712,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1096,"io_deq_ready", false,-1);
    tracep->declBit(c+320,"io_deq_valid", false,-1);
    tracep->declBit(c+321,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+321,"ram_real_last", false,-1);
    tracep->declBit(c+320,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+322,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+323,"io_enq_ready", false,-1);
    tracep->declBit(c+713,"io_enq_valid", false,-1);
    tracep->declBit(c+72,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1097,"io_deq_ready", false,-1);
    tracep->declBit(c+324,"io_deq_valid", false,-1);
    tracep->declBit(c+325,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+325,"ram_real_last", false,-1);
    tracep->declBit(c+324,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+326,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+327,"io_enq_ready", false,-1);
    tracep->declBit(c+714,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1098,"io_deq_ready", false,-1);
    tracep->declBit(c+328,"io_deq_valid", false,-1);
    tracep->declBit(c+329,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+329,"ram_real_last", false,-1);
    tracep->declBit(c+328,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+330,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+331,"io_enq_ready", false,-1);
    tracep->declBit(c+715,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1099,"io_deq_ready", false,-1);
    tracep->declBit(c+332,"io_deq_valid", false,-1);
    tracep->declBit(c+333,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+333,"ram_real_last", false,-1);
    tracep->declBit(c+332,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+334,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+335,"io_enq_ready", false,-1);
    tracep->declBit(c+716,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1100,"io_deq_ready", false,-1);
    tracep->declBit(c+336,"io_deq_valid", false,-1);
    tracep->declBit(c+337,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+337,"ram_real_last", false,-1);
    tracep->declBit(c+336,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+338,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+339,"io_enq_ready", false,-1);
    tracep->declBit(c+717,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1101,"io_deq_ready", false,-1);
    tracep->declBit(c+340,"io_deq_valid", false,-1);
    tracep->declBit(c+341,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+341,"ram_real_last", false,-1);
    tracep->declBit(c+340,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+342,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+343,"io_enq_ready", false,-1);
    tracep->declBit(c+718,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1102,"io_deq_ready", false,-1);
    tracep->declBit(c+344,"io_deq_valid", false,-1);
    tracep->declBit(c+345,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+345,"ram_real_last", false,-1);
    tracep->declBit(c+344,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+346,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+347,"io_enq_ready", false,-1);
    tracep->declBit(c+719,"io_enq_valid", false,-1);
    tracep->declBit(c+76,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1103,"io_deq_ready", false,-1);
    tracep->declBit(c+348,"io_deq_valid", false,-1);
    tracep->declBit(c+349,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+349,"ram_real_last", false,-1);
    tracep->declBit(c+348,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+350,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1152,"reset", false,-1);
    tracep->declBit(c+58,"auto_master_out_awready", false,-1);
    tracep->declBit(c+59,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1174,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+60,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+62,"auto_master_out_wready", false,-1);
    tracep->declBit(c+63,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+64,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+65,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1025,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1026,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+683,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+66,"auto_master_out_arready", false,-1);
    tracep->declBit(c+67,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1174,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1027,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1028,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1029,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+684,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1152,"reset", false,-1);
    tracep->declBit(c+1164,"io_interrupt", false,-1);
    tracep->declBit(c+58,"io_master_awready", false,-1);
    tracep->declBit(c+59,"io_master_awvalid", false,-1);
    tracep->declBus(c+60,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1174,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+62,"io_master_wready", false,-1);
    tracep->declBit(c+63,"io_master_wvalid", false,-1);
    tracep->declBus(c+64,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"io_master_wlast", false,-1);
    tracep->declBit(c+65,"io_master_bready", false,-1);
    tracep->declBit(c+1025,"io_master_bvalid", false,-1);
    tracep->declBus(c+683,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1026,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+66,"io_master_arready", false,-1);
    tracep->declBit(c+67,"io_master_arvalid", false,-1);
    tracep->declBus(c+68,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1174,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"io_master_rready", false,-1);
    tracep->declBit(c+1027,"io_master_rvalid", false,-1);
    tracep->declBus(c+1151,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1029,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+684,"io_master_rlast", false,-1);
    tracep->declBus(c+1028,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1178,"io_slave_awready", false,-1);
    tracep->declBit(c+1164,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1179,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1174,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1180,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1181,"io_slave_wready", false,-1);
    tracep->declBit(c+1164,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1179,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1174,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"io_slave_wlast", false,-1);
    tracep->declBit(c+1164,"io_slave_bready", false,-1);
    tracep->declBit(c+1182,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1183,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1184,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1185,"io_slave_arready", false,-1);
    tracep->declBit(c+1164,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1179,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1174,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1180,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1164,"io_slave_rready", false,-1);
    tracep->declBit(c+1186,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1187,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1188,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1189,"io_slave_rlast", false,-1);
    tracep->declBus(c+1190,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+351,"inst", false,-1, 31,0);
    tracep->declBus(c+352,"pc", false,-1, 31,0);
    tracep->declBit(c+353,"difftest", false,-1);
    tracep->declBit(c+354,"itrace_reg", false,-1);
    tracep->declBit(c+355,"jal", false,-1);
    tracep->declBit(c+356,"jalr", false,-1);
    tracep->declBit(c+357,"w_csr_en", false,-1);
    tracep->declBit(c+357,"r_csr_en", false,-1);
    tracep->declBus(c+358,"alu_a", false,-1, 31,0);
    tracep->declBus(c+359,"alu_b", false,-1, 31,0);
    tracep->declBus(c+60,"alu_out", false,-1, 31,0);
    tracep->declBit(c+360,"alu_a_sel", false,-1);
    tracep->declBus(c+361,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+362,"alu_func", false,-1, 3,0);
    tracep->declBus(c+363,"branch_type", false,-1, 2,0);
    tracep->declBus(c+364,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+365,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+366,"mem_rd_en", false,-1);
    tracep->declBit(c+367,"mem_wr_en", false,-1);
    tracep->declBus(c+368,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+370,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+64,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+371,"w_en", false,-1);
    tracep->declBus(c+372,"w_sel", false,-1, 1,0);
    tracep->declBus(c+373,"w_data", false,-1, 31,0);
    tracep->declBus(c+374,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+375,"jump_jtype", false,-1);
    tracep->declBit(c+376,"jump_ecall", false,-1);
    tracep->declBit(c+377,"jump_mret", false,-1);
    tracep->declBit(c+378,"jump_branch", false,-1);
    tracep->declBus(c+379,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+380,"imm_out", false,-1, 31,0);
    tracep->declBit(c+381,"finish_1", false,-1);
    tracep->declBit(c+720,"wr_finish", false,-1);
    tracep->declBit(c+382,"rd_finish", false,-1);
    tracep->declBit(c+383,"valid_ifu", false,-1);
    tracep->declBit(c+384,"valid_idu", false,-1);
    tracep->declBus(c+385,"arsize", false,-1, 2,0);
    tracep->declBus(c+61,"awsize", false,-1, 2,0);
    tracep->declBus(c+352,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"ifu_arvalid", false,-1);
    tracep->declBit(c+387,"ifu_arready", false,-1);
    tracep->declBit(c+388,"ifu_rready", false,-1);
    tracep->declBit(c+1104,"ifu_rvalid", false,-1);
    tracep->declBus(c+721,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1191,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1192,"ifu_awvalid", false,-1);
    tracep->declBit(c+1193,"ifu_awready", false,-1);
    tracep->declBus(c+1194,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1195,"ifu_wvalid", false,-1);
    tracep->declBit(c+1196,"ifu_wready", false,-1);
    tracep->declBit(c+1197,"ifu_bready", false,-1);
    tracep->declBit(c+1198,"ifu_bvalid", false,-1);
    tracep->declBus(c+60,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+389,"lsu_arvalid", false,-1);
    tracep->declBit(c+390,"lsu_arready", false,-1);
    tracep->declBit(c+391,"lsu_rready", false,-1);
    tracep->declBit(c+1105,"lsu_rvalid", false,-1);
    tracep->declBus(c+722,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"lsu_awvalid", false,-1);
    tracep->declBit(c+58,"lsu_awready", false,-1);
    tracep->declBus(c+64,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+63,"lsu_wvalid", false,-1);
    tracep->declBit(c+62,"lsu_wready", false,-1);
    tracep->declBit(c+65,"lsu_bready", false,-1);
    tracep->declBit(c+1025,"lsu_bvalid", false,-1);
    tracep->declBus(c+392,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"clint_arvalid", false,-1);
    tracep->declBit(c+394,"clint_arready", false,-1);
    tracep->declBit(c+395,"clint_rready", false,-1);
    tracep->declBit(c+396,"clint_rvalid", false,-1);
    tracep->declBus(c+397,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1199,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1200,"clint_awvalid", false,-1);
    tracep->declBit(c+1201,"clint_awready", false,-1);
    tracep->declBus(c+1202,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1203,"clint_wvalid", false,-1);
    tracep->declBit(c+1204,"clint_wready", false,-1);
    tracep->declBit(c+1205,"clint_bready", false,-1);
    tracep->declBit(c+1206,"clint_bvalid", false,-1);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+358,"SrcA", false,-1, 31,0);
    tracep->declBus(c+359,"SrcB", false,-1, 31,0);
    tracep->declBus(c+362,"alu_func", false,-1, 3,0);
    tracep->declBus(c+60,"ALUout", false,-1, 31,0);
    tracep->declBus(c+358,"signed_a", false,-1, 31,0);
    tracep->declBus(c+359,"signed_b", false,-1, 31,0);
    tracep->declBus(c+358,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+359,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+398,"a0", false,-1, 31,0);
    tracep->declBus(c+399,"a1", false,-1, 31,0);
    tracep->declBus(c+400,"a2", false,-1, 31,0);
    tracep->declBus(c+401,"a3", false,-1, 31,0);
    tracep->declBus(c+402,"a4", false,-1, 31,0);
    tracep->declBus(c+403,"a5", false,-1, 31,0);
    tracep->declBus(c+404,"a6", false,-1, 31,0);
    tracep->declBus(c+405,"a7", false,-1, 31,0);
    tracep->declBus(c+406,"a8", false,-1, 31,0);
    tracep->declBus(c+1179,"a9", false,-1, 31,0);
    tracep->declBus(c+1179,"a10", false,-1, 31,0);
    tracep->declBus(c+1179,"a11", false,-1, 31,0);
    tracep->declBus(c+1179,"a12", false,-1, 31,0);
    tracep->declBus(c+407,"a13", false,-1, 31,0);
    tracep->declBus(c+359,"a14", false,-1, 31,0);
    tracep->declBus(c+1179,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+1207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1209,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+362,"key", false,-1, 3,0);
    tracep->declArray(c+408,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1207,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1208,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1209,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1210,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+60,"out", false,-1, 31,0);
    tracep->declBus(c+362,"key", false,-1, 3,0);
    tracep->declBus(c+1179,"default_out", false,-1, 31,0);
    tracep->declArray(c+408,"lut", false,-1, 575,0);
    tracep->declBus(c+1211,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+426+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+458+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+474,"lut_out", false,-1, 31,0);
    tracep->declBit(c+475,"hit", false,-1);
    tracep->declBus(c+1212,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+370,"rs1", false,-1, 31,0);
    tracep->declBus(c+64,"rs2", false,-1, 31,0);
    tracep->declBus(c+363,"branch_type", false,-1, 2,0);
    tracep->declBit(c+378,"jump_branch", false,-1);
    tracep->declBus(c+370,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+64,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+370,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+64,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1152,"rst", false,-1);
    tracep->declBus(c+392,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"clint_arvalid", false,-1);
    tracep->declBit(c+394,"clint_arready", false,-1);
    tracep->declBit(c+395,"clint_rready", false,-1);
    tracep->declBit(c+396,"clint_rvalid", false,-1);
    tracep->declBus(c+397,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1199,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1200,"clint_awvalid", false,-1);
    tracep->declBit(c+1201,"clint_awready", false,-1);
    tracep->declBus(c+1202,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1203,"clint_wvalid", false,-1);
    tracep->declBit(c+1204,"clint_wready", false,-1);
    tracep->declBit(c+1205,"clint_bready", false,-1);
    tracep->declBit(c+1206,"clint_bvalid", false,-1);
    tracep->declQuad(c+476,"mtime", false,-1, 63,0);
    tracep->declBus(c+1213,"mtime_addr_low", false,-1, 31,0);
    tracep->declBus(c+1214,"mtime_addr_high", false,-1, 31,0);
    tracep->declBus(c+478,"raddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+479,"finish", false,-1);
    tracep->declBus(c+352,"pc", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBus(c+480,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+480,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+60,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+357,"w_csr_en", false,-1);
    tracep->declBit(c+357,"r_csr_en", false,-1);
    tracep->declBit(c+377,"jump_mret", false,-1);
    tracep->declBit(c+376,"jump_ecall", false,-1);
    tracep->declBus(c+369,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+481,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+482,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+483,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+484,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+1215,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1209,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+479,"finish", false,-1);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBus(c+373,"w_data", false,-1, 31,0);
    tracep->declBus(c+485,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+486,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+487,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+371,"w_en", false,-1);
    tracep->declBus(c+370,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+64,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+488+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+351,"inst", false,-1, 31,0);
    tracep->declBit(c+383,"valid_ifu", false,-1);
    tracep->declBit(c+381,"finish_1", false,-1);
    tracep->declBit(c+384,"valid_idu", false,-1);
    tracep->declBus(c+385,"arsize", false,-1, 2,0);
    tracep->declBus(c+61,"awsize", false,-1, 2,0);
    tracep->declBit(c+360,"alu_a_sel", false,-1);
    tracep->declBus(c+361,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+371,"w_en", false,-1);
    tracep->declBus(c+372,"w_sel", false,-1, 1,0);
    tracep->declBit(c+375,"jump_jtype", false,-1);
    tracep->declBit(c+376,"jump_ecall", false,-1);
    tracep->declBit(c+377,"jump_mret", false,-1);
    tracep->declBus(c+363,"branch_type", false,-1, 2,0);
    tracep->declBus(c+362,"alu_func", false,-1, 3,0);
    tracep->declBus(c+364,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+365,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+366,"mem_rd_en", false,-1);
    tracep->declBit(c+367,"mem_wr_en", false,-1);
    tracep->declBit(c+355,"jal_signal", false,-1);
    tracep->declBit(c+356,"jalr_signal", false,-1);
    tracep->declBit(c+357,"w_csr_en", false,-1);
    tracep->declBit(c+357,"r_csr_en", false,-1);
    tracep->declBus(c+520,"opcode", false,-1, 6,0);
    tracep->declBus(c+521,"funct3", false,-1, 2,0);
    tracep->declBus(c+522,"funct7", false,-1, 6,0);
    tracep->declBus(c+480,"funct12", false,-1, 11,0);
    tracep->declBus(c+523,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+524,"is_lui", false,-1);
    tracep->declBit(c+525,"is_auipc", false,-1);
    tracep->declBit(c+355,"is_jal", false,-1);
    tracep->declBit(c+356,"is_jalr", false,-1);
    tracep->declBit(c+526,"is_beq", false,-1);
    tracep->declBit(c+527,"is_bne", false,-1);
    tracep->declBit(c+528,"is_blt", false,-1);
    tracep->declBit(c+529,"is_bge", false,-1);
    tracep->declBit(c+530,"is_bltu", false,-1);
    tracep->declBit(c+531,"is_bgeu", false,-1);
    tracep->declBit(c+532,"is_lb", false,-1);
    tracep->declBit(c+533,"is_lh", false,-1);
    tracep->declBit(c+534,"is_lw", false,-1);
    tracep->declBit(c+535,"is_lbu", false,-1);
    tracep->declBit(c+536,"is_lhu", false,-1);
    tracep->declBit(c+537,"is_sb", false,-1);
    tracep->declBit(c+538,"is_sh", false,-1);
    tracep->declBit(c+539,"is_sw", false,-1);
    tracep->declBit(c+540,"is_addi", false,-1);
    tracep->declBit(c+541,"is_slti", false,-1);
    tracep->declBit(c+542,"is_sltiu", false,-1);
    tracep->declBit(c+543,"is_xori", false,-1);
    tracep->declBit(c+544,"is_ori", false,-1);
    tracep->declBit(c+545,"is_andi", false,-1);
    tracep->declBit(c+546,"is_slli", false,-1);
    tracep->declBit(c+547,"is_srli", false,-1);
    tracep->declBit(c+548,"is_srai", false,-1);
    tracep->declBit(c+549,"is_add", false,-1);
    tracep->declBit(c+550,"is_sub", false,-1);
    tracep->declBit(c+551,"is_sll", false,-1);
    tracep->declBit(c+552,"is_slt", false,-1);
    tracep->declBit(c+553,"is_sltu", false,-1);
    tracep->declBit(c+554,"is_xor", false,-1);
    tracep->declBit(c+555,"is_srl", false,-1);
    tracep->declBit(c+556,"is_sra", false,-1);
    tracep->declBit(c+557,"is_or", false,-1);
    tracep->declBit(c+558,"is_and", false,-1);
    tracep->declBit(c+559,"is_csrrs", false,-1);
    tracep->declBit(c+560,"is_csrrw", false,-1);
    tracep->declBit(c+376,"is_ecall", false,-1);
    tracep->declBit(c+377,"is_mret", false,-1);
    tracep->declBit(c+561,"is_add_type", false,-1);
    tracep->declBit(c+562,"is_u_type", false,-1);
    tracep->declBit(c+355,"is_jump_type", false,-1);
    tracep->declBit(c+563,"is_b_type", false,-1);
    tracep->declBit(c+564,"is_r_type", false,-1);
    tracep->declBit(c+565,"is_i_type", false,-1);
    tracep->declBit(c+367,"is_s_type", false,-1);
    tracep->declBit(c+366,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1152,"rst", false,-1);
    tracep->declBit(c+566,"jump_en", false,-1);
    tracep->declBus(c+374,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+1106,"finish", false,-1);
    tracep->declBit(c+383,"valid_ifu", false,-1);
    tracep->declBus(c+352,"pc", false,-1, 31,0);
    tracep->declBus(c+351,"inst", false,-1, 31,0);
    tracep->declBit(c+353,"difftest", false,-1);
    tracep->declBit(c+354,"itrace_reg", false,-1);
    tracep->declBus(c+352,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"ifu_arvalid", false,-1);
    tracep->declBit(c+387,"ifu_arready", false,-1);
    tracep->declBit(c+388,"ifu_rready", false,-1);
    tracep->declBit(c+1104,"ifu_rvalid", false,-1);
    tracep->declBus(c+721,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1191,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1192,"ifu_awvalid", false,-1);
    tracep->declBit(c+1193,"ifu_awready", false,-1);
    tracep->declBus(c+1194,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1195,"ifu_wvalid", false,-1);
    tracep->declBit(c+1196,"ifu_wready", false,-1);
    tracep->declBit(c+1197,"ifu_bready", false,-1);
    tracep->declBit(c+1198,"ifu_bvalid", false,-1);
    tracep->declBit(c+1216,"rvalid", false,-1);
    tracep->declBit(c+567,"axi_arvalid", false,-1);
    tracep->declBus(c+568,"counter", false,-1, 31,0);
    tracep->declBit(c+569,"axi_rready", false,-1);
    tracep->declBus(c+570,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+351,"inst", false,-1, 31,0);
    tracep->declBus(c+380,"immout", false,-1, 31,0);
    tracep->declBus(c+520,"opcode", false,-1, 6,0);
    tracep->declBus(c+571,"out1", false,-1, 31,0);
    tracep->declBus(c+571,"out2", false,-1, 31,0);
    tracep->declBus(c+572,"out3", false,-1, 31,0);
    tracep->declBus(c+573,"out4", false,-1, 31,0);
    tracep->declBus(c+574,"out5", false,-1, 31,0);
    tracep->declBus(c+574,"out6", false,-1, 31,0);
    tracep->declBus(c+575,"out7", false,-1, 31,0);
    tracep->declBus(c+574,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+1217,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1218,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1209,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+380,"out", false,-1, 31,0);
    tracep->declBus(c+520,"key", false,-1, 6,0);
    tracep->declBus(c+1179,"default_out", false,-1, 31,0);
    tracep->declArray(c+576,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1217,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1218,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1209,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1219,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+380,"out", false,-1, 31,0);
    tracep->declBus(c+520,"key", false,-1, 6,0);
    tracep->declBus(c+1179,"default_out", false,-1, 31,0);
    tracep->declArray(c+576,"lut", false,-1, 311,0);
    tracep->declBus(c+1220,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+586+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+602+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+610,"lut_out", false,-1, 31,0);
    tracep->declBit(c+611,"hit", false,-1);
    tracep->declBus(c+1221,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1152,"rst", false,-1);
    tracep->declBit(c+612,"mem_wr_en", false,-1);
    tracep->declBus(c+364,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+365,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+64,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+60,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+60,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+368,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+384,"valid_idu", false,-1);
    tracep->declBit(c+720,"wr_finish", false,-1);
    tracep->declBit(c+382,"rd_finish", false,-1);
    tracep->declBus(c+60,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+389,"lsu_arvalid", false,-1);
    tracep->declBit(c+390,"lsu_arready", false,-1);
    tracep->declBit(c+391,"lsu_rready", false,-1);
    tracep->declBit(c+1105,"lsu_rvalid", false,-1);
    tracep->declBus(c+722,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"lsu_awvalid", false,-1);
    tracep->declBit(c+58,"lsu_awready", false,-1);
    tracep->declBus(c+64,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+63,"lsu_wvalid", false,-1);
    tracep->declBit(c+62,"lsu_wready", false,-1);
    tracep->declBit(c+65,"lsu_bready", false,-1);
    tracep->declBit(c+1025,"lsu_bvalid", false,-1);
    tracep->declBus(c+613,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+614,"mem_out", false,-1, 31,0);
    tracep->declBit(c+615,"axi_arvalid", false,-1);
    tracep->declBus(c+616,"counter", false,-1, 31,0);
    tracep->declBit(c+617,"axi_rready", false,-1);
    tracep->declBus(c+618,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("XBAR ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1152,"rst", false,-1);
    tracep->declBus(c+61,"awsize", false,-1, 2,0);
    tracep->declBus(c+385,"arsize", false,-1, 2,0);
    tracep->declBus(c+352,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"ifu_arvalid", false,-1);
    tracep->declBit(c+387,"ifu_arready", false,-1);
    tracep->declBit(c+388,"ifu_rready", false,-1);
    tracep->declBit(c+1104,"ifu_rvalid", false,-1);
    tracep->declBus(c+721,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1191,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1192,"ifu_awvalid", false,-1);
    tracep->declBit(c+1193,"ifu_awready", false,-1);
    tracep->declBus(c+1194,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1195,"ifu_wvalid", false,-1);
    tracep->declBit(c+1196,"ifu_wready", false,-1);
    tracep->declBit(c+1197,"ifu_bready", false,-1);
    tracep->declBit(c+1198,"ifu_bvalid", false,-1);
    tracep->declBus(c+60,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+389,"lsu_arvalid", false,-1);
    tracep->declBit(c+390,"lsu_arready", false,-1);
    tracep->declBit(c+391,"lsu_rready", false,-1);
    tracep->declBit(c+1105,"lsu_rvalid", false,-1);
    tracep->declBus(c+722,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+60,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"lsu_awvalid", false,-1);
    tracep->declBit(c+58,"lsu_awready", false,-1);
    tracep->declBus(c+64,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+63,"lsu_wvalid", false,-1);
    tracep->declBit(c+62,"lsu_wready", false,-1);
    tracep->declBit(c+65,"lsu_bready", false,-1);
    tracep->declBit(c+1025,"lsu_bvalid", false,-1);
    tracep->declBus(c+68,"io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+67,"io_master_arvalid", false,-1);
    tracep->declBit(c+66,"io_master_arready", false,-1);
    tracep->declBus(c+1174,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+69,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+70,"io_master_rready", false,-1);
    tracep->declBit(c+1027,"io_master_rvalid", false,-1);
    tracep->declBus(c+1029,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+1151,"io_master_rresp", false,-1, 1,0);
    tracep->declBit(c+684,"io_master_rlast", false,-1);
    tracep->declBus(c+1028,"io_master_rid", false,-1, 3,0);
    tracep->declBus(c+60,"io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+59,"io_master_awvalid", false,-1);
    tracep->declBit(c+58,"io_master_awready", false,-1);
    tracep->declBus(c+1174,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1175,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+61,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1176,"io_master_awburst", false,-1, 1,0);
    tracep->declBus(c+64,"io_master_wdata", false,-1, 31,0);
    tracep->declBit(c+63,"io_master_wvalid", false,-1);
    tracep->declBit(c+62,"io_master_wready", false,-1);
    tracep->declBus(c+1174,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1164,"io_master_wlast", false,-1);
    tracep->declBit(c+65,"io_master_bready", false,-1);
    tracep->declBit(c+1025,"io_master_bvalid", false,-1);
    tracep->declBus(c+683,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1026,"io_master_bid", false,-1, 3,0);
    tracep->declBus(c+392,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+393,"clint_arvalid", false,-1);
    tracep->declBit(c+394,"clint_arready", false,-1);
    tracep->declBit(c+395,"clint_rready", false,-1);
    tracep->declBit(c+396,"clint_rvalid", false,-1);
    tracep->declBus(c+397,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1199,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1200,"clint_awvalid", false,-1);
    tracep->declBit(c+1201,"clint_awready", false,-1);
    tracep->declBus(c+1202,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1203,"clint_wvalid", false,-1);
    tracep->declBit(c+1204,"clint_wready", false,-1);
    tracep->declBit(c+1205,"clint_bready", false,-1);
    tracep->declBit(c+1206,"clint_bvalid", false,-1);
    tracep->declBus(c+1210,"IDLE", false,-1, 31,0);
    tracep->declBus(c+1219,"IFU_READ", false,-1, 31,0);
    tracep->declBus(c+1222,"LSU_READ", false,-1, 31,0);
    tracep->declBus(c+619,"current_state", false,-1, 1,0);
    tracep->declBus(c+1107,"next_state", false,-1, 1,0);
    tracep->declBit(c+620,"is_clint", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"io_d", false,-1);
    tracep->declBit(c+621,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"io_d", false,-1);
    tracep->declBit(c+621,"io_q", false,-1);
    tracep->declBit(c+621,"sync_0", false,-1);
    tracep->declBit(c+622,"sync_1", false,-1);
    tracep->declBit(c+623,"sync_2", false,-1);
    tracep->declBit(c+624,"sync_3", false,-1);
    tracep->declBit(c+625,"sync_4", false,-1);
    tracep->declBit(c+626,"sync_5", false,-1);
    tracep->declBit(c+627,"sync_6", false,-1);
    tracep->declBit(c+628,"sync_7", false,-1);
    tracep->declBit(c+629,"sync_8", false,-1);
    tracep->declBit(c+630,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+678,"auto_in_psel", false,-1);
    tracep->declBit(c+679,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+974,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"auto_in_pready", false,-1);
    tracep->declBit(c+1172,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1124,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1125,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1126,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+989,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+678,"in_psel", false,-1);
    tracep->declBit(c+679,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1171,"in_pready", false,-1);
    tracep->declBus(c+1173,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1172,"in_pslverr", false,-1);
    tracep->declBus(c+1124,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1125,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1126,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1127,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1128,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1129,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1130,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1131,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1132,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1133,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+676,"auto_in_psel", false,-1);
    tracep->declBit(c+677,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+974,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"auto_in_pready", false,-1);
    tracep->declBit(c+1169,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1170,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1134,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1135,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+989,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+676,"in_psel", false,-1);
    tracep->declBit(c+677,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1168,"in_pready", false,-1);
    tracep->declBus(c+1170,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1169,"in_pslverr", false,-1);
    tracep->declBit(c+1134,"ps2_clk", false,-1);
    tracep->declBit(c+1135,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+151,"auto_in_awvalid", false,-1);
    tracep->declBit(c+152,"auto_in_wvalid", false,-1);
    tracep->declBit(c+153,"auto_in_arready", false,-1);
    tracep->declBit(c+154,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+155,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+687,"auto_in_rready", false,-1);
    tracep->declBit(c+156,"auto_in_rvalid", false,-1);
    tracep->declBus(c+157,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+158,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+156,"state", false,-1);
    tracep->declBus(c+158,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+157,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+631,"raddr", false,-1, 31,0);
    tracep->declBit(c+632,"ren", false,-1);
    tracep->declBus(c+633,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+975,"auto_in_psel", false,-1);
    tracep->declBit(c+680,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+968,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+34,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1146,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1147,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1018,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+968,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+975,"in_psel", false,-1);
    tracep->declBit(c+680,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1149,"in_pready", false,-1);
    tracep->declBus(c+34,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+1146,"qspi_sck", false,-1);
    tracep->declBit(c+1147,"qspi_ce_n", false,-1);
    tracep->declBus(c+1018,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1018,"din", false,-1, 3,0);
    tracep->declBus(c+1108,"dout", false,-1, 3,0);
    tracep->declBus(c+1109,"douten", false,-1, 3,0);
    tracep->declBit(c+1153,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBus(c+968,"adr_i", false,-1, 31,0);
    tracep->declBus(c+970,"dat_i", false,-1, 31,0);
    tracep->declBus(c+34,"dat_o", false,-1, 31,0);
    tracep->declBus(c+971,"sel_i", false,-1, 3,0);
    tracep->declBit(c+975,"cyc_i", false,-1);
    tracep->declBit(c+975,"stb_i", false,-1);
    tracep->declBit(c+1153,"ack_o", false,-1);
    tracep->declBit(c+969,"we_i", false,-1);
    tracep->declBit(c+1146,"sck", false,-1);
    tracep->declBit(c+1147,"ce_n", false,-1);
    tracep->declBus(c+1018,"din", false,-1, 3,0);
    tracep->declBus(c+1108,"dout", false,-1, 3,0);
    tracep->declBus(c+1109,"douten", false,-1, 3,0);
    tracep->declBus(c+1223,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1224,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+738,"mr_sck", false,-1);
    tracep->declBit(c+739,"mr_ce_n", false,-1);
    tracep->declBus(c+1018,"mr_din", false,-1, 3,0);
    tracep->declBus(c+740,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+741,"mr_doe", false,-1);
    tracep->declBit(c+742,"mw_sck", false,-1);
    tracep->declBit(c+743,"mw_ce_n", false,-1);
    tracep->declBus(c+1018,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1110,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+744,"mw_doe", false,-1);
    tracep->declBit(c+1111,"mr_rd", false,-1);
    tracep->declBit(c+745,"mr_done", false,-1);
    tracep->declBit(c+1112,"mw_wr", false,-1);
    tracep->declBit(c+1113,"mw_done", false,-1);
    tracep->declBit(c+975,"wb_valid", false,-1);
    tracep->declBit(c+990,"wb_we", false,-1);
    tracep->declBit(c+991,"wb_re", false,-1);
    tracep->declBit(c+746,"state", false,-1);
    tracep->declBit(c+1114,"nstate", false,-1);
    tracep->declBus(c+992,"size", false,-1, 2,0);
    tracep->declBus(c+993,"byte0", false,-1, 7,0);
    tracep->declBus(c+994,"byte1", false,-1, 7,0);
    tracep->declBus(c+995,"byte2", false,-1, 7,0);
    tracep->declBus(c+996,"byte3", false,-1, 7,0);
    tracep->declBus(c+997,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1154,"rst_n", false,-1);
    tracep->declBus(c+998,"addr", false,-1, 23,0);
    tracep->declBit(c+1111,"rd", false,-1);
    tracep->declBus(c+1225,"size", false,-1, 2,0);
    tracep->declBit(c+745,"done", false,-1);
    tracep->declBus(c+34,"line", false,-1, 31,0);
    tracep->declBit(c+738,"sck", false,-1);
    tracep->declBit(c+739,"ce_n", false,-1);
    tracep->declBus(c+1018,"din", false,-1, 3,0);
    tracep->declBus(c+740,"dout", false,-1, 3,0);
    tracep->declBit(c+741,"douten", false,-1);
    tracep->declBus(c+1223,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1224,"READ", false,-1, 0,0);
    tracep->declBus(c+1226,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+747,"state", false,-1);
    tracep->declBit(c+1115,"nstate", false,-1);
    tracep->declBus(c+748,"counter", false,-1, 7,0);
    tracep->declBus(c+749,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+634+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1227,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+750,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1154,"rst_n", false,-1);
    tracep->declBus(c+999,"addr", false,-1, 23,0);
    tracep->declBus(c+997,"line", false,-1, 31,0);
    tracep->declBus(c+992,"size", false,-1, 2,0);
    tracep->declBit(c+1112,"wr", false,-1);
    tracep->declBit(c+1113,"done", false,-1);
    tracep->declBit(c+742,"sck", false,-1);
    tracep->declBit(c+743,"ce_n", false,-1);
    tracep->declBus(c+1018,"din", false,-1, 3,0);
    tracep->declBus(c+1110,"dout", false,-1, 3,0);
    tracep->declBit(c+744,"douten", false,-1);
    tracep->declBus(c+1223,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1224,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1000,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+751,"state", false,-1);
    tracep->declBit(c+1116,"nstate", false,-1);
    tracep->declBus(c+752,"counter", false,-1, 7,0);
    tracep->declBus(c+753,"saddr", false,-1, 23,0);
    tracep->declBus(c+1228,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+672,"auto_in_psel", false,-1);
    tracep->declBit(c+673,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+968,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+734,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+735,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1148,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+725,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+726,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+727,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+728,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+729,"sdram_bundle_we", false,-1);
    tracep->declBus(c+730,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+731,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+732,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+733,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+968,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+672,"in_psel", false,-1);
    tracep->declBit(c+673,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+734,"in_pready", false,-1);
    tracep->declBus(c+735,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+1148,"sdram_clk", false,-1);
    tracep->declBit(c+725,"sdram_cke", false,-1);
    tracep->declBit(c+726,"sdram_cs", false,-1);
    tracep->declBit(c+727,"sdram_ras", false,-1);
    tracep->declBit(c+728,"sdram_cas", false,-1);
    tracep->declBit(c+729,"sdram_we", false,-1);
    tracep->declBus(c+730,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+731,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+732,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+733,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+754,"sdram_dout_en", false,-1);
    tracep->declBus(c+755,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+638,"state", false,-1, 1,0);
    tracep->declBit(c+756,"req_accept", false,-1);
    tracep->declBit(c+1001,"is_read", false,-1);
    tracep->declBit(c+1002,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBus(c+1003,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1001,"inport_rd_i", false,-1);
    tracep->declBus(c+1175,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+968,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+970,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+733,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+756,"inport_accept_o", false,-1);
    tracep->declBit(c+734,"inport_ack_o", false,-1);
    tracep->declBit(c+1164,"inport_error_o", false,-1);
    tracep->declBus(c+735,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1148,"sdram_clk_o", false,-1);
    tracep->declBit(c+725,"sdram_cke_o", false,-1);
    tracep->declBit(c+726,"sdram_cs_o", false,-1);
    tracep->declBit(c+727,"sdram_ras_o", false,-1);
    tracep->declBit(c+728,"sdram_cas_o", false,-1);
    tracep->declBit(c+729,"sdram_we_o", false,-1);
    tracep->declBus(c+732,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+730,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+731,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+755,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+754,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1229,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1230,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1231,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1222,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1222,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1222,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1208,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1232,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1233,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1234,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1235,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1208,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1236,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1237,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1238,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1239,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1240,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1241,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1242,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1174,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1243,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1208,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1174,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1242,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1241,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1237,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1239,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1238,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1240,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1236,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1244,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1245,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1246,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1246,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1207,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1246,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1222,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1222,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1247,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+968,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1003,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1001,"ram_rd_w", false,-1);
    tracep->declBit(c+756,"ram_accept_w", false,-1);
    tracep->declBus(c+970,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+735,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+734,"ram_ack_w", false,-1);
    tracep->declBit(c+1004,"ram_req_w", false,-1);
    tracep->declBus(c+757,"command_q", false,-1, 3,0);
    tracep->declBus(c+730,"addr_q", false,-1, 12,0);
    tracep->declBus(c+755,"data_q", false,-1, 15,0);
    tracep->declBit(c+758,"data_rd_en_q", false,-1);
    tracep->declBus(c+732,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+725,"cke_q", false,-1);
    tracep->declBus(c+731,"bank_q", false,-1, 1,0);
    tracep->declBus(c+759,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+760,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+733,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+761,"refresh_q", false,-1);
    tracep->declBus(c+762,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+763+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+767,"state_q", false,-1, 3,0);
    tracep->declBus(c+1117,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1118,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+768,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+769,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1005,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1006,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1007,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1208,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+770,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1119,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1248,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+771,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+772,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+773,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+774,"idx", false,-1, 31,0);
    tracep->declBus(c+775,"rd_q", false,-1, 3,0);
    tracep->declBit(c+734,"ack_q", false,-1);
    tracep->declArray(c+776,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+979,"auto_in_psel", false,-1);
    tracep->declBit(c+980,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+973,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+736,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+737,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+723,"spi_bundle_sck", false,-1);
    tracep->declBus(c+724,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1144,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1145,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1249,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1250,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1217,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1008,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+979,"in_psel", false,-1);
    tracep->declBit(c+980,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+736,"in_pready", false,-1);
    tracep->declBus(c+737,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBit(c+723,"spi_sck", false,-1);
    tracep->declBus(c+724,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1144,"spi_mosi", false,-1);
    tracep->declBit(c+1145,"spi_miso", false,-1);
    tracep->declBit(c+779,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1219,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"wb_clk_i", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+1009,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+970,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+737,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+971,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+969,"wb_we_i", false,-1);
    tracep->declBit(c+979,"wb_stb_i", false,-1);
    tracep->declBit(c+980,"wb_cyc_i", false,-1);
    tracep->declBit(c+736,"wb_ack_o", false,-1);
    tracep->declBit(c+1164,"wb_err_o", false,-1);
    tracep->declBit(c+779,"wb_int_o", false,-1);
    tracep->declBus(c+724,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+723,"sclk_pad_o", false,-1);
    tracep->declBit(c+1144,"mosi_pad_o", false,-1);
    tracep->declBit(c+1145,"miso_pad_i", false,-1);
    tracep->declBus(c+780,"divider", false,-1, 15,0);
    tracep->declBus(c+781,"ctrl", false,-1, 13,0);
    tracep->declBus(c+782,"ss", false,-1, 7,0);
    tracep->declBus(c+1120,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+783,"rx", false,-1, 127,0);
    tracep->declBit(c+787,"rx_negedge", false,-1);
    tracep->declBit(c+788,"tx_negedge", false,-1);
    tracep->declBus(c+789,"char_len", false,-1, 6,0);
    tracep->declBit(c+790,"go", false,-1);
    tracep->declBit(c+791,"lsb", false,-1);
    tracep->declBit(c+792,"ie", false,-1);
    tracep->declBit(c+793,"ass", false,-1);
    tracep->declBit(c+1010,"spi_divider_sel", false,-1);
    tracep->declBit(c+1011,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1012,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1013,"spi_ss_sel", false,-1);
    tracep->declBit(c+794,"tip", false,-1);
    tracep->declBit(c+795,"pos_edge", false,-1);
    tracep->declBit(c+796,"neg_edge", false,-1);
    tracep->declBit(c+797,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1219,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"clk_in", false,-1);
    tracep->declBit(c+1123,"rst", false,-1);
    tracep->declBit(c+794,"enable", false,-1);
    tracep->declBit(c+790,"go", false,-1);
    tracep->declBit(c+797,"last_clk", false,-1);
    tracep->declBus(c+780,"divider", false,-1, 15,0);
    tracep->declBit(c+723,"clk_out", false,-1);
    tracep->declBit(c+795,"pos_edge", false,-1);
    tracep->declBit(c+796,"neg_edge", false,-1);
    tracep->declBus(c+798,"cnt", false,-1, 15,0);
    tracep->declBit(c+799,"cnt_zero", false,-1);
    tracep->declBit(c+800,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1219,"Tp", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"rst", false,-1);
    tracep->declBus(c+1014,"latch", false,-1, 3,0);
    tracep->declBus(c+971,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+789,"len", false,-1, 6,0);
    tracep->declBit(c+791,"lsb", false,-1);
    tracep->declBit(c+790,"go", false,-1);
    tracep->declBit(c+795,"pos_edge", false,-1);
    tracep->declBit(c+796,"neg_edge", false,-1);
    tracep->declBit(c+787,"rx_negedge", false,-1);
    tracep->declBit(c+788,"tx_negedge", false,-1);
    tracep->declBit(c+794,"tip", false,-1);
    tracep->declBit(c+797,"last", false,-1);
    tracep->declBus(c+970,"p_in", false,-1, 31,0);
    tracep->declArray(c+783,"p_out", false,-1, 127,0);
    tracep->declBit(c+723,"s_clk", false,-1);
    tracep->declBit(c+1145,"s_in", false,-1);
    tracep->declBit(c+1144,"s_out", false,-1);
    tracep->declBus(c+801,"cnt", false,-1, 7,0);
    tracep->declArray(c+783,"data", false,-1, 127,0);
    tracep->declBus(c+802,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+803,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+804,"rx_clk", false,-1);
    tracep->declBit(c+805,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+976,"auto_in_psel", false,-1);
    tracep->declBit(c+977,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+974,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+978,"auto_in_pready", false,-1);
    tracep->declBit(c+1164,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1150,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1142,"uart_rx", false,-1);
    tracep->declBit(c+1143,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+976,"in_psel", false,-1);
    tracep->declBit(c+977,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+978,"in_pready", false,-1);
    tracep->declBit(c+1164,"in_pslverr", false,-1);
    tracep->declBus(c+989,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+1150,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1142,"uart_rx", false,-1);
    tracep->declBit(c+1143,"uart_tx", false,-1);
    tracep->declBit(c+806,"rtsn", false,-1);
    tracep->declBit(c+1164,"ctsn", false,-1);
    tracep->declBit(c+807,"dtr_pad_o", false,-1);
    tracep->declBit(c+1164,"dsr_pad_i", false,-1);
    tracep->declBit(c+1164,"ri_pad_i", false,-1);
    tracep->declBit(c+1164,"dcd_pad_i", false,-1);
    tracep->declBit(c+808,"interrupt", false,-1);
    tracep->declBit(c+1155,"reg_we", false,-1);
    tracep->declBit(c+1156,"reg_re", false,-1);
    tracep->declBus(c+1015,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1016,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+639,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1121,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+809,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+1015,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1017,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1121,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1155,"wb_we_i", false,-1);
    tracep->declBit(c+1156,"wb_re_i", false,-1);
    tracep->declBit(c+1143,"stx_pad_o", false,-1);
    tracep->declBit(c+1142,"srx_pad_i", false,-1);
    tracep->declBus(c+1244,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+809,"rts_pad_o", false,-1);
    tracep->declBit(c+807,"dtr_pad_o", false,-1);
    tracep->declBit(c+808,"int_o", false,-1);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+811,"srx_pad", false,-1);
    tracep->declBus(c+812,"ier", false,-1, 3,0);
    tracep->declBus(c+813,"iir", false,-1, 3,0);
    tracep->declBus(c+814,"fcr", false,-1, 1,0);
    tracep->declBus(c+815,"mcr", false,-1, 4,0);
    tracep->declBus(c+816,"lcr", false,-1, 7,0);
    tracep->declBus(c+817,"msr", false,-1, 7,0);
    tracep->declBus(c+818,"dl", false,-1, 15,0);
    tracep->declBus(c+819,"scratch", false,-1, 7,0);
    tracep->declBit(c+820,"start_dlc", false,-1);
    tracep->declBit(c+821,"lsr_mask_d", false,-1);
    tracep->declBit(c+822,"msi_reset", false,-1);
    tracep->declBus(c+823,"dlc", false,-1, 15,0);
    tracep->declBus(c+824,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+825,"rx_reset", false,-1);
    tracep->declBit(c+826,"tx_reset", false,-1);
    tracep->declBit(c+827,"dlab", false,-1);
    tracep->declBit(c+1177,"cts_pad_i", false,-1);
    tracep->declBit(c+1164,"dsr_pad_i", false,-1);
    tracep->declBit(c+1164,"ri_pad_i", false,-1);
    tracep->declBit(c+1164,"dcd_pad_i", false,-1);
    tracep->declBit(c+828,"loopback", false,-1);
    tracep->declBit(c+1164,"cts", false,-1);
    tracep->declBit(c+1177,"dsr", false,-1);
    tracep->declBit(c+1177,"ri", false,-1);
    tracep->declBit(c+1177,"dcd", false,-1);
    tracep->declBit(c+829,"cts_c", false,-1);
    tracep->declBit(c+830,"dsr_c", false,-1);
    tracep->declBit(c+831,"ri_c", false,-1);
    tracep->declBit(c+832,"dcd_c", false,-1);
    tracep->declBus(c+833,"lsr", false,-1, 7,0);
    tracep->declBit(c+834,"lsr0", false,-1);
    tracep->declBit(c+835,"lsr1", false,-1);
    tracep->declBit(c+836,"lsr2", false,-1);
    tracep->declBit(c+837,"lsr3", false,-1);
    tracep->declBit(c+838,"lsr4", false,-1);
    tracep->declBit(c+839,"lsr5", false,-1);
    tracep->declBit(c+840,"lsr6", false,-1);
    tracep->declBit(c+841,"lsr7", false,-1);
    tracep->declBit(c+842,"lsr0r", false,-1);
    tracep->declBit(c+843,"lsr1r", false,-1);
    tracep->declBit(c+844,"lsr2r", false,-1);
    tracep->declBit(c+845,"lsr3r", false,-1);
    tracep->declBit(c+846,"lsr4r", false,-1);
    tracep->declBit(c+847,"lsr5r", false,-1);
    tracep->declBit(c+848,"lsr6r", false,-1);
    tracep->declBit(c+849,"lsr7r", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+850,"rls_int", false,-1);
    tracep->declBit(c+851,"rda_int", false,-1);
    tracep->declBit(c+852,"ti_int", false,-1);
    tracep->declBit(c+853,"thre_int", false,-1);
    tracep->declBit(c+854,"ms_int", false,-1);
    tracep->declBit(c+855,"tf_push", false,-1);
    tracep->declBit(c+856,"rf_pop", false,-1);
    tracep->declBus(c+1157,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+857,"rf_error_bit", false,-1);
    tracep->declBit(c+835,"rf_overrun", false,-1);
    tracep->declBit(c+858,"rf_push_pulse", false,-1);
    tracep->declBus(c+859,"rf_count", false,-1, 4,0);
    tracep->declBus(c+860,"tf_count", false,-1, 4,0);
    tracep->declBus(c+861,"tstate", false,-1, 2,0);
    tracep->declBus(c+862,"rstate", false,-1, 3,0);
    tracep->declBus(c+863,"counter_t", false,-1, 9,0);
    tracep->declBit(c+864,"thre_set_en", false,-1);
    tracep->declBus(c+865,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+866,"block_value", false,-1, 7,0);
    tracep->declBit(c+867,"serial_out", false,-1);
    tracep->declBit(c+868,"serial_in", false,-1);
    tracep->declBit(c+27,"lsr_mask_condition", false,-1);
    tracep->declBit(c+28,"iir_read", false,-1);
    tracep->declBit(c+29,"msr_read", false,-1);
    tracep->declBit(c+30,"fifo_read", false,-1);
    tracep->declBit(c+31,"fifo_write", false,-1);
    tracep->declBus(c+869,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+870,"lsr0_d", false,-1);
    tracep->declBit(c+871,"lsr1_d", false,-1);
    tracep->declBit(c+872,"lsr2_d", false,-1);
    tracep->declBit(c+873,"lsr3_d", false,-1);
    tracep->declBit(c+874,"lsr4_d", false,-1);
    tracep->declBit(c+875,"lsr5_d", false,-1);
    tracep->declBit(c+876,"lsr6_d", false,-1);
    tracep->declBit(c+877,"lsr7_d", false,-1);
    tracep->declBit(c+878,"rls_int_d", false,-1);
    tracep->declBit(c+879,"thre_int_d", false,-1);
    tracep->declBit(c+880,"ms_int_d", false,-1);
    tracep->declBit(c+881,"ti_int_d", false,-1);
    tracep->declBit(c+882,"rda_int_d", false,-1);
    tracep->declBit(c+883,"rls_int_rise", false,-1);
    tracep->declBit(c+884,"thre_int_rise", false,-1);
    tracep->declBit(c+885,"ms_int_rise", false,-1);
    tracep->declBit(c+886,"ti_int_rise", false,-1);
    tracep->declBit(c+887,"rda_int_rise", false,-1);
    tracep->declBit(c+888,"rls_int_pnd", false,-1);
    tracep->declBit(c+889,"rda_int_pnd", false,-1);
    tracep->declBit(c+890,"thre_int_pnd", false,-1);
    tracep->declBit(c+891,"ms_int_pnd", false,-1);
    tracep->declBit(c+892,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1219,"Tp", false,-1, 31,0);
    tracep->declBus(c+1219,"width", false,-1, 31,0);
    tracep->declBus(c+1224,"init_value", false,-1, 0,0);
    tracep->declBit(c+1123,"rst_i", false,-1);
    tracep->declBit(c+1122,"clk_i", false,-1);
    tracep->declBit(c+1164,"stage1_rst_i", false,-1);
    tracep->declBit(c+1177,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1142,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+811,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+893,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+816,"lcr", false,-1, 7,0);
    tracep->declBit(c+856,"rf_pop", false,-1);
    tracep->declBit(c+868,"srx_pad_i", false,-1);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+825,"rx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBus(c+863,"counter_t", false,-1, 9,0);
    tracep->declBus(c+859,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1157,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+835,"rf_overrun", false,-1);
    tracep->declBit(c+857,"rf_error_bit", false,-1);
    tracep->declBus(c+862,"rstate", false,-1, 3,0);
    tracep->declBit(c+858,"rf_push_pulse", false,-1);
    tracep->declBus(c+894,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+895,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+896,"rshift", false,-1, 7,0);
    tracep->declBit(c+897,"rparity", false,-1);
    tracep->declBit(c+898,"rparity_error", false,-1);
    tracep->declBit(c+899,"rframing_error", false,-1);
    tracep->declBit(c+900,"rbit_in", false,-1);
    tracep->declBit(c+901,"rparity_xor", false,-1);
    tracep->declBus(c+902,"counter_b", false,-1, 7,0);
    tracep->declBit(c+903,"rf_push_q", false,-1);
    tracep->declBus(c+904,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+905,"rf_push", false,-1);
    tracep->declBit(c+906,"break_error", false,-1);
    tracep->declBit(c+907,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+908,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+909,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+910,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1174,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1242,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1241,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1237,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1239,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1238,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1240,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1236,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1244,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1245,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1251,"sr_push", false,-1, 3,0);
    tracep->declBus(c+911,"toc_value", false,-1, 9,0);
    tracep->declBus(c+912,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1252,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1207,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1208,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1215,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBit(c+858,"push", false,-1);
    tracep->declBit(c+856,"pop", false,-1);
    tracep->declBus(c+904,"data_in", false,-1, 10,0);
    tracep->declBit(c+825,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1157,"data_out", false,-1, 10,0);
    tracep->declBit(c+835,"overrun", false,-1);
    tracep->declBus(c+859,"count", false,-1, 4,0);
    tracep->declBit(c+857,"error_bit", false,-1);
    tracep->declBus(c+1158,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+913+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+929,"top", false,-1, 3,0);
    tracep->declBus(c+930,"bottom", false,-1, 3,0);
    tracep->declBus(c+931,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+932,"word0", false,-1, 2,0);
    tracep->declBus(c+933,"word1", false,-1, 2,0);
    tracep->declBus(c+934,"word2", false,-1, 2,0);
    tracep->declBus(c+935,"word3", false,-1, 2,0);
    tracep->declBus(c+936,"word4", false,-1, 2,0);
    tracep->declBus(c+937,"word5", false,-1, 2,0);
    tracep->declBus(c+938,"word6", false,-1, 2,0);
    tracep->declBus(c+939,"word7", false,-1, 2,0);
    tracep->declBus(c+940,"word8", false,-1, 2,0);
    tracep->declBus(c+941,"word9", false,-1, 2,0);
    tracep->declBus(c+942,"word10", false,-1, 2,0);
    tracep->declBus(c+943,"word11", false,-1, 2,0);
    tracep->declBus(c+944,"word12", false,-1, 2,0);
    tracep->declBus(c+945,"word13", false,-1, 2,0);
    tracep->declBus(c+946,"word14", false,-1, 2,0);
    tracep->declBus(c+947,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1208,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1217,"data_width", false,-1, 31,0);
    tracep->declBus(c+1207,"depth", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+858,"we", false,-1);
    tracep->declBus(c+929,"a", false,-1, 3,0);
    tracep->declBus(c+930,"dpra", false,-1, 3,0);
    tracep->declBus(c+948,"di", false,-1, 7,0);
    tracep->declBus(c+1158,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+640+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBus(c+816,"lcr", false,-1, 7,0);
    tracep->declBit(c+855,"tf_push", false,-1);
    tracep->declBus(c+1017,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+810,"enable", false,-1);
    tracep->declBit(c+826,"tx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+867,"stx_pad_o", false,-1);
    tracep->declBus(c+861,"tstate", false,-1, 2,0);
    tracep->declBus(c+860,"tf_count", false,-1, 4,0);
    tracep->declBus(c+949,"counter", false,-1, 4,0);
    tracep->declBus(c+950,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+951,"shift_out", false,-1, 6,0);
    tracep->declBit(c+952,"stx_o_tmp", false,-1);
    tracep->declBit(c+953,"parity_xor", false,-1);
    tracep->declBit(c+954,"tf_pop", false,-1);
    tracep->declBit(c+955,"bit_out", false,-1);
    tracep->declBus(c+1017,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1159,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+956,"tf_overrun", false,-1);
    tracep->declBus(c+1180,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1163,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1253,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1254,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1225,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1255,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1217,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1207,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1208,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1215,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+1123,"wb_rst_i", false,-1);
    tracep->declBit(c+855,"push", false,-1);
    tracep->declBit(c+954,"pop", false,-1);
    tracep->declBus(c+1017,"data_in", false,-1, 7,0);
    tracep->declBit(c+826,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1159,"data_out", false,-1, 7,0);
    tracep->declBit(c+956,"overrun", false,-1);
    tracep->declBus(c+860,"count", false,-1, 4,0);
    tracep->declBus(c+957,"top", false,-1, 3,0);
    tracep->declBus(c+958,"bottom", false,-1, 3,0);
    tracep->declBus(c+959,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1208,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1217,"data_width", false,-1, 31,0);
    tracep->declBus(c+1207,"depth", false,-1, 31,0);
    tracep->declBit(c+1122,"clk", false,-1);
    tracep->declBit(c+855,"we", false,-1);
    tracep->declBus(c+957,"a", false,-1, 3,0);
    tracep->declBus(c+958,"dpra", false,-1, 3,0);
    tracep->declBus(c+1017,"di", false,-1, 7,0);
    tracep->declBus(c+1159,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+656+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBit(c+674,"auto_in_psel", false,-1);
    tracep->declBit(c+675,"auto_in_penable", false,-1);
    tracep->declBit(c+969,"auto_in_pwrite", false,-1);
    tracep->declBus(c+973,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1163,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+970,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"auto_in_pready", false,-1);
    tracep->declBit(c+1166,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1167,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1136,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1137,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1138,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1139,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1140,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1141,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1122,"clock", false,-1);
    tracep->declBit(c+1123,"reset", false,-1);
    tracep->declBus(c+1008,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+674,"in_psel", false,-1);
    tracep->declBit(c+675,"in_penable", false,-1);
    tracep->declBus(c+1163,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+969,"in_pwrite", false,-1);
    tracep->declBus(c+970,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+971,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1165,"in_pready", false,-1);
    tracep->declBus(c+1167,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1166,"in_pslverr", false,-1);
    tracep->declBus(c+1136,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1137,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1138,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1139,"vga_hsync", false,-1);
    tracep->declBit(c+1140,"vga_vsync", false,-1);
    tracep->declBit(c+1141,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+723,"sck", false,-1);
    tracep->declBit(c+960,"ss", false,-1);
    tracep->declBit(c+1144,"mosi", false,-1);
    tracep->declBit(c+1177,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+723,"sck", false,-1);
    tracep->declBit(c+961,"ss", false,-1);
    tracep->declBit(c+1144,"mosi", false,-1);
    tracep->declBit(c+1145,"miso", false,-1);
    tracep->declBit(c+961,"reset", false,-1);
    tracep->declBus(c+962,"state", false,-1, 2,0);
    tracep->declBus(c+963,"counter", false,-1, 7,0);
    tracep->declBus(c+964,"cmd", false,-1, 7,0);
    tracep->declBus(c+965,"addr", false,-1, 23,0);
    tracep->declBus(c+966,"data", false,-1, 31,0);
    tracep->declBit(c+967,"ren", false,-1);
    tracep->declBus(c+1160,"rdata", false,-1, 31,0);
    tracep->declBus(c+1161,"raddr", false,-1, 31,0);
    tracep->declBus(c+1162,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+723,"clock", false,-1);
    tracep->declBit(c+967,"valid", false,-1);
    tracep->declBus(c+964,"cmd", false,-1, 7,0);
    tracep->declBus(c+1161,"addr", false,-1, 31,0);
    tracep->declBus(c+1160,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1146,"sck", false,-1);
    tracep->declBit(c+1147,"ce_n", false,-1);
    tracep->declBus(c+1018,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1148,"clk", false,-1);
    tracep->declBit(c+725,"cke", false,-1);
    tracep->declBit(c+726,"cs", false,-1);
    tracep->declBit(c+727,"ras", false,-1);
    tracep->declBit(c+728,"cas", false,-1);
    tracep->declBit(c+729,"we", false,-1);
    tracep->declBus(c+730,"a", false,-1, 12,0);
    tracep->declBus(c+731,"ba", false,-1, 1,0);
    tracep->declBus(c+732,"dqm", false,-1, 1,0);
    tracep->declBus(c+733,"dq", false,-1, 15,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_init_top(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_init_top\n"); );
    // Body
    VysyxSoCFull___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VysyxSoCFull___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_register(VysyxSoCFull___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VysyxSoCFull___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VysyxSoCFull___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VysyxSoCFull___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_top_0\n"); );
    // Init
    VysyxSoCFull___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VysyxSoCFull___024root*>(voidSelf);
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VysyxSoCFull___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VysyxSoCFull___024root__trace_full_sub_0(VysyxSoCFull___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<18>/*575:0*/ __Vtemp_hce4daa8c__0;
    VlWide<10>/*319:0*/ __Vtemp_h1a2e6c95__0;
    // Body
    bufp->fullCData(oldp+1,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[0]),4);
    bufp->fullCData(oldp+2,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[1]),4);
    bufp->fullCData(oldp+3,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[2]),4);
    bufp->fullCData(oldp+4,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[3]),4);
    bufp->fullCData(oldp+5,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[4]),4);
    bufp->fullCData(oldp+6,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[5]),4);
    bufp->fullCData(oldp+7,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[6]),4);
    bufp->fullCData(oldp+8,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[7]),4);
    bufp->fullCData(oldp+9,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[8]),4);
    bufp->fullCData(oldp+10,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[9]),4);
    bufp->fullCData(oldp+11,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[10]),4);
    bufp->fullCData(oldp+12,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[11]),4);
    bufp->fullCData(oldp+13,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[12]),4);
    bufp->fullCData(oldp+14,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[13]),4);
    bufp->fullCData(oldp+15,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[14]),4);
    bufp->fullCData(oldp+16,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list[15]),4);
    bufp->fullIData(oldp+17,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__i),32);
    bufp->fullCData(oldp+18,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[0]),7);
    bufp->fullCData(oldp+19,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[1]),7);
    bufp->fullCData(oldp+20,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[2]),7);
    bufp->fullCData(oldp+21,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[3]),7);
    bufp->fullCData(oldp+22,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[4]),7);
    bufp->fullCData(oldp+23,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[5]),7);
    bufp->fullCData(oldp+24,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[6]),7);
    bufp->fullCData(oldp+25,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list[7]),7);
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+33,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+34,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                               [3U] << 0x18U) | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                  [2U] 
                                                  << 0x10U) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [1U] 
                                                     << 8U) 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [0U])))),32);
    bufp->fullBit(oldp+35,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+36,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullCData(oldp+37,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullIData(oldp+38,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullCData(oldp+39,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullBit(oldp+40,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+41,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullCData(oldp+42,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+43,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullBit(oldp+44,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+45,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullCData(oldp+46,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullIData(oldp+47,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+48,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+49,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+58,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullIData(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out),32);
    bufp->fullCData(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__awsize),3);
    bufp->fullBit(oldp+62,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullIData(oldp+64,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullBit(oldp+66,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+67,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullIData(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullBit(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready));
    bufp->fullBit(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+72,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+74,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+76,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+77,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full) 
                             & (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                        >> 0x24U)))));
    bufp->fullQData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+127,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+133,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+136,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                      ? (vlSelf->__VdfgTmp_hf132a334__0 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                    ? 
                                                   (vlSelf->__VdfgTmp_hf132a334__0 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      (vlSelf->__VdfgTmp_hf132a334__0 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                        ? vlSelf->__VdfgTmp_hf132a334__0
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+137,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+138,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+146,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+148,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+151,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                             & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x1bU)) 
                                       | ((0xcU & (8U 
                                                   ^ 
                                                   (0x3cU 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                       >> 0x1aU)))) 
                                          | ((2U & 
                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                               >> 0x17U)) 
                                             | (1U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU)))))))));
    bufp->fullBit(oldp+152,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+153,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+154,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+155,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+163,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+210,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+213,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+223,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+227,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+231,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+235,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+239,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+243,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+247,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+251,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+255,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+263,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+267,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+275,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+279,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+283,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+287,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+291,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+295,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+299,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+303,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+307,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+311,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+315,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+319,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+323,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+327,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+331,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+335,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+339,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+343,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+347,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst),32);
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullBit(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__itrace_reg));
    bufp->fullBit(oldp+355,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst))));
    bufp->fullBit(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullIData(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b),32);
    bufp->fullBit(oldp+360,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_func),4);
    bufp->fullCData(oldp+363,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_type),3);
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+365,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+366,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+367,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+368,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                    ? 0U : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out
                                             : (0xffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out)))
                                : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                    ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                           >> 0xfU)))) 
                                            << 0x10U) 
                                           | (0xffffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                        : (0xffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                    : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                           >> 7U)))) 
                                            << 8U) 
                                           | (0xffU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                        : 0U)))),32);
    bufp->fullIData(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullBit(oldp+371,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel),2);
    bufp->fullIData(oldp+373,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                                ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                                    ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                        ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                            ? 0U : 
                                           ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out
                                             : (0xffffU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out)))
                                        : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                            ? ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                                   >> 0xfU)))) 
                                                    << 0x10U) 
                                                   | (0xffffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                                : (0xffU 
                                                   & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                            : ((1U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                                ? (
                                                   ((- (IData)(
                                                               (1U 
                                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                                   >> 7U)))) 
                                                    << 8U) 
                                                   | (0xffU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                                : 0U)))
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out)
                                : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                                    ? ((IData)(4U) 
                                       + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                    : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data))),32);
    bufp->fullIData(oldp+374,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                    : 0U))),32);
    bufp->fullBit(oldp+375,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jump_branch));
    bufp->fullIData(oldp+379,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_out),32);
    bufp->fullBit(oldp+381,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu))));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_finish));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__arsize),3);
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullIData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullIData(oldp+397,(((0xa0000048U == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)
                                : ((0xa000005cU == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                               >> 0x20U))
                                    : 0U))),32);
    bufp->fullIData(oldp+398,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+399,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+400,((VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+401,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+402,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+403,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+404,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+405,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+406,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+407,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, 
                                             (0x1fU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    __Vtemp_hce4daa8c__0[0U] = 0U;
    __Vtemp_hce4daa8c__0[1U] = (0xfU | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b 
                                        << 4U));
    __Vtemp_hce4daa8c__0[2U] = (0xe0U | ((VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                          << 8U) | 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b 
                                          >> 0x1cU)));
    __Vtemp_hce4daa8c__0[3U] = (0xd00U | (VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, 
                                                         (0x1fU 
                                                          & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                          >> 0x18U));
    __Vtemp_hce4daa8c__0[4U] = 0xc000U;
    __Vtemp_hce4daa8c__0[5U] = 0xb0000U;
    __Vtemp_hce4daa8c__0[6U] = 0xa00000U;
    __Vtemp_hce4daa8c__0[7U] = (0x9000000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                               - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                              << 0x1cU));
    __Vtemp_hce4daa8c__0[8U] = (0x80000000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                               >> 4U));
    __Vtemp_hce4daa8c__0[9U] = (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b);
    __Vtemp_hce4daa8c__0[0xaU] = (7U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                        << 4U));
    __Vtemp_hce4daa8c__0[0xbU] = (0x60U | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                            << 8U) 
                                           | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                              >> 0x1cU)));
    __Vtemp_hce4daa8c__0[0xcU] = (0x500U | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                              ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                             << 0xcU) 
                                            | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                               >> 0x18U)));
    __Vtemp_hce4daa8c__0[0xdU] = (0x4000U | ((((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                                ? 1U
                                                : 0U) 
                                              << 0x10U) 
                                             | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                 ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                                >> 0x14U)));
    __Vtemp_hce4daa8c__0[0xeU] = (0x30000U | (((VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                                 ? 1U
                                                 : 0U) 
                                               << 0x14U) 
                                              | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                   < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                                   ? 1U
                                                   : 0U) 
                                                 >> 0x10U)));
    __Vtemp_hce4daa8c__0[0xfU] = (0x200000U | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                                << 0x18U) 
                                               | ((VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                                    ? 1U
                                                    : 0U) 
                                                  >> 0xcU)));
    __Vtemp_hce4daa8c__0[0x10U] = (0x1000000U | (((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                   + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                                  << 0x1cU) 
                                                 | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                                     << 
                                                     (0x1fU 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)) 
                                                    >> 8U)));
    __Vtemp_hce4daa8c__0[0x11U] = ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                    + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b) 
                                   >> 4U);
    bufp->fullWData(oldp+408,(__Vtemp_hce4daa8c__0),576);
    bufp->fullQData(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+452,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+454,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+456,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+458,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+460,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+462,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+464,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+466,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+472,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__raddr),32);
    bufp->fullBit(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__CSR__finish));
    bufp->fullSData(oldp+480,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullCData(oldp+485,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+486,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+487,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                        >> 7U))),5);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[31]),32);
    bufp->fullCData(oldp+520,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),7);
    bufp->fullCData(oldp+521,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+522,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+523,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                               >> 7U)),25);
    bufp->fullBit(oldp+524,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst))));
    bufp->fullBit(oldp+525,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst))));
    bufp->fullBit(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+550,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+561,(((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_b_type) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lb) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lh) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lw) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lbu) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lhu) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_add) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_addi))))))))))))));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+565,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr) 
                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lb) 
                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lh) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lw) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lbu) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lhu) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_addi) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slti) 
                                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltiu) 
                                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xori) 
                                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ori) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_andi) 
                                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slli) 
                                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srli) 
                                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srai) 
                                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en))))))))))))))))));
    bufp->fullBit(oldp+566,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter),32);
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter_rready),32);
    bufp->fullIData(oldp+571,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)),32);
    bufp->fullIData(oldp+572,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+573,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5),32);
    bufp->fullIData(oldp+575,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  >> 7U))))),32);
    __Vtemp_h1a2e6c95__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5))));
    __Vtemp_h1a2e6c95__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_h1a2e6c95__0[2U] = (0x1180U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_h1a2e6c95__0[3U] = (0xc000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_h1a2e6c95__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                  << 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_h1a2e6c95__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                              >> 0x18U)))))));
    __Vtemp_h1a2e6c95__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 4U)))))));
    __Vtemp_h1a2e6c95__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h1a2e6c95__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                               << 0x11U)) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                              >> 0x16U)));
    __Vtemp_h1a2e6c95__0[9U] = (0x2e0000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__inst 
                                             >> 0xfU));
    bufp->fullWData(oldp+576,(__Vtemp_h1a2e6c95__0),312);
    bufp->fullQData(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU__mem_wr_en));
    bufp->fullIData(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullIData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_out),32);
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter),32);
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter_rready),32);
    bufp->fullCData(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__current_state),2);
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__is_clint));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+625,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+629,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+631,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+669,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+672,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+673,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+674,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+675,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+676,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+677,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+678,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+679,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+680,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+681,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullIData(oldp+682,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+683,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
                                     | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15) 
                                          << 0x1eU) 
                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14) 
                                             << 0x1cU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11) 
                                                      << 0x16U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10) 
                                                         << 0x14U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9) 
                                                            << 0x12U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8) 
                                                               << 0x10U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7) 
                                                                  << 0xeU) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6) 
                                                                     << 0xcU) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5) 
                                                                        << 0xaU) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4) 
                                                                           << 8U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3) 
                                                                              << 6U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1) 
                                                                                << 2U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0)))))))))))))))) 
                                        >> (0x1fU & 
                                            ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9) 
                                             << 1U)))))),2);
    bufp->fullBit(oldp+684,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                             << 0xeU) 
                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                << 0xdU) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                   << 0xcU) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                      << 0xbU) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                         << 0xaU) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                            << 9U) 
                                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                               << 8U) 
                                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                  << 7U) 
                                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                     << 6U) 
                                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                        << 5U) 
                                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                           << 4U) 
                                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                              << 3U) 
                                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                              >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4))));
    bufp->fullBit(oldp+685,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
                                     << 0xfU) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last) 
                                                  << 0xeU) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last) 
                                                     << 0xdU) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last) 
                                                        << 0xcU) 
                                                       | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last) 
                                                           << 0xbU) 
                                                          | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last) 
                                                              << 0xaU) 
                                                             | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last) 
                                                                 << 9U) 
                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last) 
                                                                    << 8U) 
                                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last) 
                                                                       << 7U) 
                                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last) 
                                                                          << 6U) 
                                                                         | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last) 
                                                                             << 5U) 
                                                                            | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last) 
                                                                                << 4U) 
                                                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last)))))))))))))))) 
                                   >> (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)))));
    bufp->fullBit(oldp+686,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+687,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+688,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+689,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+690,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+691,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+692,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+693,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+694,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+695,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+696,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+697,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+698,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+699,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+700,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+701,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+702,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+703,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+704,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+705,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+706,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+707,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+708,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+709,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+719,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+720,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid)))));
    bufp->fullIData(oldp+721,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__current_state))
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : 0U)),32);
    bufp->fullIData(oldp+722,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT____VdfgTmp_hf8a63299__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT____VdfgTmp_h7deb6f76__0)
                                    ? ((0xa0000048U 
                                        == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr)
                                        ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime)
                                        : ((0xa000005cU 
                                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr)
                                            ? (IData)(
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime 
                                                       >> 0x20U))
                                            : 0U)) : 0U))),32);
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+724,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+725,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+726,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+727,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+728,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+729,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+733,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+735,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+737,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+740,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                        ? (1U & (0xebU 
                                                 >> 
                                                 (7U 
                                                  & ((IData)(7U) 
                                                     - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))))
                                        : ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                            ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                               >> 0x14U)
                                            : ((9U 
                                                == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                   >> 0x10U)
                                                : (
                                                   (0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                    >> 0xcU)
                                                    : 
                                                   ((0xbU 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                     ? 
                                                    (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                     >> 8U)
                                                     : 
                                                    ((0xcU 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr 
                                                      >> 4U)
                                                      : 
                                                     ((0xdU 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr
                                                       : 0U))))))))),4);
    bufp->fullBit(oldp+741,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+744,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+745,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+749,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+750,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+754,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+756,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+787,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+788,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+789,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+790,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+791,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+792,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+793,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+797,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+799,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+800,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+802,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+806,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+807,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+809,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+828,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+829,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+830,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+831,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+832,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+833,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                           << 6U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
                                            << 5U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r) 
                                               << 4U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r))))))))),8);
    bufp->fullBit(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+836,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+837,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+838,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+857,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                    [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                            [1U] | 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [2U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [3U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                 [4U] 
                                                 | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                    [5U] 
                                                    | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                       [6U] 
                                                       | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                          [7U] 
                                                          | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                             [8U] 
                                                             | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                [9U] 
                                                                | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                   [0xaU] 
                                                                   | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                      [0xbU] 
                                                                      | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                         [0xcU] 
                                                                         | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                            [0xdU] 
                                                                            | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xeU] 
                                                                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                                                               [0xfU]))))))))))))))))));
    bufp->fullBit(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+864,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+883,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+884,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+885,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+886,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+887,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+906,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+907,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+908,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+909,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+910,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+912,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+917,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+918,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+931,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+948,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+959,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+960,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+961,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+965,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+966,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+967,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                             & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+973,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+974,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+978,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+982,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+988,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+989,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+995,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+996,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+997,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+998,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+999,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+1000,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1001,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1005,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1006,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1007,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1008,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1009,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+1010,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+1011,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1012,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                  & (0xcU == (0x1cU 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                 << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                             & (8U 
                                                == 
                                                (0x1cU 
                                                 & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                            << 2U) 
                                           | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                & (4U 
                                                   == 
                                                   (0x1cU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                               << 1U) 
                                              | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                                 & (0U 
                                                    == 
                                                    (0x1cU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))))))),4);
    bufp->fullBit(oldp+1013,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1015,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1018,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullIData(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1025,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullIData(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullBit(oldp+1030,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1058,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1072,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1073,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1074,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1075,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1076,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1077,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1082,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1083,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1091,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1093,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1094,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1095,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1096,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1097,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1098,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1099,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1100,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1102,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IFU__finish));
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__next_state),2);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1121,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1122,(vlSelf->clock));
    bufp->fullBit(oldp+1123,(vlSelf->reset));
    bufp->fullSData(oldp+1124,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1125,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1126,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1127,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1128,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1129,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1130,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1131,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1132,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1133,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1134,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1135,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1136,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1137,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1138,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1139,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1140,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1141,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1142,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1143,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1145,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1146,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1147,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1148,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullBit(oldp+1149,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1150,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullCData(oldp+1151,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1152,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1153,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1154,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1157,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1160,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1161,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1162,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1163,(1U),3);
    bufp->fullBit(oldp+1164,(0U));
    bufp->fullBit(oldp+1165,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1166,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1167,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1169,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1173,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1174,(0U),4);
    bufp->fullCData(oldp+1175,(0U),8);
    bufp->fullCData(oldp+1176,(0U),2);
    bufp->fullBit(oldp+1177,(1U));
    bufp->fullBit(oldp+1178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1179,(0U),32);
    bufp->fullCData(oldp+1180,(0U),3);
    bufp->fullBit(oldp+1181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awaddr),32);
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awvalid));
    bufp->fullBit(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awready));
    bufp->fullIData(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wdata),32);
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wvalid));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bvalid));
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullBit(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullIData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullBit(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullIData(oldp+1207,(0x10U),32);
    bufp->fullIData(oldp+1208,(4U),32);
    bufp->fullIData(oldp+1209,(0x20U),32);
    bufp->fullIData(oldp+1210,(0U),32);
    bufp->fullIData(oldp+1211,(0x24U),32);
    bufp->fullIData(oldp+1212,(0x10U),32);
    bufp->fullIData(oldp+1213,(0xa0000048U),32);
    bufp->fullIData(oldp+1214,(0xa000005cU),32);
    bufp->fullIData(oldp+1215,(5U),32);
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rvalid));
    bufp->fullIData(oldp+1217,(8U),32);
    bufp->fullIData(oldp+1218,(7U),32);
    bufp->fullIData(oldp+1219,(1U),32);
    bufp->fullIData(oldp+1220,(0x27U),32);
    bufp->fullIData(oldp+1221,(8U),32);
    bufp->fullIData(oldp+1222,(2U),32);
    bufp->fullBit(oldp+1223,(0U));
    bufp->fullBit(oldp+1224,(1U));
    bufp->fullCData(oldp+1225,(4U),3);
    bufp->fullCData(oldp+1226,(0x1bU),8);
    bufp->fullCData(oldp+1227,(0xebU),8);
    bufp->fullCData(oldp+1228,(0x38U),8);
    bufp->fullIData(oldp+1229,(0x64U),32);
    bufp->fullIData(oldp+1230,(0x18U),32);
    bufp->fullIData(oldp+1231,(9U),32);
    bufp->fullIData(oldp+1232,(0xdU),32);
    bufp->fullIData(oldp+1233,(0x2000U),32);
    bufp->fullIData(oldp+1234,(0x2710U),32);
    bufp->fullIData(oldp+1235,(0x30cU),32);
    bufp->fullCData(oldp+1236,(7U),4);
    bufp->fullCData(oldp+1237,(3U),4);
    bufp->fullCData(oldp+1238,(5U),4);
    bufp->fullCData(oldp+1239,(4U),4);
    bufp->fullCData(oldp+1240,(6U),4);
    bufp->fullCData(oldp+1241,(2U),4);
    bufp->fullCData(oldp+1242,(1U),4);
    bufp->fullSData(oldp+1243,(0x21U),13);
    bufp->fullCData(oldp+1244,(8U),4);
    bufp->fullCData(oldp+1245,(9U),4);
    bufp->fullIData(oldp+1246,(0xaU),32);
    bufp->fullIData(oldp+1247,(6U),32);
    bufp->fullIData(oldp+1248,(0x11U),32);
    bufp->fullIData(oldp+1249,(0x30000000U),32);
    bufp->fullIData(oldp+1250,(0x3fffffffU),32);
    bufp->fullCData(oldp+1251,(0xaU),4);
    bufp->fullIData(oldp+1252,(0xbU),32);
    bufp->fullCData(oldp+1253,(2U),3);
    bufp->fullCData(oldp+1254,(3U),3);
    bufp->fullCData(oldp+1255,(5U),3);
}
