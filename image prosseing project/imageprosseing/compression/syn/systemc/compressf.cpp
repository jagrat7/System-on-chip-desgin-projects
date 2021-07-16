// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "compressf.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic compressf::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic compressf::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<9> compressf::ap_ST_fsm_state1 = "1";
const sc_lv<9> compressf::ap_ST_fsm_state2 = "10";
const sc_lv<9> compressf::ap_ST_fsm_state3 = "100";
const sc_lv<9> compressf::ap_ST_fsm_state4 = "1000";
const sc_lv<9> compressf::ap_ST_fsm_state5 = "10000";
const sc_lv<9> compressf::ap_ST_fsm_state6 = "100000";
const sc_lv<9> compressf::ap_ST_fsm_state7 = "1000000";
const sc_lv<9> compressf::ap_ST_fsm_state8 = "10000000";
const sc_lv<9> compressf::ap_ST_fsm_state9 = "100000000";
const sc_lv<32> compressf::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> compressf::ap_const_lv32_1 = "1";
const sc_lv<1> compressf::ap_const_lv1_0 = "0";
const sc_lv<32> compressf::ap_const_lv32_2 = "10";
const sc_lv<1> compressf::ap_const_lv1_1 = "1";
const sc_lv<32> compressf::ap_const_lv32_3 = "11";
const sc_lv<32> compressf::ap_const_lv32_5 = "101";
const sc_lv<32> compressf::ap_const_lv32_6 = "110";
const sc_lv<32> compressf::ap_const_lv32_7 = "111";
const sc_lv<10> compressf::ap_const_lv10_0 = "0000000000";
const sc_lv<5> compressf::ap_const_lv5_0 = "00000";
const sc_lv<32> compressf::ap_const_lv32_4 = "100";
const sc_lv<32> compressf::ap_const_lv32_8 = "1000";
const sc_lv<10> compressf::ap_const_lv10_19 = "11001";
const sc_lv<5> compressf::ap_const_lv5_19 = "11001";
const sc_lv<5> compressf::ap_const_lv5_1 = "1";
const sc_lv<5> compressf::ap_const_lv5_18 = "11000";
const sc_lv<10> compressf::ap_const_lv10_1 = "1";
const sc_lv<10> compressf::ap_const_lv10_271 = "1001110001";
const sc_lv<11> compressf::ap_const_lv11_7FF = "11111111111";
const bool compressf::ap_const_boolean_1 = true;

