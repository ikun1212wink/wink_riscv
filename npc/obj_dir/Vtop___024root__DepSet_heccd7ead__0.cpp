// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop___024root.h"

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*1:0*/, 128> Vtop__ConstPool__TABLE_h76e044ac_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_h7f8668ce_0;
extern const VlUnpacked<CData/*0:0*/, 128> Vtop__ConstPool__TABLE_hf4bed784_0;
void Vtop___024root____Vdpiimwrap_top__DOT__SRAM__DOT__pmem_read_TOP(IData/*31:0*/ raddr, IData/*31:0*/ &pmem_read__Vfuncrtn);
void Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
extern const VlUnpacked<CData/*2:0*/, 64> Vtop__ConstPool__TABLE_h657a9346_0;
extern const VlUnpacked<CData/*7:0*/, 8> Vtop__ConstPool__TABLE_h074114c1_0;
extern const VlUnpacked<CData/*2:0*/, 32> Vtop__ConstPool__TABLE_hfe40056e_0;
extern const VlUnpacked<CData/*0:0*/, 512> Vtop__ConstPool__TABLE_hab390d39_0;
void Vtop___024root____Vdpiimwrap_top__DOT__SRAM__DOT__pmem_write_TOP(IData/*31:0*/ waddr, IData/*31:0*/ wdata, CData/*7:0*/ wmask);

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    CData/*6:0*/ __Vtableidx6;
    __Vtableidx6 = 0;
    CData/*6:0*/ __Vtableidx7;
    __Vtableidx7 = 0;
    CData/*6:0*/ __Vtableidx8;
    __Vtableidx8 = 0;
    CData/*4:0*/ __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0;
    __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0 = 0;
    IData/*31:0*/ __Vdlyvval__top__DOT__GPR__DOT__rf__v0;
    __Vdlyvval__top__DOT__GPR__DOT__rf__v0 = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU__DOT__axi_arvalid;
    __Vdly__top__DOT__LSU__DOT__axi_arvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__lsu_arvalid;
    __Vdly__top__DOT__lsu_arvalid = 0;
    IData/*31:0*/ __Vdly__top__DOT__LSU__DOT__counter;
    __Vdly__top__DOT__LSU__DOT__counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__LSU__DOT__axi_rready;
    __Vdly__top__DOT__LSU__DOT__axi_rready = 0;
    CData/*0:0*/ __Vdly__top__DOT__lsu_rready;
    __Vdly__top__DOT__lsu_rready = 0;
    IData/*31:0*/ __Vdly__top__DOT__LSU__DOT__counter_rready;
    __Vdly__top__DOT__LSU__DOT__counter_rready = 0;
    CData/*0:0*/ __Vdly__top__DOT__lsu_awvalid;
    __Vdly__top__DOT__lsu_awvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__lsu_wvalid;
    __Vdly__top__DOT__lsu_wvalid = 0;
    IData/*31:0*/ __Vdly__pc;
    __Vdly__pc = 0;
    CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__axi_arvalid;
    __Vdly__top__DOT__IFU__DOT__axi_arvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu_arvalid;
    __Vdly__top__DOT__ifu_arvalid = 0;
    IData/*31:0*/ __Vdly__top__DOT__IFU__DOT__counter;
    __Vdly__top__DOT__IFU__DOT__counter = 0;
    CData/*0:0*/ __Vdly__top__DOT__IFU__DOT__axi_rready;
    __Vdly__top__DOT__IFU__DOT__axi_rready = 0;
    CData/*0:0*/ __Vdly__top__DOT__ifu_rready;
    __Vdly__top__DOT__ifu_rready = 0;
    IData/*31:0*/ __Vdly__top__DOT__IFU__DOT__counter_rready;
    __Vdly__top__DOT__IFU__DOT__counter_rready = 0;
    CData/*0:0*/ __Vdly__top__DOT__ARB__DOT__arb_ready;
    __Vdly__top__DOT__ARB__DOT__arb_ready = 0;
    CData/*2:0*/ __Vdly__top__DOT__ARB__DOT__state;
    __Vdly__top__DOT__ARB__DOT__state = 0;
    CData/*0:0*/ __Vdly__top__DOT__ARB__DOT__wait_read;
    __Vdly__top__DOT__ARB__DOT__wait_read = 0;
    CData/*0:0*/ __Vdly__top__DOT__UART__DOT__w_hand;
    __Vdly__top__DOT__UART__DOT__w_hand = 0;
    CData/*0:0*/ __Vdly__top__DOT__uart_bvalid;
    __Vdly__top__DOT__uart_bvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__saxi_arready;
    __Vdly__top__DOT__saxi_arready = 0;
    CData/*0:0*/ __Vdly__top__DOT__saxi_rvalid;
    __Vdly__top__DOT__saxi_rvalid = 0;
    CData/*0:0*/ __Vdly__top__DOT__SRAM__DOT__w_hand;
    __Vdly__top__DOT__SRAM__DOT__w_hand = 0;
    CData/*0:0*/ __Vdly__top__DOT__saxi_bvalid;
    __Vdly__top__DOT__saxi_bvalid = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mstatus;
    __Vdly__top__DOT__CSR__DOT__csr_mstatus = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mtvec;
    __Vdly__top__DOT__CSR__DOT__csr_mtvec = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mepc;
    __Vdly__top__DOT__CSR__DOT__csr_mepc = 0;
    IData/*31:0*/ __Vdly__top__DOT__CSR__DOT__csr_mcause;
    __Vdly__top__DOT__CSR__DOT__csr_mcause = 0;
    // Body
    __Vdly__top__DOT__lsu_wvalid = vlSelf->top__DOT__lsu_wvalid;
    __Vdly__top__DOT__lsu_awvalid = vlSelf->top__DOT__lsu_awvalid;
    __Vdly__top__DOT__LSU__DOT__axi_arvalid = vlSelf->top__DOT__LSU__DOT__axi_arvalid;
    __Vdly__top__DOT__IFU__DOT__axi_rready = vlSelf->top__DOT__IFU__DOT__axi_rready;
    __Vdly__top__DOT__LSU__DOT__counter = vlSelf->top__DOT__LSU__DOT__counter;
    __Vdly__top__DOT__saxi_arready = vlSelf->top__DOT__saxi_arready;
    __Vdly__top__DOT__LSU__DOT__axi_rready = vlSelf->top__DOT__LSU__DOT__axi_rready;
    __Vdly__top__DOT__lsu_arvalid = vlSelf->top__DOT__lsu_arvalid;
    __Vdly__top__DOT__IFU__DOT__counter = vlSelf->top__DOT__IFU__DOT__counter;
    __Vdly__top__DOT__ifu_arvalid = vlSelf->top__DOT__ifu_arvalid;
    __Vdly__top__DOT__saxi_bvalid = vlSelf->top__DOT__saxi_bvalid;
    __Vdly__top__DOT__uart_bvalid = vlSelf->top__DOT__uart_bvalid;
    __Vdly__top__DOT__IFU__DOT__counter_rready = vlSelf->top__DOT__IFU__DOT__counter_rready;
    __Vdly__top__DOT__LSU__DOT__counter_rready = vlSelf->top__DOT__LSU__DOT__counter_rready;
    __Vdly__top__DOT__ifu_rready = vlSelf->top__DOT__ifu_rready;
    __Vdly__top__DOT__lsu_rready = vlSelf->top__DOT__lsu_rready;
    __Vdly__top__DOT__SRAM__DOT__w_hand = vlSelf->top__DOT__SRAM__DOT__w_hand;
    __Vdly__top__DOT__UART__DOT__w_hand = vlSelf->top__DOT__UART__DOT__w_hand;
    __Vdly__top__DOT__IFU__DOT__axi_arvalid = vlSelf->top__DOT__IFU__DOT__axi_arvalid;
    __Vdly__pc = vlSelf->pc;
    __Vdly__top__DOT__saxi_rvalid = vlSelf->top__DOT__saxi_rvalid;
    __Vdly__top__DOT__CSR__DOT__csr_mcause = vlSelf->top__DOT__CSR__DOT__csr_mcause;
    __Vdly__top__DOT__CSR__DOT__csr_mtvec = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
    __Vdly__top__DOT__CSR__DOT__csr_mstatus = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
    __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->top__DOT__CSR__DOT__csr_mepc;
    __Vdly__top__DOT__ARB__DOT__wait_read = vlSelf->top__DOT__ARB__DOT__wait_read;
    __Vdly__top__DOT__ARB__DOT__arb_ready = vlSelf->top__DOT__ARB__DOT__arb_ready;
    __Vdly__top__DOT__ARB__DOT__state = vlSelf->top__DOT__ARB__DOT__state;
    __Vdly__top__DOT__lsu_wvalid = ((~ (IData)(vlSelf->rst)) 
                                    & ((IData)(vlSelf->top__DOT____Vcellinp__LSU__mem_wr_en) 
                                       | ((~ ((IData)(vlSelf->top__DOT__lsu_wvalid) 
                                              & (IData)(vlSelf->top__DOT__lsu_wready))) 
                                          & (IData)(vlSelf->top__DOT__lsu_wvalid))));
    __Vdly__top__DOT__lsu_awvalid = ((~ (IData)(vlSelf->rst)) 
                                     & ((IData)(vlSelf->top__DOT____Vcellinp__LSU__mem_wr_en) 
                                        | ((~ ((IData)(vlSelf->top__DOT__lsu_awvalid) 
                                               & (IData)(vlSelf->top__DOT__lsu_awready))) 
                                           & (IData)(vlSelf->top__DOT__lsu_awvalid))));
    __Vdly__top__DOT__LSU__DOT__axi_arvalid = ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->top__DOT__valid_idu) 
                                                  | ((~ 
                                                      ((IData)(vlSelf->top__DOT__lsu_arvalid) 
                                                       & (IData)(vlSelf->top__DOT__lsu_arready))) 
                                                     & (IData)(vlSelf->top__DOT__LSU__DOT__axi_arvalid))));
    __Vdly__top__DOT__IFU__DOT__axi_rready = ((~ (IData)(vlSelf->rst)) 
                                              & (((IData)(vlSelf->top__DOT__ifu_arvalid) 
                                                  & (IData)(vlSelf->top__DOT__ifu_arready)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->top__DOT__ifu_rvalid) 
                                                      & (IData)(vlSelf->top__DOT__ifu_rready))) 
                                                    & (IData)(vlSelf->top__DOT__IFU__DOT__axi_rready))));
    __Vdly__top__DOT__saxi_arready = ((IData)(vlSelf->rst) 
                                      | ((~ ((IData)(vlSelf->top__DOT__saxi_arvalid) 
                                             & (IData)(vlSelf->top__DOT__saxi_arready))) 
                                         & (((IData)(vlSelf->top__DOT__saxi_rready) 
                                             & (IData)(vlSelf->top__DOT__saxi_rvalid)) 
                                            | (IData)(vlSelf->top__DOT__saxi_arready))));
    __Vdly__top__DOT__LSU__DOT__axi_rready = ((~ (IData)(vlSelf->rst)) 
                                              & (((IData)(vlSelf->top__DOT__lsu_arvalid) 
                                                  & (IData)(vlSelf->top__DOT__lsu_arready)) 
                                                 | ((~ 
                                                     ((IData)(vlSelf->top__DOT__lsu_rvalid) 
                                                      & (IData)(vlSelf->top__DOT__lsu_rready))) 
                                                    & (IData)(vlSelf->top__DOT__LSU__DOT__axi_rready))));
    __Vdly__top__DOT__saxi_bvalid = ((~ (IData)(vlSelf->rst)) 
                                     & (((IData)(vlSelf->top__DOT__SRAM__DOT__aw_hand) 
                                         & (IData)(vlSelf->top__DOT__SRAM__DOT__w_hand)) 
                                        | ((~ ((IData)(vlSelf->top__DOT__saxi_bvalid) 
                                               & (IData)(vlSelf->top__DOT__saxi_bready))) 
                                           & (IData)(vlSelf->top__DOT__saxi_bvalid))));
    __Vdly__top__DOT__uart_bvalid = ((~ (IData)(vlSelf->rst)) 
                                     & (((IData)(vlSelf->top__DOT__UART__DOT__aw_hand) 
                                         & (IData)(vlSelf->top__DOT__UART__DOT__w_hand)) 
                                        | ((~ ((IData)(vlSelf->top__DOT__uart_bvalid) 
                                               & (IData)(vlSelf->top__DOT__uart_bready))) 
                                           & (IData)(vlSelf->top__DOT__uart_bvalid))));
    __Vtableidx8 = (((IData)(vlSelf->top__DOT__SRAM__DOT__aw_hand) 
                     << 6U) | (((IData)(vlSelf->top__DOT__SRAM__DOT__w_hand) 
                                << 5U) | (((IData)(vlSelf->top__DOT__saxi_bvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__saxi_bready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__saxi_wvalid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__saxi_wready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    vlSelf->top__DOT__SRAM__DOT__axi_wdata = ((IData)(vlSelf->rst)
                                               ? 0U
                                               : (((IData)(vlSelf->top__DOT__saxi_wready) 
                                                   & (IData)(vlSelf->top__DOT__saxi_wvalid))
                                                   ? vlSelf->top__DOT__saxi_wdata
                                                   : vlSelf->top__DOT__SRAM__DOT__axi_wdata));
    if ((1U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx8])) {
        vlSelf->top__DOT__saxi_wready = Vtop__ConstPool__TABLE_h7f8668ce_0
            [__Vtableidx8];
    }
    if ((2U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx8])) {
        __Vdly__top__DOT__SRAM__DOT__w_hand = Vtop__ConstPool__TABLE_hf4bed784_0
            [__Vtableidx8];
    }
    __Vtableidx7 = (((IData)(vlSelf->top__DOT__SRAM__DOT__w_hand) 
                     << 6U) | (((IData)(vlSelf->top__DOT__SRAM__DOT__aw_hand) 
                                << 5U) | (((IData)(vlSelf->top__DOT__saxi_bvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__saxi_bready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__saxi_awvalid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__saxi_awready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    vlSelf->top__DOT__SRAM__DOT__axi_waddr = ((IData)(vlSelf->rst)
                                               ? 0x80000000U
                                               : (((IData)(vlSelf->top__DOT__saxi_awvalid) 
                                                   & (IData)(vlSelf->top__DOT__saxi_awready))
                                                   ? vlSelf->top__DOT__saxi_awaddr
                                                   : vlSelf->top__DOT__SRAM__DOT__axi_waddr));
    if ((1U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx7])) {
        vlSelf->top__DOT__saxi_awready = Vtop__ConstPool__TABLE_h7f8668ce_0
            [__Vtableidx7];
    }
    if ((2U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx7])) {
        vlSelf->top__DOT__SRAM__DOT__aw_hand = Vtop__ConstPool__TABLE_hf4bed784_0
            [__Vtableidx7];
    }
    __Vtableidx6 = (((IData)(vlSelf->top__DOT__UART__DOT__aw_hand) 
                     << 6U) | (((IData)(vlSelf->top__DOT__UART__DOT__w_hand) 
                                << 5U) | (((IData)(vlSelf->top__DOT__uart_bvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__uart_bready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__uart_wvalid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__uart_wready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    if ((1U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx6])) {
        vlSelf->top__DOT__uart_wready = Vtop__ConstPool__TABLE_h7f8668ce_0
            [__Vtableidx6];
    }
    if ((2U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx6])) {
        __Vdly__top__DOT__UART__DOT__w_hand = Vtop__ConstPool__TABLE_hf4bed784_0
            [__Vtableidx6];
    }
    __Vtableidx5 = (((IData)(vlSelf->top__DOT__UART__DOT__w_hand) 
                     << 6U) | (((IData)(vlSelf->top__DOT__UART__DOT__aw_hand) 
                                << 5U) | (((IData)(vlSelf->top__DOT__uart_bvalid) 
                                           << 4U) | 
                                          (((IData)(vlSelf->top__DOT__uart_bready) 
                                            << 3U) 
                                           | (((IData)(vlSelf->top__DOT__uart_awvalid) 
                                               << 2U) 
                                              | (((IData)(vlSelf->top__DOT__uart_awready) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    vlSelf->top__DOT__UART__DOT__waddr = ((IData)(vlSelf->rst)
                                           ? 0xa0000000U
                                           : (((IData)(vlSelf->top__DOT__uart_awready) 
                                               & (IData)(vlSelf->top__DOT__uart_awvalid))
                                               ? vlSelf->top__DOT__uart_awaddr
                                               : vlSelf->top__DOT__UART__DOT__waddr));
    if ((1U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx5])) {
        vlSelf->top__DOT__uart_awready = Vtop__ConstPool__TABLE_h7f8668ce_0
            [__Vtableidx5];
    }
    if ((2U & Vtop__ConstPool__TABLE_h76e044ac_0[__Vtableidx5])) {
        vlSelf->top__DOT__UART__DOT__aw_hand = Vtop__ConstPool__TABLE_hf4bed784_0
            [__Vtableidx5];
    }
    __Vdly__top__DOT__IFU__DOT__axi_arvalid = ((~ (IData)(vlSelf->rst)) 
                                               & ((IData)(vlSelf->top__DOT____Vcellinp__IFU__finish) 
                                                  | (IData)(vlSelf->top__DOT__IFU__DOT__axi_arvalid)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__SRAM__DOT__axi_raddr = 0x80000000U;
        __Vdly__top__DOT__lsu_arvalid = 0U;
        __Vdly__top__DOT__LSU__DOT__counter = 0U;
        __Vdly__top__DOT__ifu_rready = 0U;
        __Vdly__top__DOT__IFU__DOT__counter_rready = 0U;
        __Vdly__top__DOT__lsu_rready = 0U;
        __Vdly__top__DOT__LSU__DOT__counter_rready = 0U;
        __Vdly__top__DOT__ifu_arvalid = 1U;
        __Vdly__top__DOT__IFU__DOT__counter = 0U;
        __Vdly__pc = 0x80000000U;
        __Vdly__top__DOT__ARB__DOT__arb_ready = 1U;
        __Vdly__top__DOT__ARB__DOT__state = 0U;
        __Vdly__top__DOT__ARB__DOT__wait_read = 0U;
        vlSelf->top__DOT__UART__DOT__wdata = 0U;
        vlSelf->top__DOT__rd_finish = 0U;
        vlSelf->top__DOT__valid_ifu = 0U;
        vlSelf->top__DOT__saxi_rdata = 0U;
        __Vdly__top__DOT__saxi_rvalid = 0U;
    } else {
        if (((IData)(vlSelf->top__DOT__saxi_arvalid) 
             & (IData)(vlSelf->top__DOT__saxi_arready))) {
            vlSelf->top__DOT__SRAM__DOT__axi_raddr 
                = vlSelf->top__DOT__saxi_araddr;
            __Vdly__top__DOT__saxi_rvalid = 1U;
        } else {
            vlSelf->top__DOT__SRAM__DOT__axi_raddr 
                = vlSelf->top__DOT__SRAM__DOT__axi_raddr;
            if (((IData)(vlSelf->top__DOT__saxi_rvalid) 
                 & (IData)(vlSelf->top__DOT__saxi_rready))) {
                vlSelf->top__DOT__saxi_rdata = vlSelf->top__DOT__SRAM__DOT__axi_data_to_read;
                __Vdly__top__DOT__saxi_rvalid = 0U;
            } else {
                __Vdly__top__DOT__saxi_rvalid = vlSelf->top__DOT__saxi_rvalid;
            }
        }
        if (((IData)(vlSelf->top__DOT__lsu_arvalid) 
             & (IData)(vlSelf->top__DOT__lsu_arready))) {
            __Vdly__top__DOT__lsu_arvalid = 0U;
        } else if (vlSelf->top__DOT__valid_idu) {
            __Vdly__top__DOT__LSU__DOT__counter = 3U;
        } else if ((1U < vlSelf->top__DOT__LSU__DOT__counter)) {
            __Vdly__top__DOT__LSU__DOT__counter = (vlSelf->top__DOT__LSU__DOT__counter 
                                                   - (IData)(1U));
        } else if ((1U == vlSelf->top__DOT__LSU__DOT__counter)) {
            __Vdly__top__DOT__LSU__DOT__counter = (vlSelf->top__DOT__LSU__DOT__counter 
                                                   - (IData)(1U));
            __Vdly__top__DOT__lsu_arvalid = vlSelf->top__DOT__LSU__DOT__axi_arvalid;
        } else {
            __Vdly__top__DOT__lsu_arvalid = vlSelf->top__DOT__lsu_arvalid;
            __Vdly__top__DOT__LSU__DOT__counter = 0U;
        }
        if (((IData)(vlSelf->top__DOT__ifu_rvalid) 
             & (IData)(vlSelf->top__DOT__ifu_rready))) {
            __Vdly__top__DOT__ifu_rready = 0U;
        } else if (((IData)(vlSelf->top__DOT__ifu_arvalid) 
                    & (IData)(vlSelf->top__DOT__ifu_arready))) {
            __Vdly__top__DOT__IFU__DOT__counter_rready = 4U;
        } else if ((1U < vlSelf->top__DOT__IFU__DOT__counter_rready)) {
            __Vdly__top__DOT__IFU__DOT__counter_rready 
                = (vlSelf->top__DOT__IFU__DOT__counter_rready 
                   - (IData)(1U));
        } else if ((1U == vlSelf->top__DOT__IFU__DOT__counter_rready)) {
            __Vdly__top__DOT__IFU__DOT__counter_rready 
                = (vlSelf->top__DOT__IFU__DOT__counter_rready 
                   - (IData)(1U));
            __Vdly__top__DOT__ifu_rready = vlSelf->top__DOT__IFU__DOT__axi_rready;
        } else {
            __Vdly__top__DOT__ifu_rready = vlSelf->top__DOT__ifu_rready;
            __Vdly__top__DOT__IFU__DOT__counter_rready = 0U;
        }
        if (((IData)(vlSelf->top__DOT__lsu_rvalid) 
             & (IData)(vlSelf->top__DOT__lsu_rready))) {
            __Vdly__top__DOT__lsu_rready = 0U;
        } else if (((IData)(vlSelf->top__DOT__lsu_arvalid) 
                    & (IData)(vlSelf->top__DOT__lsu_arready))) {
            __Vdly__top__DOT__LSU__DOT__counter_rready = 7U;
        } else if ((1U < vlSelf->top__DOT__LSU__DOT__counter_rready)) {
            __Vdly__top__DOT__LSU__DOT__counter_rready 
                = (vlSelf->top__DOT__LSU__DOT__counter_rready 
                   - (IData)(1U));
        } else if ((1U == vlSelf->top__DOT__LSU__DOT__counter_rready)) {
            __Vdly__top__DOT__LSU__DOT__counter_rready 
                = (vlSelf->top__DOT__LSU__DOT__counter_rready 
                   - (IData)(1U));
            __Vdly__top__DOT__lsu_rready = vlSelf->top__DOT__LSU__DOT__axi_rready;
        } else {
            __Vdly__top__DOT__lsu_rready = vlSelf->top__DOT__lsu_rready;
            __Vdly__top__DOT__LSU__DOT__counter_rready = 0U;
        }
        if (((IData)(vlSelf->top__DOT__ifu_arvalid) 
             & (IData)(vlSelf->top__DOT__ifu_arready))) {
            __Vdly__top__DOT__ifu_arvalid = 0U;
            __Vdly__top__DOT__IFU__DOT__axi_arvalid = 0U;
        } else if (vlSelf->top__DOT____Vcellinp__IFU__finish) {
            __Vdly__top__DOT__IFU__DOT__counter = 6U;
        } else if ((1U < vlSelf->top__DOT__IFU__DOT__counter)) {
            __Vdly__top__DOT__IFU__DOT__counter = (vlSelf->top__DOT__IFU__DOT__counter 
                                                   - (IData)(1U));
        } else if ((1U == vlSelf->top__DOT__IFU__DOT__counter)) {
            __Vdly__top__DOT__IFU__DOT__counter = (vlSelf->top__DOT__IFU__DOT__counter 
                                                   - (IData)(1U));
            __Vdly__top__DOT__ifu_arvalid = vlSelf->top__DOT__IFU__DOT__axi_arvalid;
        } else {
            __Vdly__top__DOT__ifu_arvalid = vlSelf->top__DOT__ifu_arvalid;
            __Vdly__top__DOT__IFU__DOT__counter = 0U;
        }
        __Vdly__pc = ((IData)(vlSelf->top__DOT____Vcellinp__IFU__finish)
                       ? (((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0) 
                           | (IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0))
                           ? ((IData)(vlSelf->top__DOT____VdfgTmp_h241ef1d5__0)
                               ? vlSelf->top__DOT__alu_out
                               : ((IData)(vlSelf->top__DOT____VdfgTmp_h445074e7__0)
                                   ? vlSelf->top__DOT__r_csr_data
                                   : 0U)) : ((IData)(4U) 
                                             + vlSelf->pc))
                       : vlSelf->pc);
        if (((IData)(vlSelf->top__DOT__ARB__DOT__arb_ready) 
             & (IData)(vlSelf->top__DOT__ifu_arvalid))) {
            __Vdly__top__DOT__ARB__DOT__arb_ready = 0U;
            __Vdly__top__DOT__ARB__DOT__state = 1U;
        } else if (((IData)(vlSelf->top__DOT__ARB__DOT__arb_ready) 
                    & (IData)(vlSelf->top__DOT__lsu_arvalid))) {
            __Vdly__top__DOT__ARB__DOT__arb_ready = 0U;
            __Vdly__top__DOT__ARB__DOT__state = 2U;
        } else if (((IData)(vlSelf->top__DOT__ARB__DOT__arb_ready) 
                    & ((IData)(vlSelf->top__DOT__lsu_awvalid) 
                       | (IData)(vlSelf->top__DOT__lsu_wvalid)))) {
            if ((0xa00003f8U == vlSelf->top__DOT__alu_out)) {
                __Vdly__top__DOT__ARB__DOT__arb_ready = 0U;
                __Vdly__top__DOT__ARB__DOT__state = 6U;
            } else {
                __Vdly__top__DOT__ARB__DOT__arb_ready = 0U;
                __Vdly__top__DOT__ARB__DOT__state = 3U;
            }
        } else if (((IData)(vlSelf->top__DOT__lsu_rvalid) 
                    & (IData)(vlSelf->top__DOT__lsu_rready))) {
            __Vdly__top__DOT__ARB__DOT__wait_read = 1U;
            __Vdly__top__DOT__ARB__DOT__state = 4U;
        } else if (((IData)(vlSelf->top__DOT__ifu_rvalid) 
                    & (IData)(vlSelf->top__DOT__ifu_rready))) {
            __Vdly__top__DOT__ARB__DOT__wait_read = 1U;
            __Vdly__top__DOT__ARB__DOT__state = 5U;
        } else if (((IData)(vlSelf->top__DOT__lsu_bready) 
                    & (IData)(vlSelf->top__DOT__lsu_bvalid))) {
            __Vdly__top__DOT__ARB__DOT__state = 0U;
            __Vdly__top__DOT__ARB__DOT__arb_ready = 1U;
        } else if (vlSelf->top__DOT__ARB__DOT__wait_read) {
            __Vdly__top__DOT__ARB__DOT__arb_ready = 1U;
            __Vdly__top__DOT__ARB__DOT__state = 0U;
            __Vdly__top__DOT__ARB__DOT__wait_read = 0U;
        } else {
            __Vdly__top__DOT__ARB__DOT__arb_ready = vlSelf->top__DOT__ARB__DOT__arb_ready;
            __Vdly__top__DOT__ARB__DOT__state = vlSelf->top__DOT__ARB__DOT__state;
        }
        vlSelf->top__DOT__UART__DOT__wdata = vlSelf->top__DOT__uart_wdata;
        if ((1U & (~ ((IData)(vlSelf->top__DOT__lsu_arvalid) 
                      & (IData)(vlSelf->top__DOT__lsu_arready))))) {
            vlSelf->top__DOT__rd_finish = ((IData)(vlSelf->top__DOT__lsu_rvalid) 
                                           & (IData)(vlSelf->top__DOT__lsu_rready));
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ifu_arvalid) 
                      & (IData)(vlSelf->top__DOT__ifu_arready))))) {
            vlSelf->top__DOT__valid_ifu = ((IData)(vlSelf->top__DOT__ifu_rvalid) 
                                           & (IData)(vlSelf->top__DOT__ifu_rready));
        }
    }
    if (((IData)(vlSelf->top__DOT__w_csr_en) & (IData)(vlSelf->top__DOT____Vcellinp__CSR__finish))) {
        if ((0x300U != (vlSelf->top__DOT__ifu_rdata 
                        >> 0x14U))) {
            if ((0x305U != (vlSelf->top__DOT__ifu_rdata 
                            >> 0x14U))) {
                if ((0x341U != (vlSelf->top__DOT__ifu_rdata 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mcause 
                        = ((0x342U == (vlSelf->top__DOT__ifu_rdata 
                                       >> 0x14U)) ? 0xbU
                            : vlSelf->top__DOT__CSR__DOT__csr_mcause);
                }
                if ((0x341U == (vlSelf->top__DOT__ifu_rdata 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mepc 
                        = vlSelf->top__DOT__alu_out;
                } else if ((0x342U != (vlSelf->top__DOT__ifu_rdata 
                                       >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mepc 
                        = vlSelf->top__DOT__CSR__DOT__csr_mepc;
                }
            }
            if ((0x305U == (vlSelf->top__DOT__ifu_rdata 
                            >> 0x14U))) {
                __Vdly__top__DOT__CSR__DOT__csr_mtvec 
                    = vlSelf->top__DOT__alu_out;
            } else if ((0x341U != (vlSelf->top__DOT__ifu_rdata 
                                   >> 0x14U))) {
                if ((0x342U != (vlSelf->top__DOT__ifu_rdata 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mtvec 
                        = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
                }
            }
        }
        if ((0x300U == (vlSelf->top__DOT__ifu_rdata 
                        >> 0x14U))) {
            __Vdly__top__DOT__CSR__DOT__csr_mstatus 
                = vlSelf->top__DOT__alu_out;
            __Vdly__top__DOT__CSR__DOT__csr_mstatus = 0x1800U;
        } else if ((0x305U != (vlSelf->top__DOT__ifu_rdata 
                               >> 0x14U))) {
            if ((0x341U != (vlSelf->top__DOT__ifu_rdata 
                            >> 0x14U))) {
                if ((0x342U != (vlSelf->top__DOT__ifu_rdata 
                                >> 0x14U))) {
                    __Vdly__top__DOT__CSR__DOT__csr_mstatus 
                        = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
                }
            }
        }
    } else {
        if (((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall) 
             & (IData)(vlSelf->top__DOT____Vcellinp__CSR__finish))) {
            __Vdly__top__DOT__CSR__DOT__csr_mcause = 0xbU;
            __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->pc;
        } else {
            __Vdly__top__DOT__CSR__DOT__csr_mcause 
                = vlSelf->top__DOT__CSR__DOT__csr_mcause;
            __Vdly__top__DOT__CSR__DOT__csr_mepc = vlSelf->top__DOT__CSR__DOT__csr_mepc;
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall) 
                      & (IData)(vlSelf->top__DOT____Vcellinp__CSR__finish))))) {
            __Vdly__top__DOT__CSR__DOT__csr_mtvec = vlSelf->top__DOT__CSR__DOT__csr_mtvec;
            __Vdly__top__DOT__CSR__DOT__csr_mstatus 
                = vlSelf->top__DOT__CSR__DOT__csr_mstatus;
        }
    }
    __Vdlyvval__top__DOT__GPR__DOT__rf__v0 = (((((IData)(vlSelf->top__DOT__IDU__DOT__is_u_type) 
                                                 | ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__ifu_rdata)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))) 
                                                & (0U 
                                                   != 
                                                   (0x1fU 
                                                    & (vlSelf->top__DOT__ifu_rdata 
                                                       >> 7U)))) 
                                               & (IData)(vlSelf->top__DOT____Vcellinp__CSR__finish))
                                               ? ((2U 
                                                   & (IData)(vlSelf->top__DOT__w_sel))
                                                   ? 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__w_sel))
                                                    ? 
                                                   ((4U 
                                                     & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                     ? 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                      ? 0U
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? vlSelf->top__DOT__LSU__DOT__mem_move_out
                                                       : 
                                                      (0xffffU 
                                                       & vlSelf->top__DOT__LSU__DOT__mem_move_out)))
                                                     : 
                                                    ((2U 
                                                      & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                      ? 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                       >> 0xfU)))) 
                                                        << 0x10U) 
                                                       | (0xffffU 
                                                          & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                       : 
                                                      (0xffU 
                                                       & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                      : 
                                                     ((1U 
                                                       & (IData)(vlSelf->top__DOT__memory_rd_ctrl))
                                                       ? 
                                                      (((- (IData)(
                                                                   (1U 
                                                                    & (vlSelf->top__DOT__LSU__DOT__mem_move_out 
                                                                       >> 7U)))) 
                                                        << 8U) 
                                                       | (0xffU 
                                                          & vlSelf->top__DOT__LSU__DOT__mem_move_out))
                                                       : 0U)))
                                                    : vlSelf->top__DOT__alu_out)
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->top__DOT__w_sel))
                                                    ? 
                                                   ((IData)(4U) 
                                                    + vlSelf->pc)
                                                    : vlSelf->top__DOT__r_csr_data))
                                               : vlSelf->top__DOT__GPR__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->top__DOT__ifu_rdata 
                                                   >> 7U))]);
    __Vdlyvdim0__top__DOT__GPR__DOT__rf__v0 = (0x1fU 
                                               & (vlSelf->top__DOT__ifu_rdata 
                                                  >> 7U));
    vlSelf->top__DOT__LSU__DOT__counter = __Vdly__top__DOT__LSU__DOT__counter;
    vlSelf->top__DOT__LSU__DOT__axi_arvalid = __Vdly__top__DOT__LSU__DOT__axi_arvalid;
    vlSelf->top__DOT__IFU__DOT__counter_rready = __Vdly__top__DOT__IFU__DOT__counter_rready;
    vlSelf->top__DOT__IFU__DOT__axi_rready = __Vdly__top__DOT__IFU__DOT__axi_rready;
    vlSelf->top__DOT__LSU__DOT__counter_rready = __Vdly__top__DOT__LSU__DOT__counter_rready;
    vlSelf->top__DOT__LSU__DOT__axi_rready = __Vdly__top__DOT__LSU__DOT__axi_rready;
    vlSelf->top__DOT__SRAM__DOT__w_hand = __Vdly__top__DOT__SRAM__DOT__w_hand;
    vlSelf->top__DOT__saxi_bvalid = __Vdly__top__DOT__saxi_bvalid;
    vlSelf->top__DOT__UART__DOT__w_hand = __Vdly__top__DOT__UART__DOT__w_hand;
    vlSelf->top__DOT__uart_bvalid = __Vdly__top__DOT__uart_bvalid;
    vlSelf->top__DOT__IFU__DOT__counter = __Vdly__top__DOT__IFU__DOT__counter;
    vlSelf->top__DOT__IFU__DOT__axi_arvalid = __Vdly__top__DOT__IFU__DOT__axi_arvalid;
    vlSelf->top__DOT__CSR__DOT__csr_mcause = __Vdly__top__DOT__CSR__DOT__csr_mcause;
    vlSelf->top__DOT__CSR__DOT__csr_mtvec = __Vdly__top__DOT__CSR__DOT__csr_mtvec;
    vlSelf->top__DOT__CSR__DOT__csr_mstatus = __Vdly__top__DOT__CSR__DOT__csr_mstatus;
    vlSelf->top__DOT__CSR__DOT__csr_mepc = __Vdly__top__DOT__CSR__DOT__csr_mepc;
    vlSelf->pc = __Vdly__pc;
    vlSelf->top__DOT__GPR__DOT__rf[__Vdlyvdim0__top__DOT__GPR__DOT__rf__v0] 
        = __Vdlyvval__top__DOT__GPR__DOT__rf__v0;
    vlSelf->top__DOT__ARB__DOT__arb_ready = __Vdly__top__DOT__ARB__DOT__arb_ready;
    vlSelf->top__DOT__ARB__DOT__wait_read = __Vdly__top__DOT__ARB__DOT__wait_read;
    vlSelf->top__DOT__lsu_awvalid = __Vdly__top__DOT__lsu_awvalid;
    vlSelf->top__DOT__lsu_wvalid = __Vdly__top__DOT__lsu_wvalid;
    vlSelf->top__DOT__ARB__DOT__state = __Vdly__top__DOT__ARB__DOT__state;
    vlSelf->top__DOT__lsu_rready = __Vdly__top__DOT__lsu_rready;
    vlSelf->top__DOT__lsu_arvalid = __Vdly__top__DOT__lsu_arvalid;
    vlSelf->top__DOT__ifu_rready = __Vdly__top__DOT__ifu_rready;
    vlSelf->top__DOT__ifu_arvalid = __Vdly__top__DOT__ifu_arvalid;
    vlSelf->top__DOT__saxi_rvalid = __Vdly__top__DOT__saxi_rvalid;
    vlSelf->top__DOT__saxi_arready = __Vdly__top__DOT__saxi_arready;
    Vtop___024root____Vdpiimwrap_top__DOT__SRAM__DOT__pmem_read_TOP(vlSelf->top__DOT__SRAM__DOT__axi_raddr, vlSelf->__Vfunc_top__DOT__SRAM__DOT__pmem_read__1__Vfuncout);
    vlSelf->top__DOT__SRAM__DOT__axi_data_to_read = vlSelf->__Vfunc_top__DOT__SRAM__DOT__pmem_read__1__Vfuncout;
    vlSelf->top__DOT__lsu_bready = 1U;
    if ((4U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__uart_wvalid = vlSelf->top__DOT__lsu_wvalid;
                vlSelf->top__DOT__uart_awvalid = vlSelf->top__DOT__lsu_awvalid;
                vlSelf->top__DOT__lsu_awready = vlSelf->top__DOT__uart_awready;
                vlSelf->top__DOT__lsu_wready = vlSelf->top__DOT__uart_wready;
                vlSelf->top__DOT__lsu_bvalid = vlSelf->top__DOT__uart_bvalid;
            }
        }
    } else if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            vlSelf->top__DOT__lsu_awready = vlSelf->top__DOT__saxi_awready;
            vlSelf->top__DOT__lsu_wready = vlSelf->top__DOT__saxi_wready;
            vlSelf->top__DOT__lsu_bvalid = vlSelf->top__DOT__saxi_bvalid;
        }
    } else if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
        vlSelf->top__DOT__lsu_awready = 0U;
        vlSelf->top__DOT__lsu_wready = 0U;
        vlSelf->top__DOT__lsu_bvalid = 0U;
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                  >> 2U)))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__ifu_awready = 0U;
                vlSelf->top__DOT__ifu_wready = 0U;
                vlSelf->top__DOT__ifu_bvalid = 0U;
            }
        }
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
                vlSelf->top__DOT__saxi_wvalid = vlSelf->top__DOT__lsu_wvalid;
                vlSelf->top__DOT__saxi_awvalid = vlSelf->top__DOT__lsu_awvalid;
            }
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
            vlSelf->top__DOT__saxi_wvalid = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__UART__DOT__w_hand) 
         & (IData)(vlSelf->top__DOT__UART__DOT__aw_hand))) {
        if (VL_UNLIKELY((0xa00003f8U == vlSelf->top__DOT__UART__DOT__waddr))) {
            vlSelf->top__DOT__uart_reg = (0xffU & vlSelf->top__DOT__UART__DOT__wdata);
            VL_WRITEF("%c",8,vlSelf->top__DOT__uart_reg);
            Verilated::runFlushCallbacks();
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                      >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__lsu_rdata = vlSelf->top__DOT__saxi_rdata;
            }
            if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
                vlSelf->top__DOT__ifu_rdata = vlSelf->top__DOT__saxi_rdata;
            }
        }
    }
    vlSelf->inst = vlSelf->top__DOT__ifu_rdata;
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[1U] 
        = (0x2300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__ifu_rdata 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0xfe0U 
                                                  & (vlSelf->top__DOT__ifu_rdata 
                                                     >> 0x14U)) 
                                                 | (0x1fU 
                                                    & (vlSelf->top__DOT__ifu_rdata 
                                                       >> 7U)))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[4U] 
        = (0x6f00000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__ifu_rdata 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | ((0xff000U 
                                                  & vlSelf->top__DOT__ifu_rdata) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__ifu_rdata 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__ifu_rdata 
                                                          >> 0x14U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[5U] 
        = (0x6300000000ULL | (QData)((IData)((((- (IData)(
                                                          (vlSelf->top__DOT__ifu_rdata 
                                                           >> 0x1fU))) 
                                               << 0xcU) 
                                              | ((0x800U 
                                                  & (vlSelf->top__DOT__ifu_rdata 
                                                     << 4U)) 
                                                 | ((0x7e0U 
                                                     & (vlSelf->top__DOT__ifu_rdata 
                                                        >> 0x14U)) 
                                                    | (0x1eU 
                                                       & (vlSelf->top__DOT__ifu_rdata 
                                                          >> 7U))))))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[6U] 
        = (0x3700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->top__DOT__ifu_rdata))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[7U] 
        = (0x1700000000ULL | (QData)((IData)((0xfffff000U 
                                              & vlSelf->top__DOT__ifu_rdata))));
    vlSelf->top__DOT__IDU__DOT__is_u_type = ((0x37U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__ifu_rdata)) 
                                             | (0x17U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IMM__DOT__out5 = (((- (IData)(
                                                    (vlSelf->top__DOT__ifu_rdata 
                                                     >> 0x1fU))) 
                                         << 0xcU) | 
                                        (vlSelf->top__DOT__ifu_rdata 
                                         >> 0x14U));
    vlSelf->top__DOT__IDU__DOT__is_beq = (IData)((0x63U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_bne = (IData)((0x1063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_blt = (IData)((0x4063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_bge = (IData)((0x5063U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_bltu = (IData)((0x6063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_bgeu = (IData)((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__BSU__DOT__signed_rs1 = vlSelf->top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__ifu_rdata >> 0xfU))];
    vlSelf->top__DOT__IDU__DOT__is_ecall = (IData)(
                                                   (0x73U 
                                                    == vlSelf->top__DOT__ifu_rdata));
    vlSelf->top__DOT__IDU__DOT__is_mret = (IData)((0x30200073U 
                                                   == vlSelf->top__DOT__ifu_rdata));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[0U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__ifu_rdata 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[1U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | ((0xfe0U 
                                                 & (vlSelf->top__DOT__ifu_rdata 
                                                    >> 0x14U)) 
                                                | (0x1fU 
                                                   & (vlSelf->top__DOT__ifu_rdata 
                                                      >> 7U))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[2U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__ifu_rdata 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[3U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | (vlSelf->top__DOT__ifu_rdata 
                                                >> 0x14U));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[4U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0x14U) | ((0xff000U 
                                                  & vlSelf->top__DOT__ifu_rdata) 
                                                 | ((0x800U 
                                                     & (vlSelf->top__DOT__ifu_rdata 
                                                        >> 9U)) 
                                                    | (0x7feU 
                                                       & (vlSelf->top__DOT__ifu_rdata 
                                                          >> 0x14U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[5U] 
        = (((- (IData)((vlSelf->top__DOT__ifu_rdata 
                        >> 0x1fU))) << 0xcU) | ((0x800U 
                                                 & (vlSelf->top__DOT__ifu_rdata 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSelf->top__DOT__ifu_rdata 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSelf->top__DOT__ifu_rdata 
                                                         >> 7U)))));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[6U] 
        = (0xfffff000U & vlSelf->top__DOT__ifu_rdata);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list[7U] 
        = (0xfffff000U & vlSelf->top__DOT__ifu_rdata);
    vlSelf->top__DOT__BSU__DOT__signed_rs2 = vlSelf->top__DOT__GPR__DOT__rf
        [(0x1fU & (vlSelf->top__DOT__ifu_rdata >> 0x14U))];
    vlSelf->top__DOT__IDU__DOT__is_sb = (IData)((0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_sh = (IData)((0x1023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_sw = (IData)((0x2023U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_addi = (IData)((0x13U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_slti = (IData)((0x2013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_sltiu = (IData)(
                                                   (0x3013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_xori = (IData)((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_ori = (IData)((0x6013U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_andi = (IData)((0x7013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_jalr = (IData)((0x67U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_lb = (IData)((3U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_lh = (IData)((0x1003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_lw = (IData)((0x2003U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_lbu = (IData)((0x4003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_lhu = (IData)((0x5003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_slt = (IData)((0x2033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_sltu = (IData)((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_xor = (IData)((0x4033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_or = (IData)((0x6033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_and = (IData)((0x7033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0 
        = (IData)((0x5013U == (0x707fU & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_csrrw = (IData)(
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT__is_csrrs = (IData)(
                                                   (0x2073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0 
        = (IData)((0x1000U == (0xfe007000U & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0 
        = (IData)((0x33U == (0x707fU & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0 
        = (IData)((0x5033U == (0x707fU & vlSelf->top__DOT__ifu_rdata)));
    if ((4U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__uart_bready = vlSelf->top__DOT__lsu_bready;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__saxi_rready = vlSelf->top__DOT__lsu_rready;
                vlSelf->top__DOT__saxi_arvalid = vlSelf->top__DOT__lsu_arvalid;
                vlSelf->top__DOT__lsu_rvalid = vlSelf->top__DOT__saxi_rvalid;
                vlSelf->top__DOT__lsu_arready = vlSelf->top__DOT__saxi_arready;
            }
            if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
                vlSelf->top__DOT__saxi_bready = vlSelf->top__DOT__lsu_bready;
            }
        } else {
            vlSelf->top__DOT__saxi_rready = ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                                             & (IData)(vlSelf->top__DOT__ifu_rready));
            vlSelf->top__DOT__saxi_arvalid = ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                                              & (IData)(vlSelf->top__DOT__ifu_arvalid));
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__lsu_rvalid = 0U;
                vlSelf->top__DOT__lsu_arready = 0U;
                vlSelf->top__DOT__saxi_bready = 0U;
            }
        }
        if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                      >> 1U)))) {
            vlSelf->top__DOT__ifu_rvalid = ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                                            & (IData)(vlSelf->top__DOT__saxi_rvalid));
            vlSelf->top__DOT__ifu_arready = ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                                             & (IData)(vlSelf->top__DOT__saxi_arready));
        }
    }
    if ((0x6fU == vlSelf->inst)) {
        Vtop___024root____Vdpiimwrap_top__DOT__IDU__DOT__npc_trap_TOP();
    }
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[0U] 
        = (0x1300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[2U] 
        = (0x300000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__pair_list[3U] 
        = (0x6700000000ULL | (QData)((IData)(vlSelf->top__DOT__IMM__DOT__out5)));
    vlSelf->__Vtableidx1 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_bgeu) 
                             << 5U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                                        << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_beq))))));
    vlSelf->top__DOT__branch_type = Vtop__ConstPool__TABLE_h657a9346_0
        [vlSelf->__Vtableidx1];
    vlSelf->top__DOT__IDU__DOT__is_b_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_beq) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bne) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_blt) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bge) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_bltu) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_bgeu))))));
    vlSelf->top__DOT____VdfgTmp_h445074e7__0 = ((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_mret));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                       == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((0x7fU & vlSelf->top__DOT__ifu_rdata) == 
           vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((0x7fU & vlSelf->top__DOT__ifu_rdata) 
                          == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit) 
           | ((0x7fU & vlSelf->top__DOT__ifu_rdata) 
              == vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__imm_out = ((IData)(vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__hit)
                                  ? vlSelf->top__DOT__IMM__DOT__imm_mux__DOT__i0__DOT__lut_out
                                  : 0U);
    vlSelf->__Vtableidx3 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_sw) 
                             << 2U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                        << 1U) | (IData)(vlSelf->top__DOT__IDU__DOT__is_sb)));
    vlSelf->top__DOT__memory_wr_ctrl = Vtop__ConstPool__TABLE_h074114c1_0
        [vlSelf->__Vtableidx3];
    vlSelf->top__DOT__IDU__DOT__is_s_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_sb) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sh) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_sw)));
    vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0 
        = ((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT__ifu_rdata)));
    vlSelf->__Vtableidx2 = (((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                             << 4U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lhu) 
                                        << 3U) | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                      << 1U) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)))));
    vlSelf->top__DOT__memory_rd_ctrl = Vtop__ConstPool__TABLE_hfe40056e_0
        [vlSelf->__Vtableidx2];
    vlSelf->top__DOT__IDU__DOT__is_load_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_lb) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lh) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lw) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_lbu) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)))));
    vlSelf->top__DOT__IDU__DOT__is_srli = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0U == 
                                              (vlSelf->top__DOT__ifu_rdata 
                                               >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_srai = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h873f971e__0) 
                                           & (0x20U 
                                              == (vlSelf->top__DOT__ifu_rdata 
                                                  >> 0x19U)));
    vlSelf->top__DOT__w_csr_en = ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs) 
                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw));
    vlSelf->top__DOT__IDU__DOT__is_slli = ((0x13U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__ifu_rdata)) 
                                           & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->top__DOT__IDU__DOT__is_sll = ((0x33U == 
                                           (0x7fU & vlSelf->top__DOT__ifu_rdata)) 
                                          & (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h26e5c323__0));
    vlSelf->top__DOT__IDU__DOT__is_add = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0U == 
                                             (vlSelf->top__DOT__ifu_rdata 
                                              >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_sub = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_he69f398c__0) 
                                          & (0x20U 
                                             == (vlSelf->top__DOT__ifu_rdata 
                                                 >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_srl = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0U == 
                                             (vlSelf->top__DOT__ifu_rdata 
                                              >> 0x19U)));
    vlSelf->top__DOT__IDU__DOT__is_sra = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_hd3ddd1c8__0) 
                                          & (0x20U 
                                             == (vlSelf->top__DOT__ifu_rdata 
                                                 >> 0x19U)));
    vlSelf->__Vtableidx4 = (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                              == vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                             << 8U) | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                         != vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                        << 7U) | ((
                                                   VL_LTS_III(32, vlSelf->top__DOT__BSU__DOT__signed_rs1, vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                   << 6U) 
                                                  | ((VL_GTES_III(32, vlSelf->top__DOT__BSU__DOT__signed_rs1, vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                      << 5U) 
                                                     | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                                          < vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                         << 4U) 
                                                        | (((vlSelf->top__DOT__BSU__DOT__signed_rs1 
                                                             >= vlSelf->top__DOT__BSU__DOT__signed_rs2) 
                                                            << 3U) 
                                                           | (IData)(vlSelf->top__DOT__branch_type)))))));
    vlSelf->top__DOT__jump_branch = Vtop__ConstPool__TABLE_hab390d39_0
        [vlSelf->__Vtableidx4];
    if ((4U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__uart_wdata = vlSelf->top__DOT__BSU__DOT__signed_rs2;
            }
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
                vlSelf->top__DOT__saxi_wdata = vlSelf->top__DOT__BSU__DOT__signed_rs2;
            }
        } else if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
            vlSelf->top__DOT__saxi_wdata = 0U;
        }
    }
    if (((IData)(vlSelf->top__DOT__SRAM__DOT__w_hand) 
         & (IData)(vlSelf->top__DOT__SRAM__DOT__aw_hand))) {
        Vtop___024root____Vdpiimwrap_top__DOT__SRAM__DOT__pmem_write_TOP(vlSelf->top__DOT__SRAM__DOT__axi_waddr, vlSelf->top__DOT__SRAM__DOT__axi_wdata, (IData)(vlSelf->top__DOT__memory_wr_ctrl));
    }
    vlSelf->top__DOT____Vcellinp__LSU__mem_wr_en = 
        ((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
         & (IData)(vlSelf->top__DOT__valid_ifu));
    vlSelf->top__DOT__valid_idu = ((IData)(vlSelf->top__DOT__valid_ifu) 
                                   & (IData)(vlSelf->top__DOT__IDU__DOT__is_load_type));
    vlSelf->top__DOT____Vcellinp__CSR__finish = (((~ 
                                                   ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type))) 
                                                  & (IData)(vlSelf->top__DOT__valid_ifu)) 
                                                 | (IData)(vlSelf->top__DOT__rd_finish));
    vlSelf->top__DOT__r_csr_data = (((0x300U == (vlSelf->top__DOT__ifu_rdata 
                                                 >> 0x14U)) 
                                     & (IData)(vlSelf->top__DOT__w_csr_en))
                                     ? vlSelf->top__DOT__CSR__DOT__csr_mstatus
                                     : (((0x305U == 
                                          (vlSelf->top__DOT__ifu_rdata 
                                           >> 0x14U)) 
                                         & (IData)(vlSelf->top__DOT__w_csr_en))
                                         ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                         : (((0x341U 
                                              == (vlSelf->top__DOT__ifu_rdata 
                                                  >> 0x14U)) 
                                             & (IData)(vlSelf->top__DOT__w_csr_en))
                                             ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                             : (((0x342U 
                                                  == 
                                                  (vlSelf->top__DOT__ifu_rdata 
                                                   >> 0x14U)) 
                                                 & (IData)(vlSelf->top__DOT__w_csr_en))
                                                 ? vlSelf->top__DOT__CSR__DOT__csr_mcause
                                                 : 
                                                ((IData)(vlSelf->top__DOT__IDU__DOT__is_ecall)
                                                  ? vlSelf->top__DOT__CSR__DOT__csr_mtvec
                                                  : 
                                                 ((IData)(vlSelf->top__DOT__IDU__DOT__is_mret)
                                                   ? vlSelf->top__DOT__CSR__DOT__csr_mepc
                                                   : 0U))))));
    vlSelf->top__DOT__alu_func = (((((((((0x400U == 
                                          ((((((((((((((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__ifu_rdata)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__ifu_rdata))) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top__DOT__ifu_rdata))))))))))))) 
                                         | (0x200U 
                                            == ((((
                                                   ((((((((((0x17U 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__ifu_rdata)) 
                                                            | (0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__ifu_rdata))) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                 << 0xaU) 
                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                    << 9U) 
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                       << 8U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                          << 7U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                             << 6U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                << 5U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                   << 4U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                      << 3U) 
                                                                     | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                         << 2U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                            << 1U) 
                                                                           | (0x37U 
                                                                              == 
                                                                              (0x7fU 
                                                                               & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                        | (0x100U == 
                                           ((((((((((((((0x17U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__ifu_rdata)) 
                                                        | (0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__ifu_rdata))) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                             << 0xaU) 
                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                << 9U) 
                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                   << 8U) 
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                      << 7U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                         << 6U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                            << 5U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                               << 4U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                  << 3U) 
                                                                 | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                     << 2U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                        << 1U) 
                                                                       | (0x37U 
                                                                          == 
                                                                          (0x7fU 
                                                                           & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                       | (0x80U == 
                                          ((((((((((((((0x17U 
                                                        == 
                                                        (0x7fU 
                                                         & vlSelf->top__DOT__ifu_rdata)) 
                                                       | (0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__ifu_rdata))) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                            << 0xaU) 
                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                               << 9U) 
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                  << 8U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                 << 3U) 
                                                                | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                       << 1U) 
                                                                      | (0x37U 
                                                                         == 
                                                                         (0x7fU 
                                                                          & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                      | (0x40U == (
                                                   (((((((((((((0x17U 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__ifu_rdata)) 
                                                               | (0x6fU 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__ifu_rdata))) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                    << 0xaU) 
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                       << 9U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                          << 8U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                             << 7U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                << 6U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                   << 5U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                      << 4U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                         << 3U) 
                                                                        | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                            << 2U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                               << 1U) 
                                                                              | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                     | (0x20U == ((
                                                   ((((((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__ifu_rdata)) 
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT__ifu_rdata))) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                    | (0x10U == (((
                                                   (((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__ifu_rdata)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__ifu_rdata))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))) 
                                   | (8U == (((((((
                                                   (((((((0x17U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__ifu_rdata)) 
                                                         | (0x6fU 
                                                            == 
                                                            (0x7fU 
                                                             & vlSelf->top__DOT__ifu_rdata))) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                              << 0xaU) 
                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                 << 9U) 
                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                    << 8U) 
                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                       << 7U) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                          << 6U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                             << 5U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                << 4U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                   << 3U) 
                                                                  | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                      << 2U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                         << 1U) 
                                                                        | (0x37U 
                                                                           == 
                                                                           (0x7fU 
                                                                            & vlSelf->top__DOT__ifu_rdata))))))))))))))
                                   ? ((0x400U == ((
                                                   ((((((((((((0x17U 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__ifu_rdata)) 
                                                              | (0x6fU 
                                                                 == 
                                                                 (0x7fU 
                                                                  & vlSelf->top__DOT__ifu_rdata))) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                   << 0xaU) 
                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                      << 9U) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                         << 8U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                            << 7U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                               << 6U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                  << 5U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                     << 4U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                        << 3U) 
                                                                       | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                           << 2U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                              << 1U) 
                                                                             | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                       ? 0U : ((0x200U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__ifu_rdata)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__ifu_rdata))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                ? 8U
                                                : (
                                                   (0x100U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__ifu_rdata)) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__ifu_rdata))) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                    ? 1U
                                                    : 
                                                   ((0x80U 
                                                     == 
                                                     ((((((((((((((0x17U 
                                                                   == 
                                                                   (0x7fU 
                                                                    & vlSelf->top__DOT__ifu_rdata)) 
                                                                  | (0x6fU 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__ifu_rdata))) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                       << 0xaU) 
                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                          << 9U) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                             << 8U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                << 7U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                   << 6U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                      << 5U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                         << 4U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                            << 3U) 
                                                                           | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                               << 2U) 
                                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                     ? 5U
                                                     : 
                                                    ((0x40U 
                                                      == 
                                                      ((((((((((((((0x17U 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__ifu_rdata)) 
                                                                   | (0x6fU 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->top__DOT__ifu_rdata))) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                        << 0xaU) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                           << 9U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                              << 8U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                 << 7U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                       << 5U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                             << 3U) 
                                                                            | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                      ? 0xdU
                                                      : 
                                                     ((0x20U 
                                                       == 
                                                       ((((((((((((((0x17U 
                                                                     == 
                                                                     (0x7fU 
                                                                      & vlSelf->top__DOT__ifu_rdata)) 
                                                                    | (0x6fU 
                                                                       == 
                                                                       (0x7fU 
                                                                        & vlSelf->top__DOT__ifu_rdata))) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                         << 0xaU) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                            << 9U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                               << 8U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                  << 7U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                     << 6U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                        << 5U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                           << 4U) 
                                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                              << 3U) 
                                                                             | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                       ? 2U
                                                       : 
                                                      ((0x10U 
                                                        == 
                                                        ((((((((((((((0x17U 
                                                                      == 
                                                                      (0x7fU 
                                                                       & vlSelf->top__DOT__ifu_rdata)) 
                                                                     | (0x6fU 
                                                                        == 
                                                                        (0x7fU 
                                                                         & vlSelf->top__DOT__ifu_rdata))) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                          << 0xaU) 
                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                             << 9U) 
                                                            | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                                << 8U) 
                                                               | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                                   << 7U) 
                                                                  | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                      << 6U) 
                                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                         << 5U) 
                                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                            << 4U) 
                                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                               << 3U) 
                                                                              | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                                << 2U) 
                                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                        ? 3U
                                                        : 4U)))))))
                                   : ((4U == ((((((
                                                   ((((((((0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__ifu_rdata)) 
                                                          | (0x6fU 
                                                             == 
                                                             (0x7fU 
                                                              & vlSelf->top__DOT__ifu_rdata))) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                 | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                               << 0xaU) 
                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                  << 9U) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                     << 8U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                        << 7U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                           << 6U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                              << 5U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                 << 4U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                    << 3U) 
                                                                   | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                       << 2U) 
                                                                      | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                          << 1U) 
                                                                         | (0x37U 
                                                                            == 
                                                                            (0x7fU 
                                                                             & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                       ? 6U : ((2U 
                                                == 
                                                ((((((((((((((0x17U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__ifu_rdata)) 
                                                             | (0x6fU 
                                                                == 
                                                                (0x7fU 
                                                                 & vlSelf->top__DOT__ifu_rdata))) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                  << 0xaU) 
                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                     << 9U) 
                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                        << 8U) 
                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                           << 7U) 
                                                          | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                              << 6U) 
                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                  | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                 << 5U) 
                                                                | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                    << 4U) 
                                                                   | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                       << 3U) 
                                                                      | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                          << 2U) 
                                                                         | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                             << 1U) 
                                                                            | (0x37U 
                                                                               == 
                                                                               (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                ? 7U
                                                : (
                                                   (1U 
                                                    == 
                                                    ((((((((((((((0x17U 
                                                                  == 
                                                                  (0x7fU 
                                                                   & vlSelf->top__DOT__ifu_rdata)) 
                                                                 | (0x6fU 
                                                                    == 
                                                                    (0x7fU 
                                                                     & vlSelf->top__DOT__ifu_rdata))) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_jalr)) 
                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_b_type)) 
                                                              | (IData)(vlSelf->top__DOT__IDU__DOT__is_s_type)) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_lb)) 
                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_lh)) 
                                                           | (IData)(vlSelf->top__DOT__IDU__DOT__is_lw)) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_lbu)) 
                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_lhu)) 
                                                        | (IData)(vlSelf->top__DOT__IDU__DOT__is_add)) 
                                                       | (IData)(vlSelf->top__DOT__IDU__DOT__is_addi)) 
                                                      << 0xaU) 
                                                     | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                          | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)) 
                                                         << 9U) 
                                                        | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                             | (IData)(vlSelf->top__DOT__IDU__DOT__is_slli)) 
                                                            << 8U) 
                                                           | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_srli)) 
                                                               << 7U) 
                                                              | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                   | (IData)(vlSelf->top__DOT__IDU__DOT__is_srai)) 
                                                                  << 6U) 
                                                                 | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                                      | (IData)(vlSelf->top__DOT__IDU__DOT__is_slti)) 
                                                                     << 5U) 
                                                                    | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                                         | (IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu)) 
                                                                        << 4U) 
                                                                       | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                                            | (IData)(vlSelf->top__DOT__IDU__DOT__is_xori)) 
                                                                           << 3U) 
                                                                          | (((((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_ori)) 
                                                                               | (IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)) 
                                                                              << 2U) 
                                                                             | ((((IData)(vlSelf->top__DOT__IDU__DOT__is_and) 
                                                                                | (IData)(vlSelf->top__DOT__IDU__DOT__is_andi)) 
                                                                                << 1U) 
                                                                                | (0x37U 
                                                                                == 
                                                                                (0x7fU 
                                                                                & vlSelf->top__DOT__ifu_rdata)))))))))))))
                                                    ? 0xeU
                                                    : 0U))));
    vlSelf->top__DOT__IDU__DOT__is_r_type = ((IData)(vlSelf->top__DOT__IDU__DOT__is_add) 
                                             | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sub) 
                                                | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sll) 
                                                   | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slt) 
                                                      | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sltu) 
                                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_xor) 
                                                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srl) 
                                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sra) 
                                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_or) 
                                                                     | (IData)(vlSelf->top__DOT__IDU__DOT__is_and))))))))));
    vlSelf->top__DOT____VdfgTmp_h241ef1d5__0 = ((IData)(vlSelf->top__DOT__jump_branch) 
                                                | ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__ifu_rdata)) 
                                                   | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0)));
    vlSelf->top__DOT____Vcellinp__IFU__finish = ((IData)(vlSelf->top__DOT____Vcellinp__CSR__finish) 
                                                 | ((IData)(vlSelf->top__DOT__lsu_bready) 
                                                    & (IData)(vlSelf->top__DOT__lsu_bvalid)));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__alu_func) == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [8U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [9U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xaU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xbU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xcU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xdU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xeU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__alu_func) == 
              vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
              [0xfU]));
    vlSelf->top__DOT__w_sel = ((IData)(vlSelf->top__DOT__IDU__DOT____VdfgExtracted_hfdabf472__0)
                                ? 1U : (((IData)(vlSelf->top__DOT__IDU__DOT__is_addi) 
                                         | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slti) 
                                            | ((IData)(vlSelf->top__DOT__IDU__DOT__is_sltiu) 
                                               | ((IData)(vlSelf->top__DOT__IDU__DOT__is_xori) 
                                                  | ((IData)(vlSelf->top__DOT__IDU__DOT__is_ori) 
                                                     | ((IData)(vlSelf->top__DOT__IDU__DOT__is_andi) 
                                                        | ((IData)(vlSelf->top__DOT__IDU__DOT__is_slli) 
                                                           | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srli) 
                                                              | ((IData)(vlSelf->top__DOT__IDU__DOT__is_srai) 
                                                                 | ((IData)(vlSelf->top__DOT__IDU__DOT__is_r_type) 
                                                                    | (IData)(vlSelf->top__DOT__IDU__DOT__is_u_type)))))))))))
                                         ? 2U : ((IData)(vlSelf->top__DOT__IDU__DOT__is_load_type)
                                                  ? 3U
                                                  : 0U)));
    vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0 
        = (((IData)(vlSelf->top__DOT__IDU__DOT__is_jalr) 
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
                                                      | (IData)(vlSelf->top__DOT__w_csr_en)))))))))))))))) 
           | (IData)(vlSelf->top__DOT__IDU__DOT__is_r_type));
    vlSelf->top__DOT__alu_b_sel = ((IData)(vlSelf->top__DOT__IDU__DOT__is_r_type)
                                    ? 0U : ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrs)
                                             ? 1U : 
                                            ((IData)(vlSelf->top__DOT__IDU__DOT__is_csrrw)
                                              ? 2U : 3U)));
    vlSelf->top__DOT__ALU__DOT__signed_a = (((IData)(vlSelf->top__DOT__IDU__DOT__is_s_type) 
                                             | (IData)(vlSelf->top__DOT__IDU__DOT____VdfgTmp_h57f462a7__0))
                                             ? vlSelf->top__DOT__BSU__DOT__signed_rs1
                                             : vlSelf->pc);
    if ((0U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__BSU__DOT__signed_rs2;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__BSU__DOT__signed_rs2;
    } else if ((1U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__r_csr_data;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__r_csr_data;
    } else if ((2U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__ALU__DOT__signed_b = 0U;
    } else if ((3U == (IData)(vlSelf->top__DOT__alu_b_sel))) {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] 
            = vlSelf->top__DOT__imm_out;
        vlSelf->top__DOT__ALU__DOT__signed_b = vlSelf->top__DOT__imm_out;
    } else {
        vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[1U] = 0U;
        vlSelf->top__DOT__ALU__DOT__signed_b = 0U;
    }
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[1U] 
        = (0xe00000000ULL | (QData)((IData)(vlSelf->top__DOT__ALU__DOT__signed_b)));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[2U] 
        = (0xd00000000ULL | (QData)((IData)(VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                                                           (0x1fU 
                                                            & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[7U] 
        = (0x800000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             - vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[8U] 
        = (0x700000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             & vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[9U] 
        = (0x600000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             | vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xaU] 
        = (0x500000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             >> (0x1fU 
                                                 & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xbU] 
        = (0x400000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             ^ vlSelf->top__DOT__ALU__DOT__signed_b))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xcU] 
        = (0x300000000ULL | (QData)((IData)(((vlSelf->top__DOT__ALU__DOT__signed_a 
                                              < vlSelf->top__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xdU] 
        = (0x200000000ULL | (QData)((IData)((VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
                                              ? 1U : 0U))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xeU] 
        = (0x100000000ULL | (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                                             << (0x1fU 
                                                 & vlSelf->top__DOT__ALU__DOT__signed_b)))));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__pair_list[0xfU] 
        = (QData)((IData)((vlSelf->top__DOT__ALU__DOT__signed_a 
                           + vlSelf->top__DOT__ALU__DOT__signed_b)));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[2U] 
        = VL_SHIFTRS_III(32,32,5, vlSelf->top__DOT__ALU__DOT__signed_a, 
                         (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[7U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a - vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[8U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a & vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[9U] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a | vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xaU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a >> 
           (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xbU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a ^ vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xcU] 
        = ((vlSelf->top__DOT__ALU__DOT__signed_a < vlSelf->top__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xdU] 
        = (VL_LTS_III(32, vlSelf->top__DOT__ALU__DOT__signed_a, vlSelf->top__DOT__ALU__DOT__signed_b)
            ? 1U : 0U);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xeU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a << 
           (0x1fU & vlSelf->top__DOT__ALU__DOT__signed_b));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list[0xfU] 
        = (vlSelf->top__DOT__ALU__DOT__signed_a + vlSelf->top__DOT__ALU__DOT__signed_b);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                       == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                       [0U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [1U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [2U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [2U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [3U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [3U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [4U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [4U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [5U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [5U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [6U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [6U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [7U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [7U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [8U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [8U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [9U]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [9U]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xaU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xaU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xbU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xbU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xcU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xcU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xdU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xdU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xeU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xeU]));
    vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out 
           | ((- (IData)(((IData)(vlSelf->top__DOT__alu_func) 
                          == vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__key_list
                          [0xfU]))) & vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__data_list
              [0xfU]));
    vlSelf->top__DOT__alu_out = vlSelf->top__DOT__ALU__DOT__alumux__DOT__i0__DOT__lut_out;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__ARB__DOT__state) 
                  >> 2U)))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
                vlSelf->top__DOT__saxi_awaddr = vlSelf->top__DOT__alu_out;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__saxi_araddr = vlSelf->top__DOT__alu_out;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            vlSelf->top__DOT__saxi_araddr = vlSelf->pc;
        }
    }
    if ((4U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
        if ((2U & (IData)(vlSelf->top__DOT__ARB__DOT__state))) {
            if ((1U & (~ (IData)(vlSelf->top__DOT__ARB__DOT__state)))) {
                vlSelf->top__DOT__uart_awaddr = vlSelf->top__DOT__alu_out;
            }
        }
    }
    vlSelf->top__DOT__LSU__DOT__mem_move_out = ((2U 
                                                 & vlSelf->top__DOT__alu_out)
                                                 ? 
                                                ((1U 
                                                  & vlSelf->top__DOT__alu_out)
                                                  ? 
                                                 (vlSelf->top__DOT__lsu_rdata 
                                                  >> 0x18U)
                                                  : 
                                                 (vlSelf->top__DOT__lsu_rdata 
                                                  >> 0x10U))
                                                 : 
                                                ((1U 
                                                  & vlSelf->top__DOT__alu_out)
                                                  ? 
                                                 (vlSelf->top__DOT__lsu_rdata 
                                                  >> 8U)
                                                  : vlSelf->top__DOT__lsu_rdata));
}

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(0U)) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            Vtop___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    Vtop___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/top.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                Vtop___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("/home/wink/ysyx-workbench/npc/vsrc/top.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            Vtop___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
