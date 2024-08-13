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
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1152,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1163,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1164,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1168,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1169,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1170,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1171,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("ysyxSoCFull ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1152,"externalPins_gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"externalPins_gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"externalPins_gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"externalPins_gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"externalPins_gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"externalPins_gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"externalPins_gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"externalPins_gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"externalPins_gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"externalPins_gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"externalPins_ps2_clk", false,-1);
    tracep->declBit(c+1163,"externalPins_ps2_data", false,-1);
    tracep->declBus(c+1164,"externalPins_vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"externalPins_vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"externalPins_vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"externalPins_vga_hsync", false,-1);
    tracep->declBit(c+1168,"externalPins_vga_vsync", false,-1);
    tracep->declBit(c+1169,"externalPins_vga_valid", false,-1);
    tracep->declBit(c+1170,"externalPins_uart_rx", false,-1);
    tracep->declBit(c+1171,"externalPins_uart_tx", false,-1);
    tracep->pushNamePrefix("asic ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+757,"spi_sck", false,-1);
    tracep->declBus(c+758,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_mosi", false,-1);
    tracep->declBit(c+1173,"spi_miso", false,-1);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->declBit(c+1174,"psram_sck", false,-1);
    tracep->declBit(c+1175,"psram_ce_n", false,-1);
    tracep->declBus(c+1052,"psram_dio", false,-1, 3,0);
    tracep->declBit(c+1176,"sdram_clk", false,-1);
    tracep->declBit(c+759,"sdram_cke", false,-1);
    tracep->declBit(c+760,"sdram_cs", false,-1);
    tracep->declBit(c+761,"sdram_ras", false,-1);
    tracep->declBit(c+762,"sdram_cas", false,-1);
    tracep->declBit(c+763,"sdram_we", false,-1);
    tracep->declBus(c+764,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+765,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+766,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+767,"sdram_dq", false,-1, 15,0);
    tracep->declBus(c+1152,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_7", false,-1, 7,0);
    tracep->declBit(c+1162,"ps2_clk", false,-1);
    tracep->declBit(c+1163,"ps2_data", false,-1);
    tracep->declBus(c+1164,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_hsync", false,-1);
    tracep->declBit(c+1168,"vga_vsync", false,-1);
    tracep->declBit(c+1169,"vga_valid", false,-1);
    tracep->pushNamePrefix("apbdelay_delayer ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1002,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+32,"in_psel", false,-1);
    tracep->declBit(c+33,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"in_pready", false,-1);
    tracep->declBus(c+1177,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1006,"in_pslverr", false,-1);
    tracep->declBus(c+1002,"out_paddr", false,-1, 31,0);
    tracep->declBit(c+32,"out_psel", false,-1);
    tracep->declBit(c+33,"out_penable", false,-1);
    tracep->declBus(c+1194,"out_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"out_pwrite", false,-1);
    tracep->declBus(c+1004,"out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"out_pready", false,-1);
    tracep->declBus(c+1177,"out_prdata", false,-1, 31,0);
    tracep->declBit(c+1006,"out_pslverr", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("apbxbar ");
    tracep->declBit(c+32,"auto_in_psel", false,-1);
    tracep->declBit(c+33,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"auto_in_pready", false,-1);
    tracep->declBit(c+1006,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1177,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+710,"auto_out_6_psel", false,-1);
    tracep->declBit(c+711,"auto_out_6_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_6_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_out_6_paddr", false,-1, 31,0);
    tracep->declBus(c+1194,"auto_out_6_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_6_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_6_pstrb", false,-1, 3,0);
    tracep->declBit(c+768,"auto_out_6_pready", false,-1);
    tracep->declBit(c+1195,"auto_out_6_pslverr", false,-1);
    tracep->declBus(c+769,"auto_out_6_prdata", false,-1, 31,0);
    tracep->declBit(c+712,"auto_out_5_psel", false,-1);
    tracep->declBit(c+713,"auto_out_5_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_5_pwrite", false,-1);
    tracep->declBus(c+1007,"auto_out_5_paddr", false,-1, 29,0);
    tracep->declBus(c+1194,"auto_out_5_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_5_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_5_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_out_5_pready", false,-1);
    tracep->declBit(c+1197,"auto_out_5_pslverr", false,-1);
    tracep->declBus(c+1198,"auto_out_5_prdata", false,-1, 31,0);
    tracep->declBit(c+714,"auto_out_4_psel", false,-1);
    tracep->declBit(c+715,"auto_out_4_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_4_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_out_4_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_out_4_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_4_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_4_pstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_out_4_pready", false,-1);
    tracep->declBit(c+1200,"auto_out_4_pslverr", false,-1);
    tracep->declBus(c+1201,"auto_out_4_prdata", false,-1, 31,0);
    tracep->declBit(c+716,"auto_out_3_psel", false,-1);
    tracep->declBit(c+717,"auto_out_3_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_3_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_out_3_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_out_3_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_3_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_3_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_out_3_pready", false,-1);
    tracep->declBit(c+1203,"auto_out_3_pslverr", false,-1);
    tracep->declBus(c+1204,"auto_out_3_prdata", false,-1, 31,0);
    tracep->declBit(c+1009,"auto_out_2_psel", false,-1);
    tracep->declBit(c+718,"auto_out_2_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_2_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_out_2_paddr", false,-1, 31,0);
    tracep->declBus(c+1194,"auto_out_2_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_2_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_2_pstrb", false,-1, 3,0);
    tracep->declBit(c+1178,"auto_out_2_pready", false,-1);
    tracep->declBit(c+1195,"auto_out_2_pslverr", false,-1);
    tracep->declBus(c+34,"auto_out_2_prdata", false,-1, 31,0);
    tracep->declBit(c+1010,"auto_out_1_psel", false,-1);
    tracep->declBit(c+1011,"auto_out_1_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_1_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_out_1_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_out_1_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_1_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_1_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"auto_out_1_pready", false,-1);
    tracep->declBit(c+1195,"auto_out_1_pslverr", false,-1);
    tracep->declBus(c+1179,"auto_out_1_prdata", false,-1, 31,0);
    tracep->declBit(c+1013,"auto_out_0_psel", false,-1);
    tracep->declBit(c+1014,"auto_out_0_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_0_pwrite", false,-1);
    tracep->declBus(c+1007,"auto_out_0_paddr", false,-1, 29,0);
    tracep->declBus(c+1194,"auto_out_0_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_out_0_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_0_pstrb", false,-1, 3,0);
    tracep->declBit(c+770,"auto_out_0_pready", false,-1);
    tracep->declBit(c+1195,"auto_out_0_pslverr", false,-1);
    tracep->declBus(c+771,"auto_out_0_prdata", false,-1, 31,0);
    tracep->declBit(c+1015,"sel_0", false,-1);
    tracep->declBit(c+1016,"sel_1", false,-1);
    tracep->declBit(c+1017,"sel_2", false,-1);
    tracep->declBit(c+1018,"sel_3", false,-1);
    tracep->declBit(c+1019,"sel_4", false,-1);
    tracep->declBit(c+1020,"sel_5", false,-1);
    tracep->declBit(c+1021,"sel_6", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi42apb ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+35,"auto_in_awready", false,-1);
    tracep->declBit(c+36,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+35,"auto_in_wready", false,-1);
    tracep->declBit(c+40,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1054,"auto_in_bready", false,-1);
    tracep->declBit(c+1055,"auto_in_bvalid", false,-1);
    tracep->declBus(c+43,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+719,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_in_arready", false,-1);
    tracep->declBit(c+45,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1056,"auto_in_rready", false,-1);
    tracep->declBit(c+1057,"auto_in_rvalid", false,-1);
    tracep->declBus(c+49,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1180,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+719,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+32,"auto_out_psel", false,-1);
    tracep->declBit(c+33,"auto_out_penable", false,-1);
    tracep->declBit(c+1003,"auto_out_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_out_paddr", false,-1, 31,0);
    tracep->declBus(c+1004,"auto_out_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_out_pstrb", false,-1, 3,0);
    tracep->declBit(c+1053,"auto_out_pready", false,-1);
    tracep->declBit(c+1006,"auto_out_pslverr", false,-1);
    tracep->declBus(c+1177,"auto_out_prdata", false,-1, 31,0);
    tracep->declBit(c+33,"nodeOut_penable", false,-1);
    tracep->declBus(c+50,"state", false,-1, 1,0);
    tracep->declBit(c+44,"accept_read", false,-1);
    tracep->declBit(c+35,"accept_write", false,-1);
    tracep->declBit(c+51,"is_write_r", false,-1);
    tracep->declBit(c+1003,"is_write", false,-1);
    tracep->declBus(c+49,"rid_reg", false,-1, 3,0);
    tracep->declBus(c+43,"bid_reg", false,-1, 3,0);
    tracep->declBus(c+52,"araddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+53,"awaddr_reg_r", false,-1, 31,0);
    tracep->declBus(c+54,"wdata_reg_r", false,-1, 31,0);
    tracep->declBus(c+55,"wstrb_reg_r", false,-1, 3,0);
    tracep->declBus(c+1022,"resp", false,-1, 1,0);
    tracep->declBus(c+56,"resp_hold_r", false,-1, 1,0);
    tracep->declBus(c+719,"resp_hold", false,-1, 1,0);
    tracep->declBit(c+1057,"nodeIn_rvalid", false,-1);
    tracep->declBus(c+57,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBit(c+1055,"nodeIn_bvalid", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4frag ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+58,"auto_in_awready", false,-1);
    tracep->declBit(c+1205,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1206,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1207,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1208,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+59,"auto_in_wready", false,-1);
    tracep->declBit(c+1211,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1212,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"auto_in_wlast", false,-1);
    tracep->declBit(c+1215,"auto_in_bready", false,-1);
    tracep->declBit(c+1058,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+720,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_in_arready", false,-1);
    tracep->declBit(c+1216,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1217,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1218,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1219,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_in_rready", false,-1);
    tracep->declBit(c+1060,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+721,"auto_in_rlast", false,-1);
    tracep->declBit(c+1062,"auto_out_awready", false,-1);
    tracep->declBit(c+61,"auto_out_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+62,"auto_out_awecho_real_last", false,-1);
    tracep->declBit(c+1063,"auto_out_wready", false,-1);
    tracep->declBit(c+63,"auto_out_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_out_wlast", false,-1);
    tracep->declBit(c+1064,"auto_out_bready", false,-1);
    tracep->declBit(c+1065,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1066,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1067,"auto_out_becho_real_last", false,-1);
    tracep->declBit(c+1068,"auto_out_arready", false,-1);
    tracep->declBit(c+65,"auto_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+66,"auto_out_arecho_real_last", false,-1);
    tracep->declBit(c+1222,"auto_out_rready", false,-1);
    tracep->declBit(c+1060,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+722,"auto_out_recho_real_last", false,-1);
    tracep->declBit(c+1069,"auto_out_rlast", false,-1);
    tracep->declBit(c+63,"nodeOut_wvalid", false,-1);
    tracep->declBit(c+67,"w_idle", false,-1);
    tracep->declBit(c+1070,"in_awready", false,-1);
    tracep->declBit(c+68,"busy", false,-1);
    tracep->declBus(c+69,"r_addr", false,-1, 31,0);
    tracep->declBus(c+70,"r_len", false,-1, 7,0);
    tracep->declBus(c+71,"len", false,-1, 7,0);
    tracep->declBus(c+72,"addr", false,-1, 31,0);
    tracep->declBit(c+73,"busy_1", false,-1);
    tracep->declBus(c+74,"r_addr_1", false,-1, 31,0);
    tracep->declBus(c+75,"r_len_1", false,-1, 7,0);
    tracep->declBus(c+76,"len_1", false,-1, 7,0);
    tracep->declBus(c+77,"addr_1", false,-1, 31,0);
    tracep->declBit(c+78,"wbeats_latched", false,-1);
    tracep->declBit(c+61,"nodeOut_awvalid", false,-1);
    tracep->declBit(c+79,"wbeats_valid", false,-1);
    tracep->declBus(c+80,"w_counter", false,-1, 8,0);
    tracep->declBus(c+81,"w_todo", false,-1, 8,0);
    tracep->declBit(c+64,"w_last", false,-1);
    tracep->declBit(c+1064,"nodeOut_bready", false,-1);
    tracep->declBus(c+82,"error_0", false,-1, 1,0);
    tracep->declBus(c+83,"error_1", false,-1, 1,0);
    tracep->declBus(c+84,"error_2", false,-1, 1,0);
    tracep->declBus(c+85,"error_3", false,-1, 1,0);
    tracep->declBus(c+86,"error_4", false,-1, 1,0);
    tracep->declBus(c+87,"error_5", false,-1, 1,0);
    tracep->declBus(c+88,"error_6", false,-1, 1,0);
    tracep->declBus(c+89,"error_7", false,-1, 1,0);
    tracep->declBus(c+90,"error_8", false,-1, 1,0);
    tracep->declBus(c+91,"error_9", false,-1, 1,0);
    tracep->declBus(c+92,"error_10", false,-1, 1,0);
    tracep->declBus(c+93,"error_11", false,-1, 1,0);
    tracep->declBus(c+94,"error_12", false,-1, 1,0);
    tracep->declBus(c+95,"error_13", false,-1, 1,0);
    tracep->declBus(c+96,"error_14", false,-1, 1,0);
    tracep->declBus(c+97,"error_15", false,-1, 1,0);
    tracep->pushNamePrefix("deq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+60,"io_enq_ready", false,-1);
    tracep->declBit(c+1216,"io_enq_valid", false,-1);
    tracep->declBus(c+1217,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1218,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1219,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1220,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1221,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1071,"io_deq_ready", false,-1);
    tracep->declBit(c+65,"io_deq_valid", false,-1);
    tracep->declBus(c+46,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+98,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+99,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+48,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+100,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+101,"ram", false,-1, 48,0);
    tracep->declBit(c+103,"full", false,-1);
    tracep->declBit(c+65,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1072,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("deq_q_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+58,"io_enq_ready", false,-1);
    tracep->declBit(c+1205,"io_enq_valid", false,-1);
    tracep->declBus(c+1206,"io_enq_bits_id", false,-1, 3,0);
    tracep->declBus(c+1207,"io_enq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+1208,"io_enq_bits_len", false,-1, 7,0);
    tracep->declBus(c+1209,"io_enq_bits_size", false,-1, 2,0);
    tracep->declBus(c+1210,"io_enq_bits_burst", false,-1, 1,0);
    tracep->declBit(c+1073,"io_deq_ready", false,-1);
    tracep->declBit(c+104,"io_deq_valid", false,-1);
    tracep->declBus(c+37,"io_deq_bits_id", false,-1, 3,0);
    tracep->declBus(c+105,"io_deq_bits_addr", false,-1, 31,0);
    tracep->declBus(c+106,"io_deq_bits_len", false,-1, 7,0);
    tracep->declBus(c+39,"io_deq_bits_size", false,-1, 2,0);
    tracep->declBus(c+107,"io_deq_bits_burst", false,-1, 1,0);
    tracep->declQuad(c+108,"ram", false,-1, 48,0);
    tracep->declBit(c+110,"full", false,-1);
    tracep->declBit(c+104,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1074,"do_enq", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("in_wdeq_q ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+59,"io_enq_ready", false,-1);
    tracep->declBit(c+1211,"io_enq_valid", false,-1);
    tracep->declBus(c+1212,"io_enq_bits_data", false,-1, 31,0);
    tracep->declBus(c+1213,"io_enq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+1214,"io_enq_bits_last", false,-1);
    tracep->declBit(c+1075,"io_deq_ready", false,-1);
    tracep->declBit(c+111,"io_deq_valid", false,-1);
    tracep->declBus(c+41,"io_deq_bits_data", false,-1, 31,0);
    tracep->declBus(c+42,"io_deq_bits_strb", false,-1, 3,0);
    tracep->declBit(c+112,"io_deq_bits_last", false,-1);
    tracep->declQuad(c+113,"ram", false,-1, 36,0);
    tracep->declBit(c+115,"full", false,-1);
    tracep->declBit(c+111,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1076,"do_enq", false,-1);
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
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1077,"auto_in_awready", false,-1);
    tracep->declBit(c+116,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_in_awaddr", false,-1, 27,0);
    tracep->declBit(c+723,"auto_in_wready", false,-1);
    tracep->declBit(c+118,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_in_bready", false,-1);
    tracep->declBit(c+119,"auto_in_bvalid", false,-1);
    tracep->declBus(c+120,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1079,"auto_in_arready", false,-1);
    tracep->declBit(c+122,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+123,"auto_in_araddr", false,-1, 27,0);
    tracep->declBit(c+1080,"auto_in_rready", false,-1);
    tracep->declBit(c+124,"auto_in_rvalid", false,-1);
    tracep->declBus(c+125,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1079,"nodeIn_arready", false,-1);
    tracep->declBit(c+1077,"nodeIn_awready", false,-1);
    tracep->declBit(c+128,"w_sel0", false,-1);
    tracep->declBit(c+119,"w_full", false,-1);
    tracep->declBus(c+120,"w_id", false,-1, 3,0);
    tracep->declBit(c+129,"r_sel1", false,-1);
    tracep->declBit(c+130,"w_sel1", false,-1);
    tracep->declBit(c+124,"r_full", false,-1);
    tracep->declBus(c+125,"r_id", false,-1, 3,0);
    tracep->declBit(c+1081,"ren", false,-1);
    tracep->declBit(c+131,"rdata_REG", false,-1);
    tracep->declBus(c+132,"rdata_r0", false,-1, 7,0);
    tracep->declBus(c+133,"rdata_r1", false,-1, 7,0);
    tracep->declBus(c+134,"rdata_r2", false,-1, 7,0);
    tracep->declBus(c+135,"rdata_r3", false,-1, 7,0);
    tracep->pushNamePrefix("mem_ext ");
    tracep->declBus(c+136,"R0_addr", false,-1, 10,0);
    tracep->declBit(c+1081,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declBus(c+137,"R0_data", false,-1, 31,0);
    tracep->declBus(c+138,"W0_addr", false,-1, 10,0);
    tracep->declBit(c+1082,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declBus(c+41,"W0_data", false,-1, 31,0);
    tracep->declBus(c+42,"W0_mask", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("axi4xbar ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+58,"auto_in_awready", false,-1);
    tracep->declBit(c+1205,"auto_in_awvalid", false,-1);
    tracep->declBus(c+1206,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+1207,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+1208,"auto_in_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"auto_in_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_in_awburst", false,-1, 1,0);
    tracep->declBit(c+59,"auto_in_wready", false,-1);
    tracep->declBit(c+1211,"auto_in_wvalid", false,-1);
    tracep->declBus(c+1212,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"auto_in_wlast", false,-1);
    tracep->declBit(c+1215,"auto_in_bready", false,-1);
    tracep->declBit(c+1058,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+720,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_in_arready", false,-1);
    tracep->declBit(c+1216,"auto_in_arvalid", false,-1);
    tracep->declBus(c+1217,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+1218,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+1219,"auto_in_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"auto_in_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_in_arburst", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_in_rready", false,-1);
    tracep->declBit(c+1060,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+721,"auto_in_rlast", false,-1);
    tracep->declBit(c+58,"auto_out_awready", false,-1);
    tracep->declBit(c+1205,"auto_out_awvalid", false,-1);
    tracep->declBus(c+1206,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+1207,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1208,"auto_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"auto_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_out_awburst", false,-1, 1,0);
    tracep->declBit(c+59,"auto_out_wready", false,-1);
    tracep->declBit(c+1211,"auto_out_wvalid", false,-1);
    tracep->declBus(c+1212,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"auto_out_wlast", false,-1);
    tracep->declBit(c+1215,"auto_out_bready", false,-1);
    tracep->declBit(c+1058,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+720,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_out_arready", false,-1);
    tracep->declBit(c+1216,"auto_out_arvalid", false,-1);
    tracep->declBus(c+1217,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+1218,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1219,"auto_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"auto_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_out_rready", false,-1);
    tracep->declBit(c+1060,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+721,"auto_out_rlast", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("axi4xbar_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1083,"auto_in_awready", false,-1);
    tracep->declBit(c+139,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+1063,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_in_wlast", false,-1);
    tracep->declBit(c+1064,"auto_in_bready", false,-1);
    tracep->declBit(c+1065,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1066,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"auto_in_arready", false,-1);
    tracep->declBit(c+140,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+1222,"auto_in_rready", false,-1);
    tracep->declBit(c+1060,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+1069,"auto_in_rlast", false,-1);
    tracep->declBit(c+1077,"auto_out_2_awready", false,-1);
    tracep->declBit(c+116,"auto_out_2_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_2_awid", false,-1, 3,0);
    tracep->declBus(c+117,"auto_out_2_awaddr", false,-1, 27,0);
    tracep->declBit(c+723,"auto_out_2_wready", false,-1);
    tracep->declBit(c+118,"auto_out_2_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_2_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_2_wstrb", false,-1, 3,0);
    tracep->declBit(c+1078,"auto_out_2_bready", false,-1);
    tracep->declBit(c+119,"auto_out_2_bvalid", false,-1);
    tracep->declBus(c+120,"auto_out_2_bid", false,-1, 3,0);
    tracep->declBus(c+121,"auto_out_2_bresp", false,-1, 1,0);
    tracep->declBit(c+1079,"auto_out_2_arready", false,-1);
    tracep->declBit(c+122,"auto_out_2_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_2_arid", false,-1, 3,0);
    tracep->declBus(c+123,"auto_out_2_araddr", false,-1, 27,0);
    tracep->declBit(c+1080,"auto_out_2_rready", false,-1);
    tracep->declBit(c+124,"auto_out_2_rvalid", false,-1);
    tracep->declBus(c+125,"auto_out_2_rid", false,-1, 3,0);
    tracep->declBus(c+126,"auto_out_2_rdata", false,-1, 31,0);
    tracep->declBus(c+127,"auto_out_2_rresp", false,-1, 1,0);
    tracep->declBit(c+141,"auto_out_1_awvalid", false,-1);
    tracep->declBit(c+142,"auto_out_1_wvalid", false,-1);
    tracep->declBit(c+143,"auto_out_1_arready", false,-1);
    tracep->declBit(c+144,"auto_out_1_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_1_arid", false,-1, 3,0);
    tracep->declBus(c+145,"auto_out_1_araddr", false,-1, 29,0);
    tracep->declBit(c+724,"auto_out_1_rready", false,-1);
    tracep->declBit(c+146,"auto_out_1_rvalid", false,-1);
    tracep->declBus(c+147,"auto_out_1_rid", false,-1, 3,0);
    tracep->declBus(c+148,"auto_out_1_rdata", false,-1, 31,0);
    tracep->declBit(c+35,"auto_out_0_awready", false,-1);
    tracep->declBit(c+36,"auto_out_0_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_0_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_0_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_0_awsize", false,-1, 2,0);
    tracep->declBit(c+35,"auto_out_0_wready", false,-1);
    tracep->declBit(c+40,"auto_out_0_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_0_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_0_wstrb", false,-1, 3,0);
    tracep->declBit(c+1054,"auto_out_0_bready", false,-1);
    tracep->declBit(c+1055,"auto_out_0_bvalid", false,-1);
    tracep->declBus(c+43,"auto_out_0_bid", false,-1, 3,0);
    tracep->declBus(c+719,"auto_out_0_bresp", false,-1, 1,0);
    tracep->declBit(c+44,"auto_out_0_arready", false,-1);
    tracep->declBit(c+45,"auto_out_0_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_0_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_0_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_0_arsize", false,-1, 2,0);
    tracep->declBit(c+1056,"auto_out_0_rready", false,-1);
    tracep->declBit(c+1057,"auto_out_0_rvalid", false,-1);
    tracep->declBus(c+49,"auto_out_0_rid", false,-1, 3,0);
    tracep->declBus(c+1180,"auto_out_0_rdata", false,-1, 31,0);
    tracep->declBus(c+719,"auto_out_0_rresp", false,-1, 1,0);
    tracep->declBit(c+1065,"in_0_bvalid", false,-1);
    tracep->declBit(c+1060,"in_0_rvalid", false,-1);
    tracep->declBit(c+1083,"nodeIn_awready", false,-1);
    tracep->declBit(c+149,"requestARIO_0_0", false,-1);
    tracep->declBit(c+150,"requestARIO_0_1", false,-1);
    tracep->declBit(c+151,"requestARIO_0_2", false,-1);
    tracep->declBit(c+152,"requestAWIO_0_0", false,-1);
    tracep->declBit(c+153,"requestAWIO_0_1", false,-1);
    tracep->declBit(c+154,"requestAWIO_0_2", false,-1);
    tracep->declBit(c+155,"arFIFOMap_0_count", false,-1);
    tracep->declBit(c+156,"awFIFOMap_0_count", false,-1);
    tracep->declBit(c+157,"arFIFOMap_1_count", false,-1);
    tracep->declBit(c+158,"awFIFOMap_1_count", false,-1);
    tracep->declBit(c+159,"arFIFOMap_2_count", false,-1);
    tracep->declBit(c+160,"awFIFOMap_2_count", false,-1);
    tracep->declBit(c+161,"arFIFOMap_3_count", false,-1);
    tracep->declBit(c+162,"awFIFOMap_3_count", false,-1);
    tracep->declBit(c+163,"arFIFOMap_4_count", false,-1);
    tracep->declBit(c+164,"awFIFOMap_4_count", false,-1);
    tracep->declBit(c+165,"arFIFOMap_5_count", false,-1);
    tracep->declBit(c+166,"awFIFOMap_5_count", false,-1);
    tracep->declBit(c+167,"arFIFOMap_6_count", false,-1);
    tracep->declBit(c+168,"awFIFOMap_6_count", false,-1);
    tracep->declBit(c+169,"arFIFOMap_7_count", false,-1);
    tracep->declBit(c+170,"awFIFOMap_7_count", false,-1);
    tracep->declBit(c+171,"arFIFOMap_8_count", false,-1);
    tracep->declBit(c+172,"awFIFOMap_8_count", false,-1);
    tracep->declBit(c+173,"arFIFOMap_9_count", false,-1);
    tracep->declBit(c+174,"awFIFOMap_9_count", false,-1);
    tracep->declBit(c+175,"arFIFOMap_10_count", false,-1);
    tracep->declBit(c+176,"awFIFOMap_10_count", false,-1);
    tracep->declBit(c+177,"arFIFOMap_11_count", false,-1);
    tracep->declBit(c+178,"awFIFOMap_11_count", false,-1);
    tracep->declBit(c+179,"arFIFOMap_12_count", false,-1);
    tracep->declBit(c+180,"awFIFOMap_12_count", false,-1);
    tracep->declBit(c+181,"arFIFOMap_13_count", false,-1);
    tracep->declBit(c+182,"awFIFOMap_13_count", false,-1);
    tracep->declBit(c+183,"arFIFOMap_14_count", false,-1);
    tracep->declBit(c+184,"awFIFOMap_14_count", false,-1);
    tracep->declBit(c+185,"arFIFOMap_15_count", false,-1);
    tracep->declBit(c+186,"awFIFOMap_15_count", false,-1);
    tracep->declBit(c+187,"latched", false,-1);
    tracep->declBit(c+188,"in_0_awvalid", false,-1);
    tracep->declBit(c+189,"awIn_0_io_enq_valid", false,-1);
    tracep->declBit(c+190,"in_0_wvalid", false,-1);
    tracep->declBit(c+191,"idle_3", false,-1);
    tracep->declBit(c+1085,"anyValid", false,-1);
    tracep->declBus(c+1086,"readys_valid", false,-1, 2,0);
    tracep->declBus(c+192,"readys_mask", false,-1, 2,0);
    tracep->declBus(c+1087,"readys_readys", false,-1, 2,0);
    tracep->declBit(c+1088,"prefixOR_1", false,-1);
    tracep->declBit(c+1089,"winner_3_1", false,-1);
    tracep->declBit(c+1090,"winner_3_2", false,-1);
    tracep->declBit(c+193,"state_3_0", false,-1);
    tracep->declBit(c+194,"state_3_1", false,-1);
    tracep->declBit(c+195,"state_3_2", false,-1);
    tracep->declBit(c+1091,"muxState_3_0", false,-1);
    tracep->declBit(c+1092,"muxState_3_1", false,-1);
    tracep->declBit(c+1093,"muxState_3_2", false,-1);
    tracep->declBit(c+196,"idle_4", false,-1);
    tracep->declBit(c+1094,"anyValid_1", false,-1);
    tracep->declBus(c+1095,"readys_valid_1", false,-1, 2,0);
    tracep->declBus(c+197,"readys_mask_1", false,-1, 2,0);
    tracep->declBus(c+1096,"readys_readys_1", false,-1, 2,0);
    tracep->declBit(c+1097,"winner_4_0", false,-1);
    tracep->declBit(c+1098,"winner_4_2", false,-1);
    tracep->declBit(c+198,"state_4_0", false,-1);
    tracep->declBit(c+199,"state_4_2", false,-1);
    tracep->declBit(c+1099,"muxState_4_0", false,-1);
    tracep->declBit(c+1100,"muxState_4_2", false,-1);
    tracep->pushNamePrefix("awIn_0 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+200,"io_enq_ready", false,-1);
    tracep->declBit(c+189,"io_enq_valid", false,-1);
    tracep->declBus(c+201,"io_enq_bits", false,-1, 2,0);
    tracep->declBit(c+1101,"io_deq_ready", false,-1);
    tracep->declBit(c+202,"io_deq_valid", false,-1);
    tracep->declBus(c+203,"io_deq_bits", false,-1, 2,0);
    tracep->declBit(c+204,"wrap", false,-1);
    tracep->declBit(c+205,"wrap_1", false,-1);
    tracep->declBit(c+206,"maybe_full", false,-1);
    tracep->declBit(c+207,"ptr_match", false,-1);
    tracep->declBit(c+208,"empty", false,-1);
    tracep->declBit(c+209,"full", false,-1);
    tracep->declBit(c+202,"io_deq_valid_0", false,-1);
    tracep->declBit(c+1102,"do_deq", false,-1);
    tracep->declBit(c+1103,"do_enq", false,-1);
    tracep->pushNamePrefix("ram_ext ");
    tracep->declBit(c+205,"R0_addr", false,-1);
    tracep->declBit(c+1223,"R0_en", false,-1);
    tracep->declBit(c+1150,"R0_clk", false,-1);
    tracep->declBus(c+210,"R0_data", false,-1, 2,0);
    tracep->declBit(c+204,"W0_addr", false,-1);
    tracep->declBit(c+1103,"W0_en", false,-1);
    tracep->declBit(c+1150,"W0_clk", false,-1);
    tracep->declBus(c+201,"W0_data", false,-1, 2,0);
    for (int i = 0; i < 2; ++i) {
        tracep->declBus(c+211+i*1,"Memory", true,(i+0), 2,0);
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
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1062,"auto_in_awready", false,-1);
    tracep->declBit(c+61,"auto_in_awvalid", false,-1);
    tracep->declBus(c+37,"auto_in_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_in_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_in_awsize", false,-1, 2,0);
    tracep->declBit(c+62,"auto_in_awecho_real_last", false,-1);
    tracep->declBit(c+1063,"auto_in_wready", false,-1);
    tracep->declBit(c+63,"auto_in_wvalid", false,-1);
    tracep->declBus(c+41,"auto_in_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_in_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_in_wlast", false,-1);
    tracep->declBit(c+1064,"auto_in_bready", false,-1);
    tracep->declBit(c+1065,"auto_in_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_in_bid", false,-1, 3,0);
    tracep->declBus(c+1066,"auto_in_bresp", false,-1, 1,0);
    tracep->declBit(c+1067,"auto_in_becho_real_last", false,-1);
    tracep->declBit(c+1068,"auto_in_arready", false,-1);
    tracep->declBit(c+65,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_in_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_in_arsize", false,-1, 2,0);
    tracep->declBit(c+66,"auto_in_arecho_real_last", false,-1);
    tracep->declBit(c+1222,"auto_in_rready", false,-1);
    tracep->declBit(c+1060,"auto_in_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_in_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_in_rresp", false,-1, 1,0);
    tracep->declBit(c+722,"auto_in_recho_real_last", false,-1);
    tracep->declBit(c+1069,"auto_in_rlast", false,-1);
    tracep->declBit(c+1083,"auto_out_awready", false,-1);
    tracep->declBit(c+139,"auto_out_awvalid", false,-1);
    tracep->declBus(c+37,"auto_out_awid", false,-1, 3,0);
    tracep->declBus(c+38,"auto_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+39,"auto_out_awsize", false,-1, 2,0);
    tracep->declBit(c+1063,"auto_out_wready", false,-1);
    tracep->declBit(c+63,"auto_out_wvalid", false,-1);
    tracep->declBus(c+41,"auto_out_wdata", false,-1, 31,0);
    tracep->declBus(c+42,"auto_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+64,"auto_out_wlast", false,-1);
    tracep->declBit(c+1064,"auto_out_bready", false,-1);
    tracep->declBit(c+1065,"auto_out_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_out_bid", false,-1, 3,0);
    tracep->declBus(c+1066,"auto_out_bresp", false,-1, 1,0);
    tracep->declBit(c+1084,"auto_out_arready", false,-1);
    tracep->declBit(c+140,"auto_out_arvalid", false,-1);
    tracep->declBus(c+46,"auto_out_arid", false,-1, 3,0);
    tracep->declBus(c+47,"auto_out_araddr", false,-1, 31,0);
    tracep->declBus(c+48,"auto_out_arsize", false,-1, 2,0);
    tracep->declBit(c+1222,"auto_out_rready", false,-1);
    tracep->declBit(c+1060,"auto_out_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_out_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_out_rresp", false,-1, 1,0);
    tracep->declBit(c+1069,"auto_out_rlast", false,-1);
    tracep->pushNamePrefix("Queue1_BundleMap ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+213,"io_enq_ready", false,-1);
    tracep->declBit(c+725,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1104,"io_deq_ready", false,-1);
    tracep->declBit(c+214,"io_deq_valid", false,-1);
    tracep->declBit(c+215,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+215,"ram_real_last", false,-1);
    tracep->declBit(c+214,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+216,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_1 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+217,"io_enq_ready", false,-1);
    tracep->declBit(c+726,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1105,"io_deq_ready", false,-1);
    tracep->declBit(c+218,"io_deq_valid", false,-1);
    tracep->declBit(c+219,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+219,"ram_real_last", false,-1);
    tracep->declBit(c+218,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+220,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_10 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+221,"io_enq_ready", false,-1);
    tracep->declBit(c+727,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1106,"io_deq_ready", false,-1);
    tracep->declBit(c+222,"io_deq_valid", false,-1);
    tracep->declBit(c+223,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+223,"ram_real_last", false,-1);
    tracep->declBit(c+222,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+224,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_11 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+225,"io_enq_ready", false,-1);
    tracep->declBit(c+728,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1107,"io_deq_ready", false,-1);
    tracep->declBit(c+226,"io_deq_valid", false,-1);
    tracep->declBit(c+227,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+227,"ram_real_last", false,-1);
    tracep->declBit(c+226,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+228,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_12 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+229,"io_enq_ready", false,-1);
    tracep->declBit(c+729,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1108,"io_deq_ready", false,-1);
    tracep->declBit(c+230,"io_deq_valid", false,-1);
    tracep->declBit(c+231,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+231,"ram_real_last", false,-1);
    tracep->declBit(c+230,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+232,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_13 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+233,"io_enq_ready", false,-1);
    tracep->declBit(c+730,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1109,"io_deq_ready", false,-1);
    tracep->declBit(c+234,"io_deq_valid", false,-1);
    tracep->declBit(c+235,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+235,"ram_real_last", false,-1);
    tracep->declBit(c+234,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+236,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_14 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+237,"io_enq_ready", false,-1);
    tracep->declBit(c+731,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1110,"io_deq_ready", false,-1);
    tracep->declBit(c+238,"io_deq_valid", false,-1);
    tracep->declBit(c+239,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+239,"ram_real_last", false,-1);
    tracep->declBit(c+238,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+240,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_15 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+241,"io_enq_ready", false,-1);
    tracep->declBit(c+732,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1111,"io_deq_ready", false,-1);
    tracep->declBit(c+242,"io_deq_valid", false,-1);
    tracep->declBit(c+243,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+243,"ram_real_last", false,-1);
    tracep->declBit(c+242,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+244,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_16 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+245,"io_enq_ready", false,-1);
    tracep->declBit(c+733,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1112,"io_deq_ready", false,-1);
    tracep->declBit(c+246,"io_deq_valid", false,-1);
    tracep->declBit(c+247,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+247,"ram_real_last", false,-1);
    tracep->declBit(c+246,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+248,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_17 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+249,"io_enq_ready", false,-1);
    tracep->declBit(c+734,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1113,"io_deq_ready", false,-1);
    tracep->declBit(c+250,"io_deq_valid", false,-1);
    tracep->declBit(c+251,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+251,"ram_real_last", false,-1);
    tracep->declBit(c+250,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+252,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_18 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+253,"io_enq_ready", false,-1);
    tracep->declBit(c+735,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1114,"io_deq_ready", false,-1);
    tracep->declBit(c+254,"io_deq_valid", false,-1);
    tracep->declBit(c+255,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+255,"ram_real_last", false,-1);
    tracep->declBit(c+254,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+256,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_19 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+257,"io_enq_ready", false,-1);
    tracep->declBit(c+736,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1115,"io_deq_ready", false,-1);
    tracep->declBit(c+258,"io_deq_valid", false,-1);
    tracep->declBit(c+259,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+259,"ram_real_last", false,-1);
    tracep->declBit(c+258,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+260,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_2 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+261,"io_enq_ready", false,-1);
    tracep->declBit(c+737,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1116,"io_deq_ready", false,-1);
    tracep->declBit(c+262,"io_deq_valid", false,-1);
    tracep->declBit(c+263,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+263,"ram_real_last", false,-1);
    tracep->declBit(c+262,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+264,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_20 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+265,"io_enq_ready", false,-1);
    tracep->declBit(c+738,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1117,"io_deq_ready", false,-1);
    tracep->declBit(c+266,"io_deq_valid", false,-1);
    tracep->declBit(c+267,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+267,"ram_real_last", false,-1);
    tracep->declBit(c+266,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+268,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_21 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+269,"io_enq_ready", false,-1);
    tracep->declBit(c+739,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1118,"io_deq_ready", false,-1);
    tracep->declBit(c+270,"io_deq_valid", false,-1);
    tracep->declBit(c+271,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+271,"ram_real_last", false,-1);
    tracep->declBit(c+270,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+272,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_22 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+273,"io_enq_ready", false,-1);
    tracep->declBit(c+740,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1119,"io_deq_ready", false,-1);
    tracep->declBit(c+274,"io_deq_valid", false,-1);
    tracep->declBit(c+275,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+275,"ram_real_last", false,-1);
    tracep->declBit(c+274,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+276,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_23 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+277,"io_enq_ready", false,-1);
    tracep->declBit(c+741,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1120,"io_deq_ready", false,-1);
    tracep->declBit(c+278,"io_deq_valid", false,-1);
    tracep->declBit(c+279,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+279,"ram_real_last", false,-1);
    tracep->declBit(c+278,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+280,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_24 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+281,"io_enq_ready", false,-1);
    tracep->declBit(c+742,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1121,"io_deq_ready", false,-1);
    tracep->declBit(c+282,"io_deq_valid", false,-1);
    tracep->declBit(c+283,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+283,"ram_real_last", false,-1);
    tracep->declBit(c+282,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+284,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_25 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+285,"io_enq_ready", false,-1);
    tracep->declBit(c+743,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1122,"io_deq_ready", false,-1);
    tracep->declBit(c+286,"io_deq_valid", false,-1);
    tracep->declBit(c+287,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+287,"ram_real_last", false,-1);
    tracep->declBit(c+286,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+288,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_26 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+289,"io_enq_ready", false,-1);
    tracep->declBit(c+744,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1123,"io_deq_ready", false,-1);
    tracep->declBit(c+290,"io_deq_valid", false,-1);
    tracep->declBit(c+291,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+291,"ram_real_last", false,-1);
    tracep->declBit(c+290,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+292,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_27 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+293,"io_enq_ready", false,-1);
    tracep->declBit(c+745,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1124,"io_deq_ready", false,-1);
    tracep->declBit(c+294,"io_deq_valid", false,-1);
    tracep->declBit(c+295,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+295,"ram_real_last", false,-1);
    tracep->declBit(c+294,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+296,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_28 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+297,"io_enq_ready", false,-1);
    tracep->declBit(c+746,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1125,"io_deq_ready", false,-1);
    tracep->declBit(c+298,"io_deq_valid", false,-1);
    tracep->declBit(c+299,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+299,"ram_real_last", false,-1);
    tracep->declBit(c+298,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+300,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_29 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+301,"io_enq_ready", false,-1);
    tracep->declBit(c+747,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1126,"io_deq_ready", false,-1);
    tracep->declBit(c+302,"io_deq_valid", false,-1);
    tracep->declBit(c+303,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+303,"ram_real_last", false,-1);
    tracep->declBit(c+302,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+304,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_3 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+305,"io_enq_ready", false,-1);
    tracep->declBit(c+748,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1127,"io_deq_ready", false,-1);
    tracep->declBit(c+306,"io_deq_valid", false,-1);
    tracep->declBit(c+307,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+307,"ram_real_last", false,-1);
    tracep->declBit(c+306,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+308,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_30 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+309,"io_enq_ready", false,-1);
    tracep->declBit(c+749,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1128,"io_deq_ready", false,-1);
    tracep->declBit(c+310,"io_deq_valid", false,-1);
    tracep->declBit(c+311,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+311,"ram_real_last", false,-1);
    tracep->declBit(c+310,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+312,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_31 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+313,"io_enq_ready", false,-1);
    tracep->declBit(c+750,"io_enq_valid", false,-1);
    tracep->declBit(c+62,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1129,"io_deq_ready", false,-1);
    tracep->declBit(c+314,"io_deq_valid", false,-1);
    tracep->declBit(c+315,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+315,"ram_real_last", false,-1);
    tracep->declBit(c+314,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+316,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_4 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+317,"io_enq_ready", false,-1);
    tracep->declBit(c+751,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1130,"io_deq_ready", false,-1);
    tracep->declBit(c+318,"io_deq_valid", false,-1);
    tracep->declBit(c+319,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+319,"ram_real_last", false,-1);
    tracep->declBit(c+318,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+320,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_5 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+321,"io_enq_ready", false,-1);
    tracep->declBit(c+752,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1131,"io_deq_ready", false,-1);
    tracep->declBit(c+322,"io_deq_valid", false,-1);
    tracep->declBit(c+323,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+323,"ram_real_last", false,-1);
    tracep->declBit(c+322,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+324,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_6 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+325,"io_enq_ready", false,-1);
    tracep->declBit(c+753,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1132,"io_deq_ready", false,-1);
    tracep->declBit(c+326,"io_deq_valid", false,-1);
    tracep->declBit(c+327,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+327,"ram_real_last", false,-1);
    tracep->declBit(c+326,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+328,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_7 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+329,"io_enq_ready", false,-1);
    tracep->declBit(c+754,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1133,"io_deq_ready", false,-1);
    tracep->declBit(c+330,"io_deq_valid", false,-1);
    tracep->declBit(c+331,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+331,"ram_real_last", false,-1);
    tracep->declBit(c+330,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+332,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_8 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+333,"io_enq_ready", false,-1);
    tracep->declBit(c+755,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1134,"io_deq_ready", false,-1);
    tracep->declBit(c+334,"io_deq_valid", false,-1);
    tracep->declBit(c+335,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+335,"ram_real_last", false,-1);
    tracep->declBit(c+334,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+336,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Queue1_BundleMap_9 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+337,"io_enq_ready", false,-1);
    tracep->declBit(c+756,"io_enq_valid", false,-1);
    tracep->declBit(c+66,"io_enq_bits_real_last", false,-1);
    tracep->declBit(c+1135,"io_deq_ready", false,-1);
    tracep->declBit(c+338,"io_deq_valid", false,-1);
    tracep->declBit(c+339,"io_deq_bits_real_last", false,-1);
    tracep->declBit(c+339,"ram_real_last", false,-1);
    tracep->declBit(c+338,"full", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBit(c+340,"do_enq", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1183,"reset", false,-1);
    tracep->declBit(c+58,"auto_master_out_awready", false,-1);
    tracep->declBit(c+1205,"auto_master_out_awvalid", false,-1);
    tracep->declBus(c+1206,"auto_master_out_awid", false,-1, 3,0);
    tracep->declBus(c+1207,"auto_master_out_awaddr", false,-1, 31,0);
    tracep->declBus(c+1208,"auto_master_out_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"auto_master_out_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"auto_master_out_awburst", false,-1, 1,0);
    tracep->declBit(c+59,"auto_master_out_wready", false,-1);
    tracep->declBit(c+1211,"auto_master_out_wvalid", false,-1);
    tracep->declBus(c+1212,"auto_master_out_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"auto_master_out_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"auto_master_out_wlast", false,-1);
    tracep->declBit(c+1215,"auto_master_out_bready", false,-1);
    tracep->declBit(c+1058,"auto_master_out_bvalid", false,-1);
    tracep->declBus(c+1059,"auto_master_out_bid", false,-1, 3,0);
    tracep->declBus(c+720,"auto_master_out_bresp", false,-1, 1,0);
    tracep->declBit(c+60,"auto_master_out_arready", false,-1);
    tracep->declBit(c+1216,"auto_master_out_arvalid", false,-1);
    tracep->declBus(c+1217,"auto_master_out_arid", false,-1, 3,0);
    tracep->declBus(c+1218,"auto_master_out_araddr", false,-1, 31,0);
    tracep->declBus(c+1219,"auto_master_out_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"auto_master_out_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"auto_master_out_arburst", false,-1, 1,0);
    tracep->declBit(c+1222,"auto_master_out_rready", false,-1);
    tracep->declBit(c+1060,"auto_master_out_rvalid", false,-1);
    tracep->declBus(c+1061,"auto_master_out_rid", false,-1, 3,0);
    tracep->declBus(c+1181,"auto_master_out_rdata", false,-1, 31,0);
    tracep->declBus(c+1182,"auto_master_out_rresp", false,-1, 1,0);
    tracep->declBit(c+721,"auto_master_out_rlast", false,-1);
    tracep->pushNamePrefix("cpu ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1183,"reset", false,-1);
    tracep->declBit(c+1195,"io_interrupt", false,-1);
    tracep->declBit(c+58,"io_master_awready", false,-1);
    tracep->declBit(c+1205,"io_master_awvalid", false,-1);
    tracep->declBus(c+1207,"io_master_awaddr", false,-1, 31,0);
    tracep->declBus(c+1206,"io_master_awid", false,-1, 3,0);
    tracep->declBus(c+1208,"io_master_awlen", false,-1, 7,0);
    tracep->declBus(c+1209,"io_master_awsize", false,-1, 2,0);
    tracep->declBus(c+1210,"io_master_awburst", false,-1, 1,0);
    tracep->declBit(c+59,"io_master_wready", false,-1);
    tracep->declBit(c+1211,"io_master_wvalid", false,-1);
    tracep->declBus(c+1212,"io_master_wdata", false,-1, 31,0);
    tracep->declBus(c+1213,"io_master_wstrb", false,-1, 3,0);
    tracep->declBit(c+1214,"io_master_wlast", false,-1);
    tracep->declBit(c+1215,"io_master_bready", false,-1);
    tracep->declBit(c+1058,"io_master_bvalid", false,-1);
    tracep->declBus(c+720,"io_master_bresp", false,-1, 1,0);
    tracep->declBus(c+1059,"io_master_bid", false,-1, 3,0);
    tracep->declBit(c+60,"io_master_arready", false,-1);
    tracep->declBit(c+1216,"io_master_arvalid", false,-1);
    tracep->declBus(c+1218,"io_master_araddr", false,-1, 31,0);
    tracep->declBus(c+1217,"io_master_arid", false,-1, 3,0);
    tracep->declBus(c+1219,"io_master_arlen", false,-1, 7,0);
    tracep->declBus(c+1220,"io_master_arsize", false,-1, 2,0);
    tracep->declBus(c+1221,"io_master_arburst", false,-1, 1,0);
    tracep->declBit(c+1222,"io_master_rready", false,-1);
    tracep->declBit(c+1060,"io_master_rvalid", false,-1);
    tracep->declBus(c+1182,"io_master_rresp", false,-1, 1,0);
    tracep->declBus(c+1181,"io_master_rdata", false,-1, 31,0);
    tracep->declBit(c+721,"io_master_rlast", false,-1);
    tracep->declBus(c+1061,"io_master_rid", false,-1, 3,0);
    tracep->declBit(c+1224,"io_slave_awready", false,-1);
    tracep->declBit(c+1195,"io_slave_awvalid", false,-1);
    tracep->declBus(c+1225,"io_slave_awaddr", false,-1, 31,0);
    tracep->declBus(c+1226,"io_slave_awid", false,-1, 3,0);
    tracep->declBus(c+1227,"io_slave_awlen", false,-1, 7,0);
    tracep->declBus(c+1228,"io_slave_awsize", false,-1, 2,0);
    tracep->declBus(c+1229,"io_slave_awburst", false,-1, 1,0);
    tracep->declBit(c+1230,"io_slave_wready", false,-1);
    tracep->declBit(c+1195,"io_slave_wvalid", false,-1);
    tracep->declBus(c+1225,"io_slave_wdata", false,-1, 31,0);
    tracep->declBus(c+1226,"io_slave_wstrb", false,-1, 3,0);
    tracep->declBit(c+1195,"io_slave_wlast", false,-1);
    tracep->declBit(c+1195,"io_slave_bready", false,-1);
    tracep->declBit(c+1231,"io_slave_bvalid", false,-1);
    tracep->declBus(c+1232,"io_slave_bresp", false,-1, 1,0);
    tracep->declBus(c+1233,"io_slave_bid", false,-1, 3,0);
    tracep->declBit(c+1234,"io_slave_arready", false,-1);
    tracep->declBit(c+1195,"io_slave_arvalid", false,-1);
    tracep->declBus(c+1225,"io_slave_araddr", false,-1, 31,0);
    tracep->declBus(c+1226,"io_slave_arid", false,-1, 3,0);
    tracep->declBus(c+1227,"io_slave_arlen", false,-1, 7,0);
    tracep->declBus(c+1228,"io_slave_arsize", false,-1, 2,0);
    tracep->declBus(c+1229,"io_slave_arburst", false,-1, 1,0);
    tracep->declBit(c+1195,"io_slave_rready", false,-1);
    tracep->declBit(c+1235,"io_slave_rvalid", false,-1);
    tracep->declBus(c+1236,"io_slave_rresp", false,-1, 1,0);
    tracep->declBus(c+1237,"io_slave_rdata", false,-1, 31,0);
    tracep->declBit(c+1238,"io_slave_rlast", false,-1);
    tracep->declBus(c+1239,"io_slave_rid", false,-1, 3,0);
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBit(c+343,"difftest", false,-1);
    tracep->declBit(c+344,"itrace_reg", false,-1);
    tracep->declBit(c+345,"jal", false,-1);
    tracep->declBit(c+346,"jalr", false,-1);
    tracep->declBit(c+347,"w_csr_en", false,-1);
    tracep->declBit(c+347,"r_csr_en", false,-1);
    tracep->declBus(c+348,"alu_a", false,-1, 31,0);
    tracep->declBus(c+349,"alu_b", false,-1, 31,0);
    tracep->declBus(c+350,"alu_out", false,-1, 31,0);
    tracep->declBit(c+351,"alu_a_sel", false,-1);
    tracep->declBus(c+352,"alu_b_sel", false,-1, 1,0);
    tracep->declBus(c+353,"alu_func", false,-1, 3,0);
    tracep->declBus(c+354,"branch_type", false,-1, 2,0);
    tracep->declBus(c+355,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+356,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+357,"mem_rd_en", false,-1);
    tracep->declBit(c+358,"mem_wr_en", false,-1);
    tracep->declBus(c+359,"mem_rd_data", false,-1, 31,0);
    tracep->declBus(c+360,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+361,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+362,"rs2_data", false,-1, 31,0);
    tracep->declBit(c+363,"w_en", false,-1);
    tracep->declBus(c+364,"w_sel", false,-1, 1,0);
    tracep->declBus(c+365,"w_data", false,-1, 31,0);
    tracep->declBus(c+366,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+367,"jump_jtype", false,-1);
    tracep->declBit(c+368,"jump_ecall", false,-1);
    tracep->declBit(c+369,"jump_mret", false,-1);
    tracep->declBit(c+370,"jump_branch", false,-1);
    tracep->declBus(c+371,"pc_plus4", false,-1, 31,0);
    tracep->declBus(c+372,"imm_out", false,-1, 31,0);
    tracep->declBit(c+373,"finish_1", false,-1);
    tracep->declBit(c+374,"wr_finish", false,-1);
    tracep->declBit(c+375,"rd_finish", false,-1);
    tracep->declBit(c+376,"valid_ifu", false,-1);
    tracep->declBit(c+377,"valid_idu", false,-1);
    tracep->declBus(c+378,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+379,"ifu_arvalid", false,-1);
    tracep->declBit(c+380,"ifu_arready", false,-1);
    tracep->declBus(c+1240,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1242,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+381,"ifu_rready", false,-1);
    tracep->declBit(c+382,"ifu_rvalid", false,-1);
    tracep->declBus(c+341,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1245,"ifu_rlast", false,-1);
    tracep->declBus(c+1246,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1247,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1248,"ifu_awvalid", false,-1);
    tracep->declBit(c+383,"ifu_awready", false,-1);
    tracep->declBus(c+1249,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1250,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1251,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1252,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1253,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1254,"ifu_wvalid", false,-1);
    tracep->declBit(c+384,"ifu_wready", false,-1);
    tracep->declBus(c+1255,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"ifu_wlast", false,-1);
    tracep->declBit(c+1257,"ifu_bready", false,-1);
    tracep->declBit(c+385,"ifu_bvalid", false,-1);
    tracep->declBus(c+1258,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1259,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+350,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"lsu_arvalid", false,-1);
    tracep->declBit(c+387,"lsu_arready", false,-1);
    tracep->declBus(c+1260,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1262,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1263,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+388,"lsu_rready", false,-1);
    tracep->declBit(c+389,"lsu_rvalid", false,-1);
    tracep->declBus(c+390,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1265,"lsu_rlast", false,-1);
    tracep->declBus(c+1266,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+350,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+391,"lsu_awvalid", false,-1);
    tracep->declBit(c+392,"lsu_awready", false,-1);
    tracep->declBus(c+1267,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1268,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1269,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+362,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+393,"lsu_wvalid", false,-1);
    tracep->declBit(c+394,"lsu_wready", false,-1);
    tracep->declBus(c+1271,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1272,"lsu_wlast", false,-1);
    tracep->declBit(c+395,"lsu_bready", false,-1);
    tracep->declBit(c+396,"lsu_bvalid", false,-1);
    tracep->declBus(c+1273,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1274,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+397,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"saxi_arvalid", false,-1);
    tracep->declBit(c+399,"saxi_arready", false,-1);
    tracep->declBus(c+1275,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+1276,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+1277,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+1278,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+400,"saxi_rready", false,-1);
    tracep->declBit(c+401,"saxi_rvalid", false,-1);
    tracep->declBus(c+402,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+1279,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+1280,"saxi_rlast", false,-1);
    tracep->declBus(c+1281,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+403,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+404,"saxi_awvalid", false,-1);
    tracep->declBit(c+405,"saxi_awready", false,-1);
    tracep->declBus(c+1282,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+1283,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+1284,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+1285,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+406,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+407,"saxi_wvalid", false,-1);
    tracep->declBit(c+408,"saxi_wready", false,-1);
    tracep->declBus(c+1286,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1287,"saxi_wlast", false,-1);
    tracep->declBit(c+409,"saxi_bready", false,-1);
    tracep->declBit(c+410,"saxi_bvalid", false,-1);
    tracep->declBus(c+1288,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+1289,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+1290,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1291,"uart_arvalid", false,-1);
    tracep->declBit(c+1292,"uart_arready", false,-1);
    tracep->declBus(c+1293,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1294,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1296,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+1297,"uart_rready", false,-1);
    tracep->declBit(c+1298,"uart_rvalid", false,-1);
    tracep->declBus(c+1299,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1300,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1301,"uart_rlast", false,-1);
    tracep->declBus(c+1302,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+412,"uart_awvalid", false,-1);
    tracep->declBit(c+413,"uart_awready", false,-1);
    tracep->declBus(c+1303,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1304,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1305,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1306,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+414,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+415,"uart_wvalid", false,-1);
    tracep->declBit(c+416,"uart_wready", false,-1);
    tracep->declBus(c+1307,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1308,"uart_wlast", false,-1);
    tracep->declBit(c+417,"uart_bready", false,-1);
    tracep->declBit(c+418,"uart_bvalid", false,-1);
    tracep->declBus(c+1309,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+1310,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+419,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+420,"clint_arvalid", false,-1);
    tracep->declBit(c+421,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+422,"clint_rready", false,-1);
    tracep->declBit(c+423,"clint_rvalid", false,-1);
    tracep->declBus(c+424,"clint_rdata", false,-1, 31,0);
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
    tracep->declBus(c+348,"SrcA", false,-1, 31,0);
    tracep->declBus(c+349,"SrcB", false,-1, 31,0);
    tracep->declBus(c+353,"alu_func", false,-1, 3,0);
    tracep->declBus(c+350,"ALUout", false,-1, 31,0);
    tracep->declBus(c+348,"signed_a", false,-1, 31,0);
    tracep->declBus(c+349,"signed_b", false,-1, 31,0);
    tracep->declBus(c+348,"unsigned_a", false,-1, 31,0);
    tracep->declBus(c+349,"unsigned_b", false,-1, 31,0);
    tracep->declBus(c+425,"a0", false,-1, 31,0);
    tracep->declBus(c+426,"a1", false,-1, 31,0);
    tracep->declBus(c+427,"a2", false,-1, 31,0);
    tracep->declBus(c+428,"a3", false,-1, 31,0);
    tracep->declBus(c+429,"a4", false,-1, 31,0);
    tracep->declBus(c+430,"a5", false,-1, 31,0);
    tracep->declBus(c+431,"a6", false,-1, 31,0);
    tracep->declBus(c+432,"a7", false,-1, 31,0);
    tracep->declBus(c+433,"a8", false,-1, 31,0);
    tracep->declBus(c+1225,"a9", false,-1, 31,0);
    tracep->declBus(c+1225,"a10", false,-1, 31,0);
    tracep->declBus(c+1225,"a11", false,-1, 31,0);
    tracep->declBus(c+1225,"a12", false,-1, 31,0);
    tracep->declBus(c+434,"a13", false,-1, 31,0);
    tracep->declBus(c+349,"a14", false,-1, 31,0);
    tracep->declBus(c+1225,"a15", false,-1, 31,0);
    tracep->pushNamePrefix("alumux ");
    tracep->declBus(c+1334,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+350,"out", false,-1, 31,0);
    tracep->declBus(c+353,"key", false,-1, 3,0);
    tracep->declArray(c+435,"lut", false,-1, 575,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1334,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1335,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1337,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+350,"out", false,-1, 31,0);
    tracep->declBus(c+353,"key", false,-1, 3,0);
    tracep->declBus(c+1225,"default_out", false,-1, 31,0);
    tracep->declArray(c+435,"lut", false,-1, 575,0);
    tracep->declBus(c+1338,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declQuad(c+453+i*2,"pair_list", true,(i+0), 35,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+1+i*1,"key_list", true,(i+0), 3,0);
    }
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+485+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+501,"lut_out", false,-1, 31,0);
    tracep->declBit(c+502,"hit", false,-1);
    tracep->declBus(c+1339,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("BSU ");
    tracep->declBus(c+361,"rs1", false,-1, 31,0);
    tracep->declBus(c+362,"rs2", false,-1, 31,0);
    tracep->declBus(c+354,"branch_type", false,-1, 2,0);
    tracep->declBit(c+370,"jump_branch", false,-1);
    tracep->declBus(c+361,"signed_rs1", false,-1, 31,0);
    tracep->declBus(c+362,"signed_rs2", false,-1, 31,0);
    tracep->declBus(c+361,"unsigned_rs1", false,-1, 31,0);
    tracep->declBus(c+362,"unsigned_rs2", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CLINT ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBus(c+419,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+420,"clint_arvalid", false,-1);
    tracep->declBit(c+421,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+422,"clint_rready", false,-1);
    tracep->declBit(c+423,"clint_rvalid", false,-1);
    tracep->declBus(c+424,"clint_rdata", false,-1, 31,0);
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
    tracep->declQuad(c+503,"mtime", false,-1, 63,0);
    tracep->declBus(c+1340,"mtime_addr_low", false,-1, 31,0);
    tracep->declBus(c+1341,"mtime_addr_high", false,-1, 31,0);
    tracep->declBus(c+505,"raddr", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("CSR ");
    tracep->declBit(c+506,"finish", false,-1);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBus(c+507,"r_csr_addr", false,-1, 11,0);
    tracep->declBus(c+507,"w_csr_addr", false,-1, 11,0);
    tracep->declBus(c+350,"w_csr_data", false,-1, 31,0);
    tracep->declBit(c+347,"w_csr_en", false,-1);
    tracep->declBit(c+347,"r_csr_en", false,-1);
    tracep->declBit(c+369,"jump_mret", false,-1);
    tracep->declBit(c+368,"jump_ecall", false,-1);
    tracep->declBus(c+360,"r_csr_data", false,-1, 31,0);
    tracep->declBus(c+508,"csr_mepc", false,-1, 31,0);
    tracep->declBus(c+509,"csr_mcause", false,-1, 31,0);
    tracep->declBus(c+510,"csr_mstatus", false,-1, 31,0);
    tracep->declBus(c+511,"csr_mtvec", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("GPR ");
    tracep->declBus(c+1342,"ADDR_WIDTH", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_WIDTH", false,-1, 31,0);
    tracep->declBit(c+506,"finish", false,-1);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBus(c+365,"w_data", false,-1, 31,0);
    tracep->declBus(c+512,"r_rs1_addr", false,-1, 4,0);
    tracep->declBus(c+513,"r_rs2_addr", false,-1, 4,0);
    tracep->declBus(c+514,"w_rd_addr", false,-1, 4,0);
    tracep->declBit(c+363,"w_en", false,-1);
    tracep->declBus(c+361,"rs1_data", false,-1, 31,0);
    tracep->declBus(c+362,"rs2_data", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+515+i*1,"rf", true,(i+0), 31,0);
    }
    tracep->declBus(c+17,"i", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IDU ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBit(c+376,"valid_ifu", false,-1);
    tracep->declBit(c+373,"finish_1", false,-1);
    tracep->declBit(c+377,"valid_idu", false,-1);
    tracep->declBit(c+351,"alu_a_sel", false,-1);
    tracep->declBus(c+352,"alu_b_sel", false,-1, 1,0);
    tracep->declBit(c+363,"w_en", false,-1);
    tracep->declBus(c+364,"w_sel", false,-1, 1,0);
    tracep->declBit(c+367,"jump_jtype", false,-1);
    tracep->declBit(c+368,"jump_ecall", false,-1);
    tracep->declBit(c+369,"jump_mret", false,-1);
    tracep->declBus(c+354,"branch_type", false,-1, 2,0);
    tracep->declBus(c+353,"alu_func", false,-1, 3,0);
    tracep->declBus(c+355,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+356,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBit(c+357,"mem_rd_en", false,-1);
    tracep->declBit(c+358,"mem_wr_en", false,-1);
    tracep->declBit(c+345,"jal_signal", false,-1);
    tracep->declBit(c+346,"jalr_signal", false,-1);
    tracep->declBit(c+347,"w_csr_en", false,-1);
    tracep->declBit(c+347,"r_csr_en", false,-1);
    tracep->declBus(c+547,"opcode", false,-1, 6,0);
    tracep->declBus(c+548,"funct3", false,-1, 2,0);
    tracep->declBus(c+549,"funct7", false,-1, 6,0);
    tracep->declBus(c+507,"funct12", false,-1, 11,0);
    tracep->declBus(c+550,"sys_funct", false,-1, 24,0);
    tracep->declBit(c+551,"is_lui", false,-1);
    tracep->declBit(c+552,"is_auipc", false,-1);
    tracep->declBit(c+345,"is_jal", false,-1);
    tracep->declBit(c+346,"is_jalr", false,-1);
    tracep->declBit(c+553,"is_beq", false,-1);
    tracep->declBit(c+554,"is_bne", false,-1);
    tracep->declBit(c+555,"is_blt", false,-1);
    tracep->declBit(c+556,"is_bge", false,-1);
    tracep->declBit(c+557,"is_bltu", false,-1);
    tracep->declBit(c+558,"is_bgeu", false,-1);
    tracep->declBit(c+559,"is_lb", false,-1);
    tracep->declBit(c+560,"is_lh", false,-1);
    tracep->declBit(c+561,"is_lw", false,-1);
    tracep->declBit(c+562,"is_lbu", false,-1);
    tracep->declBit(c+563,"is_lhu", false,-1);
    tracep->declBit(c+564,"is_sb", false,-1);
    tracep->declBit(c+565,"is_sh", false,-1);
    tracep->declBit(c+566,"is_sw", false,-1);
    tracep->declBit(c+567,"is_addi", false,-1);
    tracep->declBit(c+568,"is_slti", false,-1);
    tracep->declBit(c+569,"is_sltiu", false,-1);
    tracep->declBit(c+570,"is_xori", false,-1);
    tracep->declBit(c+571,"is_ori", false,-1);
    tracep->declBit(c+572,"is_andi", false,-1);
    tracep->declBit(c+573,"is_slli", false,-1);
    tracep->declBit(c+574,"is_srli", false,-1);
    tracep->declBit(c+575,"is_srai", false,-1);
    tracep->declBit(c+576,"is_add", false,-1);
    tracep->declBit(c+577,"is_sub", false,-1);
    tracep->declBit(c+578,"is_sll", false,-1);
    tracep->declBit(c+579,"is_slt", false,-1);
    tracep->declBit(c+580,"is_sltu", false,-1);
    tracep->declBit(c+581,"is_xor", false,-1);
    tracep->declBit(c+582,"is_srl", false,-1);
    tracep->declBit(c+583,"is_sra", false,-1);
    tracep->declBit(c+584,"is_or", false,-1);
    tracep->declBit(c+585,"is_and", false,-1);
    tracep->declBit(c+586,"is_csrrs", false,-1);
    tracep->declBit(c+587,"is_csrrw", false,-1);
    tracep->declBit(c+368,"is_ecall", false,-1);
    tracep->declBit(c+369,"is_mret", false,-1);
    tracep->declBit(c+588,"is_add_type", false,-1);
    tracep->declBit(c+589,"is_u_type", false,-1);
    tracep->declBit(c+345,"is_jump_type", false,-1);
    tracep->declBit(c+590,"is_b_type", false,-1);
    tracep->declBit(c+591,"is_r_type", false,-1);
    tracep->declBit(c+592,"is_i_type", false,-1);
    tracep->declBit(c+358,"is_s_type", false,-1);
    tracep->declBit(c+357,"is_load_type", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IFU ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBit(c+593,"jump_en", false,-1);
    tracep->declBus(c+366,"jump_pc", false,-1, 31,0);
    tracep->declBit(c+594,"finish", false,-1);
    tracep->declBit(c+376,"valid_ifu", false,-1);
    tracep->declBus(c+342,"pc", false,-1, 31,0);
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBit(c+343,"difftest", false,-1);
    tracep->declBit(c+344,"itrace_reg", false,-1);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+379,"ifu_arvalid", false,-1);
    tracep->declBit(c+380,"ifu_arready", false,-1);
    tracep->declBus(c+1240,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1242,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+381,"ifu_rready", false,-1);
    tracep->declBit(c+382,"ifu_rvalid", false,-1);
    tracep->declBus(c+341,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1245,"ifu_rlast", false,-1);
    tracep->declBus(c+1246,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1247,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1248,"ifu_awvalid", false,-1);
    tracep->declBit(c+383,"ifu_awready", false,-1);
    tracep->declBus(c+1249,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1250,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1251,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1252,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1253,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1254,"ifu_wvalid", false,-1);
    tracep->declBit(c+384,"ifu_wready", false,-1);
    tracep->declBus(c+1255,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"ifu_wlast", false,-1);
    tracep->declBit(c+1257,"ifu_bready", false,-1);
    tracep->declBit(c+385,"ifu_bvalid", false,-1);
    tracep->declBus(c+1258,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1259,"ifu_bid", false,-1, 3,0);
    tracep->declBit(c+1343,"rvalid", false,-1);
    tracep->declBit(c+595,"axi_arvalid", false,-1);
    tracep->declBus(c+596,"counter", false,-1, 31,0);
    tracep->declBit(c+597,"axi_rready", false,-1);
    tracep->declBus(c+598,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("IMM ");
    tracep->declBus(c+341,"inst", false,-1, 31,0);
    tracep->declBus(c+372,"immout", false,-1, 31,0);
    tracep->declBus(c+547,"opcode", false,-1, 6,0);
    tracep->declBus(c+599,"out1", false,-1, 31,0);
    tracep->declBus(c+599,"out2", false,-1, 31,0);
    tracep->declBus(c+600,"out3", false,-1, 31,0);
    tracep->declBus(c+601,"out4", false,-1, 31,0);
    tracep->declBus(c+602,"out5", false,-1, 31,0);
    tracep->declBus(c+602,"out6", false,-1, 31,0);
    tracep->declBus(c+603,"out7", false,-1, 31,0);
    tracep->declBus(c+602,"out8", false,-1, 31,0);
    tracep->pushNamePrefix("imm_mux ");
    tracep->declBus(c+1344,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1345,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+372,"out", false,-1, 31,0);
    tracep->declBus(c+547,"key", false,-1, 6,0);
    tracep->declBus(c+1225,"default_out", false,-1, 31,0);
    tracep->declArray(c+604,"lut", false,-1, 311,0);
    tracep->pushNamePrefix("i0 ");
    tracep->declBus(c+1344,"NR_KEY", false,-1, 31,0);
    tracep->declBus(c+1345,"KEY_LEN", false,-1, 31,0);
    tracep->declBus(c+1336,"DATA_LEN", false,-1, 31,0);
    tracep->declBus(c+1346,"HAS_DEFAULT", false,-1, 31,0);
    tracep->declBus(c+372,"out", false,-1, 31,0);
    tracep->declBus(c+547,"key", false,-1, 6,0);
    tracep->declBus(c+1225,"default_out", false,-1, 31,0);
    tracep->declArray(c+604,"lut", false,-1, 311,0);
    tracep->declBus(c+1347,"PAIR_LEN", false,-1, 31,0);
    for (int i = 0; i < 8; ++i) {
        tracep->declQuad(c+614+i*2,"pair_list", true,(i+0), 38,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+18+i*1,"key_list", true,(i+0), 6,0);
    }
    for (int i = 0; i < 8; ++i) {
        tracep->declBus(c+630+i*1,"data_list", true,(i+0), 31,0);
    }
    tracep->declBus(c+638,"lut_out", false,-1, 31,0);
    tracep->declBit(c+639,"hit", false,-1);
    tracep->declBus(c+1348,"i", false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("LSU ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBit(c+640,"mem_wr_en", false,-1);
    tracep->declBus(c+355,"memory_rd_ctrl", false,-1, 2,0);
    tracep->declBus(c+356,"memory_wr_ctrl", false,-1, 7,0);
    tracep->declBus(c+362,"mem_wr_data", false,-1, 31,0);
    tracep->declBus(c+350,"mem_rd_addr", false,-1, 31,0);
    tracep->declBus(c+350,"mem_wr_addr", false,-1, 31,0);
    tracep->declBus(c+359,"mem_rd_data", false,-1, 31,0);
    tracep->declBit(c+377,"valid_idu", false,-1);
    tracep->declBit(c+374,"wr_finish", false,-1);
    tracep->declBit(c+375,"rd_finish", false,-1);
    tracep->declBus(c+350,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"lsu_arvalid", false,-1);
    tracep->declBit(c+387,"lsu_arready", false,-1);
    tracep->declBus(c+1260,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1262,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1263,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+388,"lsu_rready", false,-1);
    tracep->declBit(c+389,"lsu_rvalid", false,-1);
    tracep->declBus(c+390,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1265,"lsu_rlast", false,-1);
    tracep->declBus(c+1266,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+350,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+391,"lsu_awvalid", false,-1);
    tracep->declBit(c+392,"lsu_awready", false,-1);
    tracep->declBus(c+1267,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1268,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1269,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+362,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+393,"lsu_wvalid", false,-1);
    tracep->declBit(c+394,"lsu_wready", false,-1);
    tracep->declBus(c+1271,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1272,"lsu_wlast", false,-1);
    tracep->declBit(c+395,"lsu_bready", false,-1);
    tracep->declBit(c+396,"lsu_bvalid", false,-1);
    tracep->declBus(c+1273,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1274,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+641,"mem_move_out", false,-1, 31,0);
    tracep->declBus(c+390,"mem_out", false,-1, 31,0);
    tracep->declBit(c+642,"axi_arvalid", false,-1);
    tracep->declBus(c+643,"counter", false,-1, 31,0);
    tracep->declBit(c+644,"axi_rready", false,-1);
    tracep->declBus(c+645,"counter_rready", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("SRAM ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBus(c+356,"wmask", false,-1, 7,0);
    tracep->declBus(c+397,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"saxi_arvalid", false,-1);
    tracep->declBit(c+399,"saxi_arready", false,-1);
    tracep->declBus(c+1275,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+1276,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+1277,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+1278,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+400,"saxi_rready", false,-1);
    tracep->declBit(c+401,"saxi_rvalid", false,-1);
    tracep->declBus(c+402,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+1279,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+1280,"saxi_rlast", false,-1);
    tracep->declBus(c+1281,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+403,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+404,"saxi_awvalid", false,-1);
    tracep->declBit(c+405,"saxi_awready", false,-1);
    tracep->declBus(c+1282,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+1283,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+1284,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+1285,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+406,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+407,"saxi_wvalid", false,-1);
    tracep->declBit(c+408,"saxi_wready", false,-1);
    tracep->declBus(c+1286,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1287,"saxi_wlast", false,-1);
    tracep->declBit(c+409,"saxi_bready", false,-1);
    tracep->declBit(c+410,"saxi_bvalid", false,-1);
    tracep->declBus(c+1288,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+1289,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+646,"axi_raddr", false,-1, 31,0);
    tracep->declBus(c+647,"axi_data_to_read", false,-1, 31,0);
    tracep->declBit(c+648,"aw_hand", false,-1);
    tracep->declBus(c+649,"axi_waddr", false,-1, 31,0);
    tracep->declBit(c+650,"w_hand", false,-1);
    tracep->declBus(c+651,"axi_wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("UART ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBus(c+1290,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1291,"uart_arvalid", false,-1);
    tracep->declBit(c+1292,"uart_arready", false,-1);
    tracep->declBus(c+1293,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1294,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1296,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+1297,"uart_rready", false,-1);
    tracep->declBit(c+1298,"uart_rvalid", false,-1);
    tracep->declBus(c+1299,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1300,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1301,"uart_rlast", false,-1);
    tracep->declBus(c+1302,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+412,"uart_awvalid", false,-1);
    tracep->declBit(c+413,"uart_awready", false,-1);
    tracep->declBus(c+1303,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1304,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1305,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1306,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+414,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+415,"uart_wvalid", false,-1);
    tracep->declBit(c+416,"uart_wready", false,-1);
    tracep->declBus(c+1307,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1308,"uart_wlast", false,-1);
    tracep->declBit(c+417,"uart_bready", false,-1);
    tracep->declBit(c+418,"uart_bvalid", false,-1);
    tracep->declBus(c+1309,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+1310,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+378,"uart_reg", false,-1, 7,0);
    tracep->declBus(c+1349,"uart_addr", false,-1, 31,0);
    tracep->declBit(c+652,"aw_hand", false,-1);
    tracep->declBus(c+653,"waddr", false,-1, 31,0);
    tracep->declBit(c+654,"w_hand", false,-1);
    tracep->declBus(c+655,"wdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("XBAR ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1183,"rst", false,-1);
    tracep->declBus(c+342,"ifu_araddr", false,-1, 31,0);
    tracep->declBit(c+379,"ifu_arvalid", false,-1);
    tracep->declBit(c+380,"ifu_arready", false,-1);
    tracep->declBus(c+1240,"ifu_arid", false,-1, 3,0);
    tracep->declBus(c+1241,"ifu_arlen", false,-1, 7,0);
    tracep->declBus(c+1242,"ifu_arsize", false,-1, 2,0);
    tracep->declBus(c+1243,"ifu_arburst", false,-1, 1,0);
    tracep->declBit(c+381,"ifu_rready", false,-1);
    tracep->declBit(c+382,"ifu_rvalid", false,-1);
    tracep->declBus(c+341,"ifu_rdata", false,-1, 31,0);
    tracep->declBus(c+1244,"ifu_rresp", false,-1, 1,0);
    tracep->declBit(c+1245,"ifu_rlast", false,-1);
    tracep->declBus(c+1246,"ifu_rid", false,-1, 3,0);
    tracep->declBus(c+1247,"ifu_awaddr", false,-1, 31,0);
    tracep->declBit(c+1248,"ifu_awvalid", false,-1);
    tracep->declBit(c+383,"ifu_awready", false,-1);
    tracep->declBus(c+1249,"ifu_awid", false,-1, 3,0);
    tracep->declBus(c+1250,"ifu_awlen", false,-1, 7,0);
    tracep->declBus(c+1251,"ifu_awsize", false,-1, 2,0);
    tracep->declBus(c+1252,"ifu_awburst", false,-1, 1,0);
    tracep->declBus(c+1253,"ifu_wdata", false,-1, 31,0);
    tracep->declBit(c+1254,"ifu_wvalid", false,-1);
    tracep->declBit(c+384,"ifu_wready", false,-1);
    tracep->declBus(c+1255,"ifu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1256,"ifu_wlast", false,-1);
    tracep->declBit(c+1257,"ifu_bready", false,-1);
    tracep->declBit(c+385,"ifu_bvalid", false,-1);
    tracep->declBus(c+1258,"ifu_bresp", false,-1, 1,0);
    tracep->declBus(c+1259,"ifu_bid", false,-1, 3,0);
    tracep->declBus(c+350,"lsu_araddr", false,-1, 31,0);
    tracep->declBit(c+386,"lsu_arvalid", false,-1);
    tracep->declBit(c+387,"lsu_arready", false,-1);
    tracep->declBus(c+1260,"lsu_arid", false,-1, 3,0);
    tracep->declBus(c+1261,"lsu_arlen", false,-1, 7,0);
    tracep->declBus(c+1262,"lsu_arsize", false,-1, 2,0);
    tracep->declBus(c+1263,"lsu_arburst", false,-1, 1,0);
    tracep->declBit(c+388,"lsu_rready", false,-1);
    tracep->declBit(c+389,"lsu_rvalid", false,-1);
    tracep->declBus(c+390,"lsu_rdata", false,-1, 31,0);
    tracep->declBus(c+1264,"lsu_rresp", false,-1, 1,0);
    tracep->declBit(c+1265,"lsu_rlast", false,-1);
    tracep->declBus(c+1266,"lsu_rid", false,-1, 3,0);
    tracep->declBus(c+350,"lsu_awaddr", false,-1, 31,0);
    tracep->declBit(c+391,"lsu_awvalid", false,-1);
    tracep->declBit(c+392,"lsu_awready", false,-1);
    tracep->declBus(c+1267,"lsu_awid", false,-1, 3,0);
    tracep->declBus(c+1268,"lsu_awlen", false,-1, 7,0);
    tracep->declBus(c+1269,"lsu_awsize", false,-1, 2,0);
    tracep->declBus(c+1270,"lsu_awburst", false,-1, 1,0);
    tracep->declBus(c+362,"lsu_wdata", false,-1, 31,0);
    tracep->declBit(c+393,"lsu_wvalid", false,-1);
    tracep->declBit(c+394,"lsu_wready", false,-1);
    tracep->declBus(c+1271,"lsu_wstrb", false,-1, 3,0);
    tracep->declBit(c+1272,"lsu_wlast", false,-1);
    tracep->declBit(c+395,"lsu_bready", false,-1);
    tracep->declBit(c+396,"lsu_bvalid", false,-1);
    tracep->declBus(c+1273,"lsu_bresp", false,-1, 1,0);
    tracep->declBus(c+1274,"lsu_bid", false,-1, 3,0);
    tracep->declBus(c+397,"saxi_araddr", false,-1, 31,0);
    tracep->declBit(c+398,"saxi_arvalid", false,-1);
    tracep->declBit(c+399,"saxi_arready", false,-1);
    tracep->declBus(c+1275,"saxi_arid", false,-1, 3,0);
    tracep->declBus(c+1276,"saxi_arlen", false,-1, 7,0);
    tracep->declBus(c+1277,"saxi_arsize", false,-1, 2,0);
    tracep->declBus(c+1278,"saxi_arburst", false,-1, 1,0);
    tracep->declBit(c+400,"saxi_rready", false,-1);
    tracep->declBit(c+401,"saxi_rvalid", false,-1);
    tracep->declBus(c+402,"saxi_rdata", false,-1, 31,0);
    tracep->declBus(c+1279,"saxi_rresp", false,-1, 1,0);
    tracep->declBit(c+1280,"saxi_rlast", false,-1);
    tracep->declBus(c+1281,"saxi_rid", false,-1, 3,0);
    tracep->declBus(c+403,"saxi_awaddr", false,-1, 31,0);
    tracep->declBit(c+404,"saxi_awvalid", false,-1);
    tracep->declBit(c+405,"saxi_awready", false,-1);
    tracep->declBus(c+1282,"saxi_awid", false,-1, 3,0);
    tracep->declBus(c+1283,"saxi_awlen", false,-1, 7,0);
    tracep->declBus(c+1284,"saxi_awsize", false,-1, 2,0);
    tracep->declBus(c+1285,"saxi_awburst", false,-1, 1,0);
    tracep->declBus(c+406,"saxi_wdata", false,-1, 31,0);
    tracep->declBit(c+407,"saxi_wvalid", false,-1);
    tracep->declBit(c+408,"saxi_wready", false,-1);
    tracep->declBus(c+1286,"saxi_wstrb", false,-1, 3,0);
    tracep->declBit(c+1287,"saxi_wlast", false,-1);
    tracep->declBit(c+409,"saxi_bready", false,-1);
    tracep->declBit(c+410,"saxi_bvalid", false,-1);
    tracep->declBus(c+1288,"saxi_bresp", false,-1, 1,0);
    tracep->declBus(c+1289,"saxi_bid", false,-1, 3,0);
    tracep->declBus(c+1290,"uart_araddr", false,-1, 31,0);
    tracep->declBit(c+1291,"uart_arvalid", false,-1);
    tracep->declBit(c+1292,"uart_arready", false,-1);
    tracep->declBus(c+1293,"uart_arid", false,-1, 3,0);
    tracep->declBus(c+1294,"uart_arlen", false,-1, 7,0);
    tracep->declBus(c+1295,"uart_arsize", false,-1, 2,0);
    tracep->declBus(c+1296,"uart_arburst", false,-1, 1,0);
    tracep->declBit(c+1297,"uart_rready", false,-1);
    tracep->declBit(c+1298,"uart_rvalid", false,-1);
    tracep->declBus(c+1299,"uart_rdata", false,-1, 31,0);
    tracep->declBus(c+1300,"uart_rresp", false,-1, 1,0);
    tracep->declBit(c+1301,"uart_rlast", false,-1);
    tracep->declBus(c+1302,"uart_rid", false,-1, 3,0);
    tracep->declBus(c+411,"uart_awaddr", false,-1, 31,0);
    tracep->declBit(c+412,"uart_awvalid", false,-1);
    tracep->declBit(c+413,"uart_awready", false,-1);
    tracep->declBus(c+1303,"uart_awid", false,-1, 3,0);
    tracep->declBus(c+1304,"uart_awlen", false,-1, 7,0);
    tracep->declBus(c+1305,"uart_awsize", false,-1, 2,0);
    tracep->declBus(c+1306,"uart_awburst", false,-1, 1,0);
    tracep->declBus(c+414,"uart_wdata", false,-1, 31,0);
    tracep->declBit(c+415,"uart_wvalid", false,-1);
    tracep->declBit(c+416,"uart_wready", false,-1);
    tracep->declBus(c+1307,"uart_wstrb", false,-1, 3,0);
    tracep->declBit(c+1308,"uart_wlast", false,-1);
    tracep->declBit(c+417,"uart_bready", false,-1);
    tracep->declBit(c+418,"uart_bvalid", false,-1);
    tracep->declBus(c+1309,"uart_bresp", false,-1, 1,0);
    tracep->declBus(c+1310,"uart_bid", false,-1, 3,0);
    tracep->declBus(c+419,"clint_araddr", false,-1, 31,0);
    tracep->declBit(c+420,"clint_arvalid", false,-1);
    tracep->declBit(c+421,"clint_arready", false,-1);
    tracep->declBus(c+1311,"clint_arid", false,-1, 3,0);
    tracep->declBus(c+1312,"clint_arlen", false,-1, 7,0);
    tracep->declBus(c+1313,"clint_arsize", false,-1, 2,0);
    tracep->declBus(c+1314,"clint_arburst", false,-1, 1,0);
    tracep->declBit(c+422,"clint_rready", false,-1);
    tracep->declBit(c+423,"clint_rvalid", false,-1);
    tracep->declBus(c+424,"clint_rdata", false,-1, 31,0);
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
    tracep->declBit(c+656,"arb_ready", false,-1);
    tracep->declBus(c+657,"state", false,-1, 3,0);
    tracep->declBit(c+658,"wait_read", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("cpu_reset_chain ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"io_d", false,-1);
    tracep->declBit(c+659,"io_q", false,-1);
    tracep->pushNamePrefix("output_chain ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"io_d", false,-1);
    tracep->declBit(c+659,"io_q", false,-1);
    tracep->declBit(c+659,"sync_0", false,-1);
    tracep->declBit(c+660,"sync_1", false,-1);
    tracep->declBit(c+661,"sync_2", false,-1);
    tracep->declBit(c+662,"sync_3", false,-1);
    tracep->declBit(c+663,"sync_4", false,-1);
    tracep->declBit(c+664,"sync_5", false,-1);
    tracep->declBit(c+665,"sync_6", false,-1);
    tracep->declBit(c+666,"sync_7", false,-1);
    tracep->declBit(c+667,"sync_8", false,-1);
    tracep->declBit(c+668,"sync_9", false,-1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lgpio ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+716,"auto_in_psel", false,-1);
    tracep->declBit(c+717,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"auto_in_pready", false,-1);
    tracep->declBit(c+1203,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1204,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1152,"gpio_bundle_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_bundle_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_bundle_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_bundle_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_bundle_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_bundle_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_bundle_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_bundle_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_bundle_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_bundle_seg_7", false,-1, 7,0);
    tracep->pushNamePrefix("mgpio ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1023,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+716,"in_psel", false,-1);
    tracep->declBit(c+717,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1202,"in_pready", false,-1);
    tracep->declBus(c+1204,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1203,"in_pslverr", false,-1);
    tracep->declBus(c+1152,"gpio_out", false,-1, 15,0);
    tracep->declBus(c+1153,"gpio_in", false,-1, 15,0);
    tracep->declBus(c+1154,"gpio_seg_0", false,-1, 7,0);
    tracep->declBus(c+1155,"gpio_seg_1", false,-1, 7,0);
    tracep->declBus(c+1156,"gpio_seg_2", false,-1, 7,0);
    tracep->declBus(c+1157,"gpio_seg_3", false,-1, 7,0);
    tracep->declBus(c+1158,"gpio_seg_4", false,-1, 7,0);
    tracep->declBus(c+1159,"gpio_seg_5", false,-1, 7,0);
    tracep->declBus(c+1160,"gpio_seg_6", false,-1, 7,0);
    tracep->declBus(c+1161,"gpio_seg_7", false,-1, 7,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lkeyboard ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+714,"auto_in_psel", false,-1);
    tracep->declBit(c+715,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"auto_in_pready", false,-1);
    tracep->declBit(c+1200,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1201,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1162,"ps2_bundle_clk", false,-1);
    tracep->declBit(c+1163,"ps2_bundle_data", false,-1);
    tracep->pushNamePrefix("mps2 ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1023,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+714,"in_psel", false,-1);
    tracep->declBit(c+715,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1199,"in_pready", false,-1);
    tracep->declBus(c+1201,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1200,"in_pslverr", false,-1);
    tracep->declBit(c+1162,"ps2_clk", false,-1);
    tracep->declBit(c+1163,"ps2_data", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lmrom ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+141,"auto_in_awvalid", false,-1);
    tracep->declBit(c+142,"auto_in_wvalid", false,-1);
    tracep->declBit(c+143,"auto_in_arready", false,-1);
    tracep->declBit(c+144,"auto_in_arvalid", false,-1);
    tracep->declBus(c+46,"auto_in_arid", false,-1, 3,0);
    tracep->declBus(c+145,"auto_in_araddr", false,-1, 29,0);
    tracep->declBit(c+724,"auto_in_rready", false,-1);
    tracep->declBit(c+146,"auto_in_rvalid", false,-1);
    tracep->declBus(c+147,"auto_in_rid", false,-1, 3,0);
    tracep->declBus(c+148,"auto_in_rdata", false,-1, 31,0);
    tracep->declBit(c+146,"state", false,-1);
    tracep->declBus(c+148,"nodeIn_rdata_r", false,-1, 31,0);
    tracep->declBus(c+147,"nodeIn_rid_r", false,-1, 3,0);
    tracep->pushNamePrefix("mrom ");
    tracep->declBus(c+669,"raddr", false,-1, 31,0);
    tracep->declBit(c+670,"ren", false,-1);
    tracep->declBus(c+671,"rdata", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("lpsram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1009,"auto_in_psel", false,-1);
    tracep->declBit(c+718,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1178,"auto_in_pready", false,-1);
    tracep->declBit(c+1195,"auto_in_pslverr", false,-1);
    tracep->declBus(c+34,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1174,"qspi_bundle_sck", false,-1);
    tracep->declBit(c+1175,"qspi_bundle_ce_n", false,-1);
    tracep->declBus(c+1052,"qspi_bundle_dio", false,-1, 3,0);
    tracep->pushNamePrefix("mpsram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1002,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1009,"in_psel", false,-1);
    tracep->declBit(c+718,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1178,"in_pready", false,-1);
    tracep->declBus(c+34,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1195,"in_pslverr", false,-1);
    tracep->declBit(c+1174,"qspi_sck", false,-1);
    tracep->declBit(c+1175,"qspi_ce_n", false,-1);
    tracep->declBus(c+1052,"qspi_dio", false,-1, 3,0);
    tracep->declBus(c+1052,"din", false,-1, 3,0);
    tracep->declBus(c+1136,"dout", false,-1, 3,0);
    tracep->declBus(c+1137,"douten", false,-1, 3,0);
    tracep->declBit(c+1184,"ack", false,-1);
    tracep->pushNamePrefix("u0 ");
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBus(c+1002,"adr_i", false,-1, 31,0);
    tracep->declBus(c+1004,"dat_i", false,-1, 31,0);
    tracep->declBus(c+34,"dat_o", false,-1, 31,0);
    tracep->declBus(c+1005,"sel_i", false,-1, 3,0);
    tracep->declBit(c+1009,"cyc_i", false,-1);
    tracep->declBit(c+1009,"stb_i", false,-1);
    tracep->declBit(c+1184,"ack_o", false,-1);
    tracep->declBit(c+1003,"we_i", false,-1);
    tracep->declBit(c+1174,"sck", false,-1);
    tracep->declBit(c+1175,"ce_n", false,-1);
    tracep->declBus(c+1052,"din", false,-1, 3,0);
    tracep->declBus(c+1136,"dout", false,-1, 3,0);
    tracep->declBus(c+1137,"douten", false,-1, 3,0);
    tracep->declBus(c+1350,"ST_IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"ST_WAIT", false,-1, 0,0);
    tracep->declBit(c+772,"mr_sck", false,-1);
    tracep->declBit(c+773,"mr_ce_n", false,-1);
    tracep->declBus(c+1052,"mr_din", false,-1, 3,0);
    tracep->declBus(c+774,"mr_dout", false,-1, 3,0);
    tracep->declBit(c+775,"mr_doe", false,-1);
    tracep->declBit(c+776,"mw_sck", false,-1);
    tracep->declBit(c+777,"mw_ce_n", false,-1);
    tracep->declBus(c+1052,"mw_din", false,-1, 3,0);
    tracep->declBus(c+1138,"mw_dout", false,-1, 3,0);
    tracep->declBit(c+778,"mw_doe", false,-1);
    tracep->declBit(c+1139,"mr_rd", false,-1);
    tracep->declBit(c+779,"mr_done", false,-1);
    tracep->declBit(c+1140,"mw_wr", false,-1);
    tracep->declBit(c+1141,"mw_done", false,-1);
    tracep->declBit(c+1009,"wb_valid", false,-1);
    tracep->declBit(c+1024,"wb_we", false,-1);
    tracep->declBit(c+1025,"wb_re", false,-1);
    tracep->declBit(c+780,"state", false,-1);
    tracep->declBit(c+1142,"nstate", false,-1);
    tracep->declBus(c+1026,"size", false,-1, 2,0);
    tracep->declBus(c+1027,"byte0", false,-1, 7,0);
    tracep->declBus(c+1028,"byte1", false,-1, 7,0);
    tracep->declBus(c+1029,"byte2", false,-1, 7,0);
    tracep->declBus(c+1030,"byte3", false,-1, 7,0);
    tracep->declBus(c+1031,"wdata", false,-1, 31,0);
    tracep->pushNamePrefix("MR ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1185,"rst_n", false,-1);
    tracep->declBus(c+1032,"addr", false,-1, 23,0);
    tracep->declBit(c+1139,"rd", false,-1);
    tracep->declBus(c+1352,"size", false,-1, 2,0);
    tracep->declBit(c+779,"done", false,-1);
    tracep->declBus(c+34,"line", false,-1, 31,0);
    tracep->declBit(c+772,"sck", false,-1);
    tracep->declBit(c+773,"ce_n", false,-1);
    tracep->declBus(c+1052,"din", false,-1, 3,0);
    tracep->declBus(c+774,"dout", false,-1, 3,0);
    tracep->declBit(c+775,"douten", false,-1);
    tracep->declBus(c+1350,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"READ", false,-1, 0,0);
    tracep->declBus(c+1353,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+781,"state", false,-1);
    tracep->declBit(c+1143,"nstate", false,-1);
    tracep->declBus(c+782,"counter", false,-1, 7,0);
    tracep->declBus(c+783,"saddr", false,-1, 23,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+672+i*1,"data", true,(i+0), 7,0);
    }
    tracep->declBus(c+1354,"CMD_EBH", false,-1, 7,0);
    tracep->declBus(c+784,"byte_index", false,-1, 1,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("MW ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1185,"rst_n", false,-1);
    tracep->declBus(c+1033,"addr", false,-1, 23,0);
    tracep->declBus(c+1031,"line", false,-1, 31,0);
    tracep->declBus(c+1026,"size", false,-1, 2,0);
    tracep->declBit(c+1140,"wr", false,-1);
    tracep->declBit(c+1141,"done", false,-1);
    tracep->declBit(c+776,"sck", false,-1);
    tracep->declBit(c+777,"ce_n", false,-1);
    tracep->declBus(c+1052,"din", false,-1, 3,0);
    tracep->declBus(c+1138,"dout", false,-1, 3,0);
    tracep->declBit(c+778,"douten", false,-1);
    tracep->declBus(c+1350,"IDLE", false,-1, 0,0);
    tracep->declBus(c+1351,"WRITE", false,-1, 0,0);
    tracep->declBus(c+1034,"FINAL_COUNT", false,-1, 7,0);
    tracep->declBit(c+785,"state", false,-1);
    tracep->declBit(c+1144,"nstate", false,-1);
    tracep->declBus(c+786,"counter", false,-1, 7,0);
    tracep->declBus(c+787,"saddr", false,-1, 23,0);
    tracep->declBus(c+1355,"CMD_38H", false,-1, 7,0);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("lsdram_apb ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+710,"auto_in_psel", false,-1);
    tracep->declBit(c+711,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1002,"auto_in_paddr", false,-1, 31,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+768,"auto_in_pready", false,-1);
    tracep->declBit(c+1195,"auto_in_pslverr", false,-1);
    tracep->declBus(c+769,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1176,"sdram_bundle_clk", false,-1);
    tracep->declBit(c+759,"sdram_bundle_cke", false,-1);
    tracep->declBit(c+760,"sdram_bundle_cs", false,-1);
    tracep->declBit(c+761,"sdram_bundle_ras", false,-1);
    tracep->declBit(c+762,"sdram_bundle_cas", false,-1);
    tracep->declBit(c+763,"sdram_bundle_we", false,-1);
    tracep->declBus(c+764,"sdram_bundle_a", false,-1, 12,0);
    tracep->declBus(c+765,"sdram_bundle_ba", false,-1, 1,0);
    tracep->declBus(c+766,"sdram_bundle_dqm", false,-1, 1,0);
    tracep->declBus(c+767,"sdram_bundle_dq", false,-1, 15,0);
    tracep->pushNamePrefix("msdram ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1002,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+710,"in_psel", false,-1);
    tracep->declBit(c+711,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+768,"in_pready", false,-1);
    tracep->declBus(c+769,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1195,"in_pslverr", false,-1);
    tracep->declBit(c+1176,"sdram_clk", false,-1);
    tracep->declBit(c+759,"sdram_cke", false,-1);
    tracep->declBit(c+760,"sdram_cs", false,-1);
    tracep->declBit(c+761,"sdram_ras", false,-1);
    tracep->declBit(c+762,"sdram_cas", false,-1);
    tracep->declBit(c+763,"sdram_we", false,-1);
    tracep->declBus(c+764,"sdram_a", false,-1, 12,0);
    tracep->declBus(c+765,"sdram_ba", false,-1, 1,0);
    tracep->declBus(c+766,"sdram_dqm", false,-1, 1,0);
    tracep->declBus(c+767,"sdram_dq", false,-1, 15,0);
    tracep->declBit(c+788,"sdram_dout_en", false,-1);
    tracep->declBus(c+789,"sdram_dout", false,-1, 15,0);
    tracep->declBus(c+676,"state", false,-1, 1,0);
    tracep->declBit(c+790,"req_accept", false,-1);
    tracep->declBit(c+1035,"is_read", false,-1);
    tracep->declBit(c+1036,"is_write", false,-1);
    tracep->pushNamePrefix("u_sdram_ctrl ");
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBus(c+1037,"inport_wr_i", false,-1, 3,0);
    tracep->declBit(c+1035,"inport_rd_i", false,-1);
    tracep->declBus(c+1227,"inport_len_i", false,-1, 7,0);
    tracep->declBus(c+1002,"inport_addr_i", false,-1, 31,0);
    tracep->declBus(c+1004,"inport_write_data_i", false,-1, 31,0);
    tracep->declBus(c+767,"sdram_data_input_i", false,-1, 15,0);
    tracep->declBit(c+790,"inport_accept_o", false,-1);
    tracep->declBit(c+768,"inport_ack_o", false,-1);
    tracep->declBit(c+1195,"inport_error_o", false,-1);
    tracep->declBus(c+769,"inport_read_data_o", false,-1, 31,0);
    tracep->declBit(c+1176,"sdram_clk_o", false,-1);
    tracep->declBit(c+759,"sdram_cke_o", false,-1);
    tracep->declBit(c+760,"sdram_cs_o", false,-1);
    tracep->declBit(c+761,"sdram_ras_o", false,-1);
    tracep->declBit(c+762,"sdram_cas_o", false,-1);
    tracep->declBit(c+763,"sdram_we_o", false,-1);
    tracep->declBus(c+766,"sdram_dqm_o", false,-1, 1,0);
    tracep->declBus(c+764,"sdram_addr_o", false,-1, 12,0);
    tracep->declBus(c+765,"sdram_ba_o", false,-1, 1,0);
    tracep->declBus(c+789,"sdram_data_output_o", false,-1, 15,0);
    tracep->declBit(c+788,"sdram_data_out_en_o", false,-1);
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
    tracep->declBus(c+1226,"CMD_LOAD_MODE", false,-1, 3,0);
    tracep->declBus(c+1371,"MODE_REG", false,-1, 12,0);
    tracep->declBus(c+1335,"STATE_W", false,-1, 31,0);
    tracep->declBus(c+1226,"STATE_INIT", false,-1, 3,0);
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
    tracep->declBus(c+1002,"ram_addr_w", false,-1, 31,0);
    tracep->declBus(c+1037,"ram_wr_w", false,-1, 3,0);
    tracep->declBit(c+1035,"ram_rd_w", false,-1);
    tracep->declBit(c+790,"ram_accept_w", false,-1);
    tracep->declBus(c+1004,"ram_write_data_w", false,-1, 31,0);
    tracep->declBus(c+769,"ram_read_data_w", false,-1, 31,0);
    tracep->declBit(c+768,"ram_ack_w", false,-1);
    tracep->declBit(c+1038,"ram_req_w", false,-1);
    tracep->declBus(c+791,"command_q", false,-1, 3,0);
    tracep->declBus(c+764,"addr_q", false,-1, 12,0);
    tracep->declBus(c+789,"data_q", false,-1, 15,0);
    tracep->declBit(c+792,"data_rd_en_q", false,-1);
    tracep->declBus(c+766,"dqm_q", false,-1, 1,0);
    tracep->declBit(c+759,"cke_q", false,-1);
    tracep->declBus(c+765,"bank_q", false,-1, 1,0);
    tracep->declBus(c+793,"data_buffer_q", false,-1, 15,0);
    tracep->declBus(c+794,"dqm_buffer_q", false,-1, 1,0);
    tracep->declBus(c+767,"sdram_data_in_w", false,-1, 15,0);
    tracep->declBit(c+795,"refresh_q", false,-1);
    tracep->declBus(c+796,"row_open_q", false,-1, 3,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+797+i*1,"active_row_q", true,(i+0), 12,0);
    }
    tracep->declBus(c+801,"state_q", false,-1, 3,0);
    tracep->declBus(c+1145,"next_state_r", false,-1, 3,0);
    tracep->declBus(c+1146,"target_state_r", false,-1, 3,0);
    tracep->declBus(c+802,"target_state_q", false,-1, 3,0);
    tracep->declBus(c+803,"delay_state_q", false,-1, 3,0);
    tracep->declBus(c+1039,"addr_col_w", false,-1, 12,0);
    tracep->declBus(c+1040,"addr_row_w", false,-1, 12,0);
    tracep->declBus(c+1041,"addr_bank_w", false,-1, 1,0);
    tracep->declBus(c+1335,"DELAY_W", false,-1, 31,0);
    tracep->declBus(c+804,"delay_q", false,-1, 3,0);
    tracep->declBus(c+1147,"delay_r", false,-1, 3,0);
    tracep->declBus(c+1376,"REFRESH_CNT_W", false,-1, 31,0);
    tracep->declBus(c+805,"refresh_timer_q", false,-1, 16,0);
    tracep->declBus(c+806,"sample_data0_q", false,-1, 15,0);
    tracep->declBus(c+807,"sample_data_q", false,-1, 15,0);
    tracep->declBus(c+808,"idx", false,-1, 31,0);
    tracep->declBus(c+809,"rd_q", false,-1, 3,0);
    tracep->declBit(c+768,"ack_q", false,-1);
    tracep->declArray(c+810,"dbg_state", false,-1, 79,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("lspi ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1013,"auto_in_psel", false,-1);
    tracep->declBit(c+1014,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1007,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+770,"auto_in_pready", false,-1);
    tracep->declBit(c+1195,"auto_in_pslverr", false,-1);
    tracep->declBus(c+771,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+757,"spi_bundle_sck", false,-1);
    tracep->declBus(c+758,"spi_bundle_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_bundle_mosi", false,-1);
    tracep->declBit(c+1173,"spi_bundle_miso", false,-1);
    tracep->pushNamePrefix("mspi ");
    tracep->declBus(c+1377,"flash_addr_start", false,-1, 31,0);
    tracep->declBus(c+1378,"flash_addr_end", false,-1, 31,0);
    tracep->declBus(c+1344,"spi_ss_num", false,-1, 31,0);
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1042,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1013,"in_psel", false,-1);
    tracep->declBit(c+1014,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+770,"in_pready", false,-1);
    tracep->declBus(c+771,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1195,"in_pslverr", false,-1);
    tracep->declBit(c+757,"spi_sck", false,-1);
    tracep->declBus(c+758,"spi_ss", false,-1, 7,0);
    tracep->declBit(c+1172,"spi_mosi", false,-1);
    tracep->declBit(c+1173,"spi_miso", false,-1);
    tracep->declBit(c+813,"spi_irq_out", false,-1);
    tracep->pushNamePrefix("u0_spi_top ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"wb_clk_i", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+1043,"wb_adr_i", false,-1, 4,0);
    tracep->declBus(c+1004,"wb_dat_i", false,-1, 31,0);
    tracep->declBus(c+771,"wb_dat_o", false,-1, 31,0);
    tracep->declBus(c+1005,"wb_sel_i", false,-1, 3,0);
    tracep->declBit(c+1003,"wb_we_i", false,-1);
    tracep->declBit(c+1013,"wb_stb_i", false,-1);
    tracep->declBit(c+1014,"wb_cyc_i", false,-1);
    tracep->declBit(c+770,"wb_ack_o", false,-1);
    tracep->declBit(c+1195,"wb_err_o", false,-1);
    tracep->declBit(c+813,"wb_int_o", false,-1);
    tracep->declBus(c+758,"ss_pad_o", false,-1, 7,0);
    tracep->declBit(c+757,"sclk_pad_o", false,-1);
    tracep->declBit(c+1172,"mosi_pad_o", false,-1);
    tracep->declBit(c+1173,"miso_pad_i", false,-1);
    tracep->declBus(c+814,"divider", false,-1, 15,0);
    tracep->declBus(c+815,"ctrl", false,-1, 13,0);
    tracep->declBus(c+816,"ss", false,-1, 7,0);
    tracep->declBus(c+1148,"wb_dat", false,-1, 31,0);
    tracep->declArray(c+817,"rx", false,-1, 127,0);
    tracep->declBit(c+821,"rx_negedge", false,-1);
    tracep->declBit(c+822,"tx_negedge", false,-1);
    tracep->declBus(c+823,"char_len", false,-1, 6,0);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+825,"lsb", false,-1);
    tracep->declBit(c+826,"ie", false,-1);
    tracep->declBit(c+827,"ass", false,-1);
    tracep->declBit(c+1044,"spi_divider_sel", false,-1);
    tracep->declBit(c+1045,"spi_ctrl_sel", false,-1);
    tracep->declBus(c+1046,"spi_tx_sel", false,-1, 3,0);
    tracep->declBit(c+1047,"spi_ss_sel", false,-1);
    tracep->declBit(c+828,"tip", false,-1);
    tracep->declBit(c+829,"pos_edge", false,-1);
    tracep->declBit(c+830,"neg_edge", false,-1);
    tracep->declBit(c+831,"last_bit", false,-1);
    tracep->pushNamePrefix("clgen ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"clk_in", false,-1);
    tracep->declBit(c+1151,"rst", false,-1);
    tracep->declBit(c+828,"enable", false,-1);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+831,"last_clk", false,-1);
    tracep->declBus(c+814,"divider", false,-1, 15,0);
    tracep->declBit(c+757,"clk_out", false,-1);
    tracep->declBit(c+829,"pos_edge", false,-1);
    tracep->declBit(c+830,"neg_edge", false,-1);
    tracep->declBus(c+832,"cnt", false,-1, 15,0);
    tracep->declBit(c+833,"cnt_zero", false,-1);
    tracep->declBit(c+834,"cnt_one", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"rst", false,-1);
    tracep->declBus(c+1048,"latch", false,-1, 3,0);
    tracep->declBus(c+1005,"byte_sel", false,-1, 3,0);
    tracep->declBus(c+823,"len", false,-1, 6,0);
    tracep->declBit(c+825,"lsb", false,-1);
    tracep->declBit(c+824,"go", false,-1);
    tracep->declBit(c+829,"pos_edge", false,-1);
    tracep->declBit(c+830,"neg_edge", false,-1);
    tracep->declBit(c+821,"rx_negedge", false,-1);
    tracep->declBit(c+822,"tx_negedge", false,-1);
    tracep->declBit(c+828,"tip", false,-1);
    tracep->declBit(c+831,"last", false,-1);
    tracep->declBus(c+1004,"p_in", false,-1, 31,0);
    tracep->declArray(c+817,"p_out", false,-1, 127,0);
    tracep->declBit(c+757,"s_clk", false,-1);
    tracep->declBit(c+1173,"s_in", false,-1);
    tracep->declBit(c+1172,"s_out", false,-1);
    tracep->declBus(c+835,"cnt", false,-1, 7,0);
    tracep->declArray(c+817,"data", false,-1, 127,0);
    tracep->declBus(c+836,"tx_bit_pos", false,-1, 7,0);
    tracep->declBus(c+837,"rx_bit_pos", false,-1, 7,0);
    tracep->declBit(c+838,"rx_clk", false,-1);
    tracep->declBit(c+839,"tx_clk", false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("luart ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1010,"auto_in_psel", false,-1);
    tracep->declBit(c+1011,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1008,"auto_in_paddr", false,-1, 28,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1012,"auto_in_pready", false,-1);
    tracep->declBit(c+1195,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1179,"auto_in_prdata", false,-1, 31,0);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->pushNamePrefix("muart ");
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1010,"in_psel", false,-1);
    tracep->declBit(c+1011,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1012,"in_pready", false,-1);
    tracep->declBit(c+1195,"in_pslverr", false,-1);
    tracep->declBus(c+1023,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1179,"in_prdata", false,-1, 31,0);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1170,"uart_rx", false,-1);
    tracep->declBit(c+1171,"uart_tx", false,-1);
    tracep->declBit(c+840,"rtsn", false,-1);
    tracep->declBit(c+1195,"ctsn", false,-1);
    tracep->declBit(c+841,"dtr_pad_o", false,-1);
    tracep->declBit(c+1195,"dsr_pad_i", false,-1);
    tracep->declBit(c+1195,"ri_pad_i", false,-1);
    tracep->declBit(c+1195,"dcd_pad_i", false,-1);
    tracep->declBit(c+842,"interrupt", false,-1);
    tracep->declBit(c+1186,"reg_we", false,-1);
    tracep->declBit(c+1187,"reg_re", false,-1);
    tracep->declBus(c+1049,"reg_adr", false,-1, 2,0);
    tracep->declBus(c+1050,"reg_dat8_w", false,-1, 7,0);
    tracep->declBus(c+677,"reg_dat8_w_reg", false,-1, 7,0);
    tracep->declBus(c+1149,"reg_dat8_r", false,-1, 7,0);
    tracep->declBit(c+843,"rts_internal", false,-1);
    tracep->pushNamePrefix("Uregs ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+1049,"wb_addr_i", false,-1, 2,0);
    tracep->declBus(c+1051,"wb_dat_i", false,-1, 7,0);
    tracep->declBus(c+1149,"wb_dat_o", false,-1, 7,0);
    tracep->declBit(c+1186,"wb_we_i", false,-1);
    tracep->declBit(c+1187,"wb_re_i", false,-1);
    tracep->declBit(c+1171,"stx_pad_o", false,-1);
    tracep->declBit(c+1170,"srx_pad_i", false,-1);
    tracep->declBus(c+1372,"modem_inputs", false,-1, 3,0);
    tracep->declBit(c+843,"rts_pad_o", false,-1);
    tracep->declBit(c+841,"dtr_pad_o", false,-1);
    tracep->declBit(c+842,"int_o", false,-1);
    tracep->declBit(c+844,"enable", false,-1);
    tracep->declBit(c+845,"srx_pad", false,-1);
    tracep->declBus(c+846,"ier", false,-1, 3,0);
    tracep->declBus(c+847,"iir", false,-1, 3,0);
    tracep->declBus(c+848,"fcr", false,-1, 1,0);
    tracep->declBus(c+849,"mcr", false,-1, 4,0);
    tracep->declBus(c+850,"lcr", false,-1, 7,0);
    tracep->declBus(c+851,"msr", false,-1, 7,0);
    tracep->declBus(c+852,"dl", false,-1, 15,0);
    tracep->declBus(c+853,"scratch", false,-1, 7,0);
    tracep->declBit(c+854,"start_dlc", false,-1);
    tracep->declBit(c+855,"lsr_mask_d", false,-1);
    tracep->declBit(c+856,"msi_reset", false,-1);
    tracep->declBus(c+857,"dlc", false,-1, 15,0);
    tracep->declBus(c+858,"trigger_level", false,-1, 3,0);
    tracep->declBit(c+859,"rx_reset", false,-1);
    tracep->declBit(c+860,"tx_reset", false,-1);
    tracep->declBit(c+861,"dlab", false,-1);
    tracep->declBit(c+1223,"cts_pad_i", false,-1);
    tracep->declBit(c+1195,"dsr_pad_i", false,-1);
    tracep->declBit(c+1195,"ri_pad_i", false,-1);
    tracep->declBit(c+1195,"dcd_pad_i", false,-1);
    tracep->declBit(c+862,"loopback", false,-1);
    tracep->declBit(c+1195,"cts", false,-1);
    tracep->declBit(c+1223,"dsr", false,-1);
    tracep->declBit(c+1223,"ri", false,-1);
    tracep->declBit(c+1223,"dcd", false,-1);
    tracep->declBit(c+863,"cts_c", false,-1);
    tracep->declBit(c+864,"dsr_c", false,-1);
    tracep->declBit(c+865,"ri_c", false,-1);
    tracep->declBit(c+866,"dcd_c", false,-1);
    tracep->declBus(c+867,"lsr", false,-1, 7,0);
    tracep->declBit(c+868,"lsr0", false,-1);
    tracep->declBit(c+869,"lsr1", false,-1);
    tracep->declBit(c+870,"lsr2", false,-1);
    tracep->declBit(c+871,"lsr3", false,-1);
    tracep->declBit(c+872,"lsr4", false,-1);
    tracep->declBit(c+873,"lsr5", false,-1);
    tracep->declBit(c+874,"lsr6", false,-1);
    tracep->declBit(c+875,"lsr7", false,-1);
    tracep->declBit(c+876,"lsr0r", false,-1);
    tracep->declBit(c+877,"lsr1r", false,-1);
    tracep->declBit(c+878,"lsr2r", false,-1);
    tracep->declBit(c+879,"lsr3r", false,-1);
    tracep->declBit(c+880,"lsr4r", false,-1);
    tracep->declBit(c+881,"lsr5r", false,-1);
    tracep->declBit(c+882,"lsr6r", false,-1);
    tracep->declBit(c+883,"lsr7r", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+884,"rls_int", false,-1);
    tracep->declBit(c+885,"rda_int", false,-1);
    tracep->declBit(c+886,"ti_int", false,-1);
    tracep->declBit(c+887,"thre_int", false,-1);
    tracep->declBit(c+888,"ms_int", false,-1);
    tracep->declBit(c+889,"tf_push", false,-1);
    tracep->declBit(c+890,"rf_pop", false,-1);
    tracep->declBus(c+1188,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+891,"rf_error_bit", false,-1);
    tracep->declBit(c+869,"rf_overrun", false,-1);
    tracep->declBit(c+892,"rf_push_pulse", false,-1);
    tracep->declBus(c+893,"rf_count", false,-1, 4,0);
    tracep->declBus(c+894,"tf_count", false,-1, 4,0);
    tracep->declBus(c+895,"tstate", false,-1, 2,0);
    tracep->declBus(c+896,"rstate", false,-1, 3,0);
    tracep->declBus(c+897,"counter_t", false,-1, 9,0);
    tracep->declBit(c+898,"thre_set_en", false,-1);
    tracep->declBus(c+899,"block_cnt", false,-1, 7,0);
    tracep->declBus(c+900,"block_value", false,-1, 7,0);
    tracep->declBit(c+901,"serial_out", false,-1);
    tracep->declBit(c+902,"serial_in", false,-1);
    tracep->declBit(c+27,"lsr_mask_condition", false,-1);
    tracep->declBit(c+28,"iir_read", false,-1);
    tracep->declBit(c+29,"msr_read", false,-1);
    tracep->declBit(c+30,"fifo_read", false,-1);
    tracep->declBit(c+31,"fifo_write", false,-1);
    tracep->declBus(c+903,"delayed_modem_signals", false,-1, 3,0);
    tracep->declBit(c+904,"lsr0_d", false,-1);
    tracep->declBit(c+905,"lsr1_d", false,-1);
    tracep->declBit(c+906,"lsr2_d", false,-1);
    tracep->declBit(c+907,"lsr3_d", false,-1);
    tracep->declBit(c+908,"lsr4_d", false,-1);
    tracep->declBit(c+909,"lsr5_d", false,-1);
    tracep->declBit(c+910,"lsr6_d", false,-1);
    tracep->declBit(c+911,"lsr7_d", false,-1);
    tracep->declBit(c+912,"rls_int_d", false,-1);
    tracep->declBit(c+913,"thre_int_d", false,-1);
    tracep->declBit(c+914,"ms_int_d", false,-1);
    tracep->declBit(c+915,"ti_int_d", false,-1);
    tracep->declBit(c+916,"rda_int_d", false,-1);
    tracep->declBit(c+917,"rls_int_rise", false,-1);
    tracep->declBit(c+918,"thre_int_rise", false,-1);
    tracep->declBit(c+919,"ms_int_rise", false,-1);
    tracep->declBit(c+920,"ti_int_rise", false,-1);
    tracep->declBit(c+921,"rda_int_rise", false,-1);
    tracep->declBit(c+922,"rls_int_pnd", false,-1);
    tracep->declBit(c+923,"rda_int_pnd", false,-1);
    tracep->declBit(c+924,"thre_int_pnd", false,-1);
    tracep->declBit(c+925,"ms_int_pnd", false,-1);
    tracep->declBit(c+926,"ti_int_pnd", false,-1);
    tracep->pushNamePrefix("i_uart_sync_flops ");
    tracep->declBus(c+1346,"Tp", false,-1, 31,0);
    tracep->declBus(c+1346,"width", false,-1, 31,0);
    tracep->declBus(c+1351,"init_value", false,-1, 0,0);
    tracep->declBit(c+1151,"rst_i", false,-1);
    tracep->declBit(c+1150,"clk_i", false,-1);
    tracep->declBit(c+1195,"stage1_rst_i", false,-1);
    tracep->declBit(c+1223,"stage1_clk_en_i", false,-1);
    tracep->declBus(c+1170,"async_dat_i", false,-1, 0,0);
    tracep->declBus(c+845,"sync_dat_o", false,-1, 0,0);
    tracep->declBus(c+927,"flop_0", false,-1, 0,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("receiver ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+850,"lcr", false,-1, 7,0);
    tracep->declBit(c+890,"rf_pop", false,-1);
    tracep->declBit(c+902,"srx_pad_i", false,-1);
    tracep->declBit(c+844,"enable", false,-1);
    tracep->declBit(c+859,"rx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBus(c+897,"counter_t", false,-1, 9,0);
    tracep->declBus(c+893,"rf_count", false,-1, 4,0);
    tracep->declBus(c+1188,"rf_data_out", false,-1, 10,0);
    tracep->declBit(c+869,"rf_overrun", false,-1);
    tracep->declBit(c+891,"rf_error_bit", false,-1);
    tracep->declBus(c+896,"rstate", false,-1, 3,0);
    tracep->declBit(c+892,"rf_push_pulse", false,-1);
    tracep->declBus(c+928,"rcounter16", false,-1, 3,0);
    tracep->declBus(c+929,"rbit_counter", false,-1, 2,0);
    tracep->declBus(c+930,"rshift", false,-1, 7,0);
    tracep->declBit(c+931,"rparity", false,-1);
    tracep->declBit(c+932,"rparity_error", false,-1);
    tracep->declBit(c+933,"rframing_error", false,-1);
    tracep->declBit(c+934,"rbit_in", false,-1);
    tracep->declBit(c+935,"rparity_xor", false,-1);
    tracep->declBus(c+936,"counter_b", false,-1, 7,0);
    tracep->declBit(c+937,"rf_push_q", false,-1);
    tracep->declBus(c+938,"rf_data_in", false,-1, 10,0);
    tracep->declBit(c+939,"rf_push", false,-1);
    tracep->declBit(c+940,"break_error", false,-1);
    tracep->declBit(c+941,"rcounter16_eq_7", false,-1);
    tracep->declBit(c+942,"rcounter16_eq_0", false,-1);
    tracep->declBit(c+943,"rcounter16_eq_1", false,-1);
    tracep->declBus(c+944,"rcounter16_minus_1", false,-1, 3,0);
    tracep->declBus(c+1226,"sr_idle", false,-1, 3,0);
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
    tracep->declBus(c+945,"toc_value", false,-1, 9,0);
    tracep->declBus(c+946,"brc_value", false,-1, 7,0);
    tracep->pushNamePrefix("fifo_rx ");
    tracep->declBus(c+1380,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1334,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1335,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1342,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBit(c+892,"push", false,-1);
    tracep->declBit(c+890,"pop", false,-1);
    tracep->declBus(c+938,"data_in", false,-1, 10,0);
    tracep->declBit(c+859,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1188,"data_out", false,-1, 10,0);
    tracep->declBit(c+869,"overrun", false,-1);
    tracep->declBus(c+893,"count", false,-1, 4,0);
    tracep->declBit(c+891,"error_bit", false,-1);
    tracep->declBus(c+1189,"data8_out", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+947+i*1,"fifo", true,(i+0), 2,0);
    }
    tracep->declBus(c+963,"top", false,-1, 3,0);
    tracep->declBus(c+964,"bottom", false,-1, 3,0);
    tracep->declBus(c+965,"top_plus_1", false,-1, 3,0);
    tracep->declBus(c+966,"word0", false,-1, 2,0);
    tracep->declBus(c+967,"word1", false,-1, 2,0);
    tracep->declBus(c+968,"word2", false,-1, 2,0);
    tracep->declBus(c+969,"word3", false,-1, 2,0);
    tracep->declBus(c+970,"word4", false,-1, 2,0);
    tracep->declBus(c+971,"word5", false,-1, 2,0);
    tracep->declBus(c+972,"word6", false,-1, 2,0);
    tracep->declBus(c+973,"word7", false,-1, 2,0);
    tracep->declBus(c+974,"word8", false,-1, 2,0);
    tracep->declBus(c+975,"word9", false,-1, 2,0);
    tracep->declBus(c+976,"word10", false,-1, 2,0);
    tracep->declBus(c+977,"word11", false,-1, 2,0);
    tracep->declBus(c+978,"word12", false,-1, 2,0);
    tracep->declBus(c+979,"word13", false,-1, 2,0);
    tracep->declBus(c+980,"word14", false,-1, 2,0);
    tracep->declBus(c+981,"word15", false,-1, 2,0);
    tracep->pushNamePrefix("rfifo ");
    tracep->declBus(c+1335,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1344,"data_width", false,-1, 31,0);
    tracep->declBus(c+1334,"depth", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+892,"we", false,-1);
    tracep->declBus(c+963,"a", false,-1, 3,0);
    tracep->declBus(c+964,"dpra", false,-1, 3,0);
    tracep->declBus(c+982,"di", false,-1, 7,0);
    tracep->declBus(c+1189,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+678+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("transmitter ");
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBus(c+850,"lcr", false,-1, 7,0);
    tracep->declBit(c+889,"tf_push", false,-1);
    tracep->declBus(c+1051,"wb_dat_i", false,-1, 7,0);
    tracep->declBit(c+844,"enable", false,-1);
    tracep->declBit(c+860,"tx_reset", false,-1);
    tracep->declBit(c+26,"lsr_mask", false,-1);
    tracep->declBit(c+901,"stx_pad_o", false,-1);
    tracep->declBus(c+895,"tstate", false,-1, 2,0);
    tracep->declBus(c+894,"tf_count", false,-1, 4,0);
    tracep->declBus(c+983,"counter", false,-1, 4,0);
    tracep->declBus(c+984,"bit_counter", false,-1, 2,0);
    tracep->declBus(c+985,"shift_out", false,-1, 6,0);
    tracep->declBit(c+986,"stx_o_tmp", false,-1);
    tracep->declBit(c+987,"parity_xor", false,-1);
    tracep->declBit(c+988,"tf_pop", false,-1);
    tracep->declBit(c+989,"bit_out", false,-1);
    tracep->declBus(c+1051,"tf_data_in", false,-1, 7,0);
    tracep->declBus(c+1190,"tf_data_out", false,-1, 7,0);
    tracep->declBit(c+990,"tf_overrun", false,-1);
    tracep->declBus(c+1228,"s_idle", false,-1, 2,0);
    tracep->declBus(c+1194,"s_send_start", false,-1, 2,0);
    tracep->declBus(c+1381,"s_send_byte", false,-1, 2,0);
    tracep->declBus(c+1382,"s_send_parity", false,-1, 2,0);
    tracep->declBus(c+1352,"s_send_stop", false,-1, 2,0);
    tracep->declBus(c+1383,"s_pop_byte", false,-1, 2,0);
    tracep->pushNamePrefix("fifo_tx ");
    tracep->declBus(c+1344,"fifo_width", false,-1, 31,0);
    tracep->declBus(c+1334,"fifo_depth", false,-1, 31,0);
    tracep->declBus(c+1335,"fifo_pointer_w", false,-1, 31,0);
    tracep->declBus(c+1342,"fifo_counter_w", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+1151,"wb_rst_i", false,-1);
    tracep->declBit(c+889,"push", false,-1);
    tracep->declBit(c+988,"pop", false,-1);
    tracep->declBus(c+1051,"data_in", false,-1, 7,0);
    tracep->declBit(c+860,"fifo_reset", false,-1);
    tracep->declBit(c+26,"reset_status", false,-1);
    tracep->declBus(c+1190,"data_out", false,-1, 7,0);
    tracep->declBit(c+990,"overrun", false,-1);
    tracep->declBus(c+894,"count", false,-1, 4,0);
    tracep->declBus(c+991,"top", false,-1, 3,0);
    tracep->declBus(c+992,"bottom", false,-1, 3,0);
    tracep->declBus(c+993,"top_plus_1", false,-1, 3,0);
    tracep->pushNamePrefix("tfifo ");
    tracep->declBus(c+1335,"addr_width", false,-1, 31,0);
    tracep->declBus(c+1344,"data_width", false,-1, 31,0);
    tracep->declBus(c+1334,"depth", false,-1, 31,0);
    tracep->declBit(c+1150,"clk", false,-1);
    tracep->declBit(c+889,"we", false,-1);
    tracep->declBus(c+991,"a", false,-1, 3,0);
    tracep->declBus(c+992,"dpra", false,-1, 3,0);
    tracep->declBus(c+1051,"di", false,-1, 7,0);
    tracep->declBus(c+1190,"dpo", false,-1, 7,0);
    for (int i = 0; i < 16; ++i) {
        tracep->declBus(c+694+i*1,"ram", true,(i+0), 7,0);
    }
    tracep->popNamePrefix(6);
    tracep->pushNamePrefix("lvga ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBit(c+712,"auto_in_psel", false,-1);
    tracep->declBit(c+713,"auto_in_penable", false,-1);
    tracep->declBit(c+1003,"auto_in_pwrite", false,-1);
    tracep->declBus(c+1007,"auto_in_paddr", false,-1, 29,0);
    tracep->declBus(c+1194,"auto_in_pprot", false,-1, 2,0);
    tracep->declBus(c+1004,"auto_in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"auto_in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"auto_in_pready", false,-1);
    tracep->declBit(c+1197,"auto_in_pslverr", false,-1);
    tracep->declBus(c+1198,"auto_in_prdata", false,-1, 31,0);
    tracep->declBus(c+1164,"vga_bundle_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_bundle_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_bundle_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_bundle_hsync", false,-1);
    tracep->declBit(c+1168,"vga_bundle_vsync", false,-1);
    tracep->declBit(c+1169,"vga_bundle_valid", false,-1);
    tracep->pushNamePrefix("mvga ");
    tracep->declBit(c+1150,"clock", false,-1);
    tracep->declBit(c+1151,"reset", false,-1);
    tracep->declBus(c+1042,"in_paddr", false,-1, 31,0);
    tracep->declBit(c+712,"in_psel", false,-1);
    tracep->declBit(c+713,"in_penable", false,-1);
    tracep->declBus(c+1194,"in_pprot", false,-1, 2,0);
    tracep->declBit(c+1003,"in_pwrite", false,-1);
    tracep->declBus(c+1004,"in_pwdata", false,-1, 31,0);
    tracep->declBus(c+1005,"in_pstrb", false,-1, 3,0);
    tracep->declBit(c+1196,"in_pready", false,-1);
    tracep->declBus(c+1198,"in_prdata", false,-1, 31,0);
    tracep->declBit(c+1197,"in_pslverr", false,-1);
    tracep->declBus(c+1164,"vga_r", false,-1, 7,0);
    tracep->declBus(c+1165,"vga_g", false,-1, 7,0);
    tracep->declBus(c+1166,"vga_b", false,-1, 7,0);
    tracep->declBit(c+1167,"vga_hsync", false,-1);
    tracep->declBit(c+1168,"vga_vsync", false,-1);
    tracep->declBit(c+1169,"vga_valid", false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("bitrev ");
    tracep->declBit(c+757,"sck", false,-1);
    tracep->declBit(c+994,"ss", false,-1);
    tracep->declBit(c+1172,"mosi", false,-1);
    tracep->declBit(c+1223,"miso", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("flash ");
    tracep->declBit(c+757,"sck", false,-1);
    tracep->declBit(c+995,"ss", false,-1);
    tracep->declBit(c+1172,"mosi", false,-1);
    tracep->declBit(c+1173,"miso", false,-1);
    tracep->declBit(c+995,"reset", false,-1);
    tracep->declBus(c+996,"state", false,-1, 2,0);
    tracep->declBus(c+997,"counter", false,-1, 7,0);
    tracep->declBus(c+998,"cmd", false,-1, 7,0);
    tracep->declBus(c+999,"addr", false,-1, 23,0);
    tracep->declBus(c+1000,"data", false,-1, 31,0);
    tracep->declBit(c+1001,"ren", false,-1);
    tracep->declBus(c+1191,"rdata", false,-1, 31,0);
    tracep->declBus(c+1192,"raddr", false,-1, 31,0);
    tracep->declBus(c+1193,"data_bswap", false,-1, 31,0);
    tracep->pushNamePrefix("flash_cmd_i ");
    tracep->declBit(c+757,"clock", false,-1);
    tracep->declBit(c+1001,"valid", false,-1);
    tracep->declBus(c+998,"cmd", false,-1, 7,0);
    tracep->declBus(c+1192,"addr", false,-1, 31,0);
    tracep->declBus(c+1191,"data", false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("psram ");
    tracep->declBit(c+1174,"sck", false,-1);
    tracep->declBit(c+1175,"ce_n", false,-1);
    tracep->declBus(c+1052,"dio", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sdram ");
    tracep->declBit(c+1176,"clk", false,-1);
    tracep->declBit(c+759,"cke", false,-1);
    tracep->declBit(c+760,"cs", false,-1);
    tracep->declBit(c+761,"ras", false,-1);
    tracep->declBit(c+762,"cas", false,-1);
    tracep->declBit(c+763,"we", false,-1);
    tracep->declBus(c+764,"a", false,-1, 12,0);
    tracep->declBus(c+765,"ba", false,-1, 1,0);
    tracep->declBus(c+766,"dqm", false,-1, 1,0);
    tracep->declBus(c+767,"dq", false,-1, 15,0);
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
    bufp->fullBit(oldp+59,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)))));
    bufp->fullBit(oldp+60,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full)))));
    bufp->fullBit(oldp+61,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_awvalid));
    bufp->fullBit(oldp+62,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1)))))));
    bufp->fullBit(oldp+63,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_wvalid));
    bufp->fullBit(oldp+64,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo))));
    bufp->fullBit(oldp+65,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+66,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len)))))));
    bufp->fullBit(oldp+67,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter))));
    bufp->fullBit(oldp+68,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy));
    bufp->fullIData(oldp+69,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr),32);
    bufp->fullCData(oldp+70,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len),8);
    bufp->fullCData(oldp+71,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len),8);
    bufp->fullIData(oldp+72,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr),32);
    bufp->fullBit(oldp+73,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__busy_1));
    bufp->fullIData(oldp+74,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_addr_1),32);
    bufp->fullCData(oldp+75,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__r_len_1),8);
    bufp->fullCData(oldp+76,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__len_1),8);
    bufp->fullIData(oldp+77,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__addr_1),32);
    bufp->fullBit(oldp+78,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_latched));
    bufp->fullBit(oldp+79,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__wbeats_valid));
    bufp->fullSData(oldp+80,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_counter),9);
    bufp->fullSData(oldp+81,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__w_todo),9);
    bufp->fullCData(oldp+82,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_0),2);
    bufp->fullCData(oldp+83,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_1),2);
    bufp->fullCData(oldp+84,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_2),2);
    bufp->fullCData(oldp+85,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_3),2);
    bufp->fullCData(oldp+86,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_4),2);
    bufp->fullCData(oldp+87,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_5),2);
    bufp->fullCData(oldp+88,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_6),2);
    bufp->fullCData(oldp+89,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_7),2);
    bufp->fullCData(oldp+90,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_8),2);
    bufp->fullCData(oldp+91,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_9),2);
    bufp->fullCData(oldp+92,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_10),2);
    bufp->fullCData(oldp+93,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_11),2);
    bufp->fullCData(oldp+94,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_12),2);
    bufp->fullCData(oldp+95,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_13),2);
    bufp->fullCData(oldp+96,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_14),2);
    bufp->fullCData(oldp+97,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__error_15),2);
    bufp->fullIData(oldp+98,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_addr),32);
    bufp->fullCData(oldp+99,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_len),8);
    bufp->fullCData(oldp+100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_io_deq_bits_burst),2);
    bufp->fullQData(oldp+101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__ram),49);
    bufp->fullBit(oldp+103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__full));
    bufp->fullBit(oldp+104,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__io_deq_valid_0));
    bufp->fullIData(oldp+105,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_addr),32);
    bufp->fullCData(oldp+106,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_len),8);
    bufp->fullCData(oldp+107,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT___deq_q_1_io_deq_bits_burst),2);
    bufp->fullQData(oldp+108,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__ram),49);
    bufp->fullBit(oldp+110,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__full));
    bufp->fullBit(oldp+111,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__io_deq_valid_0));
    bufp->fullBit(oldp+112,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full)
                                    ? (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram 
                                               >> 0x24U))
                                    : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast)))));
    bufp->fullQData(oldp+113,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__ram),37);
    bufp->fullBit(oldp+115,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__full));
    bufp->fullBit(oldp+116,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid));
    bufp->fullIData(oldp+117,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr)),28);
    bufp->fullBit(oldp+118,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 2U))));
    bufp->fullBit(oldp+119,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_full));
    bufp->fullCData(oldp+120,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_id),4);
    bufp->fullCData(oldp+121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2))));
    bufp->fullIData(oldp+123,((0xfffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),28);
    bufp->fullBit(oldp+124,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_full));
    bufp->fullCData(oldp+125,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_id),4);
    bufp->fullIData(oldp+126,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                  ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                      ? (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                         [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                         >> 0x18U) : 0U)
                                  : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                << 0x18U) | ((0xff0000U 
                                              & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                   ? 
                                                  ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                    ? 
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                    [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                    >> 0x10U)
                                                    : 0U)
                                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                 << 0x10U)) 
                                             | ((0xff00U 
                                                 & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                      ? 
                                                     ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                       ? 
                                                      (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                       >> 8U)
                                                       : 0U)
                                                      : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                    << 8U)) 
                                                | (0xffU 
                                                   & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                       ? 
                                                      ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                        ? 
                                                       vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                       [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                        : 0U)
                                                       : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))),32);
    bufp->fullCData(oldp+127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                ? 0U : 3U)),2);
    bufp->fullBit(oldp+128,((0x7800U == (0x7fffU & 
                                         (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                          >> 0xdU)))));
    bufp->fullBit(oldp+129,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1));
    bufp->fullBit(oldp+130,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__w_sel1));
    bufp->fullBit(oldp+131,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG));
    bufp->fullCData(oldp+132,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0),8);
    bufp->fullCData(oldp+133,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1),8);
    bufp->fullCData(oldp+134,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2),8);
    bufp->fullCData(oldp+135,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3),8);
    bufp->fullSData(oldp+136,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr 
                                         >> 2U))),11);
    bufp->fullIData(oldp+137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT___mem_ext_R0_data),32);
    bufp->fullSData(oldp+138,((0x7ffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                         >> 2U))),11);
    bufp->fullBit(oldp+139,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_awvalid));
    bufp->fullBit(oldp+140,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid));
    bufp->fullBit(oldp+141,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid) 
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
    bufp->fullBit(oldp+142,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits) 
                                >> 1U))));
    bufp->fullBit(oldp+143,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state)))));
    bufp->fullBit(oldp+144,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_out_arvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1))));
    bufp->fullIData(oldp+145,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),30);
    bufp->fullBit(oldp+146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__state));
    bufp->fullCData(oldp+147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rid_r),4);
    bufp->fullIData(oldp+148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r),32);
    bufp->fullBit(oldp+149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_0));
    bufp->fullBit(oldp+150,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_1));
    bufp->fullBit(oldp+151,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestARIO_0_2));
    bufp->fullBit(oldp+152,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_0));
    bufp->fullBit(oldp+153,((0U == ((0x10U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                              >> 0x1bU)) 
                                    | ((0xcU & (8U 
                                                ^ (0x3cU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                      >> 0x1aU)))) 
                                       | ((2U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                 >> 0x17U)) 
                                          | (1U & (vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awaddr 
                                                   >> 0xcU))))))));
    bufp->fullBit(oldp+154,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__requestAWIO_0_2));
    bufp->fullBit(oldp+155,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_0_count));
    bufp->fullBit(oldp+156,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_0_count));
    bufp->fullBit(oldp+157,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_1_count));
    bufp->fullBit(oldp+158,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_1_count));
    bufp->fullBit(oldp+159,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_2_count));
    bufp->fullBit(oldp+160,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_2_count));
    bufp->fullBit(oldp+161,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_3_count));
    bufp->fullBit(oldp+162,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_3_count));
    bufp->fullBit(oldp+163,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_4_count));
    bufp->fullBit(oldp+164,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_4_count));
    bufp->fullBit(oldp+165,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_5_count));
    bufp->fullBit(oldp+166,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_5_count));
    bufp->fullBit(oldp+167,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_6_count));
    bufp->fullBit(oldp+168,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_6_count));
    bufp->fullBit(oldp+169,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_7_count));
    bufp->fullBit(oldp+170,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_7_count));
    bufp->fullBit(oldp+171,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_8_count));
    bufp->fullBit(oldp+172,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_8_count));
    bufp->fullBit(oldp+173,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_9_count));
    bufp->fullBit(oldp+174,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_9_count));
    bufp->fullBit(oldp+175,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_10_count));
    bufp->fullBit(oldp+176,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_10_count));
    bufp->fullBit(oldp+177,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_11_count));
    bufp->fullBit(oldp+178,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_11_count));
    bufp->fullBit(oldp+179,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_12_count));
    bufp->fullBit(oldp+180,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_12_count));
    bufp->fullBit(oldp+181,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_13_count));
    bufp->fullBit(oldp+182,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_13_count));
    bufp->fullBit(oldp+183,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_14_count));
    bufp->fullBit(oldp+184,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_14_count));
    bufp->fullBit(oldp+185,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__arFIFOMap_15_count));
    bufp->fullBit(oldp+186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awFIFOMap_15_count));
    bufp->fullBit(oldp+187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__latched));
    bufp->fullBit(oldp+188,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_awvalid));
    bufp->fullBit(oldp+189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0_io_enq_valid));
    bufp->fullBit(oldp+190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_wvalid));
    bufp->fullBit(oldp+191,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3));
    bufp->fullCData(oldp+192,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask),3);
    bufp->fullBit(oldp+193,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_0));
    bufp->fullBit(oldp+194,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1));
    bufp->fullBit(oldp+195,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_2));
    bufp->fullBit(oldp+196,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_4));
    bufp->fullCData(oldp+197,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_mask_1),3);
    bufp->fullBit(oldp+198,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_0));
    bufp->fullBit(oldp+199,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_4_2));
    bufp->fullBit(oldp+200,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full)))));
    bufp->fullCData(oldp+201,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_enq_bits),3);
    bufp->fullBit(oldp+202,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__io_deq_valid_0));
    bufp->fullCData(oldp+203,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awIn_0_io_deq_bits),3);
    bufp->fullBit(oldp+204,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap));
    bufp->fullBit(oldp+205,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1));
    bufp->fullBit(oldp+206,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__maybe_full));
    bufp->fullBit(oldp+207,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ptr_match));
    bufp->fullBit(oldp+208,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__empty));
    bufp->fullBit(oldp+209,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__full));
    bufp->fullCData(oldp+210,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory
                              [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__wrap_1]),3);
    bufp->fullCData(oldp+211,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[0]),3);
    bufp->fullCData(oldp+212,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__ram_ext__DOT__Memory[1]),3);
    bufp->fullBit(oldp+213,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full)))));
    bufp->fullBit(oldp+214,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__full));
    bufp->fullBit(oldp+215,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__ram_real_last));
    bufp->fullBit(oldp+216,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+217,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full)))));
    bufp->fullBit(oldp+218,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__full));
    bufp->fullBit(oldp+219,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__ram_real_last));
    bufp->fullBit(oldp+220,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_1__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+221,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full)))));
    bufp->fullBit(oldp+222,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__full));
    bufp->fullBit(oldp+223,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__ram_real_last));
    bufp->fullBit(oldp+224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_10__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+225,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full)))));
    bufp->fullBit(oldp+226,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__full));
    bufp->fullBit(oldp+227,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__ram_real_last));
    bufp->fullBit(oldp+228,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_11__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+229,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full)))));
    bufp->fullBit(oldp+230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__full));
    bufp->fullBit(oldp+231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__ram_real_last));
    bufp->fullBit(oldp+232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_12__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+233,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full)))));
    bufp->fullBit(oldp+234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__full));
    bufp->fullBit(oldp+235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__ram_real_last));
    bufp->fullBit(oldp+236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_13__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+237,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full)))));
    bufp->fullBit(oldp+238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__full));
    bufp->fullBit(oldp+239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__ram_real_last));
    bufp->fullBit(oldp+240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_14__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+241,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full)))));
    bufp->fullBit(oldp+242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__full));
    bufp->fullBit(oldp+243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last));
    bufp->fullBit(oldp+244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+245,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full)))));
    bufp->fullBit(oldp+246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__full));
    bufp->fullBit(oldp+247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__ram_real_last));
    bufp->fullBit(oldp+248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_16__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+249,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full)))));
    bufp->fullBit(oldp+250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__full));
    bufp->fullBit(oldp+251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__ram_real_last));
    bufp->fullBit(oldp+252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_17__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+253,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full)))));
    bufp->fullBit(oldp+254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__full));
    bufp->fullBit(oldp+255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__ram_real_last));
    bufp->fullBit(oldp+256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_18__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+257,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full)))));
    bufp->fullBit(oldp+258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__full));
    bufp->fullBit(oldp+259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__ram_real_last));
    bufp->fullBit(oldp+260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_19__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full)))));
    bufp->fullBit(oldp+262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__full));
    bufp->fullBit(oldp+263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__ram_real_last));
    bufp->fullBit(oldp+264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_2__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+265,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full)))));
    bufp->fullBit(oldp+266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__full));
    bufp->fullBit(oldp+267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__ram_real_last));
    bufp->fullBit(oldp+268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_20__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+269,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full)))));
    bufp->fullBit(oldp+270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__full));
    bufp->fullBit(oldp+271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__ram_real_last));
    bufp->fullBit(oldp+272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_21__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+273,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full)))));
    bufp->fullBit(oldp+274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__full));
    bufp->fullBit(oldp+275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__ram_real_last));
    bufp->fullBit(oldp+276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_22__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+277,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full)))));
    bufp->fullBit(oldp+278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__full));
    bufp->fullBit(oldp+279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__ram_real_last));
    bufp->fullBit(oldp+280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_23__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+281,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full)))));
    bufp->fullBit(oldp+282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__full));
    bufp->fullBit(oldp+283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__ram_real_last));
    bufp->fullBit(oldp+284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_24__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+285,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full)))));
    bufp->fullBit(oldp+286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__full));
    bufp->fullBit(oldp+287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__ram_real_last));
    bufp->fullBit(oldp+288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_25__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+289,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full)))));
    bufp->fullBit(oldp+290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__full));
    bufp->fullBit(oldp+291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__ram_real_last));
    bufp->fullBit(oldp+292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_26__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+293,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full)))));
    bufp->fullBit(oldp+294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__full));
    bufp->fullBit(oldp+295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__ram_real_last));
    bufp->fullBit(oldp+296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_27__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full)))));
    bufp->fullBit(oldp+298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__full));
    bufp->fullBit(oldp+299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__ram_real_last));
    bufp->fullBit(oldp+300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_28__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+301,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full)))));
    bufp->fullBit(oldp+302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__full));
    bufp->fullBit(oldp+303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__ram_real_last));
    bufp->fullBit(oldp+304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_29__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+305,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full)))));
    bufp->fullBit(oldp+306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__full));
    bufp->fullBit(oldp+307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__ram_real_last));
    bufp->fullBit(oldp+308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_3__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+309,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full)))));
    bufp->fullBit(oldp+310,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__full));
    bufp->fullBit(oldp+311,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__ram_real_last));
    bufp->fullBit(oldp+312,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_30__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+313,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full)))));
    bufp->fullBit(oldp+314,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__full));
    bufp->fullBit(oldp+315,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__ram_real_last));
    bufp->fullBit(oldp+316,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_31__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+317,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full)))));
    bufp->fullBit(oldp+318,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__full));
    bufp->fullBit(oldp+319,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__ram_real_last));
    bufp->fullBit(oldp+320,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_4__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+321,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full)))));
    bufp->fullBit(oldp+322,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__full));
    bufp->fullBit(oldp+323,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__ram_real_last));
    bufp->fullBit(oldp+324,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_5__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+325,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full)))));
    bufp->fullBit(oldp+326,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__full));
    bufp->fullBit(oldp+327,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__ram_real_last));
    bufp->fullBit(oldp+328,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_6__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+329,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full)))));
    bufp->fullBit(oldp+330,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__full));
    bufp->fullBit(oldp+331,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__ram_real_last));
    bufp->fullBit(oldp+332,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_7__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+333,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full)))));
    bufp->fullBit(oldp+334,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__full));
    bufp->fullBit(oldp+335,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__ram_real_last));
    bufp->fullBit(oldp+336,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_8__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullBit(oldp+337,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full)))));
    bufp->fullBit(oldp+338,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__full));
    bufp->fullBit(oldp+339,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__ram_real_last));
    bufp->fullBit(oldp+340,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_9__DOT__unnamedblk1__DOT__do_enq));
    bufp->fullIData(oldp+341,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata),32);
    bufp->fullIData(oldp+342,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc),32);
    bufp->fullBit(oldp+343,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__difftest));
    bufp->fullBit(oldp+344,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__itrace_reg));
    bufp->fullBit(oldp+345,((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+346,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr));
    bufp->fullBit(oldp+347,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_csr_en));
    bufp->fullIData(oldp+348,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a),32);
    bufp->fullIData(oldp+349,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b),32);
    bufp->fullIData(oldp+350,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out),32);
    bufp->fullBit(oldp+351,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))));
    bufp->fullCData(oldp+352,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_b_sel),2);
    bufp->fullCData(oldp+353,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_func),4);
    bufp->fullCData(oldp+354,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__branch_type),3);
    bufp->fullCData(oldp+355,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl),3);
    bufp->fullCData(oldp+356,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_wr_ctrl),8);
    bufp->fullBit(oldp+357,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type));
    bufp->fullBit(oldp+358,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type));
    bufp->fullIData(oldp+359,(((4U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__memory_rd_ctrl))
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
    bufp->fullIData(oldp+360,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data),32);
    bufp->fullIData(oldp+361,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs1),32);
    bufp->fullIData(oldp+362,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__BSU__DOT__signed_rs2),32);
    bufp->fullBit(oldp+363,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type) 
                             | ((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgTmp_h57f462a7__0)))));
    bufp->fullCData(oldp+364,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel),2);
    bufp->fullIData(oldp+365,(((2U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__w_sel))
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
    bufp->fullIData(oldp+366,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0)
                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__alu_out
                                : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0)
                                    ? vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__r_csr_data
                                    : 0U))),32);
    bufp->fullBit(oldp+367,(((0x6fU == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0))));
    bufp->fullBit(oldp+368,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ecall));
    bufp->fullBit(oldp+369,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_mret));
    bufp->fullBit(oldp+370,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__jump_branch));
    bufp->fullIData(oldp+371,(((IData)(4U) + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)),32);
    bufp->fullIData(oldp+372,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__imm_out),32);
    bufp->fullBit(oldp+373,(((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_load_type) 
                                 | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_s_type))) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu))));
    bufp->fullBit(oldp+374,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid))));
    bufp->fullBit(oldp+375,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__rd_finish));
    bufp->fullBit(oldp+376,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_ifu));
    bufp->fullBit(oldp+377,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__valid_idu));
    bufp->fullCData(oldp+378,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_reg),8);
    bufp->fullBit(oldp+379,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arvalid));
    bufp->fullBit(oldp+380,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arready));
    bufp->fullBit(oldp+381,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rready));
    bufp->fullBit(oldp+382,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rvalid));
    bufp->fullBit(oldp+383,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awready));
    bufp->fullBit(oldp+384,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wready));
    bufp->fullBit(oldp+385,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bvalid));
    bufp->fullBit(oldp+386,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arvalid));
    bufp->fullBit(oldp+387,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arready));
    bufp->fullBit(oldp+388,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rready));
    bufp->fullBit(oldp+389,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rvalid));
    bufp->fullIData(oldp+390,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rdata),32);
    bufp->fullBit(oldp+391,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awvalid));
    bufp->fullBit(oldp+392,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awready));
    bufp->fullBit(oldp+393,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wvalid));
    bufp->fullBit(oldp+394,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wready));
    bufp->fullBit(oldp+395,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bready));
    bufp->fullBit(oldp+396,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bvalid));
    bufp->fullIData(oldp+397,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_araddr),32);
    bufp->fullBit(oldp+398,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arvalid));
    bufp->fullBit(oldp+399,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arready));
    bufp->fullBit(oldp+400,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rready));
    bufp->fullBit(oldp+401,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rvalid));
    bufp->fullIData(oldp+402,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rdata),32);
    bufp->fullIData(oldp+403,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awaddr),32);
    bufp->fullBit(oldp+404,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awvalid));
    bufp->fullBit(oldp+405,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awready));
    bufp->fullIData(oldp+406,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wdata),32);
    bufp->fullBit(oldp+407,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wvalid));
    bufp->fullBit(oldp+408,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wready));
    bufp->fullBit(oldp+409,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bready));
    bufp->fullBit(oldp+410,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bvalid));
    bufp->fullIData(oldp+411,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awaddr),32);
    bufp->fullBit(oldp+412,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awvalid));
    bufp->fullBit(oldp+413,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awready));
    bufp->fullIData(oldp+414,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wdata),32);
    bufp->fullBit(oldp+415,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wvalid));
    bufp->fullBit(oldp+416,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wready));
    bufp->fullBit(oldp+417,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bready));
    bufp->fullBit(oldp+418,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_bvalid));
    bufp->fullIData(oldp+419,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_araddr),32);
    bufp->fullBit(oldp+420,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arvalid));
    bufp->fullBit(oldp+421,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_arready));
    bufp->fullBit(oldp+422,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rready));
    bufp->fullBit(oldp+423,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rvalid));
    bufp->fullIData(oldp+424,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__clint_rdata),32);
    bufp->fullIData(oldp+425,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               + vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+426,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               << (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+427,((VL_LTS_III(32, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+428,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                                < vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)
                                ? 1U : 0U)),32);
    bufp->fullIData(oldp+429,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+430,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               >> (0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b))),32);
    bufp->fullIData(oldp+431,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               | vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+432,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+433,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a 
                               - vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_b)),32);
    bufp->fullIData(oldp+434,(VL_SHIFTRS_III(32,32,5, vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__signed_a, 
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
    bufp->fullWData(oldp+435,(__Vtemp_hce4daa8c__0),576);
    bufp->fullQData(oldp+453,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0]),36);
    bufp->fullQData(oldp+455,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1]),36);
    bufp->fullQData(oldp+457,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2]),36);
    bufp->fullQData(oldp+459,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[3]),36);
    bufp->fullQData(oldp+461,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[4]),36);
    bufp->fullQData(oldp+463,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[5]),36);
    bufp->fullQData(oldp+465,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[6]),36);
    bufp->fullQData(oldp+467,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7]),36);
    bufp->fullQData(oldp+469,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8]),36);
    bufp->fullQData(oldp+471,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9]),36);
    bufp->fullQData(oldp+473,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[10]),36);
    bufp->fullQData(oldp+475,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[11]),36);
    bufp->fullQData(oldp+477,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[12]),36);
    bufp->fullQData(oldp+479,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[13]),36);
    bufp->fullQData(oldp+481,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[14]),36);
    bufp->fullQData(oldp+483,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[15]),36);
    bufp->fullIData(oldp+485,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+486,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+487,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+488,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+489,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+490,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+491,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+492,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+493,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8]),32);
    bufp->fullIData(oldp+494,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9]),32);
    bufp->fullIData(oldp+495,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[10]),32);
    bufp->fullIData(oldp+496,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[11]),32);
    bufp->fullIData(oldp+497,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[12]),32);
    bufp->fullIData(oldp+498,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[13]),32);
    bufp->fullIData(oldp+499,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[14]),32);
    bufp->fullIData(oldp+500,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[15]),32);
    bufp->fullIData(oldp+501,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+502,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit));
    bufp->fullQData(oldp+503,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__mtime),64);
    bufp->fullIData(oldp+505,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CLINT__DOT__raddr),32);
    bufp->fullBit(oldp+506,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__CSR__finish));
    bufp->fullSData(oldp+507,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 0x14U)),12);
    bufp->fullIData(oldp+508,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mepc),32);
    bufp->fullIData(oldp+509,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mcause),32);
    bufp->fullIData(oldp+510,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mstatus),32);
    bufp->fullIData(oldp+511,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__CSR__DOT__csr_mtvec),32);
    bufp->fullCData(oldp+512,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 0xfU))),5);
    bufp->fullCData(oldp+513,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 0x14U))),5);
    bufp->fullCData(oldp+514,((0x1fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                        >> 7U))),5);
    bufp->fullIData(oldp+515,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[0]),32);
    bufp->fullIData(oldp+516,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[1]),32);
    bufp->fullIData(oldp+517,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[2]),32);
    bufp->fullIData(oldp+518,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[3]),32);
    bufp->fullIData(oldp+519,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[4]),32);
    bufp->fullIData(oldp+520,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[5]),32);
    bufp->fullIData(oldp+521,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[6]),32);
    bufp->fullIData(oldp+522,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[7]),32);
    bufp->fullIData(oldp+523,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[8]),32);
    bufp->fullIData(oldp+524,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[9]),32);
    bufp->fullIData(oldp+525,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[10]),32);
    bufp->fullIData(oldp+526,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[11]),32);
    bufp->fullIData(oldp+527,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[12]),32);
    bufp->fullIData(oldp+528,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[13]),32);
    bufp->fullIData(oldp+529,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[14]),32);
    bufp->fullIData(oldp+530,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[15]),32);
    bufp->fullIData(oldp+531,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[16]),32);
    bufp->fullIData(oldp+532,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[17]),32);
    bufp->fullIData(oldp+533,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[18]),32);
    bufp->fullIData(oldp+534,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[19]),32);
    bufp->fullIData(oldp+535,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[20]),32);
    bufp->fullIData(oldp+536,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[21]),32);
    bufp->fullIData(oldp+537,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[22]),32);
    bufp->fullIData(oldp+538,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[23]),32);
    bufp->fullIData(oldp+539,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[24]),32);
    bufp->fullIData(oldp+540,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[25]),32);
    bufp->fullIData(oldp+541,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[26]),32);
    bufp->fullIData(oldp+542,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[27]),32);
    bufp->fullIData(oldp+543,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[28]),32);
    bufp->fullIData(oldp+544,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[29]),32);
    bufp->fullIData(oldp+545,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[30]),32);
    bufp->fullIData(oldp+546,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__GPR__DOT__rf[31]),32);
    bufp->fullCData(oldp+547,((0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)),7);
    bufp->fullCData(oldp+548,((7U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                     >> 0xcU))),3);
    bufp->fullCData(oldp+549,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 0x19U)),7);
    bufp->fullIData(oldp+550,((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                               >> 7U)),25);
    bufp->fullBit(oldp+551,((0x37U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+552,((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata))));
    bufp->fullBit(oldp+553,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_beq));
    bufp->fullBit(oldp+554,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bne));
    bufp->fullBit(oldp+555,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_blt));
    bufp->fullBit(oldp+556,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bge));
    bufp->fullBit(oldp+557,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bltu));
    bufp->fullBit(oldp+558,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_bgeu));
    bufp->fullBit(oldp+559,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lb));
    bufp->fullBit(oldp+560,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lh));
    bufp->fullBit(oldp+561,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lw));
    bufp->fullBit(oldp+562,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lbu));
    bufp->fullBit(oldp+563,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_lhu));
    bufp->fullBit(oldp+564,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sb));
    bufp->fullBit(oldp+565,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sh));
    bufp->fullBit(oldp+566,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sw));
    bufp->fullBit(oldp+567,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_addi));
    bufp->fullBit(oldp+568,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slti));
    bufp->fullBit(oldp+569,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltiu));
    bufp->fullBit(oldp+570,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xori));
    bufp->fullBit(oldp+571,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_ori));
    bufp->fullBit(oldp+572,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_andi));
    bufp->fullBit(oldp+573,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slli));
    bufp->fullBit(oldp+574,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srli));
    bufp->fullBit(oldp+575,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srai));
    bufp->fullBit(oldp+576,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_add));
    bufp->fullBit(oldp+577,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sub));
    bufp->fullBit(oldp+578,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sll));
    bufp->fullBit(oldp+579,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_slt));
    bufp->fullBit(oldp+580,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sltu));
    bufp->fullBit(oldp+581,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_xor));
    bufp->fullBit(oldp+582,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_srl));
    bufp->fullBit(oldp+583,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_sra));
    bufp->fullBit(oldp+584,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_or));
    bufp->fullBit(oldp+585,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_and));
    bufp->fullBit(oldp+586,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrs));
    bufp->fullBit(oldp+587,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_csrrw));
    bufp->fullBit(oldp+588,(((0x17U == (0x7fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)) 
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
    bufp->fullBit(oldp+589,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_u_type));
    bufp->fullBit(oldp+590,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_b_type));
    bufp->fullBit(oldp+591,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_r_type));
    bufp->fullBit(oldp+592,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IDU__DOT__is_jalr) 
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
    bufp->fullBit(oldp+593,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h241ef1d5__0) 
                             | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____VdfgTmp_h445074e7__0))));
    bufp->fullBit(oldp+594,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__IFU__finish));
    bufp->fullBit(oldp+595,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_arvalid));
    bufp->fullIData(oldp+596,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter),32);
    bufp->fullBit(oldp+597,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__axi_rready));
    bufp->fullIData(oldp+598,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IFU__DOT__counter_rready),32);
    bufp->fullIData(oldp+599,((0xfffff000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata)),32);
    bufp->fullIData(oldp+600,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
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
    bufp->fullIData(oldp+601,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                            >> 0x1fU))) 
                                << 0x14U) | ((0xff000U 
                                              & vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata) 
                                             | ((0x800U 
                                                 & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                    >> 9U)) 
                                                | (0x7feU 
                                                   & (vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
                                                      >> 0x14U)))))),32);
    bufp->fullIData(oldp+602,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__out5),32);
    bufp->fullIData(oldp+603,((((- (IData)((vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rdata 
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
    bufp->fullWData(oldp+604,(__Vtemp_h1aefabc6__0),312);
    bufp->fullQData(oldp+614,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0]),39);
    bufp->fullQData(oldp+616,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1]),39);
    bufp->fullQData(oldp+618,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2]),39);
    bufp->fullQData(oldp+620,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3]),39);
    bufp->fullQData(oldp+622,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4]),39);
    bufp->fullQData(oldp+624,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5]),39);
    bufp->fullQData(oldp+626,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6]),39);
    bufp->fullQData(oldp+628,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7]),39);
    bufp->fullIData(oldp+630,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0]),32);
    bufp->fullIData(oldp+631,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1]),32);
    bufp->fullIData(oldp+632,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2]),32);
    bufp->fullIData(oldp+633,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3]),32);
    bufp->fullIData(oldp+634,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4]),32);
    bufp->fullIData(oldp+635,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5]),32);
    bufp->fullIData(oldp+636,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6]),32);
    bufp->fullIData(oldp+637,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7]),32);
    bufp->fullIData(oldp+638,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out),32);
    bufp->fullBit(oldp+639,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit));
    bufp->fullBit(oldp+640,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT____Vcellinp__LSU__mem_wr_en));
    bufp->fullIData(oldp+641,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__mem_move_out),32);
    bufp->fullBit(oldp+642,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_arvalid));
    bufp->fullIData(oldp+643,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter),32);
    bufp->fullBit(oldp+644,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__axi_rready));
    bufp->fullIData(oldp+645,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__LSU__DOT__counter_rready),32);
    bufp->fullIData(oldp+646,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_raddr),32);
    bufp->fullIData(oldp+647,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_data_to_read),32);
    bufp->fullBit(oldp+648,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__aw_hand));
    bufp->fullIData(oldp+649,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_waddr),32);
    bufp->fullBit(oldp+650,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__w_hand));
    bufp->fullIData(oldp+651,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__SRAM__DOT__axi_wdata),32);
    bufp->fullBit(oldp+652,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__aw_hand));
    bufp->fullIData(oldp+653,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__waddr),32);
    bufp->fullBit(oldp+654,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__w_hand));
    bufp->fullIData(oldp+655,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__UART__DOT__wdata),32);
    bufp->fullBit(oldp+656,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__arb_ready));
    bufp->fullCData(oldp+657,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__state),4);
    bufp->fullBit(oldp+658,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__XBAR__DOT__wait_read));
    bufp->fullBit(oldp+659,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_0));
    bufp->fullBit(oldp+660,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_1));
    bufp->fullBit(oldp+661,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_2));
    bufp->fullBit(oldp+662,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_3));
    bufp->fullBit(oldp+663,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_4));
    bufp->fullBit(oldp+664,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_5));
    bufp->fullBit(oldp+665,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_6));
    bufp->fullBit(oldp+666,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_7));
    bufp->fullBit(oldp+667,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_8));
    bufp->fullBit(oldp+668,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu_reset_chain__DOT__output_chain__DOT__sync_9));
    bufp->fullIData(oldp+669,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_araddr)),32);
    bufp->fullBit(oldp+670,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___nodeIn_rid_T));
    bufp->fullIData(oldp+671,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT___mrom_rdata),32);
    bufp->fullCData(oldp+672,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[0]),8);
    bufp->fullCData(oldp+673,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[1]),8);
    bufp->fullCData(oldp+674,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[2]),8);
    bufp->fullCData(oldp+675,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data[3]),8);
    bufp->fullCData(oldp+676,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__state),2);
    bufp->fullCData(oldp+677,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w_reg),8);
    bufp->fullCData(oldp+678,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+679,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+680,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+681,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+682,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+683,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+684,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+685,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+686,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+687,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+688,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+689,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+690,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+691,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+692,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+693,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram[15]),8);
    bufp->fullCData(oldp+694,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[0]),8);
    bufp->fullCData(oldp+695,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[1]),8);
    bufp->fullCData(oldp+696,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[2]),8);
    bufp->fullCData(oldp+697,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[3]),8);
    bufp->fullCData(oldp+698,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[4]),8);
    bufp->fullCData(oldp+699,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[5]),8);
    bufp->fullCData(oldp+700,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[6]),8);
    bufp->fullCData(oldp+701,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[7]),8);
    bufp->fullCData(oldp+702,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[8]),8);
    bufp->fullCData(oldp+703,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[9]),8);
    bufp->fullCData(oldp+704,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[10]),8);
    bufp->fullCData(oldp+705,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[11]),8);
    bufp->fullCData(oldp+706,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[12]),8);
    bufp->fullCData(oldp+707,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[13]),8);
    bufp->fullCData(oldp+708,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[14]),8);
    bufp->fullCData(oldp+709,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__tfifo__DOT__ram[15]),8);
    bufp->fullBit(oldp+710,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+711,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+712,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+713,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+714,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+715,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+716,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_psel))));
    bufp->fullBit(oldp+717,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullBit(oldp+718,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state)))));
    bufp->fullCData(oldp+719,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                   << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))),2);
    bufp->fullCData(oldp+720,((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp) 
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
    bufp->fullBit(oldp+721,((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+722,((1U & ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT__Queue1_BundleMap_15__DOT__ram_real_last) 
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
    bufp->fullBit(oldp+723,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_awvalid) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____VdfgTmp_h8d807e6f__0))));
    bufp->fullBit(oldp+724,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready) 
                             & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__idle_3)
                                 ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys) 
                                    >> 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__state_3_1)))));
    bufp->fullBit(oldp+725,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+726,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+727,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+728,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+729,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+730,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+731,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+732,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+733,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+734,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+735,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+736,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+737,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+738,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+739,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+740,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+741,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+742,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+743,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+744,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+745,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+746,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+747,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+748,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+749,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+750,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_8) 
                             & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_awid)))));
    bufp->fullBit(oldp+751,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+752,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+753,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+754,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+755,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+756,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4yank__DOT___GEN_2) 
                             & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4frag_auto_out_arid)))));
    bufp->fullBit(oldp+757,(vlSelf->ysyxSoCFull__DOT___asic_spi_sck));
    bufp->fullCData(oldp+758,(vlSelf->ysyxSoCFull__DOT___asic_spi_ss),8);
    bufp->fullBit(oldp+759,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__cke_q));
    bufp->fullBit(oldp+760,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 3U))));
    bufp->fullBit(oldp+761,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 2U))));
    bufp->fullBit(oldp+762,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q) 
                                   >> 1U))));
    bufp->fullBit(oldp+763,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q))));
    bufp->fullSData(oldp+764,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__addr_q),13);
    bufp->fullCData(oldp+765,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__bank_q),2);
    bufp->fullCData(oldp+766,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_q),2);
    bufp->fullSData(oldp+767,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                  ? 0U : 0xffffU) & 
                                ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                    ? 0U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q)) 
                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                      ? 0U : 0xffffU)) 
                                 & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                     ? 0U : 0xffffU))) 
                               & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)
                                   ? 0U : 0xffffU))),16);
    bufp->fullBit(oldp+768,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ack_q));
    bufp->fullIData(oldp+769,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                << 0x10U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))),32);
    bufp->fullBit(oldp+770,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_pready));
    bufp->fullIData(oldp+771,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata),32);
    bufp->fullBit(oldp+772,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck));
    bufp->fullBit(oldp+773,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n));
    bufp->fullCData(oldp+774,((0xfU & ((8U > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))
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
    bufp->fullBit(oldp+775,((0xeU > (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+776,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck));
    bufp->fullBit(oldp+777,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n));
    bufp->fullBit(oldp+778,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)))));
    bufp->fullBit(oldp+779,((0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))));
    bufp->fullBit(oldp+780,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__state));
    bufp->fullBit(oldp+781,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__state));
    bufp->fullCData(oldp+782,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter),8);
    bufp->fullIData(oldp+783,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__saddr),24);
    bufp->fullCData(oldp+784,((3U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter) 
                                      >> 1U) - (IData)(2U)))),2);
    bufp->fullBit(oldp+785,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__state));
    bufp->fullCData(oldp+786,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__counter),8);
    bufp->fullIData(oldp+787,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__saddr),24);
    bufp->fullBit(oldp+788,((1U & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q)))));
    bufp->fullSData(oldp+789,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_q),16);
    bufp->fullBit(oldp+790,(((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)) 
                             | (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q)))));
    bufp->fullCData(oldp+791,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__command_q),4);
    bufp->fullBit(oldp+792,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_rd_en_q));
    bufp->fullSData(oldp+793,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q),16);
    bufp->fullCData(oldp+794,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dqm_buffer_q),2);
    bufp->fullBit(oldp+795,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_q));
    bufp->fullCData(oldp+796,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__row_open_q),4);
    bufp->fullSData(oldp+797,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[0]),13);
    bufp->fullSData(oldp+798,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[1]),13);
    bufp->fullSData(oldp+799,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[2]),13);
    bufp->fullSData(oldp+800,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__active_row_q[3]),13);
    bufp->fullCData(oldp+801,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__state_q),4);
    bufp->fullCData(oldp+802,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_q),4);
    bufp->fullCData(oldp+803,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_state_q),4);
    bufp->fullCData(oldp+804,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_q),4);
    bufp->fullIData(oldp+805,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__refresh_timer_q),17);
    bufp->fullSData(oldp+806,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data0_q),16);
    bufp->fullSData(oldp+807,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q),16);
    bufp->fullIData(oldp+808,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__idx),32);
    bufp->fullCData(oldp+809,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__rd_q),4);
    bufp->fullWData(oldp+810,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__dbg_state),80);
    bufp->fullBit(oldp+813,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__spi_irq_out));
    bufp->fullSData(oldp+814,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__divider),16);
    bufp->fullSData(oldp+815,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl),14);
    bufp->fullCData(oldp+816,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ss),8);
    bufp->fullWData(oldp+817,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__data),128);
    bufp->fullBit(oldp+821,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 9U))));
    bufp->fullBit(oldp+822,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xaU))));
    bufp->fullCData(oldp+823,((0x7fU & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))),7);
    bufp->fullBit(oldp+824,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 8U))));
    bufp->fullBit(oldp+825,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+826,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+827,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+828,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__tip));
    bufp->fullBit(oldp+829,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__pos_edge));
    bufp->fullBit(oldp+830,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__neg_edge));
    bufp->fullBit(oldp+831,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt)))))));
    bufp->fullSData(oldp+832,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt),16);
    bufp->fullBit(oldp+833,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullBit(oldp+834,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__clgen__DOT__cnt))));
    bufp->fullCData(oldp+835,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt),8);
    bufp->fullCData(oldp+836,((0xffU & ((0x800U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__ctrl))
                                         ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT____VdfgTmp_h72d11e0c__0) 
                                            - (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt))
                                         : ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__cnt) 
                                            - (IData)(1U))))),8);
    bufp->fullCData(oldp+837,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_bit_pos),8);
    bufp->fullBit(oldp+838,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__rx_clk));
    bufp->fullBit(oldp+839,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__shift__DOT__tx_clk));
    bufp->fullBit(oldp+840,((1U & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                      >> 1U)))));
    bufp->fullBit(oldp+841,((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))));
    bufp->fullBit(oldp+842,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__interrupt));
    bufp->fullBit(oldp+843,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 1U))));
    bufp->fullBit(oldp+844,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__enable));
    bufp->fullBit(oldp+845,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__srx_pad));
    bufp->fullCData(oldp+846,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ier),4);
    bufp->fullCData(oldp+847,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__iir),4);
    bufp->fullCData(oldp+848,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__fcr),2);
    bufp->fullCData(oldp+849,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr),5);
    bufp->fullCData(oldp+850,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr),8);
    bufp->fullCData(oldp+851,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msr),8);
    bufp->fullSData(oldp+852,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dl),16);
    bufp->fullCData(oldp+853,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__scratch),8);
    bufp->fullBit(oldp+854,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__start_dlc));
    bufp->fullBit(oldp+855,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr_mask_d));
    bufp->fullBit(oldp+856,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__msi_reset));
    bufp->fullSData(oldp+857,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__dlc),16);
    bufp->fullCData(oldp+858,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__trigger_level),4);
    bufp->fullBit(oldp+859,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rx_reset));
    bufp->fullBit(oldp+860,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tx_reset));
    bufp->fullBit(oldp+861,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lcr) 
                                   >> 7U))));
    bufp->fullBit(oldp+862,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr) 
                                   >> 4U))));
    bufp->fullBit(oldp+863,((IData)((0x10U != (0x12U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+864,((IData)((0x11U == (0x11U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+865,((IData)((0x14U == (0x14U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullBit(oldp+866,((IData)((0x18U == (0x18U 
                                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__mcr))))));
    bufp->fullCData(oldp+867,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r) 
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
    bufp->fullBit(oldp+868,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0));
    bufp->fullBit(oldp+869,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_overrun));
    bufp->fullBit(oldp+870,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 1U))));
    bufp->fullBit(oldp+871,((1U & (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))));
    bufp->fullBit(oldp+872,((1U & ((IData)(vlSelf->__VdfgTmp_ha17ae98a__0) 
                                   >> 2U))));
    bufp->fullBit(oldp+873,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5));
    bufp->fullBit(oldp+874,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6));
    bufp->fullBit(oldp+875,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7));
    bufp->fullBit(oldp+876,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0r));
    bufp->fullBit(oldp+877,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1r));
    bufp->fullBit(oldp+878,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2r));
    bufp->fullBit(oldp+879,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3r));
    bufp->fullBit(oldp+880,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4r));
    bufp->fullBit(oldp+881,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5r));
    bufp->fullBit(oldp+882,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6r));
    bufp->fullBit(oldp+883,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7r));
    bufp->fullBit(oldp+884,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int));
    bufp->fullBit(oldp+885,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int));
    bufp->fullBit(oldp+886,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int));
    bufp->fullBit(oldp+887,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int));
    bufp->fullBit(oldp+888,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int));
    bufp->fullBit(oldp+889,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_push));
    bufp->fullBit(oldp+890,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_pop));
    bufp->fullBit(oldp+891,((0U != (vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
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
    bufp->fullBit(oldp+892,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_push_pulse));
    bufp->fullCData(oldp+893,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rf_count),5);
    bufp->fullCData(oldp+894,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tf_count),5);
    bufp->fullCData(oldp+895,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__tstate),3);
    bufp->fullCData(oldp+896,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rstate),4);
    bufp->fullSData(oldp+897,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__counter_t),10);
    bufp->fullBit(oldp+898,((1U & (~ (IData)((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt)))))));
    bufp->fullCData(oldp+899,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_cnt),8);
    bufp->fullCData(oldp+900,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__block_value),8);
    bufp->fullBit(oldp+901,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_out));
    bufp->fullBit(oldp+902,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__serial_in));
    bufp->fullCData(oldp+903,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__delayed_modem_signals),4);
    bufp->fullBit(oldp+904,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr0_d));
    bufp->fullBit(oldp+905,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr1_d));
    bufp->fullBit(oldp+906,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr2_d));
    bufp->fullBit(oldp+907,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr3_d));
    bufp->fullBit(oldp+908,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr4_d));
    bufp->fullBit(oldp+909,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr5_d));
    bufp->fullBit(oldp+910,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr6_d));
    bufp->fullBit(oldp+911,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__lsr7_d));
    bufp->fullBit(oldp+912,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d));
    bufp->fullBit(oldp+913,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d));
    bufp->fullBit(oldp+914,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d));
    bufp->fullBit(oldp+915,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d));
    bufp->fullBit(oldp+916,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d));
    bufp->fullBit(oldp+917,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int))));
    bufp->fullBit(oldp+918,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int))));
    bufp->fullBit(oldp+919,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int))));
    bufp->fullBit(oldp+920,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int))));
    bufp->fullBit(oldp+921,(((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_d)) 
                             & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int))));
    bufp->fullBit(oldp+922,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rls_int_pnd));
    bufp->fullBit(oldp+923,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__rda_int_pnd));
    bufp->fullBit(oldp+924,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__thre_int_pnd));
    bufp->fullBit(oldp+925,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ms_int_pnd));
    bufp->fullBit(oldp+926,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__ti_int_pnd));
    bufp->fullBit(oldp+927,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__i_uart_sync_flops__DOT__flop_0));
    bufp->fullCData(oldp+928,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16),4);
    bufp->fullCData(oldp+929,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_counter),3);
    bufp->fullCData(oldp+930,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rshift),8);
    bufp->fullBit(oldp+931,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity));
    bufp->fullBit(oldp+932,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_error));
    bufp->fullBit(oldp+933,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rframing_error));
    bufp->fullBit(oldp+934,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rbit_in));
    bufp->fullBit(oldp+935,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rparity_xor));
    bufp->fullCData(oldp+936,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b),8);
    bufp->fullBit(oldp+937,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push_q));
    bufp->fullSData(oldp+938,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in),11);
    bufp->fullBit(oldp+939,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_push));
    bufp->fullBit(oldp+940,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__counter_b))));
    bufp->fullBit(oldp+941,((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+942,((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullBit(oldp+943,((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16))));
    bufp->fullCData(oldp+944,((0xfU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rcounter16) 
                                       - (IData)(1U)))),4);
    bufp->fullSData(oldp+945,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value),10);
    bufp->fullCData(oldp+946,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__toc_value) 
                                        >> 2U))),8);
    bufp->fullCData(oldp+947,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[0]),3);
    bufp->fullCData(oldp+948,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[1]),3);
    bufp->fullCData(oldp+949,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[2]),3);
    bufp->fullCData(oldp+950,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[3]),3);
    bufp->fullCData(oldp+951,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[4]),3);
    bufp->fullCData(oldp+952,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[5]),3);
    bufp->fullCData(oldp+953,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[6]),3);
    bufp->fullCData(oldp+954,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[7]),3);
    bufp->fullCData(oldp+955,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[8]),3);
    bufp->fullCData(oldp+956,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[9]),3);
    bufp->fullCData(oldp+957,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[10]),3);
    bufp->fullCData(oldp+958,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[11]),3);
    bufp->fullCData(oldp+959,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[12]),3);
    bufp->fullCData(oldp+960,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[13]),3);
    bufp->fullCData(oldp+961,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[14]),3);
    bufp->fullCData(oldp+962,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo[15]),3);
    bufp->fullCData(oldp+963,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top),4);
    bufp->fullCData(oldp+964,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom),4);
    bufp->fullCData(oldp+965,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__top)))),4);
    bufp->fullCData(oldp+966,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0U]),3);
    bufp->fullCData(oldp+967,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [1U]),3);
    bufp->fullCData(oldp+968,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [2U]),3);
    bufp->fullCData(oldp+969,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [3U]),3);
    bufp->fullCData(oldp+970,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [4U]),3);
    bufp->fullCData(oldp+971,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [5U]),3);
    bufp->fullCData(oldp+972,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [6U]),3);
    bufp->fullCData(oldp+973,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [7U]),3);
    bufp->fullCData(oldp+974,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [8U]),3);
    bufp->fullCData(oldp+975,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [9U]),3);
    bufp->fullCData(oldp+976,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xaU]),3);
    bufp->fullCData(oldp+977,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xbU]),3);
    bufp->fullCData(oldp+978,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xcU]),3);
    bufp->fullCData(oldp+979,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xdU]),3);
    bufp->fullCData(oldp+980,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xeU]),3);
    bufp->fullCData(oldp+981,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__fifo
                              [0xfU]),3);
    bufp->fullCData(oldp+982,((0xffU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__rf_data_in) 
                                        >> 3U))),8);
    bufp->fullCData(oldp+983,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__counter),5);
    bufp->fullCData(oldp+984,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_counter),3);
    bufp->fullCData(oldp+985,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__shift_out),7);
    bufp->fullBit(oldp+986,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__stx_o_tmp));
    bufp->fullBit(oldp+987,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__parity_xor));
    bufp->fullBit(oldp+988,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_pop));
    bufp->fullBit(oldp+989,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__bit_out));
    bufp->fullBit(oldp+990,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_overrun));
    bufp->fullCData(oldp+991,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top),4);
    bufp->fullCData(oldp+992,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__bottom),4);
    bufp->fullCData(oldp+993,((0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__fifo_tx__DOT__top)))),4);
    bufp->fullBit(oldp+994,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_ss) 
                                   >> 7U))));
    bufp->fullBit(oldp+995,(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss));
    bufp->fullCData(oldp+996,(vlSelf->ysyxSoCFull__DOT__flash__DOT__state),3);
    bufp->fullCData(oldp+997,(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter),8);
    bufp->fullCData(oldp+998,(vlSelf->ysyxSoCFull__DOT__flash__DOT__cmd),8);
    bufp->fullIData(oldp+999,(vlSelf->ysyxSoCFull__DOT__flash__DOT__addr),24);
    bufp->fullIData(oldp+1000,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data),32);
    bufp->fullBit(oldp+1001,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                              & (0x17U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))));
    bufp->fullIData(oldp+1002,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w),32);
    bufp->fullBit(oldp+1003,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__is_write));
    bufp->fullIData(oldp+1004,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w),32);
    bufp->fullCData(oldp+1005,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi42apb_auto_out_pstrb),4);
    bufp->fullBit(oldp+1006,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr));
    bufp->fullIData(oldp+1007,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),30);
    bufp->fullIData(oldp+1008,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),29);
    bufp->fullBit(oldp+1009,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel));
    bufp->fullBit(oldp+1010,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel));
    bufp->fullBit(oldp+1011,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable));
    bufp->fullBit(oldp+1012,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_penable) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))));
    bufp->fullBit(oldp+1013,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_psel));
    bufp->fullBit(oldp+1014,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_0_penable));
    bufp->fullBit(oldp+1015,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0));
    bufp->fullBit(oldp+1016,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    bufp->fullBit(oldp+1017,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    bufp->fullBit(oldp+1018,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3));
    bufp->fullBit(oldp+1019,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4));
    bufp->fullBit(oldp+1020,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5));
    bufp->fullBit(oldp+1021,(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6));
    bufp->fullCData(oldp+1022,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                << 1U)),2);
    bufp->fullIData(oldp+1023,((0x1fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullBit(oldp+1024,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we));
    bufp->fullBit(oldp+1025,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_re));
    bufp->fullCData(oldp+1026,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size),3);
    bufp->fullCData(oldp+1027,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0),8);
    bufp->fullCData(oldp+1028,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1),8);
    bufp->fullCData(oldp+1029,((0xffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                         >> 0x10U))),8);
    bufp->fullCData(oldp+1030,((vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w 
                                >> 0x18U)),8);
    bufp->fullIData(oldp+1031,(((0xffff0000U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_write_data_w) 
                                | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte1) 
                                    << 8U) | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__byte0)))),32);
    bufp->fullIData(oldp+1032,((0xfffffcU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullIData(oldp+1033,((0xffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),24);
    bufp->fullCData(oldp+1034,((0xffU & ((IData)(0xdU) 
                                         + ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__size) 
                                            << 1U)))),8);
    bufp->fullBit(oldp+1035,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_rd_w));
    bufp->fullBit(oldp+1036,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__is_write));
    bufp->fullCData(oldp+1037,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT____Vcellinp__u_sdram_ctrl__inport_wr_i),4);
    bufp->fullBit(oldp+1038,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_req_w));
    bufp->fullSData(oldp+1039,((0x1feU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                          >> 1U))),13);
    bufp->fullSData(oldp+1040,((0x1fffU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                           >> 0xcU))),13);
    bufp->fullCData(oldp+1041,((3U & (vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w 
                                      >> 0xaU))),2);
    bufp->fullIData(oldp+1042,((0x3fffffffU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),32);
    bufp->fullCData(oldp+1043,((0x1fU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),5);
    bufp->fullBit(oldp+1044,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x14U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullBit(oldp+1045,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x10U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1046,(((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
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
    bufp->fullBit(oldp+1047,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____VdfgTmp_h6152756d__0) 
                              & (0x18U == (0x1cU & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)))));
    bufp->fullCData(oldp+1048,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT____Vcellinp__shift__latch),4);
    bufp->fullCData(oldp+1049,((7U & vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__ram_addr_w)),3);
    bufp->fullCData(oldp+1050,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_w),8);
    bufp->fullCData(oldp+1051,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT____Vcellinp__Uregs__wb_dat_i),8);
    bufp->fullCData(oldp+1052,((((((3U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out0) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten))) 
                                   | (0xcU & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__qspi_dio__out__strong__out1) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten)))) 
                                  & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0)) 
                                & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__qspi_dio__en0))),4);
    bufp->fullBit(oldp+1053,(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pready));
    bufp->fullBit(oldp+1054,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_bready));
    bufp->fullBit(oldp+1055,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_bvalid));
    bufp->fullBit(oldp+1056,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_0_rready));
    bufp->fullBit(oldp+1057,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    bufp->fullBit(oldp+1058,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid))));
    bufp->fullCData(oldp+1059,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9),4);
    bufp->fullBit(oldp+1060,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_rvalid));
    bufp->fullCData(oldp+1061,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19),4);
    bufp->fullBit(oldp+1062,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_awready));
    bufp->fullBit(oldp+1063,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_wready));
    bufp->fullBit(oldp+1064,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__nodeOut_bready));
    bufp->fullBit(oldp+1065,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__in_0_bvalid));
    bufp->fullCData(oldp+1066,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_bresp),2);
    bufp->fullBit(oldp+1067,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_becho_real_last));
    bufp->fullBit(oldp+1068,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4yank_auto_in_arready));
    bufp->fullBit(oldp+1069,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4));
    bufp->fullBit(oldp+1070,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_awready));
    bufp->fullBit(oldp+1071,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q__io_deq_ready));
    bufp->fullBit(oldp+1072,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q__DOT__do_enq));
    bufp->fullBit(oldp+1073,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__deq_q_1__io_deq_ready));
    bufp->fullBit(oldp+1074,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__deq_q_1__DOT__do_enq));
    bufp->fullBit(oldp+1075,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT____Vcellinp__in_wdeq_q__io_deq_ready));
    bufp->fullBit(oldp+1076,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4frag__DOT__in_wdeq_q__DOT__do_enq));
    bufp->fullBit(oldp+1077,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1078,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_bready));
    bufp->fullBit(oldp+1079,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__nodeIn_arready));
    bufp->fullBit(oldp+1080,(vlSelf->ysyxSoCFull__DOT__asic__DOT___axi4xbar_1_auto_out_2_rready));
    bufp->fullBit(oldp+1081,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__ren));
    bufp->fullBit(oldp+1082,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT____Vcellinp__mem_ext__W0_en));
    bufp->fullBit(oldp+1083,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__nodeIn_awready));
    bufp->fullBit(oldp+1084,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___portsAROI_in_0_arready_T_4));
    bufp->fullBit(oldp+1085,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid));
    bufp->fullCData(oldp+1086,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid),3);
    bufp->fullCData(oldp+1087,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys),3);
    bufp->fullBit(oldp+1088,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__prefixOR_1));
    bufp->fullBit(oldp+1089,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_1));
    bufp->fullBit(oldp+1090,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_3_2));
    bufp->fullBit(oldp+1091,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0));
    bufp->fullBit(oldp+1092,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1));
    bufp->fullBit(oldp+1093,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2));
    bufp->fullBit(oldp+1094,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__anyValid_1));
    bufp->fullCData(oldp+1095,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_valid_1),3);
    bufp->fullCData(oldp+1096,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__readys_readys_1),3);
    bufp->fullBit(oldp+1097,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_0));
    bufp->fullBit(oldp+1098,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__winner_4_2));
    bufp->fullBit(oldp+1099,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_0));
    bufp->fullBit(oldp+1100,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_4_2));
    bufp->fullBit(oldp+1101,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT____Vcellinp__awIn_0__io_deq_ready));
    bufp->fullBit(oldp+1102,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_deq));
    bufp->fullBit(oldp+1103,(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__awIn_0__DOT__do_enq));
    bufp->fullBit(oldp+1104,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1105,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1106,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1107,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1108,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1109,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1110,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1111,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1112,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1113,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1114,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1115,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1116,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1117,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1118,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1119,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1120,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1121,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1122,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1123,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xaU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1124,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xbU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1125,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xcU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1126,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1127,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1128,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1129,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___awFIFOMap_15_T_4) 
                              & (0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_bT_9)))));
    bufp->fullBit(oldp+1130,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1131,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1132,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1133,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1134,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((8U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullBit(oldp+1135,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___arFIFOMap_15_T_4) 
                              & ((9U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_19)) 
                                 & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT___in_0_rT_4)))));
    bufp->fullCData(oldp+1136,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__dout),4);
    bufp->fullCData(oldp+1137,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__douten),4);
    bufp->fullCData(oldp+1138,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_dout),4);
    bufp->fullBit(oldp+1139,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_rd));
    bufp->fullBit(oldp+1140,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_wr));
    bufp->fullBit(oldp+1141,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done));
    bufp->fullBit(oldp+1142,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__nstate));
    bufp->fullBit(oldp+1143,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__nstate));
    bufp->fullBit(oldp+1144,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MW__DOT__nstate));
    bufp->fullCData(oldp+1145,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__next_state_r),4);
    bufp->fullCData(oldp+1146,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__target_state_r),4);
    bufp->fullCData(oldp+1147,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__delay_r),4);
    bufp->fullIData(oldp+1148,(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi__DOT__u0_spi_top__DOT__wb_dat),32);
    bufp->fullCData(oldp+1149,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r),8);
    bufp->fullBit(oldp+1150,(vlSelf->clock));
    bufp->fullBit(oldp+1151,(vlSelf->reset));
    bufp->fullSData(oldp+1152,(vlSelf->externalPins_gpio_out),16);
    bufp->fullSData(oldp+1153,(vlSelf->externalPins_gpio_in),16);
    bufp->fullCData(oldp+1154,(vlSelf->externalPins_gpio_seg_0),8);
    bufp->fullCData(oldp+1155,(vlSelf->externalPins_gpio_seg_1),8);
    bufp->fullCData(oldp+1156,(vlSelf->externalPins_gpio_seg_2),8);
    bufp->fullCData(oldp+1157,(vlSelf->externalPins_gpio_seg_3),8);
    bufp->fullCData(oldp+1158,(vlSelf->externalPins_gpio_seg_4),8);
    bufp->fullCData(oldp+1159,(vlSelf->externalPins_gpio_seg_5),8);
    bufp->fullCData(oldp+1160,(vlSelf->externalPins_gpio_seg_6),8);
    bufp->fullCData(oldp+1161,(vlSelf->externalPins_gpio_seg_7),8);
    bufp->fullBit(oldp+1162,(vlSelf->externalPins_ps2_clk));
    bufp->fullBit(oldp+1163,(vlSelf->externalPins_ps2_data));
    bufp->fullCData(oldp+1164,(vlSelf->externalPins_vga_r),8);
    bufp->fullCData(oldp+1165,(vlSelf->externalPins_vga_g),8);
    bufp->fullCData(oldp+1166,(vlSelf->externalPins_vga_b),8);
    bufp->fullBit(oldp+1167,(vlSelf->externalPins_vga_hsync));
    bufp->fullBit(oldp+1168,(vlSelf->externalPins_vga_vsync));
    bufp->fullBit(oldp+1169,(vlSelf->externalPins_vga_valid));
    bufp->fullBit(oldp+1170,(vlSelf->externalPins_uart_rx));
    bufp->fullBit(oldp+1171,(vlSelf->externalPins_uart_tx));
    bufp->fullBit(oldp+1172,(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi));
    bufp->fullBit(oldp+1173,((1U & ((IData)(vlSelf->ysyxSoCFull__DOT____Vcellinp__flash__ss) 
                                    | ((((2U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__state)) 
                                         & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__flash__DOT__counter)))
                                         ? vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap
                                         : vlSelf->ysyxSoCFull__DOT__flash__DOT__data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1174,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_sck)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_sck))));
    bufp->fullBit(oldp+1175,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_ce_n)
                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mr_ce_n))));
    bufp->fullBit(oldp+1176,((1U & (~ (IData)(vlSelf->clock)))));
    bufp->fullIData(oldp+1177,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                  ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                             ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                 ? 
                                                (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                  << 0x18U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                     << 0x10U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                        << 8U) 
                                                       | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                 : 0U)
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                ? (
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [3U] 
                                                    << 0x18U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [2U] 
                                                       << 0x10U) 
                                                      | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [1U] 
                                                          << 8U) 
                                                         | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                         [0U])))
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                      : 0U) 
                                                    | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                         ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                         : 0U) 
                                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                           ? 
                                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                            << 0x10U) 
                                                           | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                           : 0U)))))))),32);
    bufp->fullBit(oldp+1178,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                                : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter))) 
                              & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_2_psel))));
    bufp->fullIData(oldp+1179,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                     << 0x18U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x10U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 8U) 
                                                     | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                 : 0U)),32);
    bufp->fullIData(oldp+1180,(((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                 ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                      : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                                 ? 
                                                ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                  ? 
                                                 (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                   << 0x18U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                      << 0x10U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                         << 8U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                  : 0U)
                                                 : 0U) 
                                               | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                                    ? 
                                                   ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                     [3U] 
                                                     << 0x18U) 
                                                    | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                        [2U] 
                                                        << 0x10U) 
                                                       | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                           [1U] 
                                                           << 8U) 
                                                          | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                          [0U])))
                                                    : 0U) 
                                                  | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                       ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                       : 0U) 
                                                     | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                          ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                          : 0U) 
                                                        | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                             : 0U) 
                                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                               ? 
                                                              (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                               : 0U)))))))
                                 : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)),32);
    bufp->fullIData(oldp+1181,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0)
                                           ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lspi_auto_in_prdata
                                           : 0U) | 
                                         (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel)
                                                ? (
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                    << 0x18U) 
                                                   | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                       << 0x10U) 
                                                      | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                                          << 8U) 
                                                         | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r))))
                                                : 0U)
                                            : 0U) | 
                                          (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)
                                             ? ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                 [3U] 
                                                 << 0x18U) 
                                                | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                    [2U] 
                                                    << 0x10U) 
                                                   | ((vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                       [1U] 
                                                       << 8U) 
                                                      | vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__data
                                                      [0U])))
                                             : 0U) 
                                           | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3)
                                                ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata
                                                : 0U) 
                                              | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4)
                                                   ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata
                                                   : 0U) 
                                                 | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5)
                                                      ? vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata
                                                      : 0U) 
                                                    | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)
                                                        ? 
                                                       (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__sample_data_q) 
                                                         << 0x10U) 
                                                        | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lsdram_apb__DOT__msdram__DOT__u_sdram_ctrl__DOT__data_buffer_q))
                                                        : 0U)))))))
                                      : vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rdata_r)
                                  : 0U) | (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_1)
                                             ? vlSelf->ysyxSoCFull__DOT__asic__DOT__lmrom__DOT__nodeIn_rdata_r
                                             : 0U) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                               ? ((
                                                   ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                     ? 
                                                    ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                      ? 
                                                     (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                      [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                      >> 0x18U)
                                                      : 0U)
                                                     : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r3)) 
                                                   << 0x18U) 
                                                  | ((0xff0000U 
                                                      & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                           ? 
                                                          ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                            ? 
                                                           (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                            [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                            >> 0x10U)
                                                            : 0U)
                                                           : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r2)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                              ? 
                                                             ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                               ? 
                                                              (vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0] 
                                                               >> 8U)
                                                               : 0U)
                                                              : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r1)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_REG)
                                                               ? 
                                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_en_d0)
                                                                ? 
                                                               vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT__Memory
                                                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__mem_ext__DOT___R0_addr_d0]
                                                                : 0U)
                                                               : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__rdata_r0))))))
                                               : 0U)))),32);
    bufp->fullCData(oldp+1182,((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_0)
                                  ? ((1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__state))
                                      ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbdelay_delayer_in_pslverr) 
                                         << 1U) : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__resp_hold_r))
                                  : 0U) | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4xbar_1__DOT__muxState_3_2)
                                            ? ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi4ram__DOT__r_sel1)
                                                ? 0U
                                                : 3U)
                                            : 0U))),2);
    bufp->fullBit(oldp+1183,(vlSelf->ysyxSoCFull__DOT__asic__DOT____Vcellinp__cpu__reset));
    bufp->fullBit(oldp+1184,(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__wb_we)
                               ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__mw_done)
                               : (0x1cU == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lpsram__DOT__mpsram__DOT__u0__DOT__MR__DOT__counter)))));
    bufp->fullBit(oldp+1185,((1U & (~ (IData)(vlSelf->reset)))));
    bufp->fullBit(oldp+1186,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_we));
    bufp->fullBit(oldp+1187,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_re));
    bufp->fullSData(oldp+1188,(((vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                                 [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom] 
                                 << 3U) | (IData)(vlSelf->__VdfgTmp_ha17ae98a__0))),11);
    bufp->fullCData(oldp+1189,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__rfifo__DOT__ram
                               [vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__receiver__DOT__fifo_rx__DOT__bottom]),8);
    bufp->fullCData(oldp+1190,(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__Uregs__DOT__transmitter__DOT__tf_data_out),8);
    bufp->fullIData(oldp+1191,(vlSelf->ysyxSoCFull__DOT__flash__DOT__rdata),32);
    bufp->fullIData(oldp+1192,(((0xfffffeU & (vlSelf->ysyxSoCFull__DOT__flash__DOT__addr 
                                              << 1U)) 
                                | (IData)(vlSelf->ysyxSoCFull__DOT___asic_spi_mosi))),32);
    bufp->fullIData(oldp+1193,(vlSelf->ysyxSoCFull__DOT__flash__DOT__data_bswap),32);
    bufp->fullCData(oldp+1194,(1U),3);
    bufp->fullBit(oldp+1195,(0U));
    bufp->fullBit(oldp+1196,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pready));
    bufp->fullBit(oldp+1197,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_pslverr));
    bufp->fullIData(oldp+1198,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lvga_auto_in_prdata),32);
    bufp->fullBit(oldp+1199,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pready));
    bufp->fullBit(oldp+1200,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_pslverr));
    bufp->fullIData(oldp+1201,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lkeyboard_auto_in_prdata),32);
    bufp->fullBit(oldp+1202,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pready));
    bufp->fullBit(oldp+1203,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_pslverr));
    bufp->fullIData(oldp+1204,(vlSelf->ysyxSoCFull__DOT__asic__DOT___lgpio_auto_in_prdata),32);
    bufp->fullBit(oldp+1205,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awvalid));
    bufp->fullCData(oldp+1206,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awid),4);
    bufp->fullIData(oldp+1207,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awaddr),32);
    bufp->fullCData(oldp+1208,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awlen),8);
    bufp->fullCData(oldp+1209,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awsize),3);
    bufp->fullCData(oldp+1210,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_awburst),2);
    bufp->fullBit(oldp+1211,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wvalid));
    bufp->fullIData(oldp+1212,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wdata),32);
    bufp->fullCData(oldp+1213,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wstrb),4);
    bufp->fullBit(oldp+1214,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_wlast));
    bufp->fullBit(oldp+1215,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_bready));
    bufp->fullBit(oldp+1216,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arvalid));
    bufp->fullCData(oldp+1217,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arid),4);
    bufp->fullIData(oldp+1218,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_araddr),32);
    bufp->fullCData(oldp+1219,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arlen),8);
    bufp->fullCData(oldp+1220,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arsize),3);
    bufp->fullCData(oldp+1221,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_arburst),2);
    bufp->fullBit(oldp+1222,(vlSelf->ysyxSoCFull__DOT__asic__DOT___cpu_auto_master_out_rready));
    bufp->fullBit(oldp+1223,(1U));
    bufp->fullBit(oldp+1224,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_awready));
    bufp->fullIData(oldp+1225,(0U),32);
    bufp->fullCData(oldp+1226,(0U),4);
    bufp->fullCData(oldp+1227,(0U),8);
    bufp->fullCData(oldp+1228,(0U),3);
    bufp->fullCData(oldp+1229,(0U),2);
    bufp->fullBit(oldp+1230,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_wready));
    bufp->fullBit(oldp+1231,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bvalid));
    bufp->fullCData(oldp+1232,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bresp),2);
    bufp->fullCData(oldp+1233,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_bid),4);
    bufp->fullBit(oldp+1234,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_arready));
    bufp->fullBit(oldp+1235,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rvalid));
    bufp->fullCData(oldp+1236,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rresp),2);
    bufp->fullIData(oldp+1237,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rdata),32);
    bufp->fullBit(oldp+1238,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rlast));
    bufp->fullCData(oldp+1239,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__io_slave_rid),4);
    bufp->fullCData(oldp+1240,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arid),4);
    bufp->fullCData(oldp+1241,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arlen),8);
    bufp->fullCData(oldp+1242,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arsize),3);
    bufp->fullCData(oldp+1243,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_arburst),2);
    bufp->fullCData(oldp+1244,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rresp),2);
    bufp->fullBit(oldp+1245,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rlast));
    bufp->fullCData(oldp+1246,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_rid),4);
    bufp->fullIData(oldp+1247,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awaddr),32);
    bufp->fullBit(oldp+1248,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awvalid));
    bufp->fullCData(oldp+1249,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awid),4);
    bufp->fullCData(oldp+1250,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awlen),8);
    bufp->fullCData(oldp+1251,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awsize),3);
    bufp->fullCData(oldp+1252,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_awburst),2);
    bufp->fullIData(oldp+1253,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wdata),32);
    bufp->fullBit(oldp+1254,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wvalid));
    bufp->fullCData(oldp+1255,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wstrb),4);
    bufp->fullBit(oldp+1256,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_wlast));
    bufp->fullBit(oldp+1257,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bready));
    bufp->fullCData(oldp+1258,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bresp),2);
    bufp->fullCData(oldp+1259,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ifu_bid),4);
    bufp->fullCData(oldp+1260,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arid),4);
    bufp->fullCData(oldp+1261,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arlen),8);
    bufp->fullCData(oldp+1262,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arsize),3);
    bufp->fullCData(oldp+1263,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_arburst),2);
    bufp->fullCData(oldp+1264,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rresp),2);
    bufp->fullBit(oldp+1265,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rlast));
    bufp->fullCData(oldp+1266,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_rid),4);
    bufp->fullCData(oldp+1267,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awid),4);
    bufp->fullCData(oldp+1268,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awlen),8);
    bufp->fullCData(oldp+1269,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awsize),3);
    bufp->fullCData(oldp+1270,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_awburst),2);
    bufp->fullCData(oldp+1271,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wstrb),4);
    bufp->fullBit(oldp+1272,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_wlast));
    bufp->fullCData(oldp+1273,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bresp),2);
    bufp->fullCData(oldp+1274,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__lsu_bid),4);
    bufp->fullCData(oldp+1275,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arid),4);
    bufp->fullCData(oldp+1276,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arlen),8);
    bufp->fullCData(oldp+1277,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arsize),3);
    bufp->fullCData(oldp+1278,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_arburst),2);
    bufp->fullCData(oldp+1279,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rresp),2);
    bufp->fullBit(oldp+1280,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rlast));
    bufp->fullCData(oldp+1281,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_rid),4);
    bufp->fullCData(oldp+1282,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awid),4);
    bufp->fullCData(oldp+1283,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awlen),8);
    bufp->fullCData(oldp+1284,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awsize),3);
    bufp->fullCData(oldp+1285,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_awburst),2);
    bufp->fullCData(oldp+1286,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wstrb),4);
    bufp->fullBit(oldp+1287,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_wlast));
    bufp->fullCData(oldp+1288,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bresp),2);
    bufp->fullCData(oldp+1289,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__saxi_bid),4);
    bufp->fullIData(oldp+1290,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_araddr),32);
    bufp->fullBit(oldp+1291,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arvalid));
    bufp->fullBit(oldp+1292,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arready));
    bufp->fullCData(oldp+1293,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arid),4);
    bufp->fullCData(oldp+1294,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arlen),8);
    bufp->fullCData(oldp+1295,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arsize),3);
    bufp->fullCData(oldp+1296,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_arburst),2);
    bufp->fullBit(oldp+1297,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rready));
    bufp->fullBit(oldp+1298,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rvalid));
    bufp->fullIData(oldp+1299,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rdata),32);
    bufp->fullCData(oldp+1300,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rresp),2);
    bufp->fullBit(oldp+1301,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rlast));
    bufp->fullCData(oldp+1302,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_rid),4);
    bufp->fullCData(oldp+1303,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awid),4);
    bufp->fullCData(oldp+1304,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awlen),8);
    bufp->fullCData(oldp+1305,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awsize),3);
    bufp->fullCData(oldp+1306,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_awburst),2);
    bufp->fullCData(oldp+1307,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wstrb),4);
    bufp->fullBit(oldp+1308,(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__uart_wlast));
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