compressf::compressf(sc_module_name name) : sc_module(name), mVcdFile(0) {
    odoarr_U = new compressf_odoarr("odoarr_U");
    odoarr_U->clk(ap_clk);
    odoarr_U->reset(ap_rst);
    odoarr_U->address0(odoarr_address0);
    odoarr_U->ce0(odoarr_ce0);
    odoarr_U->we0(odoarr_we0);
    odoarr_U->d0(as_q0);
    odoarr_U->q0(odoarr_q0);
    odoarr_U->address1(odoarr_address1);
    odoarr_U->ce1(odoarr_ce1);
    odoarr_U->q1(odoarr_q1);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln218_fu_313_p2);
    sensitive << ( phi_mul_reg_194 );
    sensitive << ( zext_ln214_fu_297_p1 );

    SC_METHOD(thread_add_ln219_fu_364_p2);
    sensitive << ( k_1_reg_218 );

    SC_METHOD(thread_add_ln220_1_fu_341_p2);
    sensitive << ( phi_mul_reg_194 );
    sensitive << ( zext_ln220_fu_337_p1 );

    SC_METHOD(thread_add_ln220_2_fu_251_p2);
    sensitive << ( phi_mul1_reg_206 );

    SC_METHOD(thread_add_ln220_3_fu_257_p2);
    sensitive << ( phi_mul_reg_194 );

    SC_METHOD(thread_add_ln220_fu_347_p2);
    sensitive << ( phi_mul1_reg_206 );
    sensitive << ( zext_ln214_fu_297_p1 );

    SC_METHOD(thread_add_ln237_fu_413_p2);
    sensitive << ( zext_ln228_reg_562 );

    SC_METHOD(thread_add_ln241_fu_459_p0);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( cp_1_fu_64 );

    SC_METHOD(thread_add_ln241_fu_459_p2);
    sensitive << ( add_ln241_fu_459_p0 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state9);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln228_fu_382_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln228_fu_382_p2 );

    SC_METHOD(thread_as_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( zext_ln218_fu_319_p1 );
    sensitive << ( zext_ln220_2_fu_370_p1 );

    SC_METHOD(thread_as_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_bs_address0);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( sext_ln240_fu_454_p1 );

    SC_METHOD(thread_bs_address1);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( sext_ln241_fu_465_p1 );

    SC_METHOD(thread_bs_ce0);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_bs_ce1);
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_bs_d0);
    sensitive << ( odoarr_load_1_reg_585 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_bs_d1);
    sensitive << ( select_ln243_reg_605 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_bs_we0);
    sensitive << ( icmp_ln232_reg_591 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_bs_we1);
    sensitive << ( icmp_ln232_reg_591 );
    sensitive << ( ap_CS_fsm_state9 );

    SC_METHOD(thread_count_fu_423_p2);
    sensitive << ( count_1_fu_60 );

    SC_METHOD(thread_cp_fu_470_p0);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( cp_1_fu_64 );

    SC_METHOD(thread_cp_fu_470_p2);
    sensitive << ( cp_fu_470_p0 );

    SC_METHOD(thread_i_2_fu_269_p2);
    sensitive << ( i_0_reg_171 );

    SC_METHOD(thread_i_fu_388_p2);
    sensitive << ( i_1_reg_240 );

    SC_METHOD(thread_icmp_ln211_fu_263_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_171 );

    SC_METHOD(thread_icmp_ln214_fu_301_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_229 );

    SC_METHOD(thread_icmp_ln220_fu_281_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln211_fu_263_p2 );
    sensitive << ( x_0_reg_182 );

    SC_METHOD(thread_icmp_ln228_fu_382_p2);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( i_1_reg_240 );

    SC_METHOD(thread_icmp_ln232_fu_404_p2);
    sensitive << ( odoarr_q1 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( odoarr_q0 );

    SC_METHOD(thread_icmp_ln237_fu_434_p2);
    sensitive << ( odoarr_q1 );
    sensitive << ( odoarr_load_1_reg_585 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_j_fu_307_p2);
    sensitive << ( j_0_reg_229 );

    SC_METHOD(thread_k_fu_275_p2);
    sensitive << ( k_0_reg_159 );

    SC_METHOD(thread_odoarr_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( zext_ln218_1_fu_359_p1 );
    sensitive << ( zext_ln220_1_fu_374_p1 );
    sensitive << ( zext_ln232_fu_394_p1 );

    SC_METHOD(thread_odoarr_address1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( zext_ln232_1_fu_399_p1 );
    sensitive << ( sext_ln237_fu_418_p1 );

    SC_METHOD(thread_odoarr_ce0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_odoarr_ce1);
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( ap_CS_fsm_state7 );

    SC_METHOD(thread_odoarr_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_select_ln220_fu_330_p3);
    sensitive << ( icmp_ln220_reg_504 );
    sensitive << ( j_0_reg_229 );
    sensitive << ( sub_ln220_fu_324_p2 );

    SC_METHOD(thread_select_ln243_fu_439_p3);
    sensitive << ( count_1_load_reg_595 );
    sensitive << ( icmp_ln237_fu_434_p2 );

    SC_METHOD(thread_sext_ln237_fu_418_p1);
    sensitive << ( add_ln237_fu_413_p2 );

    SC_METHOD(thread_sext_ln240_fu_454_p0);
    sensitive << ( ap_CS_fsm_state9 );
    sensitive << ( cp_1_fu_64 );

    SC_METHOD(thread_sext_ln240_fu_454_p1);
    sensitive << ( sext_ln240_fu_454_p0 );

    SC_METHOD(thread_sext_ln241_fu_465_p1);
    sensitive << ( add_ln241_fu_459_p2 );

    SC_METHOD(thread_sub_ln220_fu_324_p2);
    sensitive << ( j_0_reg_229 );

    SC_METHOD(thread_x_fu_353_p2);
    sensitive << ( x_0_reg_182 );

    SC_METHOD(thread_zext_ln214_fu_297_p1);
    sensitive << ( j_0_reg_229 );

    SC_METHOD(thread_zext_ln218_1_fu_359_p1);
    sensitive << ( k_1_reg_218 );

    SC_METHOD(thread_zext_ln218_fu_319_p1);
    sensitive << ( add_ln218_fu_313_p2 );

    SC_METHOD(thread_zext_ln220_1_fu_374_p1);
    sensitive << ( add_ln220_reg_542 );

    SC_METHOD(thread_zext_ln220_2_fu_370_p1);
    sensitive << ( add_ln220_1_reg_537 );

    SC_METHOD(thread_zext_ln220_fu_337_p1);
    sensitive << ( select_ln220_fu_330_p3 );

    SC_METHOD(thread_zext_ln228_fu_378_p1);
    sensitive << ( i_1_reg_240 );

    SC_METHOD(thread_zext_ln232_1_fu_399_p1);
    sensitive << ( i_1_reg_240 );

    SC_METHOD(thread_zext_ln232_fu_394_p1);
    sensitive << ( i_fu_388_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln211_fu_263_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln214_fu_301_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( icmp_ln228_fu_382_p2 );
    sensitive << ( ap_CS_fsm_state7 );
    sensitive << ( icmp_ln232_fu_404_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "compressf_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, as_address0, "(port)as_address0");
    sc_trace(mVcdFile, as_ce0, "(port)as_ce0");
    sc_trace(mVcdFile, as_q0, "(port)as_q0");
    sc_trace(mVcdFile, bs_address0, "(port)bs_address0");
    sc_trace(mVcdFile, bs_ce0, "(port)bs_ce0");
    sc_trace(mVcdFile, bs_we0, "(port)bs_we0");
    sc_trace(mVcdFile, bs_d0, "(port)bs_d0");
    sc_trace(mVcdFile, bs_address1, "(port)bs_address1");
    sc_trace(mVcdFile, bs_ce1, "(port)bs_ce1");
    sc_trace(mVcdFile, bs_we1, "(port)bs_we1");
    sc_trace(mVcdFile, bs_d1, "(port)bs_d1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, add_ln220_2_fu_251_p2, "add_ln220_2_fu_251_p2");
    sc_trace(mVcdFile, add_ln220_2_reg_481, "add_ln220_2_reg_481");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, add_ln220_3_fu_257_p2, "add_ln220_3_fu_257_p2");
    sc_trace(mVcdFile, add_ln220_3_reg_486, "add_ln220_3_reg_486");
    sc_trace(mVcdFile, i_2_fu_269_p2, "i_2_fu_269_p2");
    sc_trace(mVcdFile, i_2_reg_494, "i_2_reg_494");
    sc_trace(mVcdFile, k_fu_275_p2, "k_fu_275_p2");
    sc_trace(mVcdFile, k_reg_499, "k_reg_499");
    sc_trace(mVcdFile, icmp_ln211_fu_263_p2, "icmp_ln211_fu_263_p2");
    sc_trace(mVcdFile, icmp_ln220_fu_281_p2, "icmp_ln220_fu_281_p2");
    sc_trace(mVcdFile, icmp_ln220_reg_504, "icmp_ln220_reg_504");
    sc_trace(mVcdFile, j_fu_307_p2, "j_fu_307_p2");
    sc_trace(mVcdFile, j_reg_527, "j_reg_527");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, icmp_ln214_fu_301_p2, "icmp_ln214_fu_301_p2");
    sc_trace(mVcdFile, add_ln220_1_fu_341_p2, "add_ln220_1_fu_341_p2");
    sc_trace(mVcdFile, add_ln220_1_reg_537, "add_ln220_1_reg_537");
    sc_trace(mVcdFile, add_ln220_fu_347_p2, "add_ln220_fu_347_p2");
    sc_trace(mVcdFile, add_ln220_reg_542, "add_ln220_reg_542");
    sc_trace(mVcdFile, x_fu_353_p2, "x_fu_353_p2");
    sc_trace(mVcdFile, add_ln219_fu_364_p2, "add_ln219_fu_364_p2");
    sc_trace(mVcdFile, add_ln219_reg_552, "add_ln219_reg_552");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln228_fu_378_p1, "zext_ln228_fu_378_p1");
    sc_trace(mVcdFile, zext_ln228_reg_562, "zext_ln228_reg_562");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, i_fu_388_p2, "i_fu_388_p2");
    sc_trace(mVcdFile, i_reg_570, "i_reg_570");
    sc_trace(mVcdFile, icmp_ln228_fu_382_p2, "icmp_ln228_fu_382_p2");
    sc_trace(mVcdFile, odoarr_q1, "odoarr_q1");
    sc_trace(mVcdFile, odoarr_load_1_reg_585, "odoarr_load_1_reg_585");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, icmp_ln232_fu_404_p2, "icmp_ln232_fu_404_p2");
    sc_trace(mVcdFile, icmp_ln232_reg_591, "icmp_ln232_reg_591");
    sc_trace(mVcdFile, count_1_load_reg_595, "count_1_load_reg_595");
    sc_trace(mVcdFile, select_ln243_fu_439_p3, "select_ln243_fu_439_p3");
    sc_trace(mVcdFile, select_ln243_reg_605, "select_ln243_reg_605");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, odoarr_address0, "odoarr_address0");
    sc_trace(mVcdFile, odoarr_ce0, "odoarr_ce0");
    sc_trace(mVcdFile, odoarr_we0, "odoarr_we0");
    sc_trace(mVcdFile, odoarr_q0, "odoarr_q0");
    sc_trace(mVcdFile, odoarr_address1, "odoarr_address1");
    sc_trace(mVcdFile, odoarr_ce1, "odoarr_ce1");
    sc_trace(mVcdFile, k_0_reg_159, "k_0_reg_159");
    sc_trace(mVcdFile, i_0_reg_171, "i_0_reg_171");
    sc_trace(mVcdFile, x_0_reg_182, "x_0_reg_182");
    sc_trace(mVcdFile, phi_mul_reg_194, "phi_mul_reg_194");
    sc_trace(mVcdFile, phi_mul1_reg_206, "phi_mul1_reg_206");
    sc_trace(mVcdFile, k_1_reg_218, "k_1_reg_218");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, j_0_reg_229, "j_0_reg_229");
    sc_trace(mVcdFile, i_1_reg_240, "i_1_reg_240");
    sc_trace(mVcdFile, ap_CS_fsm_state9, "ap_CS_fsm_state9");
    sc_trace(mVcdFile, zext_ln218_fu_319_p1, "zext_ln218_fu_319_p1");
    sc_trace(mVcdFile, zext_ln218_1_fu_359_p1, "zext_ln218_1_fu_359_p1");
    sc_trace(mVcdFile, zext_ln220_2_fu_370_p1, "zext_ln220_2_fu_370_p1");
    sc_trace(mVcdFile, zext_ln220_1_fu_374_p1, "zext_ln220_1_fu_374_p1");
    sc_trace(mVcdFile, zext_ln232_fu_394_p1, "zext_ln232_fu_394_p1");
    sc_trace(mVcdFile, zext_ln232_1_fu_399_p1, "zext_ln232_1_fu_399_p1");
    sc_trace(mVcdFile, sext_ln237_fu_418_p1, "sext_ln237_fu_418_p1");
    sc_trace(mVcdFile, sext_ln240_fu_454_p1, "sext_ln240_fu_454_p1");
    sc_trace(mVcdFile, sext_ln241_fu_465_p1, "sext_ln241_fu_465_p1");
    sc_trace(mVcdFile, count_1_fu_60, "count_1_fu_60");
    sc_trace(mVcdFile, count_fu_423_p2, "count_fu_423_p2");
    sc_trace(mVcdFile, cp_1_fu_64, "cp_1_fu_64");
    sc_trace(mVcdFile, cp_fu_470_p2, "cp_fu_470_p2");
    sc_trace(mVcdFile, zext_ln214_fu_297_p1, "zext_ln214_fu_297_p1");
    sc_trace(mVcdFile, add_ln218_fu_313_p2, "add_ln218_fu_313_p2");
    sc_trace(mVcdFile, sub_ln220_fu_324_p2, "sub_ln220_fu_324_p2");
    sc_trace(mVcdFile, select_ln220_fu_330_p3, "select_ln220_fu_330_p3");
    sc_trace(mVcdFile, zext_ln220_fu_337_p1, "zext_ln220_fu_337_p1");
    sc_trace(mVcdFile, add_ln237_fu_413_p2, "add_ln237_fu_413_p2");
    sc_trace(mVcdFile, icmp_ln237_fu_434_p2, "icmp_ln237_fu_434_p2");
    sc_trace(mVcdFile, sext_ln240_fu_454_p0, "sext_ln240_fu_454_p0");
    sc_trace(mVcdFile, add_ln241_fu_459_p0, "add_ln241_fu_459_p0");
    sc_trace(mVcdFile, add_ln241_fu_459_p2, "add_ln241_fu_459_p2");
    sc_trace(mVcdFile, cp_fu_470_p0, "cp_fu_470_p0");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("compressf.hdltvin.dat");
    mHdltvoutHandle.open("compressf.hdltvout.dat");
}

