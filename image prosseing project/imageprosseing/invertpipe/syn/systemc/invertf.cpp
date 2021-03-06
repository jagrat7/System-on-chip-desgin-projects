// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "invertf.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic invertf::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic invertf::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> invertf::ap_ST_fsm_state1 = "1";
const sc_lv<4> invertf::ap_ST_fsm_pp0_stage0 = "10";
const sc_lv<4> invertf::ap_ST_fsm_pp0_stage1 = "100";
const sc_lv<4> invertf::ap_ST_fsm_state6 = "1000";
const sc_lv<32> invertf::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool invertf::ap_const_boolean_1 = true;
const sc_lv<32> invertf::ap_const_lv32_1 = "1";
const bool invertf::ap_const_boolean_0 = false;
const sc_lv<1> invertf::ap_const_lv1_0 = "0";
const sc_lv<32> invertf::ap_const_lv32_2 = "10";
const sc_lv<1> invertf::ap_const_lv1_1 = "1";
const sc_lv<14> invertf::ap_const_lv14_0 = "00000000000000";
const sc_lv<7> invertf::ap_const_lv7_0 = "0000000";
const sc_lv<14> invertf::ap_const_lv14_2710 = "10011100010000";
const sc_lv<14> invertf::ap_const_lv14_1 = "1";
const sc_lv<7> invertf::ap_const_lv7_1 = "1";
const sc_lv<7> invertf::ap_const_lv7_64 = "1100100";
const sc_lv<32> invertf::ap_const_lv32_FF = "11111111";
const sc_lv<14> invertf::ap_const_lv14_64 = "1100100";
const sc_lv<32> invertf::ap_const_lv32_3 = "11";

