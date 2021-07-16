// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _scalef_HH_
#define _scalef_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scalef_dmul_64ns_bkb.h"
#include "scalef_sitodp_32ncud.h"

namespace ap_rtl {

struct scalef : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > as_address0;
    sc_out< sc_logic > as_ce0;
    sc_in< sc_lv<32> > as_q0;
    sc_out< sc_lv<14> > bs_address0;
    sc_out< sc_logic > bs_ce0;
    sc_out< sc_logic > bs_we0;
    sc_out< sc_lv<32> > bs_d0;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<64> > ap_var_for_const0;


    // Module declarations
    scalef(sc_module_name name);
    SC_HAS_PROCESS(scalef);

    ~scalef();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    scalef_dmul_64ns_bkb<1,6,64,64,64>* scalef_dmul_64ns_bkb_U1;
    scalef_sitodp_32ncud<1,6,32,64>* scalef_sitodp_32ncud_U2;
    sc_signal< sc_lv<18> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > add_ln20_fu_130_p2;
    sc_signal< sc_lv<14> > add_ln20_reg_316;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<7> > i_fu_142_p2;
    sc_signal< sc_lv<7> > i_reg_324;
    sc_signal< sc_lv<7> > j_fu_154_p2;
    sc_signal< sc_lv<7> > j_reg_332;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > zext_ln24_1_fu_170_p1;
    sc_signal< sc_lv<64> > zext_ln24_1_reg_337;
    sc_signal< sc_lv<1> > icmp_ln22_fu_148_p2;
    sc_signal< sc_lv<32> > as_load_reg_347;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > grp_fu_127_p1;
    sc_signal< sc_lv<64> > tmp_reg_352;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<64> > grp_fu_122_p2;
    sc_signal< sc_lv<64> > x_assign_reg_357;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<1> > p_Result_s_reg_362;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<32> > p_Val2_5_fu_296_p3;
    sc_signal< sc_lv<32> > p_Val2_5_reg_367;
    sc_signal< sc_lv<7> > i_0_reg_88;
    sc_signal< sc_lv<14> > phi_mul_reg_99;
    sc_signal< sc_lv<7> > j_0_reg_111;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<1> > icmp_ln20_fu_136_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<14> > zext_ln24_fu_160_p1;
    sc_signal< sc_lv<14> > add_ln24_fu_164_p2;
    sc_signal< sc_lv<64> > p_Val2_s_fu_175_p1;
    sc_signal< sc_lv<52> > tmp_V_1_fu_196_p1;
    sc_signal< sc_lv<54> > mantissa_V_fu_200_p4;
    sc_signal< sc_lv<11> > tmp_V_fu_186_p4;
    sc_signal< sc_lv<12> > zext_ln502_fu_214_p1;
    sc_signal< sc_lv<12> > add_ln502_fu_218_p2;
    sc_signal< sc_lv<11> > sub_ln1311_fu_232_p2;
    sc_signal< sc_lv<1> > isNeg_fu_224_p3;
    sc_signal< sc_lv<12> > sext_ln1311_fu_238_p1;
    sc_signal< sc_lv<12> > ush_fu_242_p3;
    sc_signal< sc_lv<32> > sext_ln1311_1_fu_250_p1;
    sc_signal< sc_lv<54> > zext_ln1285_fu_258_p1;
    sc_signal< sc_lv<137> > zext_ln682_fu_210_p1;
    sc_signal< sc_lv<137> > zext_ln1287_fu_254_p1;
    sc_signal< sc_lv<54> > r_V_fu_262_p2;
    sc_signal< sc_lv<1> > tmp_4_fu_274_p3;
    sc_signal< sc_lv<137> > r_V_1_fu_268_p2;
    sc_signal< sc_lv<32> > zext_ln662_fu_282_p1;
    sc_signal< sc_lv<32> > tmp_2_fu_286_p4;
    sc_signal< sc_lv<32> > result_V_1_fu_304_p2;
    sc_signal< sc_lv<18> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<18> ap_ST_fsm_state1;
    static const sc_lv<18> ap_ST_fsm_state2;
    static const sc_lv<18> ap_ST_fsm_state3;
    static const sc_lv<18> ap_ST_fsm_state4;
    static const sc_lv<18> ap_ST_fsm_state5;
    static const sc_lv<18> ap_ST_fsm_state6;
    static const sc_lv<18> ap_ST_fsm_state7;
    static const sc_lv<18> ap_ST_fsm_state8;
    static const sc_lv<18> ap_ST_fsm_state9;
    static const sc_lv<18> ap_ST_fsm_state10;
    static const sc_lv<18> ap_ST_fsm_state11;
    static const sc_lv<18> ap_ST_fsm_state12;
    static const sc_lv<18> ap_ST_fsm_state13;
    static const sc_lv<18> ap_ST_fsm_state14;
    static const sc_lv<18> ap_ST_fsm_state15;
    static const sc_lv<18> ap_ST_fsm_state16;
    static const sc_lv<18> ap_ST_fsm_state17;
    static const sc_lv<18> ap_ST_fsm_state18;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<64> ap_const_lv64_3FE0000000000000;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<14> ap_const_lv14_64;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_3E;
    static const sc_lv<12> ap_const_lv12_C01;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<11> ap_const_lv11_3FF;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_54;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const1();
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_add_ln20_fu_130_p2();
    void thread_add_ln24_fu_164_p2();
    void thread_add_ln502_fu_218_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_as_address0();
    void thread_as_ce0();
    void thread_bs_address0();
    void thread_bs_ce0();
    void thread_bs_d0();
    void thread_bs_we0();
    void thread_i_fu_142_p2();
    void thread_icmp_ln20_fu_136_p2();
    void thread_icmp_ln22_fu_148_p2();
    void thread_isNeg_fu_224_p3();
    void thread_j_fu_154_p2();
    void thread_mantissa_V_fu_200_p4();
    void thread_p_Val2_5_fu_296_p3();
    void thread_p_Val2_s_fu_175_p1();
    void thread_r_V_1_fu_268_p2();
    void thread_r_V_fu_262_p2();
    void thread_result_V_1_fu_304_p2();
    void thread_sext_ln1311_1_fu_250_p1();
    void thread_sext_ln1311_fu_238_p1();
    void thread_sub_ln1311_fu_232_p2();
    void thread_tmp_2_fu_286_p4();
    void thread_tmp_4_fu_274_p3();
    void thread_tmp_V_1_fu_196_p1();
    void thread_tmp_V_fu_186_p4();
    void thread_ush_fu_242_p3();
    void thread_zext_ln1285_fu_258_p1();
    void thread_zext_ln1287_fu_254_p1();
    void thread_zext_ln24_1_fu_170_p1();
    void thread_zext_ln24_fu_160_p1();
    void thread_zext_ln502_fu_214_p1();
    void thread_zext_ln662_fu_282_p1();
    void thread_zext_ln682_fu_210_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