compressf::~compressf() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete odoarr_U;
}

void compressf::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        count_1_fu_60 = select_ln243_fu_439_p3.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln232_fu_404_p2.read()))) {
        count_1_fu_60 = count_fu_423_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_1))) {
        count_1_fu_60 = ap_const_lv32_1;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln232_reg_591.read()))) {
        cp_1_fu_64 = cp_fu_470_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_1))) {
        cp_1_fu_64 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
        i_0_reg_171 = i_2_reg_494.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_171 = ap_const_lv5_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        i_1_reg_240 = i_reg_570.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_1))) {
        i_1_reg_240 = ap_const_lv10_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        j_0_reg_229 = j_reg_527.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_0))) {
        j_0_reg_229 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
        k_0_reg_159 = k_reg_499.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        k_0_reg_159 = ap_const_lv10_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        k_1_reg_218 = add_ln219_reg_552.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_0))) {
        k_1_reg_218 = k_0_reg_159.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
        phi_mul1_reg_206 = add_ln220_2_reg_481.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul1_reg_206 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
        phi_mul_reg_194 = add_ln220_3_reg_486.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_194 = ap_const_lv10_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
        x_0_reg_182 = x_fu_353_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        x_0_reg_182 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        add_ln219_reg_552 = add_ln219_fu_364_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln214_fu_301_p2.read()))) {
        add_ln220_1_reg_537 = add_ln220_1_fu_341_p2.read();
        add_ln220_reg_542 = add_ln220_fu_347_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln220_2_reg_481 = add_ln220_2_fu_251_p2.read();
        add_ln220_3_reg_486 = add_ln220_3_fu_257_p2.read();
        i_2_reg_494 = i_2_fu_269_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        count_1_load_reg_595 = count_1_fu_60.read();
        icmp_ln232_reg_591 = icmp_ln232_fu_404_p2.read();
        odoarr_load_1_reg_585 = odoarr_q1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        i_reg_570 = i_fu_388_p2.read();
        zext_ln228_reg_562 = zext_ln228_fu_378_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_0))) {
        icmp_ln220_reg_504 = icmp_ln220_fu_281_p2.read();
        k_reg_499 = k_fu_275_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_527 = j_fu_307_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state8.read())) {
        select_ln243_reg_605 = select_ln243_fu_439_p3.read();
    }
}

