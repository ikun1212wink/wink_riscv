// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__stl(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VysyxSoCFull___024root___eval_triggers__stl(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.at(0U) = (0U == vlSelf->__VstlIterCount);
    vlSelf->__VstlTriggered.at(1U) = ((((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r) 
                                              != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r)) 
                                             | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                                                != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2))) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
                                               != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1))) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel) 
                                              != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                             != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0))) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                            != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3))) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5))) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)));
    vlSelf->__VstlTriggered.at(2U) = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid));
    vlSelf->__VstlTriggered.at(3U) = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2));
    vlSelf->__VstlTriggered.at(4U) = (((((((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2) 
                                             != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2)) 
                                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
                                               != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1))) 
                                           | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel) 
                                              != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel))) 
                                          | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0) 
                                             != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0))) 
                                         | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3) 
                                            != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3))) 
                                        | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4) 
                                           != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4))) 
                                       | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5) 
                                          != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5))) 
                                      | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6) 
                                         != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6)));
    vlSelf->__VstlTriggered.at(5U) = ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1) 
                                      != (IData)(vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1));
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__luart__DOT__muart__DOT__reg_dat8_r;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_2;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_1;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT___apbxbar_auto_out_1_psel;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_0;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_3;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_4;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_5;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__apbxbar__DOT__sel_6;
    vlSelf->__Vtrigrprev__TOP__ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__axi42apb__DOT__nodeIn_rvalid;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VstlDidInit))))) {
        vlSelf->__VstlDidInit = 1U;
        vlSelf->__VstlTriggered.at(1U) = 1U;
        vlSelf->__VstlTriggered.at(2U) = 1U;
        vlSelf->__VstlTriggered.at(3U) = 1U;
        vlSelf->__VstlTriggered.at(4U) = 1U;
        vlSelf->__VstlTriggered.at(5U) = 1U;
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__stl(vlSelf);
    }
#endif
}