invertf::invertf(sc_module_name name) : sc_module(name), mVcdFile(0) {
    invertf_mac_muladbkb_U1 = new invertf_mac_muladbkb<1,1,7,8,7,14>("invertf_mac_muladbkb_U1");
    invertf_mac_muladbkb_U1->din0(grp_fu_172_p0);
    invertf_mac_muladbkb_U1->din1(grp_fu_172_p1);
    invertf_mac_muladbkb_U1->din2(grp_fu_172_p2);
    invertf_mac_muladbkb_U1->dout(grp_fu_172_p3);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln324_fu_117_p2);
    sensitive << ( ap_phi_mux_indvar_flatten_phi_fu_82_p4 );

    SC_METHOD(thread_ai_address0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( zext_ln328_2_fu_157_p1 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_ai_ce0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage0);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_pp0_stage1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_pp0_stage0);

    SC_METHOD(thread_ap_block_pp0_stage0_11001);

    SC_METHOD(thread_ap_block_pp0_stage0_subdone);

    SC_METHOD(thread_ap_block_pp0_stage1);

    SC_METHOD(thread_ap_block_pp0_stage1_11001);

    SC_METHOD(thread_ap_block_pp0_stage1_subdone);

    SC_METHOD(thread_ap_block_state2_pp0_stage0_iter0);

    SC_METHOD(thread_ap_block_state3_pp0_stage1_iter0);

    SC_METHOD(thread_ap_block_state4_pp0_stage0_iter1);

    SC_METHOD(thread_ap_block_state5_pp0_stage1_iter1);

    SC_METHOD(thread_ap_condition_pp0_exit_iter0_state2);
    sensitive << ( icmp_ln324_fu_111_p2 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_enable_pp0);
    sensitive << ( ap_idle_pp0 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_idle_pp0);
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_ap_phi_mux_i_0_phi_fu_93_p4);
    sensitive << ( i_0_reg_89 );
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( select_ln328_1_reg_196 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_indvar_flatten_phi_fu_82_p4);
    sensitive << ( indvar_flatten_reg_78 );
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( add_ln324_reg_185 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_phi_mux_j_0_phi_fu_104_p4);
    sensitive << ( j_0_reg_100 );
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( j_reg_212 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage0 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_bi_address0);
    sensitive << ( zext_ln328_2_reg_202 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_bi_ce0);
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_bi_d0);
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ai_load_reg_217 );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_bi_we0);
    sensitive << ( icmp_ln324_reg_181_pp0_iter1_reg );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1_11001 );
    sensitive << ( ap_enable_reg_pp0_iter1 );

    SC_METHOD(thread_grp_fu_172_p0);
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( grp_fu_172_p00 );

    SC_METHOD(thread_grp_fu_172_p00);
    sensitive << ( select_ln328_1_reg_196 );

    SC_METHOD(thread_grp_fu_172_p1);
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );

    SC_METHOD(thread_grp_fu_172_p2);
    sensitive << ( icmp_ln324_reg_181 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage1 );
    sensitive << ( grp_fu_172_p20 );

    SC_METHOD(thread_grp_fu_172_p20);
    sensitive << ( select_ln328_reg_190 );

    SC_METHOD(thread_i_fu_123_p2);
    sensitive << ( ap_phi_mux_i_0_phi_fu_93_p4 );

    SC_METHOD(thread_icmp_ln324_fu_111_p2);
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_indvar_flatten_phi_fu_82_p4 );

    SC_METHOD(thread_icmp_ln326_fu_129_p2);
    sensitive << ( icmp_ln324_fu_111_p2 );
    sensitive << ( ap_CS_fsm_pp0_stage0 );
    sensitive << ( ap_block_pp0_stage0_11001 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_phi_mux_j_0_phi_fu_104_p4 );

    SC_METHOD(thread_j_fu_161_p2);
    sensitive << ( select_ln328_reg_190 );

    SC_METHOD(thread_select_ln328_1_fu_143_p3);
    sensitive << ( ap_phi_mux_i_0_phi_fu_93_p4 );
    sensitive << ( icmp_ln326_fu_129_p2 );
    sensitive << ( i_fu_123_p2 );

    SC_METHOD(thread_select_ln328_fu_135_p3);
    sensitive << ( ap_phi_mux_j_0_phi_fu_104_p4 );
    sensitive << ( icmp_ln326_fu_129_p2 );

    SC_METHOD(thread_zext_ln328_2_fu_157_p1);
    sensitive << ( grp_fu_172_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( icmp_ln324_fu_111_p2 );
    sensitive << ( ap_enable_reg_pp0_iter0 );
    sensitive << ( ap_CS_fsm_pp0_stage1 );
    sensitive << ( ap_block_pp0_stage0_subdone );
    sensitive << ( ap_enable_reg_pp0_iter1 );
    sensitive << ( ap_block_pp0_stage1_subdone );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
    ap_enable_reg_pp0_iter0 = SC_LOGIC_0;
    ap_enable_reg_pp0_iter1 = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "invertf_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, ai_address0, "(port)ai_address0");
    sc_trace(mVcdFile, ai_ce0, "(port)ai_ce0");
    sc_trace(mVcdFile, ai_q0, "(port)ai_q0");
    sc_trace(mVcdFile, bi_address0, "(port)bi_address0");
    sc_trace(mVcdFile, bi_ce0, "(port)bi_ce0");
    sc_trace(mVcdFile, bi_we0, "(port)bi_we0");
    sc_trace(mVcdFile, bi_d0, "(port)bi_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, indvar_flatten_reg_78, "indvar_flatten_reg_78");
    sc_trace(mVcdFile, i_0_reg_89, "i_0_reg_89");
    sc_trace(mVcdFile, j_0_reg_100, "j_0_reg_100");
    sc_trace(mVcdFile, icmp_ln324_fu_111_p2, "icmp_ln324_fu_111_p2");
    sc_trace(mVcdFile, icmp_ln324_reg_181, "icmp_ln324_reg_181");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage0, "ap_CS_fsm_pp0_stage0");
    sc_trace(mVcdFile, ap_block_state2_pp0_stage0_iter0, "ap_block_state2_pp0_stage0_iter0");
    sc_trace(mVcdFile, ap_block_state4_pp0_stage0_iter1, "ap_block_state4_pp0_stage0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage0_11001, "ap_block_pp0_stage0_11001");
    sc_trace(mVcdFile, icmp_ln324_reg_181_pp0_iter1_reg, "icmp_ln324_reg_181_pp0_iter1_reg");
    sc_trace(mVcdFile, add_ln324_fu_117_p2, "add_ln324_fu_117_p2");
    sc_trace(mVcdFile, add_ln324_reg_185, "add_ln324_reg_185");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter0, "ap_enable_reg_pp0_iter0");
    sc_trace(mVcdFile, select_ln328_fu_135_p3, "select_ln328_fu_135_p3");
    sc_trace(mVcdFile, select_ln328_reg_190, "select_ln328_reg_190");
    sc_trace(mVcdFile, select_ln328_1_fu_143_p3, "select_ln328_1_fu_143_p3");
    sc_trace(mVcdFile, select_ln328_1_reg_196, "select_ln328_1_reg_196");
    sc_trace(mVcdFile, zext_ln328_2_fu_157_p1, "zext_ln328_2_fu_157_p1");
    sc_trace(mVcdFile, zext_ln328_2_reg_202, "zext_ln328_2_reg_202");
    sc_trace(mVcdFile, ap_CS_fsm_pp0_stage1, "ap_CS_fsm_pp0_stage1");
    sc_trace(mVcdFile, ap_block_state3_pp0_stage1_iter0, "ap_block_state3_pp0_stage1_iter0");
    sc_trace(mVcdFile, ap_block_state5_pp0_stage1_iter1, "ap_block_state5_pp0_stage1_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage1_11001, "ap_block_pp0_stage1_11001");
    sc_trace(mVcdFile, j_fu_161_p2, "j_fu_161_p2");
    sc_trace(mVcdFile, j_reg_212, "j_reg_212");
    sc_trace(mVcdFile, ai_load_reg_217, "ai_load_reg_217");
    sc_trace(mVcdFile, ap_block_pp0_stage0_subdone, "ap_block_pp0_stage0_subdone");
    sc_trace(mVcdFile, ap_condition_pp0_exit_iter0_state2, "ap_condition_pp0_exit_iter0_state2");
    sc_trace(mVcdFile, ap_enable_reg_pp0_iter1, "ap_enable_reg_pp0_iter1");
    sc_trace(mVcdFile, ap_block_pp0_stage1_subdone, "ap_block_pp0_stage1_subdone");
    sc_trace(mVcdFile, ap_phi_mux_indvar_flatten_phi_fu_82_p4, "ap_phi_mux_indvar_flatten_phi_fu_82_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage0, "ap_block_pp0_stage0");
    sc_trace(mVcdFile, ap_phi_mux_i_0_phi_fu_93_p4, "ap_phi_mux_i_0_phi_fu_93_p4");
    sc_trace(mVcdFile, ap_phi_mux_j_0_phi_fu_104_p4, "ap_phi_mux_j_0_phi_fu_104_p4");
    sc_trace(mVcdFile, ap_block_pp0_stage1, "ap_block_pp0_stage1");
    sc_trace(mVcdFile, icmp_ln326_fu_129_p2, "icmp_ln326_fu_129_p2");
    sc_trace(mVcdFile, i_fu_123_p2, "i_fu_123_p2");
    sc_trace(mVcdFile, grp_fu_172_p3, "grp_fu_172_p3");
    sc_trace(mVcdFile, grp_fu_172_p0, "grp_fu_172_p0");
    sc_trace(mVcdFile, grp_fu_172_p1, "grp_fu_172_p1");
    sc_trace(mVcdFile, grp_fu_172_p2, "grp_fu_172_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
    sc_trace(mVcdFile, ap_idle_pp0, "ap_idle_pp0");
    sc_trace(mVcdFile, ap_enable_pp0, "ap_enable_pp0");
    sc_trace(mVcdFile, grp_fu_172_p00, "grp_fu_172_p00");
    sc_trace(mVcdFile, grp_fu_172_p20, "grp_fu_172_p20");
#endif

    }
    mHdltvinHandle.open("invertf.hdltvin.dat");
    mHdltvoutHandle.open("invertf.hdltvout.dat");
}

invertf::~invertf() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete invertf_mac_muladbkb_U1;
}

void invertf::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter0 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_condition_pp0_exit_iter0_state2.read()))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_0;
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter0 = ap_const_logic_1;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_enable_reg_pp0_iter1 = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
             esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0))) {
            ap_enable_reg_pp0_iter1 = ap_enable_reg_pp0_iter0.read();
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                    esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
            ap_enable_reg_pp0_iter1 = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        i_0_reg_89 = select_ln328_1_reg_196.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_89 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        indvar_flatten_reg_78 = add_ln324_reg_185.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        indvar_flatten_reg_78 = ap_const_lv14_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        j_0_reg_100 = j_reg_212.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        j_0_reg_100 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()))) {
        add_ln324_reg_185 = add_ln324_fu_117_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0))) {
        ai_load_reg_217 = ai_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0))) {
        icmp_ln324_reg_181 = icmp_ln324_fu_111_p2.read();
        icmp_ln324_reg_181_pp0_iter1_reg = icmp_ln324_reg_181.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0))) {
        j_reg_212 = j_fu_161_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(icmp_ln324_fu_111_p2.read(), ap_const_lv1_0))) {
        select_ln328_1_reg_196 = select_ln328_1_fu_143_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_fu_111_p2.read(), ap_const_lv1_0))) {
        select_ln328_reg_190 = select_ln328_fu_135_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0))) {
        zext_ln328_2_reg_202 = zext_ln328_2_fu_157_p1.read();
    }
}