void compressf::thread_add_ln218_fu_313_p2() {
    add_ln218_fu_313_p2 = (!phi_mul_reg_194.read().is_01() || !zext_ln214_fu_297_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(phi_mul_reg_194.read()) + sc_biguint<10>(zext_ln214_fu_297_p1.read()));
}

void compressf::thread_add_ln219_fu_364_p2() {
    add_ln219_fu_364_p2 = (!k_1_reg_218.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(k_1_reg_218.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void compressf::thread_add_ln220_1_fu_341_p2() {
    add_ln220_1_fu_341_p2 = (!phi_mul_reg_194.read().is_01() || !zext_ln220_fu_337_p1.read().is_01())? sc_lv<10>(): (sc_biguint<10>(phi_mul_reg_194.read()) + sc_biguint<10>(zext_ln220_fu_337_p1.read()));
}

void compressf::thread_add_ln220_2_fu_251_p2() {
    add_ln220_2_fu_251_p2 = (!phi_mul1_reg_206.read().is_01() || !ap_const_lv10_19.is_01())? sc_lv<10>(): (sc_biguint<10>(phi_mul1_reg_206.read()) + sc_biguint<10>(ap_const_lv10_19));
}

void compressf::thread_add_ln220_3_fu_257_p2() {
    add_ln220_3_fu_257_p2 = (!phi_mul_reg_194.read().is_01() || !ap_const_lv10_19.is_01())? sc_lv<10>(): (sc_biguint<10>(phi_mul_reg_194.read()) + sc_biguint<10>(ap_const_lv10_19));
}

void compressf::thread_add_ln220_fu_347_p2() {
    add_ln220_fu_347_p2 = (!zext_ln214_fu_297_p1.read().is_01() || !phi_mul1_reg_206.read().is_01())? sc_lv<10>(): (sc_biguint<10>(zext_ln214_fu_297_p1.read()) + sc_biguint<10>(phi_mul1_reg_206.read()));
}

void compressf::thread_add_ln237_fu_413_p2() {
    add_ln237_fu_413_p2 = (!zext_ln228_reg_562.read().is_01() || !ap_const_lv11_7FF.is_01())? sc_lv<11>(): (sc_biguint<11>(zext_ln228_reg_562.read()) + sc_bigint<11>(ap_const_lv11_7FF));
}

void compressf::thread_add_ln241_fu_459_p0() {
    add_ln241_fu_459_p0 = cp_1_fu_64.read();
}

void compressf::thread_add_ln241_fu_459_p2() {
    add_ln241_fu_459_p2 = (!add_ln241_fu_459_p0.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(add_ln241_fu_459_p0.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void compressf::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void compressf::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void compressf::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void compressf::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void compressf::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void compressf::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void compressf::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read()[6];
}

void compressf::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[7];
}

void compressf::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[8];
}

void compressf::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln228_fu_382_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void compressf::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void compressf::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln228_fu_382_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void compressf::thread_as_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        as_address0 =  (sc_lv<10>) (zext_ln220_2_fu_370_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        as_address0 =  (sc_lv<10>) (zext_ln218_fu_319_p1.read());
    } else {
        as_address0 = "XXXXXXXXXX";
    }
}

void compressf::thread_as_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        as_ce0 = ap_const_logic_1;
    } else {
        as_ce0 = ap_const_logic_0;
    }
}

