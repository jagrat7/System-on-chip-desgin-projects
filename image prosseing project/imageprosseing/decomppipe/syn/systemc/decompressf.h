// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _decompressf_HH_
#define _decompressf_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "decompressf_unr1d.h"

namespace ap_rtl {

struct decompressf : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > c_address0;
    sc_out< sc_logic > c_ce0;
    sc_in< sc_lv<32> > c_q0;
    sc_out< sc_lv<10> > c_address1;
    sc_out< sc_logic > c_ce1;
    sc_in< sc_lv<32> > c_q1;
    sc_out< sc_lv<10> > dc_address0;
    sc_out< sc_logic > dc_ce0;
    sc_out< sc_logic > dc_we0;
    sc_out< sc_lv<32> > dc_d0;


    // Module declarations
    decompressf(sc_module_name name);
    SC_HAS_PROCESS(decompressf);

    ~decompressf();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    decompressf_unr1d* unr1d_U;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln283_fu_225_p2;
    sc_signal< sc_lv<32> > c_load_reg_410;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > c_load_1_reg_415;
    sc_signal< sc_lv<32> > j_3_fu_269_p2;
    sc_signal< sc_lv<32> > j_3_reg_420;
    sc_signal< sc_lv<31> > add_ln286_fu_284_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > add_ln291_fu_295_p2;
    sc_signal< sc_lv<1> > icmp_ln286_fu_279_p2;
    sc_signal< sc_lv<32> > h_fu_301_p2;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<10> > add_ln303_2_fu_307_p2;
    sc_signal< sc_lv<10> > add_ln303_2_reg_443;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > add_ln303_3_fu_313_p2;
    sc_signal< sc_lv<10> > add_ln303_3_reg_448;
    sc_signal< sc_lv<5> > i_fu_325_p2;
    sc_signal< sc_lv<5> > i_reg_456;
    sc_signal< sc_lv<1> > icmp_ln303_fu_331_p2;
    sc_signal< sc_lv<1> > icmp_ln303_reg_461;
    sc_signal< sc_lv<1> > icmp_ln298_fu_319_p2;
    sc_signal< sc_lv<5> > j_fu_347_p2;
    sc_signal< sc_lv<5> > j_reg_469;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > icmp_ln300_fu_341_p2;
    sc_signal< sc_lv<10> > add_ln303_1_fu_381_p2;
    sc_signal< sc_lv<10> > add_ln303_1_reg_479;
    sc_signal< sc_lv<32> > x_fu_387_p2;
    sc_signal< sc_lv<10> > unr1d_address0;
    sc_signal< sc_logic > unr1d_ce0;
    sc_signal< sc_logic > unr1d_we0;
    sc_signal< sc_lv<32> > unr1d_q0;
    sc_signal< sc_lv<32> > j_0_reg_122;
    sc_signal< sc_lv<32> > h_0_reg_134;
    sc_signal< sc_lv<32> > j_1_reg_146;
    sc_signal< sc_lv<31> > k_0_reg_156;
    sc_signal< sc_lv<32> > x_0_reg_167;
    sc_signal< sc_lv<5> > i_0_reg_179;
    sc_signal< sc_lv<10> > phi_mul_reg_190;
    sc_signal< sc_lv<10> > phi_mul1_reg_202;
    sc_signal< sc_lv<5> > j_2_reg_214;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<64> > sext_ln286_fu_237_p1;
    sc_signal< sc_lv<64> > sext_ln289_fu_242_p1;
    sc_signal< sc_lv<64> > sext_ln289_1_fu_290_p1;
    sc_signal< sc_lv<64> > zext_ln303_fu_359_p1;
    sc_signal< sc_lv<64> > zext_ln303_2_fu_393_p1;
    sc_signal< sc_lv<32> > or_ln286_fu_231_p2;
    sc_signal< sc_lv<1> > empty_fu_251_p2;
    sc_signal< sc_lv<31> > trunc_ln289_fu_247_p1;
    sc_signal< sc_lv<31> > smax_fu_257_p3;
    sc_signal< sc_lv<32> > smax_cast_fu_265_p1;
    sc_signal< sc_lv<32> > zext_ln286_fu_275_p1;
    sc_signal< sc_lv<10> > zext_ln300_fu_337_p1;
    sc_signal< sc_lv<10> > add_ln303_fu_353_p2;
    sc_signal< sc_lv<5> > sub_ln303_fu_364_p2;
    sc_signal< sc_lv<5> > select_ln303_fu_370_p3;
    sc_signal< sc_lv<10> > zext_ln303_1_fu_377_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_271;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<10> ap_const_lv10_19;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_18;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln286_fu_284_p2();
    void thread_add_ln291_fu_295_p2();
    void thread_add_ln303_1_fu_381_p2();
    void thread_add_ln303_2_fu_307_p2();
    void thread_add_ln303_3_fu_313_p2();
    void thread_add_ln303_fu_353_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_c_address0();
    void thread_c_address1();
    void thread_c_ce0();
    void thread_c_ce1();
    void thread_dc_address0();
    void thread_dc_ce0();
    void thread_dc_d0();
    void thread_dc_we0();
    void thread_empty_fu_251_p2();
    void thread_h_fu_301_p2();
    void thread_i_fu_325_p2();
    void thread_icmp_ln283_fu_225_p2();
    void thread_icmp_ln286_fu_279_p2();
    void thread_icmp_ln298_fu_319_p2();
    void thread_icmp_ln300_fu_341_p2();
    void thread_icmp_ln303_fu_331_p2();
    void thread_j_3_fu_269_p2();
    void thread_j_fu_347_p2();
    void thread_or_ln286_fu_231_p2();
    void thread_select_ln303_fu_370_p3();
    void thread_sext_ln286_fu_237_p1();
    void thread_sext_ln289_1_fu_290_p1();
    void thread_sext_ln289_fu_242_p1();
    void thread_smax_cast_fu_265_p1();
    void thread_smax_fu_257_p3();
    void thread_sub_ln303_fu_364_p2();
    void thread_trunc_ln289_fu_247_p1();
    void thread_unr1d_address0();
    void thread_unr1d_ce0();
    void thread_unr1d_we0();
    void thread_x_fu_387_p2();
    void thread_zext_ln286_fu_275_p1();
    void thread_zext_ln300_fu_337_p1();
    void thread_zext_ln303_1_fu_377_p1();
    void thread_zext_ln303_2_fu_393_p1();
    void thread_zext_ln303_fu_359_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