void invertf::thread_add_ln324_fu_117_p2() {
    add_ln324_fu_117_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_82_p4.read().is_01() || !ap_const_lv14_1.is_01())? sc_lv<14>(): (sc_biguint<14>(ap_phi_mux_indvar_flatten_phi_fu_82_p4.read()) + sc_biguint<14>(ap_const_lv14_1));
}

void invertf::thread_ai_address0() {
    ai_address0 =  (sc_lv<14>) (zext_ln328_2_fu_157_p1.read());
}

void invertf::thread_ai_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0))) {
        ai_ce0 = ap_const_logic_1;
    } else {
        ai_ce0 = ap_const_logic_0;
    }
}

void invertf::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void invertf::thread_ap_CS_fsm_pp0_stage1() {
    ap_CS_fsm_pp0_stage1 = ap_CS_fsm.read()[2];
}

void invertf::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void invertf::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[3];
}

void invertf::thread_ap_block_pp0_stage0() {
    ap_block_pp0_stage0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_pp0_stage0_11001() {
    ap_block_pp0_stage0_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_pp0_stage0_subdone() {
    ap_block_pp0_stage0_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_pp0_stage1() {
    ap_block_pp0_stage1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_pp0_stage1_11001() {
    ap_block_pp0_stage1_11001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_pp0_stage1_subdone() {
    ap_block_pp0_stage1_subdone = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_state3_pp0_stage1_iter0() {
    ap_block_state3_pp0_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_state4_pp0_stage0_iter1() {
    ap_block_state4_pp0_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_block_state5_pp0_stage1_iter1() {
    ap_block_state5_pp0_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void invertf::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(icmp_ln324_fu_111_p2.read(), ap_const_lv1_1)) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void invertf::thread_ap_done() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void invertf::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void invertf::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void invertf::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void invertf::thread_ap_phi_mux_i_0_phi_fu_93_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_i_0_phi_fu_93_p4 = select_ln328_1_reg_196.read();
    } else {
        ap_phi_mux_i_0_phi_fu_93_p4 = i_0_reg_89.read();
    }
}

void invertf::thread_ap_phi_mux_indvar_flatten_phi_fu_82_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_indvar_flatten_phi_fu_82_p4 = add_ln324_reg_185.read();
    } else {
        ap_phi_mux_indvar_flatten_phi_fu_82_p4 = indvar_flatten_reg_78.read();
    }
}

void invertf::thread_ap_phi_mux_j_0_phi_fu_104_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0.read(), ap_const_boolean_0))) {
        ap_phi_mux_j_0_phi_fu_104_p4 = j_reg_212.read();
    } else {
        ap_phi_mux_j_0_phi_fu_104_p4 = j_0_reg_100.read();
    }
}