void compressf::thread_bs_address0() {
    bs_address0 =  (sc_lv<10>) (sext_ln240_fu_454_p1.read());
}

void compressf::thread_bs_address1() {
    bs_address1 =  (sc_lv<10>) (sext_ln241_fu_465_p1.read());
}

void compressf::thread_bs_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        bs_ce0 = ap_const_logic_1;
    } else {
        bs_ce0 = ap_const_logic_0;
    }
}

void compressf::thread_bs_ce1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read())) {
        bs_ce1 = ap_const_logic_1;
    } else {
        bs_ce1 = ap_const_logic_0;
    }
}

void compressf::thread_bs_d0() {
    bs_d0 = odoarr_load_1_reg_585.read();
}

void compressf::thread_bs_d1() {
    bs_d1 = select_ln243_reg_605.read();
}

void compressf::thread_bs_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln232_reg_591.read()))) {
        bs_we0 = ap_const_logic_1;
    } else {
        bs_we0 = ap_const_logic_0;
    }
}

void compressf::thread_bs_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln232_reg_591.read()))) {
        bs_we1 = ap_const_logic_1;
    } else {
        bs_we1 = ap_const_logic_0;
    }
}

void compressf::thread_count_fu_423_p2() {
    count_fu_423_p2 = (!count_1_fu_60.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_biguint<32>(count_1_fu_60.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void compressf::thread_cp_fu_470_p0() {
    cp_fu_470_p0 = cp_1_fu_64.read();
}

void compressf::thread_cp_fu_470_p2() {
    cp_fu_470_p2 = (!cp_fu_470_p0.read().is_01() || !ap_const_lv32_2.is_01())? sc_lv<32>(): (sc_bigint<32>(cp_fu_470_p0.read()) + sc_biguint<32>(ap_const_lv32_2));
}

void compressf::thread_i_2_fu_269_p2() {
    i_2_fu_269_p2 = (!i_0_reg_171.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(i_0_reg_171.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compressf::thread_i_fu_388_p2() {
    i_fu_388_p2 = (!i_1_reg_240.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(i_1_reg_240.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void compressf::thread_icmp_ln211_fu_263_p2() {
    icmp_ln211_fu_263_p2 = (!i_0_reg_171.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_171.read() == ap_const_lv5_19);
}

void compressf::thread_icmp_ln214_fu_301_p2() {
    icmp_ln214_fu_301_p2 = (!j_0_reg_229.read().is_01() || !ap_const_lv5_19.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_229.read() == ap_const_lv5_19);
}

void compressf::thread_icmp_ln220_fu_281_p2() {
    icmp_ln220_fu_281_p2 = (!x_0_reg_182.read().is_01() || !ap_const_lv32_0.is_01())? sc_lv<1>(): sc_lv<1>(x_0_reg_182.read() == ap_const_lv32_0);
}

void compressf::thread_icmp_ln228_fu_382_p2() {
    icmp_ln228_fu_382_p2 = (!i_1_reg_240.read().is_01() || !ap_const_lv10_271.is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_240.read() == ap_const_lv10_271);
}

void compressf::thread_icmp_ln232_fu_404_p2() {
    icmp_ln232_fu_404_p2 = (!odoarr_q0.read().is_01() || !odoarr_q1.read().is_01())? sc_lv<1>(): sc_lv<1>(odoarr_q0.read() == odoarr_q1.read());
}

void compressf::thread_icmp_ln237_fu_434_p2() {
    icmp_ln237_fu_434_p2 = (!odoarr_q1.read().is_01() || !odoarr_load_1_reg_585.read().is_01())? sc_lv<1>(): sc_lv<1>(odoarr_q1.read() == odoarr_load_1_reg_585.read());
}

void compressf::thread_j_fu_307_p2() {
    j_fu_307_p2 = (!j_0_reg_229.read().is_01() || !ap_const_lv5_1.is_01())? sc_lv<5>(): (sc_biguint<5>(j_0_reg_229.read()) + sc_biguint<5>(ap_const_lv5_1));
}

void compressf::thread_k_fu_275_p2() {
    k_fu_275_p2 = (!k_0_reg_159.read().is_01() || !ap_const_lv10_19.is_01())? sc_lv<10>(): (sc_biguint<10>(k_0_reg_159.read()) + sc_biguint<10>(ap_const_lv10_19));
}

void compressf::thread_odoarr_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        odoarr_address0 =  (sc_lv<10>) (zext_ln232_fu_394_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        odoarr_address0 =  (sc_lv<10>) (zext_ln220_1_fu_374_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        odoarr_address0 =  (sc_lv<10>) (zext_ln218_1_fu_359_p1.read());
    } else {
        odoarr_address0 = "XXXXXXXXXX";
    }
}

void compressf::thread_odoarr_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read())) {
        odoarr_address1 =  (sc_lv<10>) (sext_ln237_fu_418_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        odoarr_address1 =  (sc_lv<10>) (zext_ln232_1_fu_399_p1.read());
    } else {
        odoarr_address1 = "XXXXXXXXXX";
    }
}

void compressf::thread_odoarr_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        odoarr_ce0 = ap_const_logic_1;
    } else {
        odoarr_ce0 = ap_const_logic_0;
    }
}

void compressf::thread_odoarr_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()))) {
        odoarr_ce1 = ap_const_logic_1;
    } else {
        odoarr_ce1 = ap_const_logic_0;
    }
}

void compressf::thread_odoarr_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        odoarr_we0 = ap_const_logic_1;
    } else {
        odoarr_we0 = ap_const_logic_0;
    }
}

