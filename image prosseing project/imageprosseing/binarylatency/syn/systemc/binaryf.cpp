// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "binaryf.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic binaryf::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic binaryf::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> binaryf::ap_ST_fsm_state1 = "1";
const sc_lv<4> binaryf::ap_ST_fsm_state2 = "10";
const sc_lv<4> binaryf::ap_ST_fsm_state3 = "100";
const sc_lv<4> binaryf::ap_ST_fsm_state4 = "1000";
const sc_lv<32> binaryf::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> binaryf::ap_const_lv32_1 = "1";
const sc_lv<32> binaryf::ap_const_lv32_2 = "10";
const sc_lv<1> binaryf::ap_const_lv1_0 = "0";
const sc_lv<7> binaryf::ap_const_lv7_0 = "0000000";
const sc_lv<1> binaryf::ap_const_lv1_1 = "1";
const sc_lv<14> binaryf::ap_const_lv14_0 = "00000000000000";
const sc_lv<32> binaryf::ap_const_lv32_3 = "11";
const sc_lv<14> binaryf::ap_const_lv14_64 = "1100100";
const sc_lv<7> binaryf::ap_const_lv7_64 = "1100100";
const sc_lv<7> binaryf::ap_const_lv7_1 = "1";
const sc_lv<32> binaryf::ap_const_lv32_96 = "10010110";
const bool binaryf::ap_const_boolean_1 = true;

binaryf::binaryf(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( zext_ln47_1_fu_146_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_add_ln43_fu_106_p2);
    sensitive << ( phi_mul_reg_83 );

    SC_METHOD(thread_add_ln47_fu_140_p2);
    sensitive << ( phi_mul_reg_83 );
    sensitive << ( zext_ln47_fu_136_p1 );

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
    sensitive << ( icmp_ln43_fu_112_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( icmp_ln43_fu_112_p2 );

    SC_METHOD(thread_b_address0);
    sensitive << ( zext_ln47_1_reg_183 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_b_d0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( icmp_ln47_fu_151_p2 );

    SC_METHOD(thread_b_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_i_fu_118_p2);
    sensitive << ( i_0_reg_72 );

    SC_METHOD(thread_icmp_ln43_fu_112_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_0_reg_72 );

    SC_METHOD(thread_icmp_ln45_fu_124_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_icmp_ln47_fu_151_p2);
    sensitive << ( a_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_j_fu_130_p2);
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_zext_ln47_1_fu_146_p1);
    sensitive << ( add_ln47_fu_140_p2 );

    SC_METHOD(thread_zext_ln47_fu_136_p1);
    sensitive << ( j_0_reg_95 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( icmp_ln45_fu_124_p2 );
    sensitive << ( icmp_ln43_fu_112_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "binaryf_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, a_address0, "(port)a_address0");
    sc_trace(mVcdFile, a_ce0, "(port)a_ce0");
    sc_trace(mVcdFile, a_q0, "(port)a_q0");
    sc_trace(mVcdFile, b_address0, "(port)b_address0");
    sc_trace(mVcdFile, b_ce0, "(port)b_ce0");
    sc_trace(mVcdFile, b_we0, "(port)b_we0");
    sc_trace(mVcdFile, b_d0, "(port)b_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, add_ln43_fu_106_p2, "add_ln43_fu_106_p2");
    sc_trace(mVcdFile, add_ln43_reg_162, "add_ln43_reg_162");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_fu_118_p2, "i_fu_118_p2");
    sc_trace(mVcdFile, i_reg_170, "i_reg_170");
    sc_trace(mVcdFile, j_fu_130_p2, "j_fu_130_p2");
    sc_trace(mVcdFile, j_reg_178, "j_reg_178");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, zext_ln47_1_fu_146_p1, "zext_ln47_1_fu_146_p1");
    sc_trace(mVcdFile, zext_ln47_1_reg_183, "zext_ln47_1_reg_183");
    sc_trace(mVcdFile, icmp_ln45_fu_124_p2, "icmp_ln45_fu_124_p2");
    sc_trace(mVcdFile, i_0_reg_72, "i_0_reg_72");
    sc_trace(mVcdFile, phi_mul_reg_83, "phi_mul_reg_83");
    sc_trace(mVcdFile, j_0_reg_95, "j_0_reg_95");
    sc_trace(mVcdFile, icmp_ln43_fu_112_p2, "icmp_ln43_fu_112_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, zext_ln47_fu_136_p1, "zext_ln47_fu_136_p1");
    sc_trace(mVcdFile, add_ln47_fu_140_p2, "add_ln47_fu_140_p2");
    sc_trace(mVcdFile, icmp_ln47_fu_151_p2, "icmp_ln47_fu_151_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("binaryf.hdltvin.dat");
    mHdltvoutHandle.open("binaryf.hdltvout.dat");
}

binaryf::~binaryf() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void binaryf::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_124_p2.read(), ap_const_lv1_1))) {
        i_0_reg_72 = i_reg_170.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_0_reg_72 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_0_reg_95 = j_reg_178.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, icmp_ln43_fu_112_p2.read()))) {
        j_0_reg_95 = ap_const_lv7_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(icmp_ln45_fu_124_p2.read(), ap_const_lv1_1))) {
        phi_mul_reg_83 = add_ln43_reg_162.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_83 = ap_const_lv14_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        add_ln43_reg_162 = add_ln43_fu_106_p2.read();
        i_reg_170 = i_fu_118_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_reg_178 = j_fu_130_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_124_p2.read(), ap_const_lv1_0))) {
        zext_ln47_1_reg_183 = zext_ln47_1_fu_146_p1.read();
    }
}