void invertf::thread_ap_ready() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void invertf::thread_bi_address0() {
    bi_address0 =  (sc_lv<14>) (zext_ln328_2_reg_202.read());
}

void invertf::thread_bi_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()))) {
        bi_ce0 = ap_const_logic_1;
    } else {
        bi_ce0 = ap_const_logic_0;
    }
}

void invertf::thread_bi_d0() {
    bi_d0 = (!ap_const_lv32_FF.is_01() || !ai_load_reg_217.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FF) - sc_biguint<32>(ai_load_reg_217.read()));
}

void invertf::thread_bi_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage1_11001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(icmp_ln324_reg_181_pp0_iter1_reg.read(), ap_const_lv1_0))) {
        bi_we0 = ap_const_logic_1;
    } else {
        bi_we0 = ap_const_logic_0;
    }
}

void invertf::thread_grp_fu_172_p0() {
    grp_fu_172_p0 =  (sc_lv<7>) (grp_fu_172_p00.read());
}

void invertf::thread_grp_fu_172_p00() {
    grp_fu_172_p00 = esl_zext<14,7>(select_ln328_1_reg_196.read());
}

void invertf::thread_grp_fu_172_p1() {
    grp_fu_172_p1 =  (sc_lv<8>) (ap_const_lv14_64);
}