void compressf::thread_select_ln220_fu_330_p3() {
    select_ln220_fu_330_p3 = (!icmp_ln220_reg_504.read()[0].is_01())? sc_lv<5>(): ((icmp_ln220_reg_504.read()[0].to_bool())? j_0_reg_229.read(): sub_ln220_fu_324_p2.read());
}

void compressf::thread_select_ln243_fu_439_p3() {
    select_ln243_fu_439_p3 = (!icmp_ln237_fu_434_p2.read()[0].is_01())? sc_lv<32>(): ((icmp_ln237_fu_434_p2.read()[0].to_bool())? count_1_load_reg_595.read(): ap_const_lv32_1);
}

void compressf::thread_sext_ln237_fu_418_p1() {
    sext_ln237_fu_418_p1 = esl_sext<64,11>(add_ln237_fu_413_p2.read());
}

void compressf::thread_sext_ln240_fu_454_p0() {
    sext_ln240_fu_454_p0 = cp_1_fu_64.read();
}

void compressf::thread_sext_ln240_fu_454_p1() {
    sext_ln240_fu_454_p1 = esl_sext<64,32>(sext_ln240_fu_454_p0.read());
}

void compressf::thread_sext_ln241_fu_465_p1() {
    sext_ln241_fu_465_p1 = esl_sext<64,32>(add_ln241_fu_459_p2.read());
}

