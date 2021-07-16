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
const sc_lv<4> invertf::ap_ST_fsm_state2 = "10";
const sc_lv<4> invertf::ap_ST_fsm_state3 = "100";
const sc_lv<4> invertf::ap_ST_fsm_state4 = "1000";
const sc_lv<32> invertf::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> invertf::ap_const_lv32_1 = "1";
const sc_lv<32> invertf::ap_const_lv32_2 = "10";
const sc_lv<1> invertf::ap_const_lv1_0 = "0";
const sc_lv<7> invertf::ap_const_lv7_0 = "0000000";
const sc_lv<1> invertf::ap_const_lv1_1 = "1";
const sc_lv<14> invertf::ap_const_lv14_0 = "00000000000000";
const sc_lv<32> invertf::ap_const_lv32_3 = "11";
const sc_lv<14> invertf::ap_const_lv14_64 = "1100100";
const sc_lv<7> invertf::ap_const_lv7_64 = "1100100";
const sc_lv<7> invertf::ap_const_lv7_1 = "1";
const sc_lv<32> invertf::ap_const_lv32_FF = "11111111";
const bool invertf::ap_const_boolean_1 = true;

invertf::invertf(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_add_ln324_fu_106_p2);
    sensitive << ( phi_mul_reg_83 );

    SC_METHOD(thread_add_ln328_fu_140_p2);
    sensitive << ( phi_mul_reg_83 );
    sensitive << ( zext_ln328_fu_136_p1 );

    SC_METHOD(thread_ai_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln328_1_fu_146_p1 );

    SC_METHOD(thread_ai_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln324_fu_112_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln324_fu_112_p2 );

    SC_METHOD(thread_bi_address0);
    sensitive << ( zext_ln328_1_reg_179 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_bi_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_bi_d0);
    sensitive << ( ai_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_bi_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_fu_118_p2);
    sensitive << ( i_0_reg_72 );

    SC_METHOD(thread_icmp_ln324_fu_112_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_72 );

    SC_METHOD(thread_icmp_ln326_fu_124_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_j_fu_130_p2);
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_zext_ln328_1_fu_146_p1);
    sensitive << ( add_ln328_fu_140_p2 );

    SC_METHOD(thread_zext_ln328_fu_136_p1);
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln326_fu_124_p2 );
    sensitive << ( icmp_ln324_fu_112_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
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
    sc_trace(mVcdFile, add_ln324_fu_106_p2, "add_ln324_fu_106_p2");
    sc_trace(mVcdFile, add_ln324_reg_158, "add_ln324_reg_158");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_fu_118_p2, "i_fu_118_p2");
    sc_trace(mVcdFile, i_reg_166, "i_reg_166");
    sc_trace(mVcdFile, j_fu_130_p2, "j_fu_130_p2");
    sc_trace(mVcdFile, j_reg_174, "j_reg_174");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln328_1_fu_146_p1, "zext_ln328_1_fu_146_p1");
    sc_trace(mVcdFile, zext_ln328_1_reg_179, "zext_ln328_1_reg_179");
    sc_trace(mVcdFile, icmp_ln326_fu_124_p2, "icmp_ln326_fu_124_p2");
    sc_trace(mVcdFile, i_0_reg_72, "i_0_reg_72");
    sc_trace(mVcdFile, phi_mul_reg_83, "phi_mul_reg_83");
    sc_trace(mVcdFile, j_0_reg_95, "j_0_reg_95");
    sc_trace(mVcdFile, icmp_ln324_fu_112_p2, "icmp_ln324_fu_112_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln328_fu_136_p1, "zext_ln328_fu_136_p1");
    sc_trace(mVcdFile, add_ln328_fu_140_p2, "add_ln328_fu_140_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
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
}

void invertf::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln326_fu_124_p2.read(), ap_const_lv1_1))) {
        i_0_reg_72 = i_reg_166.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_72 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_0_reg_95 = j_reg_174.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln324_fu_112_p2.read()))) {
        j_0_reg_95 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln326_fu_124_p2.read(), ap_const_lv1_1))) {
        phi_mul_reg_83 = add_ln324_reg_158.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_83 = ap_const_lv14_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln324_reg_158 = add_ln324_fu_106_p2.read();
        i_reg_166 = i_fu_118_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_174 = j_fu_130_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln326_fu_124_p2.read(), ap_const_lv1_0))) {
        zext_ln328_1_reg_179 = zext_ln328_1_fu_146_p1.read();
    }
}

void invertf::thread_add_ln324_fu_106_p2() {
    add_ln324_fu_106_p2 = (!phi_mul_reg_83.read().is_01() || !ap_const_lv14_64.is_01())? sc_lv<14>(): (sc_biguint<14>(phi_mul_reg_83.read()) + sc_biguint<14>(ap_const_lv14_64));
}

void invertf::thread_add_ln328_fu_140_p2() {
    add_ln328_fu_140_p2 = (!phi_mul_reg_83.read().is_01() || !zext_ln328_fu_136_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(phi_mul_reg_83.read()) + sc_biguint<14>(zext_ln328_fu_136_p1.read()));
}

void invertf::thread_ai_address0() {
    ai_address0 =  (sc_lv<14>) (zext_ln328_1_fu_146_p1.read());
}

void invertf::thread_ai_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        ai_ce0 = ap_const_logic_1;
    } else {
        ai_ce0 = ap_const_logic_0;
    }
}

void invertf::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void invertf::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void invertf::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void invertf::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void invertf::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln324_fu_112_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void invertf::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void invertf::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln324_fu_112_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void invertf::thread_bi_address0() {
    bi_address0 =  (sc_lv<14>) (zext_ln328_1_reg_179.read());
}

void invertf::thread_bi_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bi_ce0 = ap_const_logic_1;
    } else {
        bi_ce0 = ap_const_logic_0;
    }
}

void invertf::thread_bi_d0() {
    bi_d0 = (!ap_const_lv32_FF.is_01() || !ai_q0.read().is_01())? sc_lv<32>(): (sc_biguint<32>(ap_const_lv32_FF) - sc_biguint<32>(ai_q0.read()));
}

void invertf::thread_bi_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        bi_we0 = ap_const_logic_1;
    } else {
        bi_we0 = ap_const_logic_0;
    }
}

void invertf::thread_i_fu_118_p2() {
    i_fu_118_p2 = (!i_0_reg_72.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_72.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void invertf::thread_icmp_ln324_fu_112_p2() {
    icmp_ln324_fu_112_p2 = (!i_0_reg_72.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_72.read() == ap_const_lv7_64);
}

void invertf::thread_icmp_ln326_fu_124_p2() {
    icmp_ln326_fu_124_p2 = (!j_0_reg_95.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_95.read() == ap_const_lv7_64);
}

void invertf::thread_j_fu_130_p2() {
    j_fu_130_p2 = (!j_0_reg_95.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_0_reg_95.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void invertf::thread_zext_ln328_1_fu_146_p1() {
    zext_ln328_1_fu_146_p1 = esl_zext<64,14>(add_ln328_fu_140_p2.read());
}

void invertf::thread_zext_ln328_fu_136_p1() {
    zext_ln328_fu_136_p1 = esl_zext<14,7>(j_0_reg_95.read());
}

void invertf::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln324_fu_112_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln326_fu_124_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
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

