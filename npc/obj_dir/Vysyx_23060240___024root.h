// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vysyx_23060240.h for the primary calling header

#ifndef VERILATED_VYSYX_23060240___024ROOT_H_
#define VERILATED_VYSYX_23060240___024ROOT_H_  // guard

#include "verilated.h"

class Vysyx_23060240__Syms;

class Vysyx_23060240___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clock,0,0);
        VL_IN8(reset,0,0);
        VL_OUT8(difftest,0,0);
        VL_OUT8(itrace_reg,0,0);
        CData/*0:0*/ ysyx_23060240__DOT__w_csr_en;
        CData/*1:0*/ ysyx_23060240__DOT__alu_b_sel;
        CData/*3:0*/ ysyx_23060240__DOT__alu_func;
        CData/*2:0*/ ysyx_23060240__DOT__branch_type;
        CData/*2:0*/ ysyx_23060240__DOT__memory_rd_ctrl;
        CData/*7:0*/ ysyx_23060240__DOT__memory_wr_ctrl;
        CData/*1:0*/ ysyx_23060240__DOT__w_sel;
        CData/*0:0*/ ysyx_23060240__DOT__jump_branch;
        CData/*0:0*/ ysyx_23060240__DOT__rd_finish;
        CData/*0:0*/ ysyx_23060240__DOT__valid_ifu;
        CData/*0:0*/ ysyx_23060240__DOT__valid_idu;
        CData/*7:0*/ ysyx_23060240__DOT__uart_reg;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_arready;
        CData/*3:0*/ ysyx_23060240__DOT__ifu_arid;
        CData/*7:0*/ ysyx_23060240__DOT__ifu_arlen;
        CData/*2:0*/ ysyx_23060240__DOT__ifu_arsize;
        CData/*1:0*/ ysyx_23060240__DOT__ifu_arburst;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_rready;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_rvalid;
        CData/*1:0*/ ysyx_23060240__DOT__ifu_rresp;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_rlast;
        CData/*3:0*/ ysyx_23060240__DOT__ifu_rid;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_awvalid;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_awready;
        CData/*3:0*/ ysyx_23060240__DOT__ifu_awid;
        CData/*7:0*/ ysyx_23060240__DOT__ifu_awlen;
        CData/*2:0*/ ysyx_23060240__DOT__ifu_awsize;
        CData/*1:0*/ ysyx_23060240__DOT__ifu_awburst;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_wvalid;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_wready;
        CData/*3:0*/ ysyx_23060240__DOT__ifu_wstrb;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_wlast;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_bready;
        CData/*0:0*/ ysyx_23060240__DOT__ifu_bvalid;
        CData/*1:0*/ ysyx_23060240__DOT__ifu_bresp;
        CData/*3:0*/ ysyx_23060240__DOT__ifu_bid;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_arready;
        CData/*3:0*/ ysyx_23060240__DOT__lsu_arid;
        CData/*7:0*/ ysyx_23060240__DOT__lsu_arlen;
        CData/*2:0*/ ysyx_23060240__DOT__lsu_arsize;
        CData/*1:0*/ ysyx_23060240__DOT__lsu_arburst;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_rready;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_rvalid;
        CData/*1:0*/ ysyx_23060240__DOT__lsu_rresp;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_rlast;
        CData/*3:0*/ ysyx_23060240__DOT__lsu_rid;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_awvalid;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_awready;
        CData/*3:0*/ ysyx_23060240__DOT__lsu_awid;
        CData/*7:0*/ ysyx_23060240__DOT__lsu_awlen;
        CData/*2:0*/ ysyx_23060240__DOT__lsu_awsize;
        CData/*1:0*/ ysyx_23060240__DOT__lsu_awburst;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_wvalid;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_wready;
        CData/*3:0*/ ysyx_23060240__DOT__lsu_wstrb;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_wlast;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_bready;
        CData/*0:0*/ ysyx_23060240__DOT__lsu_bvalid;
    };
    struct {
        CData/*1:0*/ ysyx_23060240__DOT__lsu_bresp;
        CData/*3:0*/ ysyx_23060240__DOT__lsu_bid;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_arready;
        CData/*3:0*/ ysyx_23060240__DOT__saxi_arid;
        CData/*7:0*/ ysyx_23060240__DOT__saxi_arlen;
        CData/*2:0*/ ysyx_23060240__DOT__saxi_arsize;
        CData/*1:0*/ ysyx_23060240__DOT__saxi_arburst;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_rready;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_rvalid;
        CData/*1:0*/ ysyx_23060240__DOT__saxi_rresp;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_rlast;
        CData/*3:0*/ ysyx_23060240__DOT__saxi_rid;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_awvalid;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_awready;
        CData/*3:0*/ ysyx_23060240__DOT__saxi_awid;
        CData/*7:0*/ ysyx_23060240__DOT__saxi_awlen;
        CData/*2:0*/ ysyx_23060240__DOT__saxi_awsize;
        CData/*1:0*/ ysyx_23060240__DOT__saxi_awburst;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_wvalid;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_wready;
        CData/*3:0*/ ysyx_23060240__DOT__saxi_wstrb;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_wlast;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_bready;
        CData/*0:0*/ ysyx_23060240__DOT__saxi_bvalid;
        CData/*1:0*/ ysyx_23060240__DOT__saxi_bresp;
        CData/*3:0*/ ysyx_23060240__DOT__saxi_bid;
        CData/*0:0*/ ysyx_23060240__DOT__uart_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__uart_arready;
        CData/*3:0*/ ysyx_23060240__DOT__uart_arid;
        CData/*7:0*/ ysyx_23060240__DOT__uart_arlen;
        CData/*2:0*/ ysyx_23060240__DOT__uart_arsize;
        CData/*1:0*/ ysyx_23060240__DOT__uart_arburst;
        CData/*0:0*/ ysyx_23060240__DOT__uart_rready;
        CData/*0:0*/ ysyx_23060240__DOT__uart_rvalid;
        CData/*1:0*/ ysyx_23060240__DOT__uart_rresp;
        CData/*0:0*/ ysyx_23060240__DOT__uart_rlast;
        CData/*3:0*/ ysyx_23060240__DOT__uart_rid;
        CData/*0:0*/ ysyx_23060240__DOT__uart_awvalid;
        CData/*0:0*/ ysyx_23060240__DOT__uart_awready;
        CData/*3:0*/ ysyx_23060240__DOT__uart_awid;
        CData/*7:0*/ ysyx_23060240__DOT__uart_awlen;
        CData/*2:0*/ ysyx_23060240__DOT__uart_awsize;
        CData/*1:0*/ ysyx_23060240__DOT__uart_awburst;
        CData/*0:0*/ ysyx_23060240__DOT__uart_wvalid;
        CData/*0:0*/ ysyx_23060240__DOT__uart_wready;
        CData/*3:0*/ ysyx_23060240__DOT__uart_wstrb;
        CData/*0:0*/ ysyx_23060240__DOT__uart_wlast;
        CData/*0:0*/ ysyx_23060240__DOT__uart_bready;
        CData/*0:0*/ ysyx_23060240__DOT__uart_bvalid;
        CData/*1:0*/ ysyx_23060240__DOT__uart_bresp;
        CData/*3:0*/ ysyx_23060240__DOT__uart_bid;
        CData/*0:0*/ ysyx_23060240__DOT__clint_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__clint_arready;
        CData/*3:0*/ ysyx_23060240__DOT__clint_arid;
        CData/*7:0*/ ysyx_23060240__DOT__clint_arlen;
        CData/*2:0*/ ysyx_23060240__DOT__clint_arsize;
        CData/*1:0*/ ysyx_23060240__DOT__clint_arburst;
        CData/*0:0*/ ysyx_23060240__DOT__clint_rready;
        CData/*0:0*/ ysyx_23060240__DOT__clint_rvalid;
        CData/*1:0*/ ysyx_23060240__DOT__clint_rresp;
        CData/*0:0*/ ysyx_23060240__DOT__clint_rlast;
        CData/*3:0*/ ysyx_23060240__DOT__clint_rid;
        CData/*0:0*/ ysyx_23060240__DOT__clint_awvalid;
    };
    struct {
        CData/*0:0*/ ysyx_23060240__DOT__clint_awready;
        CData/*3:0*/ ysyx_23060240__DOT__clint_awid;
        CData/*7:0*/ ysyx_23060240__DOT__clint_awlen;
        CData/*2:0*/ ysyx_23060240__DOT__clint_awsize;
        CData/*1:0*/ ysyx_23060240__DOT__clint_awburst;
        CData/*0:0*/ ysyx_23060240__DOT__clint_wvalid;
        CData/*0:0*/ ysyx_23060240__DOT__clint_wready;
        CData/*3:0*/ ysyx_23060240__DOT__clint_wstrb;
        CData/*0:0*/ ysyx_23060240__DOT__clint_wlast;
        CData/*0:0*/ ysyx_23060240__DOT__clint_bready;
        CData/*0:0*/ ysyx_23060240__DOT__clint_bvalid;
        CData/*1:0*/ ysyx_23060240__DOT__clint_bresp;
        CData/*3:0*/ ysyx_23060240__DOT__clint_bid;
        CData/*0:0*/ ysyx_23060240__DOT____Vcellinp__LSU__mem_wr_en;
        CData/*0:0*/ ysyx_23060240__DOT____Vcellinp__IFU__finish;
        CData/*0:0*/ ysyx_23060240__DOT____Vcellinp__CSR__finish;
        CData/*0:0*/ ysyx_23060240__DOT____VdfgTmp_h241ef1d5__0;
        CData/*0:0*/ ysyx_23060240__DOT____VdfgTmp_h445074e7__0;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_jalr;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_beq;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_bne;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_blt;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_bge;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_bltu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_bgeu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_lb;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_lh;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_lw;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_lbu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_lhu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sb;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sh;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sw;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_addi;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_slti;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sltiu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_xori;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_ori;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_andi;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_slli;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_srli;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_srai;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_add;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sub;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sll;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_slt;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sltu;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_xor;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_srl;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_sra;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_or;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_and;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_csrrs;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_csrrw;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_ecall;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_mret;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_u_type;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_b_type;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_r_type;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_s_type;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT__is_load_type;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h57f462a7__0;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h26e5c323__0;
    };
    struct {
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgTmp_h873f971e__0;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgTmp_he69f398c__0;
        CData/*0:0*/ ysyx_23060240__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0;
        CData/*0:0*/ ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit;
        CData/*0:0*/ ysyx_23060240__DOT__LSU__DOT__axi_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__LSU__DOT__axi_rready;
        CData/*0:0*/ ysyx_23060240__DOT__IFU__DOT__rvalid;
        CData/*0:0*/ ysyx_23060240__DOT__IFU__DOT__axi_arvalid;
        CData/*0:0*/ ysyx_23060240__DOT__IFU__DOT__axi_rready;
        CData/*0:0*/ ysyx_23060240__DOT__XBAR__DOT__arb_ready;
        CData/*3:0*/ ysyx_23060240__DOT__XBAR__DOT__state;
        CData/*0:0*/ ysyx_23060240__DOT__XBAR__DOT__wait_read;
        CData/*0:0*/ ysyx_23060240__DOT__UART__DOT__aw_hand;
        CData/*0:0*/ ysyx_23060240__DOT__UART__DOT__w_hand;
        CData/*0:0*/ ysyx_23060240__DOT__SRAM__DOT__aw_hand;
        CData/*0:0*/ ysyx_23060240__DOT__SRAM__DOT__w_hand;
        CData/*5:0*/ __Vtableidx1;
        CData/*4:0*/ __Vtableidx2;
        CData/*2:0*/ __Vtableidx3;
        CData/*0:0*/ __Vtrigrprev__TOP__clock;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ __Vtableidx4;
        VL_OUT(inst,31,0);
        VL_OUT(pc,31,0);
        IData/*31:0*/ ysyx_23060240__DOT__alu_out;
        IData/*31:0*/ ysyx_23060240__DOT__r_csr_data;
        IData/*31:0*/ ysyx_23060240__DOT__imm_out;
        IData/*31:0*/ ysyx_23060240__DOT__ifu_rdata;
        IData/*31:0*/ ysyx_23060240__DOT__ifu_awaddr;
        IData/*31:0*/ ysyx_23060240__DOT__ifu_wdata;
        IData/*31:0*/ ysyx_23060240__DOT__lsu_rdata;
        IData/*31:0*/ ysyx_23060240__DOT__saxi_araddr;
        IData/*31:0*/ ysyx_23060240__DOT__saxi_rdata;
        IData/*31:0*/ ysyx_23060240__DOT__saxi_awaddr;
        IData/*31:0*/ ysyx_23060240__DOT__saxi_wdata;
        IData/*31:0*/ ysyx_23060240__DOT__uart_araddr;
        IData/*31:0*/ ysyx_23060240__DOT__uart_rdata;
        IData/*31:0*/ ysyx_23060240__DOT__uart_awaddr;
        IData/*31:0*/ ysyx_23060240__DOT__uart_wdata;
        IData/*31:0*/ ysyx_23060240__DOT__clint_araddr;
        IData/*31:0*/ ysyx_23060240__DOT__clint_rdata;
        IData/*31:0*/ ysyx_23060240__DOT__clint_awaddr;
        IData/*31:0*/ ysyx_23060240__DOT__clint_wdata;
        IData/*31:0*/ ysyx_23060240__DOT__GPR__DOT__i;
        IData/*31:0*/ ysyx_23060240__DOT__ALU__DOT__signed_a;
        IData/*31:0*/ ysyx_23060240__DOT__ALU__DOT__signed_b;
        IData/*31:0*/ ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060240__DOT__IMM__DOT__out5;
        IData/*31:0*/ ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out;
        IData/*31:0*/ ysyx_23060240__DOT__BSU__DOT__signed_rs1;
        IData/*31:0*/ ysyx_23060240__DOT__BSU__DOT__signed_rs2;
        IData/*31:0*/ ysyx_23060240__DOT__LSU__DOT__mem_move_out;
        IData/*31:0*/ ysyx_23060240__DOT__LSU__DOT__counter;
        IData/*31:0*/ ysyx_23060240__DOT__LSU__DOT__counter_rready;
        IData/*31:0*/ ysyx_23060240__DOT__IFU__DOT__counter;
        IData/*31:0*/ ysyx_23060240__DOT__IFU__DOT__counter_rready;
        IData/*31:0*/ ysyx_23060240__DOT__UART__DOT__waddr;
        IData/*31:0*/ ysyx_23060240__DOT__UART__DOT__wdata;
        IData/*31:0*/ ysyx_23060240__DOT__CLINT__DOT__raddr;
        IData/*31:0*/ ysyx_23060240__DOT__SRAM__DOT__axi_raddr;
        IData/*31:0*/ ysyx_23060240__DOT__SRAM__DOT__axi_data_to_read;
        IData/*31:0*/ ysyx_23060240__DOT__SRAM__DOT__axi_waddr;
        IData/*31:0*/ ysyx_23060240__DOT__SRAM__DOT__axi_wdata;
    };
    struct {
        IData/*31:0*/ ysyx_23060240__DOT__CSR__DOT__csr_mepc;
        IData/*31:0*/ ysyx_23060240__DOT__CSR__DOT__csr_mcause;
        IData/*31:0*/ ysyx_23060240__DOT__CSR__DOT__csr_mstatus;
        IData/*31:0*/ ysyx_23060240__DOT__CSR__DOT__csr_mtvec;
        IData/*31:0*/ __Vfunc_ysyx_23060240__DOT__SRAM__DOT__pmem_read__1__Vfuncout;
        IData/*31:0*/ __VstlIterCount;
        IData/*31:0*/ __VactIterCount;
        QData/*63:0*/ ysyx_23060240__DOT__CLINT__DOT__mtime;
        VlUnpacked<IData/*31:0*/, 32> ysyx_23060240__DOT__GPR__DOT__rf;
        VlUnpacked<QData/*35:0*/, 16> ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*3:0*/, 16> ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 16> ysyx_23060240__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list;
        VlUnpacked<QData/*38:0*/, 8> ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list;
        VlUnpacked<CData/*6:0*/, 8> ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list;
        VlUnpacked<IData/*31:0*/, 8> ysyx_23060240__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list;
        VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vysyx_23060240__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vysyx_23060240___024root(Vysyx_23060240__Syms* symsp, const char* v__name);
    ~Vysyx_23060240___024root();
    VL_UNCOPYABLE(Vysyx_23060240___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