void compressf::thread_sub_ln220_fu_324_p2() {
    sub_ln220_fu_324_p2 = (!ap_const_lv5_18.is_01() || !j_0_reg_229.read().is_01())? sc_lv<5>(): (sc_bigint<5>(ap_const_lv5_18) - sc_biguint<5>(j_0_reg_229.read()));
}

void compressf::thread_x_fu_353_p2() {
    x_fu_353_p2 = (x_0_reg_182.read() ^ ap_const_lv32_1);
}

void compressf::thread_zext_ln214_fu_297_p1() {
    zext_ln214_fu_297_p1 = esl_zext<10,5>(j_0_reg_229.read());
}

void compressf::thread_zext_ln218_1_fu_359_p1() {
    zext_ln218_1_fu_359_p1 = esl_zext<64,10>(k_1_reg_218.read());
}

void compressf::thread_zext_ln218_fu_319_p1() {
    zext_ln218_fu_319_p1 = esl_zext<64,10>(add_ln218_fu_313_p2.read());
}

void compressf::thread_zext_ln220_1_fu_374_p1() {
    zext_ln220_1_fu_374_p1 = esl_zext<64,10>(add_ln220_reg_542.read());
}

void compressf::thread_zext_ln220_2_fu_370_p1() {
    zext_ln220_2_fu_370_p1 = esl_zext<64,10>(add_ln220_1_reg_537.read());
}