void binaryf::thread_a_address0() {
    a_address0 =  (sc_lv<14>) (zext_ln47_1_fu_146_p1.read());
}

void binaryf::thread_a_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void binaryf::thread_add_ln43_fu_106_p2() {
    add_ln43_fu_106_p2 = (!phi_mul_reg_83.read().is_01() || !ap_const_lv14_64.is_01())? sc_lv<14>(): (sc_biguint<14>(phi_mul_reg_83.read()) + sc_biguint<14>(ap_const_lv14_64));
}

void binaryf::thread_add_ln47_fu_140_p2() {
    add_ln47_fu_140_p2 = (!phi_mul_reg_83.read().is_01() || !zext_ln47_fu_136_p1.read().is_01())? sc_lv<14>(): (sc_biguint<14>(phi_mul_reg_83.read()) + sc_biguint<14>(zext_ln47_fu_136_p1.read()));
}

void binaryf::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void binaryf::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void binaryf::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void binaryf::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void binaryf::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_fu_112_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void binaryf::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void binaryf::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_fu_112_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void binaryf::thread_b_address0() {
    b_address0 =  (sc_lv<14>) (zext_ln47_1_reg_183.read());
}

void binaryf::thread_b_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void binaryf::thread_b_d0() {
    b_d0 = esl_zext<32,1>(icmp_ln47_fu_151_p2.read());
}

void binaryf::thread_b_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        b_we0 = ap_const_logic_1;
    } else {
        b_we0 = ap_const_logic_0;
    }
}

void binaryf::thread_i_fu_118_p2() {
    i_fu_118_p2 = (!i_0_reg_72.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i_0_reg_72.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void binaryf::thread_icmp_ln43_fu_112_p2() {
    icmp_ln43_fu_112_p2 = (!i_0_reg_72.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(i_0_reg_72.read() == ap_const_lv7_64);
}

void binaryf::thread_icmp_ln45_fu_124_p2() {
    icmp_ln45_fu_124_p2 = (!j_0_reg_95.read().is_01() || !ap_const_lv7_64.is_01())? sc_lv<1>(): sc_lv<1>(j_0_reg_95.read() == ap_const_lv7_64);
}

void binaryf::thread_icmp_ln47_fu_151_p2() {
    icmp_ln47_fu_151_p2 = (!a_q0.read().is_01() || !ap_const_lv32_96.is_01())? sc_lv<1>(): (sc_bigint<32>(a_q0.read()) > sc_bigint<32>(ap_const_lv32_96));
}

void binaryf::thread_j_fu_130_p2() {
    j_fu_130_p2 = (!j_0_reg_95.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(j_0_reg_95.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void binaryf::thread_zext_ln47_1_fu_146_p1() {
    zext_ln47_1_fu_146_p1 = esl_zext<64,14>(add_ln47_fu_140_p2.read());
}

void binaryf::thread_zext_ln47_fu_136_p1() {
    zext_ln47_fu_136_p1 = esl_zext<14,7>(j_0_reg_95.read());
}

void binaryf::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, icmp_ln43_fu_112_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(icmp_ln45_fu_124_p2.read(), ap_const_lv1_1))) {
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

void binaryf::thread_hdltv_gen() {
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
        mHdltvoutHandle << " , " <<  " \"a_address0\" :  \"" << a_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_ce0\" :  \"" << a_ce0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_q0\" :  \"" << a_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_address0\" :  \"" << b_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_ce0\" :  \"" << b_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_we0\" :  \"" << b_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"b_d0\" :  \"" << b_d0.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