void invertf::thread_grp_fu_172_p2() {
    grp_fu_172_p2 =  (sc_lv<7>) (grp_fu_172_p20.read());
}

void invertf::thread_grp_fu_172_p20() {
    grp_fu_172_p20 = esl_zext<14,7>(select_ln328_reg_190.read());
}

void invertf::thread_i_fu_123_p2() {
    i_fu_123_p2 = (!ap_phi_mux_i_0_phi_fu_93_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(ap_phi_mux_i_0_phi_fu_93_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void invertf::thread_icmp_ln324_fu_111_p2() {
    icmp_ln324_fu_111_p2 = (!ap_phi_mux_indvar_flatten_phi_fu_82_p4.read().is_01() || !ap_const_lv14_2710.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_indvar_flatten_phi_fu_82_p4.read() == ap_const_lv14_2710);
}

void invertf::thread_icmp_ln326_fu_129_p2() {
    icmp_ln326_fu_129_p2 = (!ap_phi_mux_j_0_phi_fu_104_p4.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(ap_phi_mux_j_0_phi_fu_104_p4.read() == ap_const_lv7_64);
}

void invertf::thread_j_fu_161_p2() {
    j_fu_161_p2 = (!select_ln328_reg_190.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(select_ln328_reg_190.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void invertf::thread_select_ln328_1_fu_143_p3() {
    select_ln328_1_fu_143_p3 = (!icmp_ln326_fu_129_p2.read()[0].is_01())? sc_lv<7>(): ((icmp_ln326_fu_129_p2.read()[0].to_bool())? i_fu_123_p2.read(): ap_phi_mux_i_0_phi_fu_93_p4.read());
}

void invertf::thread_select_ln328_fu_135_p3() {
    select_ln328_fu_135_p3 = (!icmp_ln326_fu_129_p2.read()[0].is_01())? sc_lv<7>(): ((icmp_ln326_fu_129_p2.read()[0].to_bool())? ap_const_lv7_0: ap_phi_mux_j_0_phi_fu_104_p4.read());
}

void invertf::thread_zext_ln328_2_fu_157_p1() {
    zext_ln328_2_fu_157_p1 = esl_zext<64,14>(grp_fu_172_p3.read());
}

void invertf::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_fu_111_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter0.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage0_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(icmp_ln324_fu_111_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter1.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && !(esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0)))) {
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage1.read()) && esl_seteq<1,1,1>(ap_block_pp0_stage1_subdone.read(), ap_const_boolean_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_enable_reg_pp0_iter0.read(), ap_const_logic_0))) {
                ap_NS_fsm = ap_ST_fsm_state6;
            } else {
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

void invertf::thread_hdltv_gen() {
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
        mHdltvoutHandle << " , " <<  " \"ai_address0\" :  \"" << ai_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ai_ce0\" :  \"" << ai_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ai_q0\" :  \"" << ai_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bi_address0\" :  \"" << bi_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bi_ce0\" :  \"" << bi_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bi_we0\" :  \"" << bi_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"bi_d0\" :  \"" << bi_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

