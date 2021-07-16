// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _compressf_HH_
#define _compressf_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "compressf_odoarr.h"

namespace ap_rtl {

struct compressf : public sc_module {
    // Port declarations 17
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<10> > as_address0;
    sc_out< sc_logic > as_ce0;
    sc_in< sc_lv<32> > as_q0;
    sc_out< sc_lv<10> > bs_address0;
    sc_out< sc_logic > bs_ce0;
    sc_out< sc_logic > bs_we0;
    sc_out< sc_lv<32> > bs_d0;
    sc_out< sc_lv<10> > bs_address1;
    sc_out< sc_logic > bs_ce1;
    sc_out< sc_logic > bs_we1;
    sc_out< sc_lv<32> > bs_d1;


    // Module declarations
    compressf(sc_module_name name);
    SC_HAS_PROCESS(compressf);

    ~compressf();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    compressf_odoarr* odoarr_U;
    sc_signal< sc_lv<9> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<10> > add_ln220_2_fu_251_p2;
    sc_signal< sc_lv<10> > add_ln220_2_reg_481;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<10> > add_ln220_3_fu_257_p2;
    sc_signal< sc_lv<10> > add_ln220_3_reg_486;
    sc_signal< sc_lv<5> > i_2_fu_269_p2;
    sc_signal< sc_lv<5> > i_2_reg_494;
    sc_signal< sc_lv<10> > k_fu_275_p2;
    sc_signal< sc_lv<10> > k_reg_499;
    sc_signal< sc_lv<1> > icmp_ln211_fu_263_p2;
    sc_signal< sc_lv<1> > icmp_ln220_fu_281_p2;
    sc_signal< sc_lv<1> > icmp_ln220_reg_504;
    sc_signal< sc_lv<5> > j_fu_307_p2;
    sc_signal< sc_lv<5> > j_reg_527;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln214_fu_301_p2;
    sc_signal< sc_lv<10> > add_ln220_1_fu_341_p2;
    sc_signal< sc_lv<10> > add_ln220_1_reg_537;
    sc_signal< sc_lv<10> > add_ln220_fu_347_p2;
    sc_signal< sc_lv<10> > add_ln220_reg_542;
    sc_signal< sc_lv<32> > x_fu_353_p2;
    sc_signal< sc_lv<10> > add_ln219_fu_364_p2;
    sc_signal< sc_lv<10> > add_ln219_reg_552;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<11> > zext_ln228_fu_378_p1;
    sc_signal< sc_lv<11> > zext_ln228_reg_562;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<10> > i_fu_388_p2;
    sc_signal< sc_lv<10> > i_reg_570;
    sc_signal< sc_lv<1> > icmp_ln228_fu_382_p2;
    sc_signal< sc_lv<32> > odoarr_q1;
    sc_signal< sc_lv<32> > odoarr_load_1_reg_585;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<1> > icmp_ln232_fu_404_p2;
    sc_signal< sc_lv<1> > icmp_ln232_reg_591;
    sc_signal< sc_lv<32> > count_1_load_reg_595;
    sc_signal< sc_lv<32> > select_ln243_fu_439_p3;
    sc_signal< sc_lv<32> > select_ln243_reg_605;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<10> > odoarr_address0;
    sc_signal< sc_logic > odoarr_ce0;
    sc_signal< sc_logic > odoarr_we0;
    sc_signal< sc_lv<32> > odoarr_q0;
    sc_signal< sc_lv<10> > odoarr_address1;
    sc_signal< sc_logic > odoarr_ce1;
    sc_signal< sc_lv<10> > k_0_reg_159;
    sc_signal< sc_lv<5> > i_0_reg_171;
    sc_signal< sc_lv<32> > x_0_reg_182;
    sc_signal< sc_lv<10> > phi_mul_reg_194;
    sc_signal< sc_lv<10> > phi_mul1_reg_206;
    sc_signal< sc_lv<10> > k_1_reg_218;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<5> > j_0_reg_229;
    sc_signal< sc_lv<10> > i_1_reg_240;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > zext_ln218_fu_319_p1;
    sc_signal< sc_lv<64> > zext_ln218_1_fu_359_p1;
    sc_signal< sc_lv<64> > zext_ln220_2_fu_370_p1;
    sc_signal< sc_lv<64> > zext_ln220_1_fu_374_p1;
    sc_signal< sc_lv<64> > zext_ln232_fu_394_p1;
    sc_signal< sc_lv<64> > zext_ln232_1_fu_399_p1;
    sc_signal< sc_lv<64> > sext_ln237_fu_418_p1;
    sc_signal< sc_lv<64> > sext_ln240_fu_454_p1;
    sc_signal< sc_lv<64> > sext_ln241_fu_465_p1;
    sc_signal< sc_lv<32> > count_1_fu_60;
    sc_signal< sc_lv<32> > count_fu_423_p2;
    sc_signal< sc_lv<32> > cp_1_fu_64;
    sc_signal< sc_lv<32> > cp_fu_470_p2;
    sc_signal< sc_lv<10> > zext_ln214_fu_297_p1;
    sc_signal< sc_lv<10> > add_ln218_fu_313_p2;
    sc_signal< sc_lv<5> > sub_ln220_fu_324_p2;
    sc_signal< sc_lv<5> > select_ln220_fu_330_p3;
    sc_signal< sc_lv<10> > zext_ln220_fu_337_p1;
    sc_signal< sc_lv<11> > add_ln237_fu_413_p2;
    sc_signal< sc_lv<1> > icmp_ln237_fu_434_p2;
    sc_signal< sc_lv<32> > sext_ln240_fu_454_p0;
    sc_signal< sc_lv<32> > add_ln241_fu_459_p0;
    sc_signal< sc_lv<32> > add_ln241_fu_459_p2;
    sc_signal< sc_lv<32> > cp_fu_470_p0;
    sc_signal< sc_lv<9> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<9> ap_ST_fsm_state1;
    static const sc_lv<9> ap_ST_fsm_state2;
    static const sc_lv<9> ap_ST_fsm_state3;
    static const sc_lv<9> ap_ST_fsm_state4;
    static const sc_lv<9> ap_ST_fsm_state5;
    static const sc_lv<9> ap_ST_fsm_state6;
    static const sc_lv<9> ap_ST_fsm_state7;
    static const sc_lv<9> ap_ST_fsm_state8;
    static const sc_lv<9> ap_ST_fsm_state9;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<10> ap_const_lv10_19;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_18;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_271;
    static const sc_lv<11> ap_const_lv11_7FF;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln218_fu_313_p2();
    void thread_add_ln219_fu_364_p2();
    void thread_add_ln220_1_fu_341_p2();
    void thread_add_ln220_2_fu_251_p2();
    void thread_add_ln220_3_fu_257_p2();
    void thread_add_ln220_fu_347_p2();
    void thread_add_ln237_fu_413_p2();
    void thread_add_ln241_fu_459_p0();
    void thread_add_ln241_fu_459_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_as_address0();
    void thread_as_ce0();
    void thread_bs_address0();
    void thread_bs_address1();
    void thread_bs_ce0();
    void thread_bs_ce1();
    void thread_bs_d0();
    void thread_bs_d1();
    void thread_bs_we0();
    void thread_bs_we1();
    void thread_count_fu_423_p2();
    void thread_cp_fu_470_p0();
    void thread_cp_fu_470_p2();
    void thread_i_2_fu_269_p2();
    void thread_i_fu_388_p2();
    void thread_icmp_ln211_fu_263_p2();
    void thread_icmp_ln214_fu_301_p2();
    void thread_icmp_ln220_fu_281_p2();
    void thread_icmp_ln228_fu_382_p2();
    void thread_icmp_ln232_fu_404_p2();
    void thread_icmp_ln237_fu_434_p2();
    void thread_j_fu_307_p2();
    void thread_k_fu_275_p2();
    void thread_odoarr_address0();
    void thread_odoarr_address1();
    void thread_odoarr_ce0();
    void thread_odoarr_ce1();
    void thread_odoarr_we0();
    void thread_select_ln220_fu_330_p3();
    void thread_select_ln243_fu_439_p3();
    void thread_sext_ln237_fu_418_p1();
    void thread_sext_ln240_fu_454_p0();
    void thread_sext_ln240_fu_454_p1();
    void thread_sext_ln241_fu_465_p1();
    void thread_sub_ln220_fu_324_p2();
    void thread_x_fu_353_p2();
    void thread_zext_ln214_fu_297_p1();
    void thread_zext_ln218_1_fu_359_p1();
    void thread_zext_ln218_fu_319_p1();
    void thread_zext_ln220_1_fu_374_p1();
    void thread_zext_ln220_2_fu_370_p1();
    void thread_zext_ln220_fu_337_p1();
    void thread_zext_ln228_fu_378_p1();
    void thread_zext_ln232_1_fu_399_p1();
    void thread_zext_ln232_fu_394_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
