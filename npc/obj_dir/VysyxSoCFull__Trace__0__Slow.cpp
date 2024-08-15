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
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+1143,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1144,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1145,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1146,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1147,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1148,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1149,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1150,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1151,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1152,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1153,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1154,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1155,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1158,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1159,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1160,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1161,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1162,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+1143,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1144,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1145,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1146,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1147,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1148,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1149,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1150,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1151,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1152,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1153,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1154,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1155,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1158,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1159,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1160,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1161,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1162,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+896,"spi_sck", false,-1);
    tracep->declBus(c+897,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1163,"spi_mosi", false,-1);
    tracep->declBit(c+1164,"spi_miso", false,-1);
    tracep->declBit(c+1161,"uart_rx", false,-1);
    tracep->declBit(c+1162,"uart_tx", false,-1);
    tracep->declBit(c+1165,"psram_sck", false,-1);
    tracep->declBit(c+1166,"psram_ce_n", false,-1);
    tracep->declBus(c+390,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1167,"sdram_clk", false,-1);
    tracep->declBit(c+898,"sdram_cke", false,-1);
    tracep->declBit(c+899,"sdram_cs", false,-1);
    tracep->declBit(c+900,"sdram_ras", false,-1);
    tracep->declBit(c+901,"sdram_cas", false,-1);
    tracep->declBit(c+902,"sdram_we", false,-1);
    tracep->declBus(c+903,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+904,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+905,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+906,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1143,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1144,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1145,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1146,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1153,"ps2_clk", false,-1);
    tracep->declBit(c+1154,"ps2_data", false,-1);
    tracep->declBus(c+1155,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1156,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1157,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1158,"vga_hsync", false,-1);
    tracep->declBit(c+1159,"vga_vsync", false,-1);
    tracep->declBit(c+1160,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+92,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+93,"in_psel", false,-1);
    tracep->declBit(c+472,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"in_pready", false,-1);
    tracep->declBus(c+1168,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+97,"in_pslverr", false,-1);
    tracep->declBus(c+92,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+93,"out_psel", false,-1);
    tracep->declBit(c+472,"out_penable", false,-1);
    tracep->declBus(c+1189,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"out_pwrite", false,-1);
    tracep->declBus(c+95,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"out_pready", false,-1);
    tracep->declBus(c+1168,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+97,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+93,"auto_in_psel", false,-1);
    tracep->declBit(c+472,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+92,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_in_pready", false,-1);
    tracep->declBit(c+97,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1168,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+98,"auto_out_6_psel", false,-1);
    tracep->declBit(c+63,"auto_out_6_penable", false,-1);
    tracep->declBit(c+94,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+92,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1189,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1190,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+908,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+99,"auto_out_5_psel", false,-1);
    tracep->declBit(c+64,"auto_out_5_penable", false,-1);
    tracep->declBit(c+94,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+100,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1189,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1191,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1192,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1193,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+101,"auto_out_4_psel", false,-1);
    tracep->declBit(c+65,"auto_out_4_penable", false,-1);
    tracep->declBit(c+94,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+102,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1195,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1196,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+103,"auto_out_3_psel", false,-1);
    tracep->declBit(c+66,"auto_out_3_penable", false,-1);
    tracep->declBit(c+94,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+102,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1197,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1198,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1199,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+391,"auto_out_2_psel", false,-1);
    tracep->declBit(c+67,"auto_out_2_penable", false,-1);
    tracep->declBit(c+94,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+92,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1189,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1169,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1190,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+473,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1170,"auto_out_1_psel", false,-1);
    tracep->declBit(c+1171,"auto_out_1_penable", false,-1);
    tracep->declBit(c+94,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+102,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1190,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+104,"auto_out_0_psel", false,-1);
    tracep->declBit(c+105,"auto_out_0_penable", false,-1);
    tracep->declBit(c+94,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+100,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1189,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+909,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1190,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+910,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+106,"sel_0", false,-1);
    tracep->declBit(c+107,"sel_1", false,-1);
    tracep->declBit(c+108,"sel_2", false,-1);
    tracep->declBit(c+109,"sel_3", false,-1);
    tracep->declBit(c+110,"sel_4", false,-1);
    tracep->declBit(c+111,"sel_5", false,-1);
    tracep->declBit(c+112,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+113,"auto_in_awready", false,-1);
    tracep->declBit(c+114,"auto_in_awvalid", false,-1);
    tracep->declBus(c+474,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+113,"auto_in_wready", false,-1);
    tracep->declBit(c+116,"auto_in_wvalid", false,-1);
    tracep->declBus(c+117,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+420,"auto_in_bready", false,-1);
    tracep->declBit(c+421,"auto_in_bvalid", false,-1);
    tracep->declBus(c+477,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_in_arready", false,-1);
    tracep->declBit(c+119,"auto_in_arvalid", false,-1);
    tracep->declBus(c+478,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+50,"auto_in_rready", false,-1);
    tracep->declBit(c+422,"auto_in_rvalid", false,-1);
    tracep->declBus(c+480,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+68,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+93,"auto_out_psel", false,-1);
    tracep->declBit(c+472,"auto_out_penable", false,-1);
    tracep->declBit(c+94,"auto_out_pwrite", false,-1);
    tracep->declBus(c+92,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+95,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+419,"auto_out_pready", false,-1);
    tracep->declBit(c+97,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1168,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+472,"nodeOut_penable", false,-1);
    tracep->declBus(c+481,"state", false,-1, 1,0);
    tracep->declBit(c+118,"accept_read", false,-1);
    tracep->declBit(c+113,"accept_write", false,-1);
    tracep->declBit(c+482,"is_write_r", false,-1);
    tracep->declBit(c+94,"is_write", false,-1);
    tracep->declBus(c+480,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+477,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+483,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+484,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+485,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+486,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+121,"resp", false,-1, 1,0);
    tracep->declBus(c+487,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+68,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+422,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+488,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+421,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+489,"auto_in_awready", false,-1);
    tracep->declBit(c+490,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1200,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1202,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1203,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+491,"auto_in_wready", false,-1);
    tracep->declBit(c+492,"auto_in_wvalid", false,-1);
    tracep->declBus(c+123,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"auto_in_wlast", false,-1);
    tracep->declBit(c+493,"auto_in_bready", false,-1);
    tracep->declBit(c+423,"auto_in_bvalid", false,-1);
    tracep->declBus(c+424,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+494,"auto_in_arready", false,-1);
    tracep->declBit(c+495,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1206,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1208,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1209,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+496,"auto_in_rready", false,-1);
    tracep->declBit(c+425,"auto_in_rvalid", false,-1);
    tracep->declBus(c+51,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_in_rlast", false,-1);
    tracep->declBit(c+426,"auto_out_awready", false,-1);
    tracep->declBit(c+497,"auto_out_awvalid", false,-1);
    tracep->declBus(c+474,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+498,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+427,"auto_out_wready", false,-1);
    tracep->declBit(c+499,"auto_out_wvalid", false,-1);
    tracep->declBus(c+117,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"auto_out_wlast", false,-1);
    tracep->declBit(c+428,"auto_out_bready", false,-1);
    tracep->declBit(c+429,"auto_out_bvalid", false,-1);
    tracep->declBus(c+424,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+430,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+431,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+126,"auto_out_arready", false,-1);
    tracep->declBit(c+501,"auto_out_arvalid", false,-1);
    tracep->declBus(c+478,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+502,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+496,"auto_out_rready", false,-1);
    tracep->declBit(c+425,"auto_out_rvalid", false,-1);
    tracep->declBus(c+51,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1177,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+52,"auto_out_rlast", false,-1);
    tracep->declBit(c+499,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+503,"w_idle", false,-1);
    tracep->declBit(c+432,"in_awready", false,-1);
    tracep->declBit(c+504,"busy", false,-1);
    tracep->declBus(c+505,"r_addr", false,-1, 31,0);
    tracep->declBus(c+506,"r_len", false,-1, 7,0);
    tracep->declBus(c+507,"len", false,-1, 7,0);
    tracep->declBus(c+127,"addr", false,-1, 31,0);
    tracep->declBit(c+508,"busy_1", false,-1);
    tracep->declBus(c+509,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+510,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+511,"len_1", false,-1, 7,0);
    tracep->declBus(c+128,"addr_1", false,-1, 31,0);
    tracep->declBit(c+512,"wbeats_latched", false,-1);
    tracep->declBit(c+497,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+513,"wbeats_valid", false,-1);
    tracep->declBus(c+514,"w_counter", false,-1, 8,0);
    tracep->declBus(c+515,"w_todo", false,-1, 8,0);
    tracep->declBit(c+500,"w_last", false,-1);
    tracep->declBit(c+428,"nodeOut_bready", false,-1);
    tracep->declBus(c+516,"error_0", false,-1, 1,0);
    tracep->declBus(c+517,"error_1", false,-1, 1,0);
    tracep->declBus(c+518,"error_2", false,-1, 1,0);
    tracep->declBus(c+519,"error_3", false,-1, 1,0);
    tracep->declBus(c+520,"error_4", false,-1, 1,0);
    tracep->declBus(c+521,"error_5", false,-1, 1,0);
    tracep->declBus(c+522,"error_6", false,-1, 1,0);
    tracep->declBus(c+523,"error_7", false,-1, 1,0);
    tracep->declBus(c+524,"error_8", false,-1, 1,0);
    tracep->declBus(c+525,"error_9", false,-1, 1,0);
    tracep->declBus(c+526,"error_10", false,-1, 1,0);
    tracep->declBus(c+527,"error_11", false,-1, 1,0);
    tracep->declBus(c+528,"error_12", false,-1, 1,0);
    tracep->declBus(c+529,"error_13", false,-1, 1,0);
    tracep->declBus(c+530,"error_14", false,-1, 1,0);
    tracep->declBus(c+531,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+494,"io_enq_ready", false,-1);
    tracep->declBit(c+495,"io_enq_valid", false,-1);
    tracep->declBus(c+1206,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+124,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1207,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1208,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1209,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+129,"io_deq_ready", false,-1);
    tracep->declBit(c+501,"io_deq_valid", false,-1);
    tracep->declBus(c+478,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+130,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+532,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+479,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+533,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+534,"ram", false,-1, 48,0);
    tracep->declBit(c+536,"full", false,-1);
    tracep->declBit(c+501,"io_deq_valid_0", false,-1);
    tracep->declBit(c+131,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+489,"io_enq_ready", false,-1);
    tracep->declBit(c+490,"io_enq_valid", false,-1);
    tracep->declBus(c+1200,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+122,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1201,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1202,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1203,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+433,"io_deq_ready", false,-1);
    tracep->declBit(c+537,"io_deq_valid", false,-1);
    tracep->declBus(c+474,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+132,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+538,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+475,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+539,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+540,"ram", false,-1, 48,0);
    tracep->declBit(c+542,"full", false,-1);
    tracep->declBit(c+537,"io_deq_valid_0", false,-1);
    tracep->declBit(c+434,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+491,"io_enq_ready", false,-1);
    tracep->declBit(c+492,"io_enq_valid", false,-1);
    tracep->declBus(c+123,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1204,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1205,"io_enq_bits_last", false,-1);
    tracep->declBit(c+435,"io_deq_ready", false,-1);
    tracep->declBit(c+543,"io_deq_valid", false,-1);
    tracep->declBus(c+117,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+476,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+544,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+545,"ram", false,-1, 36,0);
    tracep->declBit(c+547,"full", false,-1);
    tracep->declBit(c+543,"io_deq_valid_0", false,-1);
    tracep->declBit(c+436,"do_enq", false,-1);
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
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+437,"auto_in_awready", false,-1);
    tracep->declBit(c+133,"auto_in_awvalid", false,-1);
    tracep->declBus(c+474,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+1178,"auto_in_wready", false,-1);
    tracep->declBit(c+69,"auto_in_wvalid", false,-1);
    tracep->declBus(c+117,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_in_bready", false,-1);
    tracep->declBit(c+548,"auto_in_bvalid", false,-1);
    tracep->declBus(c+549,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+550,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+53,"auto_in_arready", false,-1);
    tracep->declBit(c+70,"auto_in_arvalid", false,-1);
    tracep->declBus(c+478,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+54,"auto_in_rready", false,-1);
    tracep->declBit(c+551,"auto_in_rvalid", false,-1);
    tracep->declBus(c+552,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+553,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+554,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+53,"nodeIn_arready", false,-1);
    tracep->declBit(c+437,"nodeIn_awready", false,-1);
    tracep->declBit(c+136,"w_sel0", false,-1);
    tracep->declBit(c+548,"w_full", false,-1);
    tracep->declBus(c+549,"w_id", false,-1, 3,0);
    tracep->declBit(c+555,"r_sel1", false,-1);
    tracep->declBit(c+556,"w_sel1", false,-1);
    tracep->declBit(c+551,"r_full", false,-1);
    tracep->declBus(c+552,"r_id", false,-1, 3,0);
    tracep->declBit(c+137,"ren", false,-1);
    tracep->declBit(c+557,"rdata_REG", false,-1);
    tracep->declBus(c+558,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+559,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+560,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+561,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+138,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+137,"R0_en", false,-1);
    tracep->declBit(c+1141,"R0_clk", false,-1);
    tracep->declBus(c+562,"R0_data", false,-1, 31,0);
    tracep->declBus(c+139,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+439,"W0_en", false,-1);
    tracep->declBit(c+1141,"W0_clk", false,-1);
    tracep->declBus(c+117,"W0_data", false,-1, 31,0);
    tracep->declBus(c+476,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+489,"auto_in_awready", false,-1);
    tracep->declBit(c+490,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1200,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1202,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1203,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+491,"auto_in_wready", false,-1);
    tracep->declBit(c+492,"auto_in_wvalid", false,-1);
    tracep->declBus(c+123,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"auto_in_wlast", false,-1);
    tracep->declBit(c+493,"auto_in_bready", false,-1);
    tracep->declBit(c+423,"auto_in_bvalid", false,-1);
    tracep->declBus(c+424,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+494,"auto_in_arready", false,-1);
    tracep->declBit(c+495,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1206,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1208,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1209,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+496,"auto_in_rready", false,-1);
    tracep->declBit(c+425,"auto_in_rvalid", false,-1);
    tracep->declBus(c+51,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_in_rlast", false,-1);
    tracep->declBit(c+489,"auto_out_awready", false,-1);
    tracep->declBit(c+490,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1200,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1202,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1203,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+491,"auto_out_wready", false,-1);
    tracep->declBit(c+492,"auto_out_wvalid", false,-1);
    tracep->declBus(c+123,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"auto_out_wlast", false,-1);
    tracep->declBit(c+493,"auto_out_bready", false,-1);
    tracep->declBit(c+423,"auto_out_bvalid", false,-1);
    tracep->declBus(c+424,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+494,"auto_out_arready", false,-1);
    tracep->declBit(c+495,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1206,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1208,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1209,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+496,"auto_out_rready", false,-1);
    tracep->declBit(c+425,"auto_out_rvalid", false,-1);
    tracep->declBus(c+51,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+440,"auto_in_awready", false,-1);
    tracep->declBit(c+563,"auto_in_awvalid", false,-1);
    tracep->declBus(c+474,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+427,"auto_in_wready", false,-1);
    tracep->declBit(c+499,"auto_in_wvalid", false,-1);
    tracep->declBus(c+117,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"auto_in_wlast", false,-1);
    tracep->declBit(c+428,"auto_in_bready", false,-1);
    tracep->declBit(c+429,"auto_in_bvalid", false,-1);
    tracep->declBus(c+424,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+430,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_in_arready", false,-1);
    tracep->declBit(c+564,"auto_in_arvalid", false,-1);
    tracep->declBus(c+478,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+496,"auto_in_rready", false,-1);
    tracep->declBit(c+425,"auto_in_rvalid", false,-1);
    tracep->declBus(c+51,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_in_rlast", false,-1);
    tracep->declBit(c+437,"auto_out_2_awready", false,-1);
    tracep->declBit(c+133,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+474,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+134,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+1178,"auto_out_2_wready", false,-1);
    tracep->declBit(c+69,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+117,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+438,"auto_out_2_bready", false,-1);
    tracep->declBit(c+548,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+549,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+550,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+53,"auto_out_2_arready", false,-1);
    tracep->declBit(c+70,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+478,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+135,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+54,"auto_out_2_rready", false,-1);
    tracep->declBit(c+551,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+552,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+553,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+554,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+71,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+72,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+565,"auto_out_1_arready", false,-1);
    tracep->declBit(c+73,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+478,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+141,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+1179,"auto_out_1_rready", false,-1);
    tracep->declBit(c+566,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+567,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+568,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+113,"auto_out_0_awready", false,-1);
    tracep->declBit(c+114,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+474,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+113,"auto_out_0_wready", false,-1);
    tracep->declBit(c+116,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+117,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+420,"auto_out_0_bready", false,-1);
    tracep->declBit(c+421,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+477,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+68,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+118,"auto_out_0_arready", false,-1);
    tracep->declBit(c+119,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+478,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+50,"auto_out_0_rready", false,-1);
    tracep->declBit(c+422,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+480,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1174,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+68,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+429,"in_0_bvalid", false,-1);
    tracep->declBit(c+425,"in_0_rvalid", false,-1);
    tracep->declBit(c+440,"nodeIn_awready", false,-1);
    tracep->declBit(c+142,"requestARIO_0_0", false,-1);
    tracep->declBit(c+143,"requestARIO_0_1", false,-1);
    tracep->declBit(c+144,"requestARIO_0_2", false,-1);
    tracep->declBit(c+145,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+146,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+147,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+569,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+570,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+571,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+572,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+573,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+574,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+575,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+576,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+577,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+578,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+579,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+580,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+581,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+582,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+583,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+584,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+585,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+586,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+587,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+588,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+589,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+590,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+591,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+592,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+593,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+594,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+595,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+596,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+597,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+598,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+599,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+600,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+601,"latched", false,-1);
    tracep->declBit(c+602,"in_0_awvalid", false,-1);
    tracep->declBit(c+603,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+604,"in_0_wvalid", false,-1);
    tracep->declBit(c+605,"idle_3", false,-1);
    tracep->declBit(c+441,"anyValid", false,-1);
    tracep->declBus(c+55,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+606,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+56,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+57,"prefixOR_1", false,-1);
    tracep->declBit(c+58,"winner_3_1", false,-1);
    tracep->declBit(c+59,"winner_3_2", false,-1);
    tracep->declBit(c+607,"state_3_0", false,-1);
    tracep->declBit(c+608,"state_3_1", false,-1);
    tracep->declBit(c+609,"state_3_2", false,-1);
    tracep->declBit(c+60,"muxState_3_0", false,-1);
    tracep->declBit(c+61,"muxState_3_1", false,-1);
    tracep->declBit(c+62,"muxState_3_2", false,-1);
    tracep->declBit(c+610,"idle_4", false,-1);
    tracep->declBit(c+442,"anyValid_1", false,-1);
    tracep->declBus(c+443,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+611,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+444,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+445,"winner_4_0", false,-1);
    tracep->declBit(c+446,"winner_4_2", false,-1);
    tracep->declBit(c+612,"state_4_0", false,-1);
    tracep->declBit(c+613,"state_4_2", false,-1);
    tracep->declBit(c+447,"muxState_4_0", false,-1);
    tracep->declBit(c+448,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+614,"io_enq_ready", false,-1);
    tracep->declBit(c+603,"io_enq_valid", false,-1);
    tracep->declBus(c+148,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+449,"io_deq_ready", false,-1);
    tracep->declBit(c+615,"io_deq_valid", false,-1);
    tracep->declBus(c+149,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+616,"wrap", false,-1);
    tracep->declBit(c+617,"wrap_1", false,-1);
    tracep->declBit(c+618,"maybe_full", false,-1);
    tracep->declBit(c+619,"ptr_match", false,-1);
    tracep->declBit(c+620,"empty", false,-1);
    tracep->declBit(c+621,"full", false,-1);
    tracep->declBit(c+615,"io_deq_valid_0", false,-1);
    tracep->declBit(c+450,"do_deq", false,-1);
    tracep->declBit(c+451,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+617,"R0_addr", false,-1);
    tracep->declBit(c+1210,"R0_en", false,-1);
    tracep->declBit(c+1141,"R0_clk", false,-1);
    tracep->declBus(c+622,"R0_data", false,-1, 2,0);
    tracep->declBit(c+616,"W0_addr", false,-1);
    tracep->declBit(c+451,"W0_en", false,-1);
    tracep->declBit(c+1141,"W0_clk", false,-1);
    tracep->declBus(c+148,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+623+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+426,"auto_in_awready", false,-1);
    tracep->declBit(c+497,"auto_in_awvalid", false,-1);
    tracep->declBus(c+474,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+498,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+427,"auto_in_wready", false,-1);
    tracep->declBit(c+499,"auto_in_wvalid", false,-1);
    tracep->declBus(c+117,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"auto_in_wlast", false,-1);
    tracep->declBit(c+428,"auto_in_bready", false,-1);
    tracep->declBit(c+429,"auto_in_bvalid", false,-1);
    tracep->declBus(c+424,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+430,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+431,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+126,"auto_in_arready", false,-1);
    tracep->declBit(c+501,"auto_in_arvalid", false,-1);
    tracep->declBus(c+478,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+502,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+496,"auto_in_rready", false,-1);
    tracep->declBit(c+425,"auto_in_rvalid", false,-1);
    tracep->declBus(c+51,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1177,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+52,"auto_in_rlast", false,-1);
    tracep->declBit(c+440,"auto_out_awready", false,-1);
    tracep->declBit(c+563,"auto_out_awvalid", false,-1);
    tracep->declBus(c+474,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+115,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+475,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+427,"auto_out_wready", false,-1);
    tracep->declBit(c+499,"auto_out_wvalid", false,-1);
    tracep->declBus(c+117,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+476,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+500,"auto_out_wlast", false,-1);
    tracep->declBit(c+428,"auto_out_bready", false,-1);
    tracep->declBit(c+429,"auto_out_bvalid", false,-1);
    tracep->declBus(c+424,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+430,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+140,"auto_out_arready", false,-1);
    tracep->declBit(c+564,"auto_out_arvalid", false,-1);
    tracep->declBus(c+478,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+120,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+479,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+496,"auto_out_rready", false,-1);
    tracep->declBit(c+425,"auto_out_rvalid", false,-1);
    tracep->declBus(c+51,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+52,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+625,"io_enq_ready", false,-1);
    tracep->declBit(c+74,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+34,"io_deq_ready", false,-1);
    tracep->declBit(c+626,"io_deq_valid", false,-1);
    tracep->declBit(c+627,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+627,"ram_real_last", false,-1);
    tracep->declBit(c+626,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+628,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+629,"io_enq_ready", false,-1);
    tracep->declBit(c+75,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+35,"io_deq_ready", false,-1);
    tracep->declBit(c+630,"io_deq_valid", false,-1);
    tracep->declBit(c+631,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+631,"ram_real_last", false,-1);
    tracep->declBit(c+630,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+632,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+633,"io_enq_ready", false,-1);
    tracep->declBit(c+76,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+36,"io_deq_ready", false,-1);
    tracep->declBit(c+634,"io_deq_valid", false,-1);
    tracep->declBit(c+635,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+635,"ram_real_last", false,-1);
    tracep->declBit(c+634,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+636,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+637,"io_enq_ready", false,-1);
    tracep->declBit(c+77,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+37,"io_deq_ready", false,-1);
    tracep->declBit(c+638,"io_deq_valid", false,-1);
    tracep->declBit(c+639,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+639,"ram_real_last", false,-1);
    tracep->declBit(c+638,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+640,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+641,"io_enq_ready", false,-1);
    tracep->declBit(c+78,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+38,"io_deq_ready", false,-1);
    tracep->declBit(c+642,"io_deq_valid", false,-1);
    tracep->declBit(c+643,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+643,"ram_real_last", false,-1);
    tracep->declBit(c+642,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+644,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+645,"io_enq_ready", false,-1);
    tracep->declBit(c+79,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+39,"io_deq_ready", false,-1);
    tracep->declBit(c+646,"io_deq_valid", false,-1);
    tracep->declBit(c+647,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+647,"ram_real_last", false,-1);
    tracep->declBit(c+646,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+648,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+649,"io_enq_ready", false,-1);
    tracep->declBit(c+80,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+40,"io_deq_ready", false,-1);
    tracep->declBit(c+650,"io_deq_valid", false,-1);
    tracep->declBit(c+651,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+651,"ram_real_last", false,-1);
    tracep->declBit(c+650,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+652,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+653,"io_enq_ready", false,-1);
    tracep->declBit(c+81,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+41,"io_deq_ready", false,-1);
    tracep->declBit(c+654,"io_deq_valid", false,-1);
    tracep->declBit(c+655,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+655,"ram_real_last", false,-1);
    tracep->declBit(c+654,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+656,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+657,"io_enq_ready", false,-1);
    tracep->declBit(c+402,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+452,"io_deq_ready", false,-1);
    tracep->declBit(c+658,"io_deq_valid", false,-1);
    tracep->declBit(c+659,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+659,"ram_real_last", false,-1);
    tracep->declBit(c+658,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+660,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+661,"io_enq_ready", false,-1);
    tracep->declBit(c+403,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+453,"io_deq_ready", false,-1);
    tracep->declBit(c+662,"io_deq_valid", false,-1);
    tracep->declBit(c+663,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+663,"ram_real_last", false,-1);
    tracep->declBit(c+662,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+664,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+665,"io_enq_ready", false,-1);
    tracep->declBit(c+404,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+454,"io_deq_ready", false,-1);
    tracep->declBit(c+666,"io_deq_valid", false,-1);
    tracep->declBit(c+667,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+667,"ram_real_last", false,-1);
    tracep->declBit(c+666,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+668,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+669,"io_enq_ready", false,-1);
    tracep->declBit(c+405,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+455,"io_deq_ready", false,-1);
    tracep->declBit(c+670,"io_deq_valid", false,-1);
    tracep->declBit(c+671,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+671,"ram_real_last", false,-1);
    tracep->declBit(c+670,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+672,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+673,"io_enq_ready", false,-1);
    tracep->declBit(c+82,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+42,"io_deq_ready", false,-1);
    tracep->declBit(c+674,"io_deq_valid", false,-1);
    tracep->declBit(c+675,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+675,"ram_real_last", false,-1);
    tracep->declBit(c+674,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+676,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+677,"io_enq_ready", false,-1);
    tracep->declBit(c+406,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+456,"io_deq_ready", false,-1);
    tracep->declBit(c+678,"io_deq_valid", false,-1);
    tracep->declBit(c+679,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+679,"ram_real_last", false,-1);
    tracep->declBit(c+678,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+680,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+681,"io_enq_ready", false,-1);
    tracep->declBit(c+407,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+457,"io_deq_ready", false,-1);
    tracep->declBit(c+682,"io_deq_valid", false,-1);
    tracep->declBit(c+683,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+683,"ram_real_last", false,-1);
    tracep->declBit(c+682,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+684,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+685,"io_enq_ready", false,-1);
    tracep->declBit(c+408,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+458,"io_deq_ready", false,-1);
    tracep->declBit(c+686,"io_deq_valid", false,-1);
    tracep->declBit(c+687,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+687,"ram_real_last", false,-1);
    tracep->declBit(c+686,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+688,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+689,"io_enq_ready", false,-1);
    tracep->declBit(c+409,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+459,"io_deq_ready", false,-1);
    tracep->declBit(c+690,"io_deq_valid", false,-1);
    tracep->declBit(c+691,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+691,"ram_real_last", false,-1);
    tracep->declBit(c+690,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+692,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+693,"io_enq_ready", false,-1);
    tracep->declBit(c+410,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+460,"io_deq_ready", false,-1);
    tracep->declBit(c+694,"io_deq_valid", false,-1);
    tracep->declBit(c+695,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+695,"ram_real_last", false,-1);
    tracep->declBit(c+694,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+696,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+697,"io_enq_ready", false,-1);
    tracep->declBit(c+411,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+461,"io_deq_ready", false,-1);
    tracep->declBit(c+698,"io_deq_valid", false,-1);
    tracep->declBit(c+699,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+699,"ram_real_last", false,-1);
    tracep->declBit(c+698,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+700,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+701,"io_enq_ready", false,-1);
    tracep->declBit(c+412,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+462,"io_deq_ready", false,-1);
    tracep->declBit(c+702,"io_deq_valid", false,-1);
    tracep->declBit(c+703,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+703,"ram_real_last", false,-1);
    tracep->declBit(c+702,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+704,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+705,"io_enq_ready", false,-1);
    tracep->declBit(c+413,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+463,"io_deq_ready", false,-1);
    tracep->declBit(c+706,"io_deq_valid", false,-1);
    tracep->declBit(c+707,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+707,"ram_real_last", false,-1);
    tracep->declBit(c+706,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+708,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+709,"io_enq_ready", false,-1);
    tracep->declBit(c+414,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+464,"io_deq_ready", false,-1);
    tracep->declBit(c+710,"io_deq_valid", false,-1);
    tracep->declBit(c+711,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+711,"ram_real_last", false,-1);
    tracep->declBit(c+710,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+712,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+713,"io_enq_ready", false,-1);
    tracep->declBit(c+415,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+465,"io_deq_ready", false,-1);
    tracep->declBit(c+714,"io_deq_valid", false,-1);
    tracep->declBit(c+715,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+715,"ram_real_last", false,-1);
    tracep->declBit(c+714,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+716,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+717,"io_enq_ready", false,-1);
    tracep->declBit(c+83,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+43,"io_deq_ready", false,-1);
    tracep->declBit(c+718,"io_deq_valid", false,-1);
    tracep->declBit(c+719,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+719,"ram_real_last", false,-1);
    tracep->declBit(c+718,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+720,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+721,"io_enq_ready", false,-1);
    tracep->declBit(c+416,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+466,"io_deq_ready", false,-1);
    tracep->declBit(c+722,"io_deq_valid", false,-1);
    tracep->declBit(c+723,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+723,"ram_real_last", false,-1);
    tracep->declBit(c+722,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+724,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+725,"io_enq_ready", false,-1);
    tracep->declBit(c+417,"io_enq_valid", false,-1);
    tracep->declBit(c+498,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+467,"io_deq_ready", false,-1);
    tracep->declBit(c+726,"io_deq_valid", false,-1);
    tracep->declBit(c+727,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+727,"ram_real_last", false,-1);
    tracep->declBit(c+726,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+728,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+729,"io_enq_ready", false,-1);
    tracep->declBit(c+84,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+44,"io_deq_ready", false,-1);
    tracep->declBit(c+730,"io_deq_valid", false,-1);
    tracep->declBit(c+731,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+731,"ram_real_last", false,-1);
    tracep->declBit(c+730,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+732,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+733,"io_enq_ready", false,-1);
    tracep->declBit(c+85,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+45,"io_deq_ready", false,-1);
    tracep->declBit(c+734,"io_deq_valid", false,-1);
    tracep->declBit(c+735,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+735,"ram_real_last", false,-1);
    tracep->declBit(c+734,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+736,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+737,"io_enq_ready", false,-1);
    tracep->declBit(c+86,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+46,"io_deq_ready", false,-1);
    tracep->declBit(c+738,"io_deq_valid", false,-1);
    tracep->declBit(c+739,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+739,"ram_real_last", false,-1);
    tracep->declBit(c+738,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+740,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+741,"io_enq_ready", false,-1);
    tracep->declBit(c+87,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+47,"io_deq_ready", false,-1);
    tracep->declBit(c+742,"io_deq_valid", false,-1);
    tracep->declBit(c+743,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+743,"ram_real_last", false,-1);
    tracep->declBit(c+742,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+744,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+745,"io_enq_ready", false,-1);
    tracep->declBit(c+88,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+48,"io_deq_ready", false,-1);
    tracep->declBit(c+746,"io_deq_valid", false,-1);
    tracep->declBit(c+747,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+747,"ram_real_last", false,-1);
    tracep->declBit(c+746,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+748,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+749,"io_enq_ready", false,-1);
    tracep->declBit(c+89,"io_enq_valid", false,-1);
    tracep->declBit(c+502,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+49,"io_deq_ready", false,-1);
    tracep->declBit(c+750,"io_deq_valid", false,-1);
    tracep->declBit(c+751,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+751,"ram_real_last", false,-1);
    tracep->declBit(c+750,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+752,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1180,"reset", false,-1);
    tracep->declBit(c+489,"auto_master_out_awready", false,-1);
    tracep->declBit(c+490,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1200,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+122,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1201,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1202,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1203,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+491,"auto_master_out_wready", false,-1);
    tracep->declBit(c+492,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+123,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+493,"auto_master_out_bready", false,-1);
    tracep->declBit(c+423,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+424,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+401,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+494,"auto_master_out_arready", false,-1);
    tracep->declBit(c+495,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1206,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+124,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1207,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1208,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1209,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+496,"auto_master_out_rready", false,-1);
    tracep->declBit(c+425,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+51,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+125,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1175,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1176,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1180,"reset", false,-1);
    tracep->declBit(c+1190,"io_interrupt", false,-1);
    tracep->declBit(c+489,"io_master_awready", false,-1);
    tracep->declBit(c+490,"io_master_awvalid", false,-1);
    tracep->declBus(c+122,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1200,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1201,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1202,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1203,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+491,"io_master_wready", false,-1);
    tracep->declBit(c+492,"io_master_wvalid", false,-1);
    tracep->declBus(c+123,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1204,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1205,"io_master_wlast", false,-1);
    tracep->declBit(c+493,"io_master_bready", false,-1);
    tracep->declBit(c+423,"io_master_bvalid", false,-1);
    tracep->declBus(c+401,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+424,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+494,"io_master_arready", false,-1);
    tracep->declBit(c+495,"io_master_arvalid", false,-1);
    tracep->declBus(c+124,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1206,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1207,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1208,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1209,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+496,"io_master_rready", false,-1);
    tracep->declBit(c+425,"io_master_rvalid", false,-1);
    tracep->declBus(c+1175,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+125,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+1176,"io_master_rlast", false,-1);
    tracep->declBus(c+51,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1211,"io_slave_awready", false,-1);
    tracep->declBit(c+1190,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1212,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1213,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1214,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1215,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1216,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1217,"io_slave_wready", false,-1);
    tracep->declBit(c+1190,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1212,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1190,"io_slave_wlast", false,-1);
    tracep->declBit(c+1190,"io_slave_bready", false,-1);
    tracep->declBit(c+1218,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1219,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1220,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1221,"io_slave_arready", false,-1);
    tracep->declBit(c+1190,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1212,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1213,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1214,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1215,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1216,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1190,"io_slave_rready", false,-1);
    tracep->declBit(c+1222,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1223,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1224,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1225,"io_slave_rlast", false,-1);
    tracep->declBus(c+1226,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBus(c+753,"pc", false,-1, 31,0);
    tracep->declBit(c+754,"difftest", false,-1);
    tracep->declBit(c+755,"itrace_reg", false,-1);
    tracep->declBit(c+151,"jal", false,-1);
    tracep->declBit(c+152,"jalr", false,-1);
    tracep->declBit(c+153,"w_csr_en", false,-1);
    tracep->declBit(c+153,"r_csr_en", false,-1);
    tracep->declBus(c+154,"alu_a", false,-1, 31,0);
    tracep->declBus(c+155,"alu_b", false,-1, 31,0);
    tracep->declBus(c+156,"alu_out", false,-1, 31,0);
    tracep->declBit(c+157,"alu_a_sel", false,-1);
    tracep->declBus(c+158,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+159,"alu_func", false,-1, 3,0);
    tracep->declBus(c+160,"branch_type", false,-1, 2,0);
    tracep->declBus(c+161,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+162,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+163,"mem_rd_en", false,-1);
    tracep->declBit(c+164,"mem_wr_en", false,-1);
    tracep->declBus(c+165,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+166,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+167,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+168,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+169,"w_en", false,-1);
    tracep->declBus(c+170,"w_sel", false,-1, 1,0);
    tracep->declBus(c+90,"w_data", false,-1, 31,0);
    tracep->declBus(c+171,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+172,"jump_jtype", false,-1);
    tracep->declBit(c+173,"jump_ecall", false,-1);
    tracep->declBit(c+174,"jump_mret", false,-1);
    tracep->declBit(c+175,"jump_branch", false,-1);
    tracep->declBus(c+756,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+176,"imm_out", false,-1, 31,0);
    tracep->declBit(c+91,"finish_1", false,-1);
    tracep->declBit(c+418,"wr_finish", false,-1);
    tracep->declBit(c+757,"rd_finish", false,-1);
    tracep->declBit(c+758,"valid_ifu", false,-1);
    tracep->declBit(c+177,"valid_idu", false,-1);
    tracep->declBus(c+759,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+753,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+760,"ifu_arvalid", false,-1);
    tracep->declBit(c+761,"ifu_arready", false,-1);
    tracep->declBus(c+1227,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1228,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1229,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1230,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+762,"ifu_rready", false,-1);
    tracep->declBit(c+468,"ifu_rvalid", false,-1);
    tracep->declBus(c+150,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1231,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1232,"ifu_rlast", false,-1);
    tracep->declBus(c+1233,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1234,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1235,"ifu_awvalid", false,-1);
    tracep->declBit(c+763,"ifu_awready", false,-1);
    tracep->declBus(c+1236,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1237,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1238,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1239,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1240,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1241,"ifu_wvalid", false,-1);
    tracep->declBit(c+764,"ifu_wready", false,-1);
    tracep->declBus(c+1242,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1243,"ifu_wlast", false,-1);
    tracep->declBit(c+1244,"ifu_bready", false,-1);
    tracep->declBit(c+765,"ifu_bvalid", false,-1);
    tracep->declBus(c+1245,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1246,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+156,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+766,"lsu_arvalid", false,-1);
    tracep->declBit(c+767,"lsu_arready", false,-1);
    tracep->declBus(c+1247,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1248,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1249,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1250,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+768,"lsu_rready", false,-1);
    tracep->declBit(c+469,"lsu_rvalid", false,-1);
    tracep->declBus(c+178,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1251,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1252,"lsu_rlast", false,-1);
    tracep->declBus(c+1253,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+156,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+769,"lsu_awvalid", false,-1);
    tracep->declBit(c+770,"lsu_awready", false,-1);
    tracep->declBus(c+1254,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1255,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1256,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1257,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+168,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+771,"lsu_wvalid", false,-1);
    tracep->declBit(c+772,"lsu_wready", false,-1);
    tracep->declBus(c+1258,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"lsu_wlast", false,-1);
    tracep->declBit(c+773,"lsu_bready", false,-1);
    tracep->declBit(c+470,"lsu_bvalid", false,-1);
    tracep->declBus(c+1260,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1261,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+1262,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+1263,"saxi_arvalid", false,-1);
    tracep->declBit(c+774,"saxi_arready", false,-1);
    tracep->declBus(c+1264,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+1265,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+1266,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+1267,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+1268,"saxi_rready", false,-1);
    tracep->declBit(c+775,"saxi_rvalid", false,-1);
    tracep->declBus(c+776,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+1269,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+1270,"saxi_rlast", false,-1);
    tracep->declBus(c+1271,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+1272,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+1273,"saxi_awvalid", false,-1);
    tracep->declBit(c+777,"saxi_awready", false,-1);
    tracep->declBus(c+1274,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+1275,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+1276,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+1277,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+1278,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+1279,"saxi_wvalid", false,-1);
    tracep->declBit(c+778,"saxi_wready", false,-1);
    tracep->declBus(c+1280,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"saxi_wlast", false,-1);
    tracep->declBit(c+1282,"saxi_bready", false,-1);
    tracep->declBit(c+779,"saxi_bvalid", false,-1);
    tracep->declBus(c+1283,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+1284,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+1285,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1286,"uart_arvalid", false,-1);
    tracep->declBit(c+1287,"uart_arready", false,-1);
    tracep->declBus(c+1288,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1290,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1291,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+1292,"uart_rready", false,-1);
    tracep->declBit(c+1293,"uart_rvalid", false,-1);
    tracep->declBus(c+1294,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1295,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1296,"uart_rlast", false,-1);
    tracep->declBus(c+1297,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1298,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1299,"uart_awvalid", false,-1);
    tracep->declBit(c+780,"uart_awready", false,-1);
    tracep->declBus(c+1300,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1301,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1302,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1303,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1304,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+1305,"uart_wvalid", false,-1);
    tracep->declBit(c+781,"uart_wready", false,-1);
    tracep->declBus(c+1306,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1307,"uart_wlast", false,-1);
    tracep->declBit(c+1308,"uart_bready", false,-1);
    tracep->declBit(c+782,"uart_bvalid", false,-1);
    tracep->declBus(c+1309,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+1310,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+179,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+783,"clint_arvalid", false,-1);
    tracep->declBit(c+784,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+785,"clint_rready", false,-1);
    tracep->declBit(c+786,"clint_rvalid", false,-1);
    tracep->declBus(c+787,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1315,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1316,"clint_rlast", false,-1);
    tracep->declBus(c+1317,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1318,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1319,"clint_awvalid", false,-1);
    tracep->declBit(c+1320,"clint_awready", false,-1);
    tracep->declBus(c+1321,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1322,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1323,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1324,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+1325,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1326,"clint_wvalid", false,-1);
    tracep->declBit(c+1327,"clint_wready", false,-1);
    tracep->declBus(c+1328,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1329,"clint_wlast", false,-1);
    tracep->declBit(c+1330,"clint_bready", false,-1);
    tracep->declBit(c+1331,"clint_bvalid", false,-1);
    tracep->declBus(c+1332,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1333,"clint_bid", false,-1, 3,0);
    tracep->pushNamePrefix("ALU ");
    tracep->declBus(c+154,"SrcA", false,-1, 31,0);
    tracep->declBus(c+155,"SrcB", false,-1, 31,0);
    tracep->declBus(c+159,"alu_func", false,-1, 3,0);
    tracep->declBus(c+156,"ALUout", false,-1, 31,0);
    tracep->declBus(c+154,"signed_a", false,-1, 31,0);
    tracep->declBus(c+155,"signed_b", false,-1, 31,0);
    tracep->declBus(c+154,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+155,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+180,"a0", false,-1, 31,0);
    tracep->declBus(c+181,"a1", false,-1, 31,0);
    tracep->declBus(c+182,"a2", false,-1, 31,0);
    tracep->declBus(c+183,"a3", false,-1, 31,0);
    tracep->declBus(c+184,"a4", false,-1, 31,0);
    tracep->declBus(c+185,"a5", false,-1, 31,0);
    tracep->declBus(c+186,"a6", false,-1, 31,0);
    tracep->declBus(c+187,"a7", false,-1, 31,0);
    tracep->declBus(c+188,"a8", false,-1, 31,0);
    tracep->declBus(c+1212,"a9", false,-1, 31,0);
    tracep->declBus(c+1212,"a10", false,-1, 31,0);
    tracep->declBus(c+1212,"a11", false,-1, 31,0);
    tracep->declBus(c+1212,"a12", false,-1, 31,0);
    tracep->declBus(c+189,"a13", false,-1, 31,0);
    tracep->declBus(c+155,"a14", false,-1, 31,0);
    tracep->declBus(c+1212,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+1334,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->declBus(c+159,"key", false,-1, 3,0);
    tracep->declArray(c+190,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1334,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1337,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+156,"out", false,-1, 31,0);
    tracep->declBus(c+159,"key", false,-1, 3,0);
    tracep->declBus(c+1212,"default_out", false,-1, 31,0);
    tracep->declArray(c+190,"lut", false,-1, 575,0);
    tracep->declBus(c+1338,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+208+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+240+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+256,"lut_out", false,-1, 31,0);
    tracep->declBit(c+257,"hit", false,-1);
    tracep->declBus(c+1339,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+167,"rs1", false,-1, 31,0);
    tracep->declBus(c+168,"rs2", false,-1, 31,0);
    tracep->declBus(c+160,"branch_type", false,-1, 2,0);
    tracep->declBit(c+175,"jump_branch", false,-1);
    tracep->declBus(c+167,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+168,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+167,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+168,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBus(c+179,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+783,"clint_arvalid", false,-1);
    tracep->declBit(c+784,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+785,"clint_rready", false,-1);
    tracep->declBit(c+786,"clint_rvalid", false,-1);
    tracep->declBus(c+787,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1315,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1316,"clint_rlast", false,-1);
    tracep->declBus(c+1317,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1318,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1319,"clint_awvalid", false,-1);
    tracep->declBit(c+1320,"clint_awready", false,-1);
    tracep->declBus(c+1321,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1322,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1323,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1324,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+1325,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1326,"clint_wvalid", false,-1);
    tracep->declBit(c+1327,"clint_wready", false,-1);
    tracep->declBus(c+1328,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1329,"clint_wlast", false,-1);
    tracep->declBit(c+1330,"clint_bready", false,-1);
    tracep->declBit(c+1331,"clint_bvalid", false,-1);
    tracep->declBus(c+1332,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1333,"clint_bid", false,-1, 3,0);
    tracep->declQuad(c+788,"mtime", false,-1, 63,0);
    tracep->declBus(c+1340,"mtime_addr_low", false,-1, 31,0);
    tracep->declBus(c+1341,"mtime_addr_high", false,-1, 31,0);
    tracep->declBus(c+790,"raddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+258,"finish", false,-1);
    tracep->declBus(c+753,"pc", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBus(c+259,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+259,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+156,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+153,"w_csr_en", false,-1);
    tracep->declBit(c+153,"r_csr_en", false,-1);
    tracep->declBit(c+174,"jump_mret", false,-1);
    tracep->declBit(c+173,"jump_ecall", false,-1);
    tracep->declBus(c+166,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+791,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+792,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+793,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+794,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+1342,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+258,"finish", false,-1);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBus(c+90,"w_data", false,-1, 31,0);
    tracep->declBus(c+260,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+261,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+262,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+169,"w_en", false,-1);
    tracep->declBus(c+167,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+168,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+795+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+758,"valid_ifu", false,-1);
    tracep->declBit(c+91,"finish_1", false,-1);
    tracep->declBit(c+177,"valid_idu", false,-1);
    tracep->declBit(c+157,"alu_a_sel", false,-1);
    tracep->declBus(c+158,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+169,"w_en", false,-1);
    tracep->declBus(c+170,"w_sel", false,-1, 1,0);
    tracep->declBit(c+172,"jump_jtype", false,-1);
    tracep->declBit(c+173,"jump_ecall", false,-1);
    tracep->declBit(c+174,"jump_mret", false,-1);
    tracep->declBus(c+160,"branch_type", false,-1, 2,0);
    tracep->declBus(c+159,"alu_func", false,-1, 3,0);
    tracep->declBus(c+161,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+162,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+163,"mem_rd_en", false,-1);
    tracep->declBit(c+164,"mem_wr_en", false,-1);
    tracep->declBit(c+151,"jal_signal", false,-1);
    tracep->declBit(c+152,"jalr_signal", false,-1);
    tracep->declBit(c+153,"w_csr_en", false,-1);
    tracep->declBit(c+153,"r_csr_en", false,-1);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+264,"funct3", false,-1, 2,0);
    tracep->declBus(c+265,"funct7", false,-1, 6,0);
    tracep->declBus(c+259,"funct12", false,-1, 11,0);
    tracep->declBus(c+266,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+267,"is_lui", false,-1);
    tracep->declBit(c+268,"is_auipc", false,-1);
    tracep->declBit(c+151,"is_jal", false,-1);
    tracep->declBit(c+152,"is_jalr", false,-1);
    tracep->declBit(c+269,"is_beq", false,-1);
    tracep->declBit(c+270,"is_bne", false,-1);
    tracep->declBit(c+271,"is_blt", false,-1);
    tracep->declBit(c+272,"is_bge", false,-1);
    tracep->declBit(c+273,"is_bltu", false,-1);
    tracep->declBit(c+274,"is_bgeu", false,-1);
    tracep->declBit(c+275,"is_lb", false,-1);
    tracep->declBit(c+276,"is_lh", false,-1);
    tracep->declBit(c+277,"is_lw", false,-1);
    tracep->declBit(c+278,"is_lbu", false,-1);
    tracep->declBit(c+279,"is_lhu", false,-1);
    tracep->declBit(c+280,"is_sb", false,-1);
    tracep->declBit(c+281,"is_sh", false,-1);
    tracep->declBit(c+282,"is_sw", false,-1);
    tracep->declBit(c+283,"is_addi", false,-1);
    tracep->declBit(c+284,"is_slti", false,-1);
    tracep->declBit(c+285,"is_sltiu", false,-1);
    tracep->declBit(c+286,"is_xori", false,-1);
    tracep->declBit(c+287,"is_ori", false,-1);
    tracep->declBit(c+288,"is_andi", false,-1);
    tracep->declBit(c+289,"is_slli", false,-1);
    tracep->declBit(c+290,"is_srli", false,-1);
    tracep->declBit(c+291,"is_srai", false,-1);
    tracep->declBit(c+292,"is_add", false,-1);
    tracep->declBit(c+293,"is_sub", false,-1);
    tracep->declBit(c+294,"is_sll", false,-1);
    tracep->declBit(c+295,"is_slt", false,-1);
    tracep->declBit(c+296,"is_sltu", false,-1);
    tracep->declBit(c+297,"is_xor", false,-1);
    tracep->declBit(c+298,"is_srl", false,-1);
    tracep->declBit(c+299,"is_sra", false,-1);
    tracep->declBit(c+300,"is_or", false,-1);
    tracep->declBit(c+301,"is_and", false,-1);
    tracep->declBit(c+302,"is_csrrs", false,-1);
    tracep->declBit(c+303,"is_csrrw", false,-1);
    tracep->declBit(c+173,"is_ecall", false,-1);
    tracep->declBit(c+174,"is_mret", false,-1);
    tracep->declBit(c+304,"is_add_type", false,-1);
    tracep->declBit(c+305,"is_u_type", false,-1);
    tracep->declBit(c+151,"is_jump_type", false,-1);
    tracep->declBit(c+306,"is_b_type", false,-1);
    tracep->declBit(c+307,"is_r_type", false,-1);
    tracep->declBit(c+308,"is_i_type", false,-1);
    tracep->declBit(c+164,"is_s_type", false,-1);
    tracep->declBit(c+163,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBit(c+309,"jump_en", false,-1);
    tracep->declBus(c+171,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+471,"finish", false,-1);
    tracep->declBit(c+758,"valid_ifu", false,-1);
    tracep->declBus(c+753,"pc", false,-1, 31,0);
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBit(c+754,"difftest", false,-1);
    tracep->declBit(c+755,"itrace_reg", false,-1);
    tracep->declBus(c+753,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+760,"ifu_arvalid", false,-1);
    tracep->declBit(c+761,"ifu_arready", false,-1);
    tracep->declBus(c+1227,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1228,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1229,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1230,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+762,"ifu_rready", false,-1);
    tracep->declBit(c+468,"ifu_rvalid", false,-1);
    tracep->declBus(c+150,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1231,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1232,"ifu_rlast", false,-1);
    tracep->declBus(c+1233,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1234,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1235,"ifu_awvalid", false,-1);
    tracep->declBit(c+763,"ifu_awready", false,-1);
    tracep->declBus(c+1236,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1237,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1238,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1239,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1240,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1241,"ifu_wvalid", false,-1);
    tracep->declBit(c+764,"ifu_wready", false,-1);
    tracep->declBus(c+1242,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1243,"ifu_wlast", false,-1);
    tracep->declBit(c+1244,"ifu_bready", false,-1);
    tracep->declBit(c+765,"ifu_bvalid", false,-1);
    tracep->declBus(c+1245,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1246,"ifu_bid", false,-1, 3,0);
    tracep->declBit(c+1343,"rvalid", false,-1);
    tracep->declBit(c+827,"axi_arvalid", false,-1);
    tracep->declBus(c+828,"counter", false,-1, 31,0);
    tracep->declBit(c+829,"axi_rready", false,-1);
    tracep->declBus(c+830,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+150,"inst", false,-1, 31,0);
    tracep->declBus(c+176,"immout", false,-1, 31,0);
    tracep->declBus(c+263,"opcode", false,-1, 6,0);
    tracep->declBus(c+310,"out1", false,-1, 31,0);
    tracep->declBus(c+310,"out2", false,-1, 31,0);
    tracep->declBus(c+311,"out3", false,-1, 31,0);
    tracep->declBus(c+312,"out4", false,-1, 31,0);
    tracep->declBus(c+313,"out5", false,-1, 31,0);
    tracep->declBus(c+313,"out6", false,-1, 31,0);
    tracep->declBus(c+314,"out7", false,-1, 31,0);
    tracep->declBus(c+313,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+1344,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1345,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 31,0);
    tracep->declBus(c+263,"key", false,-1, 6,0);
    tracep->declBus(c+1212,"default_out", false,-1, 31,0);
    tracep->declArray(c+315,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1344,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1345,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1346,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+176,"out", false,-1, 31,0);
    tracep->declBus(c+263,"key", false,-1, 6,0);
    tracep->declBus(c+1212,"default_out", false,-1, 31,0);
    tracep->declArray(c+315,"lut", false,-1, 311,0);
    tracep->declBus(c+1347,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+325+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+341+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+349,"lut_out", false,-1, 31,0);
    tracep->declBit(c+350,"hit", false,-1);
    tracep->declBus(c+1348,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBit(c+351,"mem_wr_en", false,-1);
    tracep->declBus(c+161,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+162,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+168,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+156,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+156,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+165,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+177,"valid_idu", false,-1);
    tracep->declBit(c+418,"wr_finish", false,-1);
    tracep->declBit(c+757,"rd_finish", false,-1);
    tracep->declBus(c+156,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+766,"lsu_arvalid", false,-1);
    tracep->declBit(c+767,"lsu_arready", false,-1);
    tracep->declBus(c+1247,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1248,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1249,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1250,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+768,"lsu_rready", false,-1);
    tracep->declBit(c+469,"lsu_rvalid", false,-1);
    tracep->declBus(c+178,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1251,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1252,"lsu_rlast", false,-1);
    tracep->declBus(c+1253,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+156,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+769,"lsu_awvalid", false,-1);
    tracep->declBit(c+770,"lsu_awready", false,-1);
    tracep->declBus(c+1254,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1255,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1256,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1257,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+168,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+771,"lsu_wvalid", false,-1);
    tracep->declBit(c+772,"lsu_wready", false,-1);
    tracep->declBus(c+1258,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"lsu_wlast", false,-1);
    tracep->declBit(c+773,"lsu_bready", false,-1);
    tracep->declBit(c+470,"lsu_bvalid", false,-1);
    tracep->declBus(c+1260,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1261,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+352,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+178,"mem_out", false,-1, 31,0);
    tracep->declBit(c+831,"axi_arvalid", false,-1);
    tracep->declBus(c+832,"counter", false,-1, 31,0);
    tracep->declBit(c+833,"axi_rready", false,-1);
    tracep->declBus(c+834,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBus(c+162,"wmask", false,-1, 7,0);
    tracep->declBus(c+1262,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+1263,"saxi_arvalid", false,-1);
    tracep->declBit(c+774,"saxi_arready", false,-1);
    tracep->declBus(c+1264,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+1265,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+1266,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+1267,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+1268,"saxi_rready", false,-1);
    tracep->declBit(c+775,"saxi_rvalid", false,-1);
    tracep->declBus(c+776,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+1269,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+1270,"saxi_rlast", false,-1);
    tracep->declBus(c+1271,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+1272,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+1273,"saxi_awvalid", false,-1);
    tracep->declBit(c+777,"saxi_awready", false,-1);
    tracep->declBus(c+1274,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+1275,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+1276,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+1277,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+1278,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+1279,"saxi_wvalid", false,-1);
    tracep->declBit(c+778,"saxi_wready", false,-1);
    tracep->declBus(c+1280,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1281,"saxi_wlast", false,-1);
    tracep->declBit(c+1282,"saxi_bready", false,-1);
    tracep->declBit(c+779,"saxi_bvalid", false,-1);
    tracep->declBus(c+1283,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+1284,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+835,"axi_raddr", false,-1, 31,0);
    tracep->declBus(c+836,"axi_data_to_read", false,-1, 31,0);
    tracep->declBit(c+837,"aw_hand", false,-1);
    tracep->declBus(c+838,"axi_waddr", false,-1, 31,0);
    tracep->declBit(c+839,"w_hand", false,-1);
    tracep->declBus(c+840,"axi_wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBus(c+1285,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1286,"uart_arvalid", false,-1);
    tracep->declBit(c+1287,"uart_arready", false,-1);
    tracep->declBus(c+1288,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1289,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1290,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1291,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+1292,"uart_rready", false,-1);
    tracep->declBit(c+1293,"uart_rvalid", false,-1);
    tracep->declBus(c+1294,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1295,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1296,"uart_rlast", false,-1);
    tracep->declBus(c+1297,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+1298,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+1299,"uart_awvalid", false,-1);
    tracep->declBit(c+780,"uart_awready", false,-1);
    tracep->declBus(c+1300,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1301,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1302,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1303,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+1304,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+1305,"uart_wvalid", false,-1);
    tracep->declBit(c+781,"uart_wready", false,-1);
    tracep->declBus(c+1306,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1307,"uart_wlast", false,-1);
    tracep->declBit(c+1308,"uart_bready", false,-1);
    tracep->declBit(c+782,"uart_bvalid", false,-1);
    tracep->declBus(c+1309,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+1310,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+759,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+1349,"uart_addr", false,-1, 31,0);
    tracep->declBit(c+841,"aw_hand", false,-1);
    tracep->declBus(c+842,"waddr", false,-1, 31,0);
    tracep->declBit(c+843,"w_hand", false,-1);
    tracep->declBus(c+844,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("XBAR ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1180,"rst", false,-1);
    tracep->declBus(c+753,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+760,"ifu_arvalid", false,-1);
    tracep->declBit(c+761,"ifu_arready", false,-1);
    tracep->declBus(c+1227,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1228,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1229,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1230,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+762,"ifu_rready", false,-1);
    tracep->declBit(c+468,"ifu_rvalid", false,-1);
    tracep->declBus(c+150,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1231,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1232,"ifu_rlast", false,-1);
    tracep->declBus(c+1233,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1234,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1235,"ifu_awvalid", false,-1);
    tracep->declBit(c+763,"ifu_awready", false,-1);
    tracep->declBus(c+1236,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1237,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1238,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1239,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1240,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1241,"ifu_wvalid", false,-1);
    tracep->declBit(c+764,"ifu_wready", false,-1);
    tracep->declBus(c+1242,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1243,"ifu_wlast", false,-1);
    tracep->declBit(c+1244,"ifu_bready", false,-1);
    tracep->declBit(c+765,"ifu_bvalid", false,-1);
    tracep->declBus(c+1245,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1246,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+156,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+766,"lsu_arvalid", false,-1);
    tracep->declBit(c+767,"lsu_arready", false,-1);
    tracep->declBus(c+1247,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1248,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1249,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1250,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+768,"lsu_rready", false,-1);
    tracep->declBit(c+469,"lsu_rvalid", false,-1);
    tracep->declBus(c+178,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1251,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1252,"lsu_rlast", false,-1);
    tracep->declBus(c+1253,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+156,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+769,"lsu_awvalid", false,-1);
    tracep->declBit(c+770,"lsu_awready", false,-1);
    tracep->declBus(c+1254,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1255,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1256,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1257,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+168,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+771,"lsu_wvalid", false,-1);
    tracep->declBit(c+772,"lsu_wready", false,-1);
    tracep->declBus(c+1258,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1259,"lsu_wlast", false,-1);
    tracep->declBit(c+773,"lsu_bready", false,-1);
    tracep->declBit(c+470,"lsu_bvalid", false,-1);
    tracep->declBus(c+1260,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1261,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+124,"io_master_araddr", false,-1, 31,0);
    tracep->declBit(c+495,"io_master_arvalid", false,-1);
    tracep->declBit(c+494,"io_master_arready", false,-1);
    tracep->declBit(c+496,"io_master_rready", false,-1);
    tracep->declBit(c+425,"io_master_rvalid", false,-1);
    tracep->declBus(c+125,"io_master_rdata", false,-1, 31,0);
    tracep->declBus(c+122,"io_master_awaddr", false,-1, 31,0);
    tracep->declBit(c+490,"io_master_awvalid", false,-1);
    tracep->declBit(c+489,"io_master_awready", false,-1);
    tracep->declBus(c+123,"io_master_wdata", false,-1, 31,0);
    tracep->declBit(c+492,"io_master_wvalid", false,-1);
    tracep->declBit(c+491,"io_master_wready", false,-1);
    tracep->declBit(c+493,"io_master_bready", false,-1);
    tracep->declBit(c+423,"io_master_bvalid", false,-1);
    tracep->declBus(c+179,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+783,"clint_arvalid", false,-1);
    tracep->declBit(c+784,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+785,"clint_rready", false,-1);
    tracep->declBit(c+786,"clint_rvalid", false,-1);
    tracep->declBus(c+787,"clint_rdata", false,-1, 31,0);
    tracep->declBus(c+1315,"clint_rresp", false,-1, 1,0);
    tracep->declBit(c+1316,"clint_rlast", false,-1);
    tracep->declBus(c+1317,"clint_rid", false,-1, 3,0);
    tracep->declBus(c+1318,"clint_awaddr", false,-1, 31,0);
    tracep->declBit(c+1319,"clint_awvalid", false,-1);
    tracep->declBit(c+1320,"clint_awready", false,-1);
    tracep->declBus(c+1321,"clint_awid", false,-1, 3,0);
    tracep->declBus(c+1322,"clint_awlen", false,-1, 7,0);
    tracep->declBus(c+1323,"clint_awsize", false,-1, 2,0);
    tracep->declBus(c+1324,"clint_awburst", false,-1, 1,0);
    tracep->declBus(c+1325,"clint_wdata", false,-1, 31,0);
    tracep->declBit(c+1326,"clint_wvalid", false,-1);
    tracep->declBit(c+1327,"clint_wready", false,-1);
    tracep->declBus(c+1328,"clint_wstrb", false,-1, 3,0);
    tracep->declBit(c+1329,"clint_wlast", false,-1);
    tracep->declBit(c+1330,"clint_bready", false,-1);
    tracep->declBit(c+1331,"clint_bvalid", false,-1);
    tracep->declBus(c+1332,"clint_bresp", false,-1, 1,0);
    tracep->declBus(c+1333,"clint_bid", false,-1, 3,0);
    tracep->declBit(c+845,"arb_ready", false,-1);
    tracep->declBus(c+846,"state", false,-1, 3,0);
    tracep->declBit(c+847,"wait_read", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"io_d", false,-1);
    tracep->declBit(c+848,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"io_d", false,-1);
    tracep->declBit(c+848,"io_q", false,-1);
    tracep->declBit(c+848,"sync_0", false,-1);
    tracep->declBit(c+849,"sync_1", false,-1);
    tracep->declBit(c+850,"sync_2", false,-1);
    tracep->declBit(c+851,"sync_3", false,-1);
    tracep->declBit(c+852,"sync_4", false,-1);
    tracep->declBit(c+853,"sync_5", false,-1);
    tracep->declBit(c+854,"sync_6", false,-1);
    tracep->declBit(c+855,"sync_7", false,-1);
    tracep->declBit(c+856,"sync_8", false,-1);
    tracep->declBit(c+857,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+103,"auto_in_psel", false,-1);
    tracep->declBit(c+66,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1197,"auto_in_pready", false,-1);
    tracep->declBit(c+1198,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1199,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1143,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1144,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1145,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1146,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+353,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+103,"in_psel", false,-1);
    tracep->declBit(c+66,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1197,"in_pready", false,-1);
    tracep->declBus(c+1199,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1198,"in_pslverr", false,-1);
    tracep->declBus(c+1143,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1144,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1145,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1146,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1147,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1148,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1149,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1150,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1151,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1152,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+101,"auto_in_psel", false,-1);
    tracep->declBit(c+65,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"auto_in_pready", false,-1);
    tracep->declBit(c+1195,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1196,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1153,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1154,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+353,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+101,"in_psel", false,-1);
    tracep->declBit(c+65,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1194,"in_pready", false,-1);
    tracep->declBus(c+1196,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1195,"in_pslverr", false,-1);
    tracep->declBit(c+1153,"ps2_clk", false,-1);
    tracep->declBit(c+1154,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+71,"auto_in_awvalid", false,-1);
    tracep->declBit(c+72,"auto_in_wvalid", false,-1);
    tracep->declBit(c+565,"auto_in_arready", false,-1);
    tracep->declBit(c+73,"auto_in_arvalid", false,-1);
    tracep->declBus(c+478,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+141,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+1179,"auto_in_rready", false,-1);
    tracep->declBit(c+566,"auto_in_rvalid", false,-1);
    tracep->declBus(c+567,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+568,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+566,"state", false,-1);
    tracep->declBus(c+568,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+567,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+354,"raddr", false,-1, 31,0);
    tracep->declBit(c+355,"ren", false,-1);
    tracep->declBus(c+356,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+391,"auto_in_psel", false,-1);
    tracep->declBit(c+67,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+92,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1169,"auto_in_pready", false,-1);
    tracep->declBit(c+1190,"auto_in_pslverr", false,-1);
    tracep->declBus(c+473,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1165,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1166,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+390,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+92,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+391,"in_psel", false,-1);
    tracep->declBit(c+67,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1169,"in_pready", false,-1);
    tracep->declBus(c+473,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1190,"in_pslverr", false,-1);
    tracep->declBit(c+1165,"qspi_sck", false,-1);
    tracep->declBit(c+1166,"qspi_ce_n", false,-1);
    tracep->declBus(c+390,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+390,"din", false,-1, 3,0);
    tracep->declBus(c+392,"dout", false,-1, 3,0);
    tracep->declBus(c+393,"douten", false,-1, 3,0);
    tracep->declBit(c+1181,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1141,"clk_i", false,-1);
    tracep->declBit(c+1142,"rst_i", false,-1);
    tracep->declBus(c+92,"adr_i", false,-1, 31,0);
    tracep->declBus(c+95,"dat_i", false,-1, 31,0);
    tracep->declBus(c+473,"dat_o", false,-1, 31,0);
    tracep->declBus(c+96,"sel_i", false,-1, 3,0);
    tracep->declBit(c+391,"cyc_i", false,-1);
    tracep->declBit(c+391,"stb_i", false,-1);
    tracep->declBit(c+1181,"ack_o", false,-1);
    tracep->declBit(c+94,"we_i", false,-1);
    tracep->declBit(c+1165,"sck", false,-1);
    tracep->declBit(c+1166,"ce_n", false,-1);
    tracep->declBus(c+390,"din", false,-1, 3,0);
    tracep->declBus(c+392,"dout", false,-1, 3,0);
    tracep->declBus(c+393,"douten", false,-1, 3,0);
    tracep->declBus(c+1350,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+911,"mr_sck", false,-1);
    tracep->declBit(c+912,"mr_ce_n", false,-1);
    tracep->declBus(c+390,"mr_din", false,-1, 3,0);
    tracep->declBus(c+913,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+914,"mr_doe", false,-1);
    tracep->declBit(c+915,"mw_sck", false,-1);
    tracep->declBit(c+916,"mw_ce_n", false,-1);
    tracep->declBus(c+390,"mw_din", false,-1, 3,0);
    tracep->declBus(c+357,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+917,"mw_doe", false,-1);
    tracep->declBit(c+394,"mr_rd", false,-1);
    tracep->declBit(c+918,"mr_done", false,-1);
    tracep->declBit(c+395,"mw_wr", false,-1);
    tracep->declBit(c+358,"mw_done", false,-1);
    tracep->declBit(c+391,"wb_valid", false,-1);
    tracep->declBit(c+396,"wb_we", false,-1);
    tracep->declBit(c+397,"wb_re", false,-1);
    tracep->declBit(c+919,"state", false,-1);
    tracep->declBit(c+398,"nstate", false,-1);
    tracep->declBus(c+359,"size", false,-1, 2,0);
    tracep->declBus(c+360,"byte0", false,-1, 7,0);
    tracep->declBus(c+361,"byte1", false,-1, 7,0);
    tracep->declBus(c+362,"byte2", false,-1, 7,0);
    tracep->declBus(c+363,"byte3", false,-1, 7,0);
    tracep->declBus(c+364,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1182,"rst_n", false,-1);
    tracep->declBus(c+365,"addr", false,-1, 23,0);
    tracep->declBit(c+394,"rd", false,-1);
    tracep->declBus(c+1352,"size", false,-1, 2,0);
    tracep->declBit(c+918,"done", false,-1);
    tracep->declBus(c+473,"line", false,-1, 31,0);
    tracep->declBit(c+911,"sck", false,-1);
    tracep->declBit(c+912,"ce_n", false,-1);
    tracep->declBus(c+390,"din", false,-1, 3,0);
    tracep->declBus(c+913,"dout", false,-1, 3,0);
    tracep->declBit(c+914,"douten", false,-1);
    tracep->declBus(c+1350,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"READ", false,-1, 0,0);
    tracep->declBus(c+1353,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+920,"state", false,-1);
    tracep->declBit(c+399,"nstate", false,-1);
    tracep->declBus(c+921,"counter", false,-1, 7,0);
    tracep->declBus(c+922,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+858+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1354,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+923,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1182,"rst_n", false,-1);
    tracep->declBus(c+366,"addr", false,-1, 23,0);
    tracep->declBus(c+364,"line", false,-1, 31,0);
    tracep->declBus(c+359,"size", false,-1, 2,0);
    tracep->declBit(c+395,"wr", false,-1);
    tracep->declBit(c+358,"done", false,-1);
    tracep->declBit(c+915,"sck", false,-1);
    tracep->declBit(c+916,"ce_n", false,-1);
    tracep->declBus(c+390,"din", false,-1, 3,0);
    tracep->declBus(c+357,"dout", false,-1, 3,0);
    tracep->declBit(c+917,"douten", false,-1);
    tracep->declBus(c+1350,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"WRITE", false,-1, 0,0);
    tracep->declBus(c+367,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+924,"state", false,-1);
    tracep->declBit(c+400,"nstate", false,-1);
    tracep->declBus(c+925,"counter", false,-1, 7,0);
    tracep->declBus(c+926,"saddr", false,-1, 23,0);
    tracep->declBus(c+1355,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+98,"auto_in_psel", false,-1);
    tracep->declBit(c+63,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+92,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"auto_in_pready", false,-1);
    tracep->declBit(c+1190,"auto_in_pslverr", false,-1);
    tracep->declBus(c+908,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1167,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+898,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+899,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+900,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+901,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+902,"sdram_bundle_we", false,-1);
    tracep->declBus(c+903,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+904,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+905,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+906,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+92,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+98,"in_psel", false,-1);
    tracep->declBit(c+63,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+907,"in_pready", false,-1);
    tracep->declBus(c+908,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1190,"in_pslverr", false,-1);
    tracep->declBit(c+1167,"sdram_clk", false,-1);
    tracep->declBit(c+898,"sdram_cke", false,-1);
    tracep->declBit(c+899,"sdram_cs", false,-1);
    tracep->declBit(c+900,"sdram_ras", false,-1);
    tracep->declBit(c+901,"sdram_cas", false,-1);
    tracep->declBit(c+902,"sdram_we", false,-1);
    tracep->declBus(c+903,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+904,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+905,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+906,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+927,"sdram_dout_en", false,-1);
    tracep->declBus(c+928,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+862,"state", false,-1, 1,0);
    tracep->declBit(c+929,"req_accept", false,-1);
    tracep->declBit(c+368,"is_read", false,-1);
    tracep->declBit(c+369,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1141,"clk_i", false,-1);
    tracep->declBit(c+1142,"rst_i", false,-1);
    tracep->declBus(c+370,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+368,"inport_rd_i", false,-1);
    tracep->declBus(c+1214,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+92,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+95,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+906,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+929,"inport_accept_o", false,-1);
    tracep->declBit(c+907,"inport_ack_o", false,-1);
    tracep->declBit(c+1190,"inport_error_o", false,-1);
    tracep->declBus(c+908,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1167,"sdram_clk_o", false,-1);
    tracep->declBit(c+898,"sdram_cke_o", false,-1);
    tracep->declBit(c+899,"sdram_cs_o", false,-1);
    tracep->declBit(c+900,"sdram_ras_o", false,-1);
    tracep->declBit(c+901,"sdram_cas_o", false,-1);
    tracep->declBit(c+902,"sdram_we_o", false,-1);
    tracep->declBus(c+905,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+903,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+904,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+928,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+927,"sdram_data_out_en_o", false,-1);
    tracep->declBus(c+1356,"SDRAM_MHZ", false,-1, 31,0);
    tracep->declBus(c+1357,"SDRAM_ADDR_W", false,-1, 31,0);
    tracep->declBus(c+1358,"SDRAM_COL_W", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_READ_LATENCY", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_BANK_W", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_DQM_W", false,-1, 31,0);
    tracep->declBus(c+1335,"SDRAM_BANKS", false,-1, 31,0);
    tracep->declBus(c+1360,"SDRAM_ROW_W", false,-1, 31,0);
    tracep->declBus(c+1361,"SDRAM_REFRESH_CNT", false,-1, 31,0);
    tracep->declBus(c+1362,"SDRAM_START_DELAY", false,-1, 31,0);
    tracep->declBus(c+1363,"SDRAM_REFRESH_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1335,"CMD_W", false,-1, 31,0);
    tracep->declBus(c+1364,"CMD_NOP", false,-1, 3,0);
    tracep->declBus(c+1365,"CMD_ACTIVE", false,-1, 3,0);
    tracep->declBus(c+1366,"CMD_READ", false,-1, 3,0);
    tracep->declBus(c+1367,"CMD_WRITE", false,-1, 3,0);
    tracep->declBus(c+1368,"CMD_TERMINATE", false,-1, 3,0);
    tracep->declBus(c+1369,"CMD_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1370,"CMD_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1213,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1371,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1335,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1213,"STATE_INIT", false,-1, 3,0);
    tracep->declBus(c+1370,"STATE_DELAY", false,-1, 3,0);
    tracep->declBus(c+1369,"STATE_IDLE", false,-1, 3,0);
    tracep->declBus(c+1365,"STATE_ACTIVATE", false,-1, 3,0);
    tracep->declBus(c+1367,"STATE_READ", false,-1, 3,0);
    tracep->declBus(c+1366,"STATE_READ_WAIT", false,-1, 3,0);
    tracep->declBus(c+1368,"STATE_WRITE0", false,-1, 3,0);
    tracep->declBus(c+1364,"STATE_WRITE1", false,-1, 3,0);
    tracep->declBus(c+1372,"STATE_PRECHARGE", false,-1, 3,0);
    tracep->declBus(c+1373,"STATE_REFRESH", false,-1, 3,0);
    tracep->declBus(c+1374,"AUTO_PRECHARGE", false,-1, 31,0);
    tracep->declBus(c+1374,"ALL_BANKS", false,-1, 31,0);
    tracep->declBus(c+1334,"SDRAM_DATA_W", false,-1, 31,0);
    tracep->declBus(c+1374,"CYCLE_TIME_NS", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_TRCD_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1359,"SDRAM_TRP_CYCLES", false,-1, 31,0);
    tracep->declBus(c+1375,"SDRAM_TRFC_CYCLES", false,-1, 31,0);
    tracep->declBus(c+92,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+370,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+368,"ram_rd_w", false,-1);
    tracep->declBit(c+929,"ram_accept_w", false,-1);
    tracep->declBus(c+95,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+908,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+907,"ram_ack_w", false,-1);
    tracep->declBit(c+371,"ram_req_w", false,-1);
    tracep->declBus(c+930,"command_q", false,-1, 3,0);
    tracep->declBus(c+903,"addr_q", false,-1, 12,0);
    tracep->declBus(c+928,"data_q", false,-1, 15,0);
    tracep->declBit(c+931,"data_rd_en_q", false,-1);
    tracep->declBus(c+905,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+898,"cke_q", false,-1);
    tracep->declBus(c+904,"bank_q", false,-1, 1,0);
    tracep->declBus(c+932,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+933,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+906,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+934,"refresh_q", false,-1);
    tracep->declBus(c+935,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+936+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+940,"state_q", false,-1, 3,0);
    tracep->declBus(c+372,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+373,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+941,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+942,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+374,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+375,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+376,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1335,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+943,"delay_q", false,-1, 3,0);
    tracep->declBus(c+377,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1376,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+944,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+945,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+946,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+947,"idx", false,-1, 31,0);
    tracep->declBus(c+948,"rd_q", false,-1, 3,0);
    tracep->declBit(c+907,"ack_q", false,-1);
    tracep->declArray(c+949,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+104,"auto_in_psel", false,-1);
    tracep->declBit(c+105,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+100,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+909,"auto_in_pready", false,-1);
    tracep->declBit(c+1190,"auto_in_pslverr", false,-1);
    tracep->declBus(c+910,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+896,"spi_bundle_sck", false,-1);
    tracep->declBus(c+897,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1163,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1164,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1377,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1378,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1344,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+378,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+104,"in_psel", false,-1);
    tracep->declBit(c+105,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+909,"in_pready", false,-1);
    tracep->declBus(c+910,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1190,"in_pslverr", false,-1);
    tracep->declBit(c+896,"spi_sck", false,-1);
    tracep->declBus(c+897,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1163,"spi_mosi", false,-1);
    tracep->declBit(c+1164,"spi_miso", false,-1);
    tracep->declBit(c+952,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1141,"wb_clk_i", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBus(c+379,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+95,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+910,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+96,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+94,"wb_we_i", false,-1);
    tracep->declBit(c+104,"wb_stb_i", false,-1);
    tracep->declBit(c+105,"wb_cyc_i", false,-1);
    tracep->declBit(c+909,"wb_ack_o", false,-1);
    tracep->declBit(c+1190,"wb_err_o", false,-1);
    tracep->declBit(c+952,"wb_int_o", false,-1);
    tracep->declBus(c+897,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+896,"sclk_pad_o", false,-1);
    tracep->declBit(c+1163,"mosi_pad_o", false,-1);
    tracep->declBit(c+1164,"miso_pad_i", false,-1);
    tracep->declBus(c+953,"divider", false,-1, 15,0);
    tracep->declBus(c+954,"ctrl", false,-1, 13,0);
    tracep->declBus(c+955,"ss", false,-1, 7,0);
    tracep->declBus(c+380,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+956,"rx", false,-1, 127,0);
    tracep->declBit(c+960,"rx_negedge", false,-1);
    tracep->declBit(c+961,"tx_negedge", false,-1);
    tracep->declBus(c+962,"char_len", false,-1, 6,0);
    tracep->declBit(c+963,"go", false,-1);
    tracep->declBit(c+964,"lsb", false,-1);
    tracep->declBit(c+965,"ie", false,-1);
    tracep->declBit(c+966,"ass", false,-1);
    tracep->declBit(c+381,"spi_divider_sel", false,-1);
    tracep->declBit(c+382,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+383,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+384,"spi_ss_sel", false,-1);
    tracep->declBit(c+967,"tip", false,-1);
    tracep->declBit(c+968,"pos_edge", false,-1);
    tracep->declBit(c+969,"neg_edge", false,-1);
    tracep->declBit(c+970,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1141,"clk_in", false,-1);
    tracep->declBit(c+1142,"rst", false,-1);
    tracep->declBit(c+967,"enable", false,-1);
    tracep->declBit(c+963,"go", false,-1);
    tracep->declBit(c+970,"last_clk", false,-1);
    tracep->declBus(c+953,"divider", false,-1, 15,0);
    tracep->declBit(c+896,"clk_out", false,-1);
    tracep->declBit(c+968,"pos_edge", false,-1);
    tracep->declBit(c+969,"neg_edge", false,-1);
    tracep->declBus(c+971,"cnt", false,-1, 15,0);
    tracep->declBit(c+972,"cnt_zero", false,-1);
    tracep->declBit(c+973,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"rst", false,-1);
    tracep->declBus(c+385,"latch", false,-1, 3,0);
    tracep->declBus(c+96,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+962,"len", false,-1, 6,0);
    tracep->declBit(c+964,"lsb", false,-1);
    tracep->declBit(c+963,"go", false,-1);
    tracep->declBit(c+968,"pos_edge", false,-1);
    tracep->declBit(c+969,"neg_edge", false,-1);
    tracep->declBit(c+960,"rx_negedge", false,-1);
    tracep->declBit(c+961,"tx_negedge", false,-1);
    tracep->declBit(c+967,"tip", false,-1);
    tracep->declBit(c+970,"last", false,-1);
    tracep->declBus(c+95,"p_in", false,-1, 31,0);
    tracep->declArray(c+956,"p_out", false,-1, 127,0);
    tracep->declBit(c+896,"s_clk", false,-1);
    tracep->declBit(c+1164,"s_in", false,-1);
    tracep->declBit(c+1163,"s_out", false,-1);
    tracep->declBus(c+974,"cnt", false,-1, 7,0);
    tracep->declArray(c+956,"data", false,-1, 127,0);
    tracep->declBus(c+975,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+976,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+977,"rx_clk", false,-1);
    tracep->declBit(c+978,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+1170,"auto_in_psel", false,-1);
    tracep->declBit(c+1171,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+102,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1172,"auto_in_pready", false,-1);
    tracep->declBit(c+1190,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1173,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1161,"uart_rx", false,-1);
    tracep->declBit(c+1162,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1170,"in_psel", false,-1);
    tracep->declBit(c+1171,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1172,"in_pready", false,-1);
    tracep->declBit(c+1190,"in_pslverr", false,-1);
    tracep->declBus(c+353,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+1173,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1161,"uart_rx", false,-1);
    tracep->declBit(c+1162,"uart_tx", false,-1);
    tracep->declBit(c+979,"rtsn", false,-1);
    tracep->declBit(c+1190,"ctsn", false,-1);
    tracep->declBit(c+980,"dtr_pad_o", false,-1);
    tracep->declBit(c+1190,"dsr_pad_i", false,-1);
    tracep->declBit(c+1190,"ri_pad_i", false,-1);
    tracep->declBit(c+1190,"dcd_pad_i", false,-1);
    tracep->declBit(c+981,"interrupt", false,-1);
    tracep->declBit(c+26,"reg_we", false,-1);
    tracep->declBit(c+27,"reg_re", false,-1);
    tracep->declBus(c+386,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+387,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+863,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+388,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+982,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBus(c+386,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+389,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+388,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+26,"wb_we_i", false,-1);
    tracep->declBit(c+27,"wb_re_i", false,-1);
    tracep->declBit(c+1162,"stx_pad_o", false,-1);
    tracep->declBit(c+1161,"srx_pad_i", false,-1);
    tracep->declBus(c+1372,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+982,"rts_pad_o", false,-1);
    tracep->declBit(c+980,"dtr_pad_o", false,-1);
    tracep->declBit(c+981,"int_o", false,-1);
    tracep->declBit(c+983,"enable", false,-1);
    tracep->declBit(c+984,"srx_pad", false,-1);
    tracep->declBus(c+985,"ier", false,-1, 3,0);
    tracep->declBus(c+986,"iir", false,-1, 3,0);
    tracep->declBus(c+987,"fcr", false,-1, 1,0);
    tracep->declBus(c+988,"mcr", false,-1, 4,0);
    tracep->declBus(c+989,"lcr", false,-1, 7,0);
    tracep->declBus(c+990,"msr", false,-1, 7,0);
    tracep->declBus(c+991,"dl", false,-1, 15,0);
    tracep->declBus(c+992,"scratch", false,-1, 7,0);
    tracep->declBit(c+993,"start_dlc", false,-1);
    tracep->declBit(c+994,"lsr_mask_d", false,-1);
    tracep->declBit(c+995,"msi_reset", false,-1);
    tracep->declBus(c+996,"dlc", false,-1, 15,0);
    tracep->declBus(c+997,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+998,"rx_reset", false,-1);
    tracep->declBit(c+999,"tx_reset", false,-1);
    tracep->declBit(c+1000,"dlab", false,-1);
    tracep->declBit(c+1210,"cts_pad_i", false,-1);
    tracep->declBit(c+1190,"dsr_pad_i", false,-1);
    tracep->declBit(c+1190,"ri_pad_i", false,-1);
    tracep->declBit(c+1190,"dcd_pad_i", false,-1);
    tracep->declBit(c+1001,"loopback", false,-1);
    tracep->declBit(c+1190,"cts", false,-1);
    tracep->declBit(c+1210,"dsr", false,-1);
    tracep->declBit(c+1210,"ri", false,-1);
    tracep->declBit(c+1210,"dcd", false,-1);
    tracep->declBit(c+1002,"cts_c", false,-1);
    tracep->declBit(c+1003,"dsr_c", false,-1);
    tracep->declBit(c+1004,"ri_c", false,-1);
    tracep->declBit(c+1005,"dcd_c", false,-1);
    tracep->declBus(c+1006,"lsr", false,-1, 7,0);
    tracep->declBit(c+1007,"lsr0", false,-1);
    tracep->declBit(c+1008,"lsr1", false,-1);
    tracep->declBit(c+1009,"lsr2", false,-1);
    tracep->declBit(c+1010,"lsr3", false,-1);
    tracep->declBit(c+1011,"lsr4", false,-1);
    tracep->declBit(c+1012,"lsr5", false,-1);
    tracep->declBit(c+1013,"lsr6", false,-1);
    tracep->declBit(c+1014,"lsr7", false,-1);
    tracep->declBit(c+1015,"lsr0r", false,-1);
    tracep->declBit(c+1016,"lsr1r", false,-1);
    tracep->declBit(c+1017,"lsr2r", false,-1);
    tracep->declBit(c+1018,"lsr3r", false,-1);
    tracep->declBit(c+1019,"lsr4r", false,-1);
    tracep->declBit(c+1020,"lsr5r", false,-1);
    tracep->declBit(c+1021,"lsr6r", false,-1);
    tracep->declBit(c+1022,"lsr7r", false,-1);
    tracep->declBit(c+28,"lsr_mask", false,-1);
    tracep->declBit(c+1023,"rls_int", false,-1);
    tracep->declBit(c+1024,"rda_int", false,-1);
    tracep->declBit(c+1025,"ti_int", false,-1);
    tracep->declBit(c+1026,"thre_int", false,-1);
    tracep->declBit(c+1027,"ms_int", false,-1);
    tracep->declBit(c+1028,"tf_push", false,-1);
    tracep->declBit(c+1029,"rf_pop", false,-1);
    tracep->declBus(c+1183,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1030,"rf_error_bit", false,-1);
    tracep->declBit(c+1008,"rf_overrun", false,-1);
    tracep->declBit(c+1031,"rf_push_pulse", false,-1);
    tracep->declBus(c+1032,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1033,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1034,"tstate", false,-1, 2,0);
    tracep->declBus(c+1035,"rstate", false,-1, 3,0);
    tracep->declBus(c+1036,"counter_t", false,-1, 9,0);
    tracep->declBit(c+1037,"thre_set_en", false,-1);
    tracep->declBus(c+1038,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+1039,"block_value", false,-1, 7,0);
    tracep->declBit(c+1040,"serial_out", false,-1);
    tracep->declBit(c+1041,"serial_in", false,-1);
    tracep->declBit(c+29,"lsr_mask_condition", false,-1);
    tracep->declBit(c+30,"iir_read", false,-1);
    tracep->declBit(c+31,"msr_read", false,-1);
    tracep->declBit(c+32,"fifo_read", false,-1);
    tracep->declBit(c+33,"fifo_write", false,-1);
    tracep->declBus(c+1042,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+1043,"lsr0_d", false,-1);
    tracep->declBit(c+1044,"lsr1_d", false,-1);
    tracep->declBit(c+1045,"lsr2_d", false,-1);
    tracep->declBit(c+1046,"lsr3_d", false,-1);
    tracep->declBit(c+1047,"lsr4_d", false,-1);
    tracep->declBit(c+1048,"lsr5_d", false,-1);
    tracep->declBit(c+1049,"lsr6_d", false,-1);
    tracep->declBit(c+1050,"lsr7_d", false,-1);
    tracep->declBit(c+1051,"rls_int_d", false,-1);
    tracep->declBit(c+1052,"thre_int_d", false,-1);
    tracep->declBit(c+1053,"ms_int_d", false,-1);
    tracep->declBit(c+1054,"ti_int_d", false,-1);
    tracep->declBit(c+1055,"rda_int_d", false,-1);
    tracep->declBit(c+1056,"rls_int_rise", false,-1);
    tracep->declBit(c+1057,"thre_int_rise", false,-1);
    tracep->declBit(c+1058,"ms_int_rise", false,-1);
    tracep->declBit(c+1059,"ti_int_rise", false,-1);
    tracep->declBit(c+1060,"rda_int_rise", false,-1);
    tracep->declBit(c+1061,"rls_int_pnd", false,-1);
    tracep->declBit(c+1062,"rda_int_pnd", false,-1);
    tracep->declBit(c+1063,"thre_int_pnd", false,-1);
    tracep->declBit(c+1064,"ms_int_pnd", false,-1);
    tracep->declBit(c+1065,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBus(c+1346,"width", false,-1, 31,0);
    tracep->declBus(c+1351,"init_value", false,-1, 0,0);
    tracep->declBit(c+1142,"rst_i", false,-1);
    tracep->declBit(c+1141,"clk_i", false,-1);
    tracep->declBit(c+1190,"stage1_rst_i", false,-1);
    tracep->declBit(c+1210,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1161,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+984,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+1066,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBus(c+989,"lcr", false,-1, 7,0);
    tracep->declBit(c+1029,"rf_pop", false,-1);
    tracep->declBit(c+1041,"srx_pad_i", false,-1);
    tracep->declBit(c+983,"enable", false,-1);
    tracep->declBit(c+998,"rx_reset", false,-1);
    tracep->declBit(c+28,"lsr_mask", false,-1);
    tracep->declBus(c+1036,"counter_t", false,-1, 9,0);
    tracep->declBus(c+1032,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1183,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+1008,"rf_overrun", false,-1);
    tracep->declBit(c+1030,"rf_error_bit", false,-1);
    tracep->declBus(c+1035,"rstate", false,-1, 3,0);
    tracep->declBit(c+1031,"rf_push_pulse", false,-1);
    tracep->declBus(c+1067,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+1068,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+1069,"rshift", false,-1, 7,0);
    tracep->declBit(c+1070,"rparity", false,-1);
    tracep->declBit(c+1071,"rparity_error", false,-1);
    tracep->declBit(c+1072,"rframing_error", false,-1);
    tracep->declBit(c+1073,"rbit_in", false,-1);
    tracep->declBit(c+1074,"rparity_xor", false,-1);
    tracep->declBus(c+1075,"counter_b", false,-1, 7,0);
    tracep->declBit(c+1076,"rf_push_q", false,-1);
    tracep->declBus(c+1077,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+1078,"rf_push", false,-1);
    tracep->declBit(c+1079,"break_error", false,-1);
    tracep->declBit(c+1080,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+1081,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+1082,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+1083,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1213,"sr_idle", false,-1, 3,0);
    tracep->declBus(c+1370,"sr_rec_start", false,-1, 3,0);
    tracep->declBus(c+1369,"sr_rec_bit", false,-1, 3,0);
    tracep->declBus(c+1365,"sr_rec_parity", false,-1, 3,0);
    tracep->declBus(c+1367,"sr_rec_stop", false,-1, 3,0);
    tracep->declBus(c+1366,"sr_check_parity", false,-1, 3,0);
    tracep->declBus(c+1368,"sr_rec_prepare", false,-1, 3,0);
    tracep->declBus(c+1364,"sr_end_bit", false,-1, 3,0);
    tracep->declBus(c+1372,"sr_ca_lc_parity", false,-1, 3,0);
    tracep->declBus(c+1373,"sr_wait1", false,-1, 3,0);
    tracep->declBus(c+1379,"sr_push", false,-1, 3,0);
    tracep->declBus(c+1084,"toc_value", false,-1, 9,0);
    tracep->declBus(c+1085,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1380,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1334,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1335,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1342,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBit(c+1031,"push", false,-1);
    tracep->declBit(c+1029,"pop", false,-1);
    tracep->declBus(c+1077,"data_in", false,-1, 10,0);
    tracep->declBit(c+998,"fifo_reset", false,-1);
    tracep->declBit(c+28,"reset_status", false,-1);
    tracep->declBus(c+1183,"data_out", false,-1, 10,0);
    tracep->declBit(c+1008,"overrun", false,-1);
    tracep->declBus(c+1032,"count", false,-1, 4,0);
    tracep->declBit(c+1030,"error_bit", false,-1);
    tracep->declBus(c+1184,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1086+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+1102,"top", false,-1, 3,0);
    tracep->declBus(c+1103,"bottom", false,-1, 3,0);
    tracep->declBus(c+1104,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+1105,"word0", false,-1, 2,0);
    tracep->declBus(c+1106,"word1", false,-1, 2,0);
    tracep->declBus(c+1107,"word2", false,-1, 2,0);
    tracep->declBus(c+1108,"word3", false,-1, 2,0);
    tracep->declBus(c+1109,"word4", false,-1, 2,0);
    tracep->declBus(c+1110,"word5", false,-1, 2,0);
    tracep->declBus(c+1111,"word6", false,-1, 2,0);
    tracep->declBus(c+1112,"word7", false,-1, 2,0);
    tracep->declBus(c+1113,"word8", false,-1, 2,0);
    tracep->declBus(c+1114,"word9", false,-1, 2,0);
    tracep->declBus(c+1115,"word10", false,-1, 2,0);
    tracep->declBus(c+1116,"word11", false,-1, 2,0);
    tracep->declBus(c+1117,"word12", false,-1, 2,0);
    tracep->declBus(c+1118,"word13", false,-1, 2,0);
    tracep->declBus(c+1119,"word14", false,-1, 2,0);
    tracep->declBus(c+1120,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1335,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1344,"data_width", false,-1, 31,0);
    tracep->declBus(c+1334,"depth", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1031,"we", false,-1);
    tracep->declBus(c+1102,"a", false,-1, 3,0);
    tracep->declBus(c+1103,"dpra", false,-1, 3,0);
    tracep->declBus(c+1121,"di", false,-1, 7,0);
    tracep->declBus(c+1184,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+864+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBus(c+989,"lcr", false,-1, 7,0);
    tracep->declBit(c+1028,"tf_push", false,-1);
    tracep->declBus(c+389,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+983,"enable", false,-1);
    tracep->declBit(c+999,"tx_reset", false,-1);
    tracep->declBit(c+28,"lsr_mask", false,-1);
    tracep->declBit(c+1040,"stx_pad_o", false,-1);
    tracep->declBus(c+1034,"tstate", false,-1, 2,0);
    tracep->declBus(c+1033,"tf_count", false,-1, 4,0);
    tracep->declBus(c+1122,"counter", false,-1, 4,0);
    tracep->declBus(c+1123,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+1124,"shift_out", false,-1, 6,0);
    tracep->declBit(c+1125,"stx_o_tmp", false,-1);
    tracep->declBit(c+1126,"parity_xor", false,-1);
    tracep->declBit(c+1127,"tf_pop", false,-1);
    tracep->declBit(c+1128,"bit_out", false,-1);
    tracep->declBus(c+389,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1185,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+1129,"tf_overrun", false,-1);
    tracep->declBus(c+1215,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1189,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1381,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1382,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1352,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1383,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1344,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1334,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1335,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1342,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1142,"wb_rst_i", false,-1);
    tracep->declBit(c+1028,"push", false,-1);
    tracep->declBit(c+1127,"pop", false,-1);
    tracep->declBus(c+389,"data_in", false,-1, 7,0);
    tracep->declBit(c+999,"fifo_reset", false,-1);
    tracep->declBit(c+28,"reset_status", false,-1);
    tracep->declBus(c+1185,"data_out", false,-1, 7,0);
    tracep->declBit(c+1129,"overrun", false,-1);
    tracep->declBus(c+1033,"count", false,-1, 4,0);
    tracep->declBus(c+1130,"top", false,-1, 3,0);
    tracep->declBus(c+1131,"bottom", false,-1, 3,0);
    tracep->declBus(c+1132,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1335,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1344,"data_width", false,-1, 31,0);
    tracep->declBus(c+1334,"depth", false,-1, 31,0);
    tracep->declBit(c+1141,"clk", false,-1);
    tracep->declBit(c+1028,"we", false,-1);
    tracep->declBus(c+1130,"a", false,-1, 3,0);
    tracep->declBus(c+1131,"dpra", false,-1, 3,0);
    tracep->declBus(c+389,"di", false,-1, 7,0);
    tracep->declBus(c+1185,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+880+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBit(c+99,"auto_in_psel", false,-1);
    tracep->declBit(c+64,"auto_in_penable", false,-1);
    tracep->declBit(c+94,"auto_in_pwrite", false,-1);
    tracep->declBus(c+100,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1189,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+95,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1191,"auto_in_pready", false,-1);
    tracep->declBit(c+1192,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1193,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1155,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1156,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1157,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1158,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1159,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1160,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1141,"clock", false,-1);
    tracep->declBit(c+1142,"reset", false,-1);
    tracep->declBus(c+378,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+99,"in_psel", false,-1);
    tracep->declBit(c+64,"in_penable", false,-1);
    tracep->declBus(c+1189,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+94,"in_pwrite", false,-1);
    tracep->declBus(c+95,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+96,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1191,"in_pready", false,-1);
    tracep->declBus(c+1193,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1192,"in_pslverr", false,-1);
    tracep->declBus(c+1155,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1156,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1157,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1158,"vga_hsync", false,-1);
    tracep->declBit(c+1159,"vga_vsync", false,-1);
    tracep->declBit(c+1160,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+896,"sck", false,-1);
    tracep->declBit(c+1133,"ss", false,-1);
    tracep->declBit(c+1163,"mosi", false,-1);
    tracep->declBit(c+1210,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+896,"sck", false,-1);
    tracep->declBit(c+1134,"ss", false,-1);
    tracep->declBit(c+1163,"mosi", false,-1);
    tracep->declBit(c+1164,"miso", false,-1);
    tracep->declBit(c+1134,"reset", false,-1);
    tracep->declBus(c+1135,"state", false,-1, 2,0);
    tracep->declBus(c+1136,"counter", false,-1, 7,0);
    tracep->declBus(c+1137,"cmd", false,-1, 7,0);
    tracep->declBus(c+1138,"addr", false,-1, 23,0);
    tracep->declBus(c+1139,"data", false,-1, 31,0);
    tracep->declBit(c+1140,"ren", false,-1);
    tracep->declBus(c+1186,"rdata", false,-1, 31,0);
    tracep->declBus(c+1187,"raddr", false,-1, 31,0);
    tracep->declBus(c+1188,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+896,"clock", false,-1);
    tracep->declBit(c+1140,"valid", false,-1);
    tracep->declBus(c+1137,"cmd", false,-1, 7,0);
    tracep->declBus(c+1187,"addr", false,-1, 31,0);
    tracep->declBus(c+1186,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1165,"sck", false,-1);
    tracep->declBit(c+1166,"ce_n", false,-1);
    tracep->declBus(c+390,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1167,"clk", false,-1);
    tracep->declBit(c+898,"cke", false,-1);
    tracep->declBit(c+899,"cs", false,-1);
    tracep->declBit(c+900,"ras", false,-1);
    tracep->declBit(c+901,"cas", false,-1);
    tracep->declBit(c+902,"we", false,-1);
    tracep->declBus(c+903,"a", false,-1, 12,0);
    tracep->declBus(c+904,"ba", false,-1, 1,0);
    tracep->declBus(c+905,"dqm", false,-1, 1,0);
    tracep->declBus(c+906,"dq", false,-1, 15,0);
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
    VlWide<10>/*319:0*/ __Vtemp_h1aefabc6__0;
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
    bufp->fullBit(oldp+26,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+27,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullBit(oldp+28,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask));
    bufp->fullBit(oldp+29,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_condition));
    bufp->fullBit(oldp+30,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir_read));
    bufp->fullBit(oldp+31,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr_read));
    bufp->fullBit(oldp+32,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_read));
    bufp->fullBit(oldp+33,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fifo_write));
    bufp->fullBit(oldp+34,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+35,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+36,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+37,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+38,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+39,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+40,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+41,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+42,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+43,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+44,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+45,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+46,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+47,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+48,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+49,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                            & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+50,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullCData(oldp+51,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+52,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+53,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+54,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullCData(oldp+55,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+56,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+57,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+58,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+59,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+60,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+62,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+63,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+64,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+65,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+66,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+67,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+68,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                               ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                  << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullBit(oldp+69,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 2U))));
    bufp->fullBit(oldp+70,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullBit(oldp+71,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
                            & (0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0x1bU)) 
                                      | ((0xcU & (8U 
                                                  ^ 
                                                  (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                         | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0x17U)) 
                                            | (1U & 
                                               (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                >> 0xcU)))))))));
    bufp->fullBit(oldp+72,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                            & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                               >> 1U))));
    bufp->fullBit(oldp+73,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullBit(oldp+74,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+75,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+76,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+77,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+78,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+79,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+80,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+81,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+82,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+83,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+84,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+85,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+86,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+87,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+88,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+89,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                            & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullIData(oldp+90,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                               ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                                   ? ((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                       ? ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                           ? 0U : (
                                                   (1U 
                                                    & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out
                                                    : 
                                                   (0xffffU 
                                                    & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out)))
                                       : ((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                           ? ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                                  >> 0xfU)))) 
                                                   << 0x10U) 
                                                  | (0xffffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                               : (0xffU 
                                                  & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                           : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
                                               ? ((
                                                   (- (IData)(
                                                              (1U 
                                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out 
                                                                  >> 7U)))) 
                                                   << 8U) 
                                                  | (0xffU 
                                                     & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out))
                                               : 0U)))
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out)
                               : ((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
                                   ? ((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
                                   : vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data))),32);
    bufp->fullBit(oldp+91,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type))) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu))));
    bufp->fullIData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel));
    bufp->fullBit(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullBit(oldp+98,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+99,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+100,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullBit(oldp+101,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullIData(oldp+102,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+103,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullBit(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_write));
    bufp->fullBit(oldp+114,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_awvalid));
    bufp->fullIData(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr),32);
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_wvalid));
    bufp->fullIData(oldp+117,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wdata),32);
    bufp->fullBit(oldp+118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__accept_read));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_arvalid));
    bufp->fullIData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr),32);
    bufp->fullCData(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                               << 1U)),2);
    bufp->fullIData(oldp+122,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullIData(oldp+123,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullIData(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullIData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_in_rdata),32);
    bufp->fullBit(oldp+126,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullIData(oldp+127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullIData(oldp+128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullIData(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullIData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullBit(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+134,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullIData(oldp+135,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+136,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullSData(oldp+138,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullSData(oldp+139,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullIData(oldp+141,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+146,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullCData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullCData(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullIData(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullBit(oldp+151,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+153,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullIData(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out),32);
    bufp->fullBit(oldp+157,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_func),4);
    bufp->fullCData(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_type),3);
    bufp->fullCData(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+165,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
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
    bufp->fullIData(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+169,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullCData(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel),2);
    bufp->fullIData(oldp+171,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                    : 0U))),32);
    bufp->fullBit(oldp+172,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jump_branch));
    bufp->fullIData(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_out),32);
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu));
    bufp->fullIData(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullIData(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullIData(oldp+180,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+181,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+182,((VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+183,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+184,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+185,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+186,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+187,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+188,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+189,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+190,(__Vtemp_hce4daa8c__0),576);
    bufp->fullQData(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__CSR__finish));
    bufp->fullSData(oldp+259,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 0x14U)),12);
    bufp->fullCData(oldp+260,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+261,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+262,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 7U))),5);
    bufp->fullCData(oldp+263,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)),7);
    bufp->fullCData(oldp+264,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+265,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+266,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 7U)),25);
    bufp->fullBit(oldp+267,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+268,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+304,(((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
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
    bufp->fullBit(oldp+305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+308,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr) 
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
    bufp->fullBit(oldp+309,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullIData(oldp+310,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)),32);
    bufp->fullIData(oldp+311,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0x800U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                << 4U)) 
                                            | ((0x7e0U 
                                                & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                   >> 0x14U)) 
                                               | (0x1eU 
                                                  & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                     >> 7U)))))),32);
    bufp->fullIData(oldp+312,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5),32);
    bufp->fullIData(oldp+314,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0xcU) | ((0xfe0U 
                                             & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                  >> 7U))))),32);
    __Vtemp_h1aefabc6__0[0U] = (IData)((0x1300000000ULL 
                                        | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5))));
    __Vtemp_h1aefabc6__0[1U] = ((0xffffff80U & (((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                             >> 0x1fU))) 
                                                 << 0x13U) 
                                                | ((0x7f000U 
                                                    & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                       >> 0xdU)) 
                                                   | (0xf80U 
                                                      & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)))) 
                                | (IData)(((0x1300000000ULL 
                                            | (QData)((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5))) 
                                           >> 0x20U)));
    __Vtemp_h1aefabc6__0[2U] = (0x1180U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                            << 0xeU) 
                                           | (0x7fU 
                                              & ((- (IData)(
                                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                             >> 0x1fU))) 
                                                 >> 0xdU))));
    __Vtemp_h1aefabc6__0[3U] = (0xc000U | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                            << 0x15U) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                              >> 0x12U)));
    __Vtemp_h1aefabc6__0[4U] = (0xce00000U | ((0xe0000000U 
                                               & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                  << 8U)) 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5 
                                                 >> 0xbU)));
    __Vtemp_h1aefabc6__0[5U] = (0xf0000000U | (0xfffffffU 
                                               & ((0xfff0000U 
                                                   & ((- (IData)(
                                                                 (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                                  >> 0x1fU))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                         >> 4U)) 
                                                     | ((0x80U 
                                                         & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                            >> 0xdU)) 
                                                        | (0x7fU 
                                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                              >> 0x18U)))))));
    __Vtemp_h1aefabc6__0[6U] = (6U | (0xfffffff8U & 
                                      (((- (IData)(
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                    >> 0x1fU))) 
                                        << 0xfU) | 
                                       ((0x4000U & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                          << 7U)) | 
                                        ((0x3f00U & 
                                          (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                           >> 0x11U)) 
                                         | (0xf0U & 
                                            (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                             >> 4U)))))));
    __Vtemp_h1aefabc6__0[7U] = (0x318U | ((0xffc00000U 
                                           & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                              << 0xaU)) 
                                          | (7U & (
                                                   (- (IData)(
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                               >> 0x1fU))) 
                                                   >> 0x11U))));
    __Vtemp_h1aefabc6__0[8U] = (0xdc00U | ((0xe0000000U 
                                            & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                               << 0x11U)) 
                                           | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                              >> 0x16U)));
    __Vtemp_h1aefabc6__0[9U] = (0x2e0000U | (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                             >> 0xfU));
    bufp->fullWData(oldp+315,(__Vtemp_h1aefabc6__0),312);
    bufp->fullQData(oldp+325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+337,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+345,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+351,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU__mem_wr_en));
    bufp->fullIData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullIData(oldp+353,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullIData(oldp+354,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullCData(oldp+359,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+362,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                        >> 0x10U))),8);
    bufp->fullCData(oldp+363,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                               >> 0x18U)),8);
    bufp->fullIData(oldp+364,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                   << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+365,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+366,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+367,((0xffU & ((IData)(0xdU) 
                                        + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                           << 1U)))),8);
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+371,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullCData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+373,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullSData(oldp+374,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                         >> 1U))),13);
    bufp->fullSData(oldp+375,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 0xcU))),13);
    bufp->fullCData(oldp+376,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                     >> 0xaU))),2);
    bufp->fullCData(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+378,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+379,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullIData(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullBit(oldp+381,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+382,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+383,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                 & (0xcU == (0x1cU 
                                             & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                << 3U) | ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                                            & (8U == 
                                               (0x1cU 
                                                & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w))) 
                                           << 2U) | 
                                          ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+384,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                             & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+386,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullCData(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+390,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                  | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullCData(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+401,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+402,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+403,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+404,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+405,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+406,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+407,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+408,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+409,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+410,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+411,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+412,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+413,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+414,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+415,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+416,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+417,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+418,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid))));
    bufp->fullBit(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+423,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+425,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullBit(oldp+426,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+427,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+428,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+429,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+430,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+431,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+432,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+433,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+434,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+435,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+436,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+437,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+438,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+439,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+440,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+441,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullBit(oldp+442,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+443,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+444,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+445,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+446,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+447,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+448,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+449,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+450,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+451,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+452,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+453,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+454,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+455,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+456,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+457,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+458,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+459,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+460,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+461,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+462,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+463,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+464,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+465,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+466,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+467,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+468,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullBit(oldp+470,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullBit(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IFU__finish));
    bufp->fullBit(oldp+472,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))));
    bufp->fullIData(oldp+473,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                [3U] << 0x18U) | ((
                                                   vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                   [2U] 
                                                   << 0x10U) 
                                                  | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [1U] 
                                                      << 8U) 
                                                     | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [0U])))),32);
    bufp->fullCData(oldp+474,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid),4);
    bufp->fullCData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_size),3);
    bufp->fullCData(oldp+476,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_wstrb),4);
    bufp->fullCData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__bid_reg),4);
    bufp->fullCData(oldp+478,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid),4);
    bufp->fullCData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_size),3);
    bufp->fullCData(oldp+480,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__rid_reg),4);
    bufp->fullCData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state),2);
    bufp->fullBit(oldp+482,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write_r));
    bufp->fullIData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__araddr_reg_r),32);
    bufp->fullIData(oldp+484,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__awaddr_reg_r),32);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wdata_reg_r),32);
    bufp->fullCData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__wstrb_reg_r),4);
    bufp->fullCData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r),2);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+489,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full)))));
    bufp->fullBit(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullBit(oldp+491,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullBit(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+494,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullBit(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+498,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+500,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+502,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+503,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+504,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+507,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullBit(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullBit(oldp+512,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+513,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+514,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullCData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+544,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                               >> 0x24U))
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+547,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+548,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+549,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+550,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+551,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+552,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+553,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
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
    bufp->fullCData(oldp+554,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullIData(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+565,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+588,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+592,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+593,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+599,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+600,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+601,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+603,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+604,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+605,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+606,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+607,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+608,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+609,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+610,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+611,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+612,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+613,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+614,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullBit(oldp+615,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+617,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+619,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+621,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+623,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+625,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+627,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+629,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+633,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+637,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+641,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+645,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+649,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+653,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+657,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+661,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+665,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+669,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+673,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+677,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+681,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+685,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+689,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+693,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+697,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+701,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+705,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+709,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+710,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+711,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+712,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+713,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+714,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+715,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+716,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+717,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+718,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+719,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+720,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+721,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+722,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+723,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+724,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+725,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+726,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+727,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+728,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+729,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+730,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+731,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+732,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+733,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+734,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+735,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+736,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+737,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+738,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+739,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+740,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+741,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+742,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+743,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+744,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+745,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+746,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+747,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+748,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+749,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+750,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+751,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+752,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+753,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+754,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullBit(oldp+755,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__itrace_reg));
    bufp->fullIData(oldp+756,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_finish));
    bufp->fullBit(oldp+758,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu));
    bufp->fullCData(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_reg),8);
    bufp->fullBit(oldp+760,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+761,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+762,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+763,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awready));
    bufp->fullBit(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wready));
    bufp->fullBit(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bvalid));
    bufp->fullBit(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+767,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+769,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullBit(oldp+774,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arready));
    bufp->fullBit(oldp+775,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rvalid));
    bufp->fullIData(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rdata),32);
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awready));
    bufp->fullBit(oldp+778,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wready));
    bufp->fullBit(oldp+779,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bvalid));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullBit(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+784,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullQData(oldp+788,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+790,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__raddr),32);
    bufp->fullIData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullIData(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+811,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+812,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+818,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+819,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+820,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+821,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+822,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+823,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+824,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+825,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+826,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[31]),32);
    bufp->fullBit(oldp+827,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullIData(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter),32);
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter_rready),32);
    bufp->fullBit(oldp+831,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter),32);
    bufp->fullBit(oldp+833,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+834,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter_rready),32);
    bufp->fullIData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_raddr),32);
    bufp->fullIData(oldp+836,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_data_to_read),32);
    bufp->fullBit(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__aw_hand));
    bufp->fullIData(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_waddr),32);
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__w_hand));
    bufp->fullIData(oldp+840,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_wdata),32);
    bufp->fullBit(oldp+841,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__aw_hand));
    bufp->fullIData(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__waddr),32);
    bufp->fullBit(oldp+843,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__w_hand));
    bufp->fullIData(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__wdata),32);
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__arb_ready));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__state),4);
    bufp->fullBit(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__wait_read));
    bufp->fullBit(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+861,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+862,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+863,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+864,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+865,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+866,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+867,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+870,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+871,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+872,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+891,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+896,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+897,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+898,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+899,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+900,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+901,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+902,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+906,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+908,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+913,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+914,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+917,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+918,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+919,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+920,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+921,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+923,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+927,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+929,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+940,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+941,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+942,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+943,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+944,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+946,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+960,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+961,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+962,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+963,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+964,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+965,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+966,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+970,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+972,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+973,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+975,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+979,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+980,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+982,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+993,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+994,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+996,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+998,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+999,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+1000,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                    >> 7U))));
    bufp->fullBit(oldp+1001,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                    >> 4U))));
    bufp->fullBit(oldp+1002,((IData)((0x10U != (0x12U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1003,((IData)((0x11U == (0x11U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1004,((IData)((0x14U == (0x14U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+1005,((IData)((0x18U == (0x18U 
                                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+1006,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
                                 << 7U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r) 
                                            << 6U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r) 
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
    bufp->fullBit(oldp+1007,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+1008,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+1009,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 1U))));
    bufp->fullBit(oldp+1010,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+1011,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                    >> 2U))));
    bufp->fullBit(oldp+1012,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+1022,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+1023,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+1029,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+1030,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                     [0U] | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                             [1U] | 
                                             (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                                              [2U] 
                                              | (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+1031,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+1032,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+1033,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+1034,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+1037,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+1039,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+1040,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+1041,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+1042,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+1043,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+1044,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+1045,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+1046,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+1047,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+1049,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+1052,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+1056,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+1057,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+1058,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+1059,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+1060,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+1079,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+1080,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1081,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+1082,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+1083,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                        - (IData)(1U)))),4);
    bufp->fullSData(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+1085,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                         >> 2U))),8);
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+1104,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+1105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0U]),3);
    bufp->fullCData(oldp+1106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [1U]),3);
    bufp->fullCData(oldp+1107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [2U]),3);
    bufp->fullCData(oldp+1108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [3U]),3);
    bufp->fullCData(oldp+1109,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [4U]),3);
    bufp->fullCData(oldp+1110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [5U]),3);
    bufp->fullCData(oldp+1111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [6U]),3);
    bufp->fullCData(oldp+1112,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [7U]),3);
    bufp->fullCData(oldp+1113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [8U]),3);
    bufp->fullCData(oldp+1114,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [9U]),3);
    bufp->fullCData(oldp+1115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xaU]),3);
    bufp->fullCData(oldp+1116,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xbU]),3);
    bufp->fullCData(oldp+1117,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xcU]),3);
    bufp->fullCData(oldp+1118,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xdU]),3);
    bufp->fullCData(oldp+1119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xeU]),3);
    bufp->fullCData(oldp+1120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                               [0xfU]),3);
    bufp->fullCData(oldp+1121,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                         >> 3U))),8);
    bufp->fullCData(oldp+1122,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+1123,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+1124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+1125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+1126,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+1127,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+1128,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+1129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+1130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+1131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+1132,((0xfU & ((IData)(1U) 
                                        + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+1133,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                    >> 7U))));
    bufp->fullBit(oldp+1134,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+1135,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1139,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1140,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullBit(oldp+1141,(vlSelf->clock));
    bufp->fullBit(oldp+1142,(vlSelf->reset));
    bufp->fullSData(oldp+1143,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1144,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1145,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1146,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1147,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1148,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1149,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1150,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1151,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1152,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1153,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1154,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1155,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1156,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1157,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1158,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1159,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1160,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1161,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1162,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1163,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1164,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1165,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1166,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1167,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1168,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata),32);
    bufp->fullBit(oldp+1169,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullBit(oldp+1170,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+1171,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+1172,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullIData(oldp+1173,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1174,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_prdata
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullCData(oldp+1175,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1176,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1177,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+1178,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                              & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                     >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+1180,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1181,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1182,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullSData(oldp+1183,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1186,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1187,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1188,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1189,(1U),3);
    bufp->fullBit(oldp+1190,(0U));
    bufp->fullBit(oldp+1191,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1192,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1194,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1195,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullCData(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullCData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullCData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullCData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1210,(1U));
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1212,(0U),32);
    bufp->fullCData(oldp+1213,(0U),4);
    bufp->fullCData(oldp+1214,(0U),8);
    bufp->fullCData(oldp+1215,(0U),3);
    bufp->fullCData(oldp+1216,(0U),2);
    bufp->fullBit(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1225,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid),4);
    bufp->fullCData(oldp+1228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen),8);
    bufp->fullCData(oldp+1229,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullIData(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awaddr),32);
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awvalid));
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awid),4);
    bufp->fullCData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awlen),8);
    bufp->fullCData(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awsize),3);
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awburst),2);
    bufp->fullIData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wdata),32);
    bufp->fullBit(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wvalid));
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wstrb),4);
    bufp->fullBit(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wlast));
    bufp->fullBit(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bready));
    bufp->fullCData(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bresp),2);
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bid),4);
    bufp->fullCData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid),4);
    bufp->fullCData(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen),8);
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst),2);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullCData(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid),4);
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen),8);
    bufp->fullCData(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst),2);
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullIData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_araddr),32);
    bufp->fullBit(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arvalid));
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arid),4);
    bufp->fullCData(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arlen),8);
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arsize),3);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arburst),2);
    bufp->fullBit(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rready));
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rresp),2);
    bufp->fullBit(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rlast));
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rid),4);
    bufp->fullIData(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awaddr),32);
    bufp->fullBit(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awvalid));
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awid),4);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awlen),8);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awsize),3);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awburst),2);
    bufp->fullIData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wdata),32);
    bufp->fullBit(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wvalid));
    bufp->fullCData(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wstrb),4);
    bufp->fullBit(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wlast));
    bufp->fullBit(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bready));
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bresp),2);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bid),4);
    bufp->fullIData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullIData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullIData(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullIData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullBit(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullCData(oldp+1309,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bresp),2);
    bufp->fullCData(oldp+1310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bid),4);
    bufp->fullCData(oldp+1311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arid),4);
    bufp->fullCData(oldp+1312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arlen),8);
    bufp->fullCData(oldp+1313,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arsize),3);
    bufp->fullCData(oldp+1314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arburst),2);
    bufp->fullCData(oldp+1315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rresp),2);
    bufp->fullBit(oldp+1316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rlast));
    bufp->fullCData(oldp+1317,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rid),4);
    bufp->fullIData(oldp+1318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awaddr),32);
    bufp->fullBit(oldp+1319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awvalid));
    bufp->fullBit(oldp+1320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awready));
    bufp->fullCData(oldp+1321,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awid),4);
    bufp->fullCData(oldp+1322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awlen),8);
    bufp->fullCData(oldp+1323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awsize),3);
    bufp->fullCData(oldp+1324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_awburst),2);
    bufp->fullIData(oldp+1325,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wdata),32);
    bufp->fullBit(oldp+1326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wvalid));
    bufp->fullBit(oldp+1327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wready));
    bufp->fullCData(oldp+1328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wstrb),4);
    bufp->fullBit(oldp+1329,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_wlast));
    bufp->fullBit(oldp+1330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bready));
    bufp->fullBit(oldp+1331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bvalid));
    bufp->fullCData(oldp+1332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bresp),2);
    bufp->fullCData(oldp+1333,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_bid),4);
    bufp->fullIData(oldp+1334,(0x10U),32);
    bufp->fullIData(oldp+1335,(4U),32);
    bufp->fullIData(oldp+1336,(0x20U),32);
    bufp->fullIData(oldp+1337,(0U),32);
    bufp->fullIData(oldp+1338,(0x24U),32);
    bufp->fullIData(oldp+1339,(0x10U),32);
    bufp->fullIData(oldp+1340,(0xa0000048U),32);
    bufp->fullIData(oldp+1341,(0xa000005cU),32);
    bufp->fullIData(oldp+1342,(5U),32);
    bufp->fullBit(oldp+1343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__rvalid));
    bufp->fullIData(oldp+1344,(8U),32);
    bufp->fullIData(oldp+1345,(7U),32);
    bufp->fullIData(oldp+1346,(1U),32);
    bufp->fullIData(oldp+1347,(0x27U),32);
    bufp->fullIData(oldp+1348,(8U),32);
    bufp->fullIData(oldp+1349,(0xa00003f8U),32);
    bufp->fullBit(oldp+1350,(0U));
    bufp->fullBit(oldp+1351,(1U));
    bufp->fullCData(oldp+1352,(4U),3);
    bufp->fullCData(oldp+1353,(0x1bU),8);
    bufp->fullCData(oldp+1354,(0xebU),8);
    bufp->fullCData(oldp+1355,(0x38U),8);
    bufp->fullIData(oldp+1356,(0x64U),32);
    bufp->fullIData(oldp+1357,(0x18U),32);
    bufp->fullIData(oldp+1358,(9U),32);
    bufp->fullIData(oldp+1359,(2U),32);
    bufp->fullIData(oldp+1360,(0xdU),32);
    bufp->fullIData(oldp+1361,(0x2000U),32);
    bufp->fullIData(oldp+1362,(0x2710U),32);
    bufp->fullIData(oldp+1363,(0x30cU),32);
    bufp->fullCData(oldp+1364,(7U),4);
    bufp->fullCData(oldp+1365,(3U),4);
    bufp->fullCData(oldp+1366,(5U),4);
    bufp->fullCData(oldp+1367,(4U),4);
    bufp->fullCData(oldp+1368,(6U),4);
    bufp->fullCData(oldp+1369,(2U),4);
    bufp->fullCData(oldp+1370,(1U),4);
    bufp->fullSData(oldp+1371,(0x21U),13);
    bufp->fullCData(oldp+1372,(8U),4);
    bufp->fullCData(oldp+1373,(9U),4);
    bufp->fullIData(oldp+1374,(0xaU),32);
    bufp->fullIData(oldp+1375,(6U),32);
    bufp->fullIData(oldp+1376,(0x11U),32);
    bufp->fullIData(oldp+1377,(0x30000000U),32);
    bufp->fullIData(oldp+1378,(0x3fffffffU),32);
    bufp->fullCData(oldp+1379,(0xaU),4);
    bufp->fullIData(oldp+1380,(0xbU),32);
    bufp->fullCData(oldp+1381,(2U),3);
    bufp->fullCData(oldp+1382,(3U),3);
    bufp->fullCData(oldp+1383,(5U),3);
}