void compressf::thread_zext_ln220_fu_337_p1() {
    zext_ln220_fu_337_p1 = esl_zext<10,5>(select_ln220_fu_330_p3.read());
}

void compressf::thread_zext_ln228_fu_378_p1() {
    zext_ln228_fu_378_p1 = esl_zext<11,10>(i_1_reg_240.read());
}

void compressf::thread_zext_ln232_1_fu_399_p1() {
    zext_ln232_1_fu_399_p1 = esl_zext<64,10>(i_1_reg_240.read());
}

void compressf::thread_zext_ln232_fu_394_p1() {
    zext_ln232_fu_394_p1 = esl_zext<64,10>(i_fu_388_p2.read());
}

void compressf::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(icmp_ln211_fu_263_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln214_fu_301_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln228_fu_382_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state7;
            }
            break;
        case 64 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state7.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln232_fu_404_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state9;
            } else {
                ap_NS_fsm = ap_ST_fsm_state8;
            }
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state9;
            break;
        case 256 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<9>) ("XXXXXXXXX");
            break;
    }
}

void compressf::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"as_address0\" :  \"" << as_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"as_ce0\" :  \"" << as_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"as_q0\" :  \"" << as_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_address0\" :  \"" << bs_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_ce0\" :  \"" << bs_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_we0\" :  \"" << bs_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_d0\" :  \"" << bs_d0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_address1\" :  \"" << bs_address1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_ce1\" :  \"" << bs_ce1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_we1\" :  \"" << bs_we1.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bs_d1\" :  \"" << bs_d1.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

