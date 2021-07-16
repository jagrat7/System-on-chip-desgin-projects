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
    sc_signal< sc_lv<30> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<1> > icmp_ln283_fu_613_p2;
    sc_signal< sc_lv<32> > c_load_reg_1455;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<32> > c_load_1_reg_1460;
    sc_signal< sc_lv<32> > j_fu_657_p2;
    sc_signal< sc_lv<32> > j_reg_1465;
    sc_signal< sc_lv<31> > k_fu_672_p2;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > add_ln291_fu_683_p2;
    sc_signal< sc_lv<1> > icmp_ln286_fu_667_p2;
    sc_signal< sc_lv<32> > h_fu_689_p2;
    sc_signal< sc_lv<5> > i_fu_701_p2;
    sc_signal< sc_lv<5> > i_reg_1491;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > icmp_ln303_fu_707_p2;
    sc_signal< sc_lv<1> > icmp_ln303_reg_1496;
    sc_signal< sc_lv<1> > icmp_ln298_fu_695_p2;
    sc_signal< sc_lv<32> > x_fu_718_p2;
    sc_signal< sc_lv<32> > x_reg_1529;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_lv<10> > add_ln303_49_fu_1384_p2;
    sc_signal< sc_lv<10> > add_ln303_49_reg_1649;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_lv<10> > add_ln303_50_fu_1390_p2;
    sc_signal< sc_lv<10> > add_ln303_50_reg_1654;
    sc_signal< sc_lv<10> > add_ln303_48_fu_1432_p2;
    sc_signal< sc_lv<10> > add_ln303_48_reg_1664;
    sc_signal< sc_lv<10> > unr1d_address0;
    sc_signal< sc_logic > unr1d_ce0;
    sc_signal< sc_logic > unr1d_we0;
    sc_signal< sc_lv<32> > unr1d_q0;
    sc_signal< sc_lv<32> > j_0_reg_522;
    sc_signal< sc_lv<32> > h_0_reg_534;
    sc_signal< sc_lv<32> > j_1_reg_546;
    sc_signal< sc_lv<31> > k_0_reg_556;
    sc_signal< sc_lv<32> > x_0_reg_567;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_lv<5> > i_0_reg_578;
    sc_signal< sc_lv<10> > phi_mul_reg_589;
    sc_signal< sc_lv<10> > phi_mul1_reg_601;
    sc_signal< sc_lv<64> > sext_ln286_fu_625_p1;
    sc_signal< sc_lv<64> > sext_ln289_fu_630_p1;
    sc_signal< sc_lv<64> > sext_ln289_1_fu_678_p1;
    sc_signal< sc_lv<64> > zext_ln303_1_fu_713_p1;
    sc_signal< sc_lv<64> > zext_ln303_26_fu_737_p1;
    sc_signal< sc_lv<64> > zext_ln303_2_fu_748_p1;
    sc_signal< sc_lv<64> > zext_ln303_27_fu_766_p1;
    sc_signal< sc_lv<64> > zext_ln303_3_fu_777_p1;
    sc_signal< sc_lv<64> > zext_ln303_28_fu_795_p1;
    sc_signal< sc_lv<64> > zext_ln303_4_fu_806_p1;
    sc_signal< sc_lv<64> > zext_ln303_29_fu_824_p1;
    sc_signal< sc_lv<64> > zext_ln303_5_fu_835_p1;
    sc_signal< sc_lv<64> > zext_ln303_30_fu_853_p1;
    sc_signal< sc_lv<64> > zext_ln303_6_fu_864_p1;
    sc_signal< sc_lv<64> > zext_ln303_31_fu_882_p1;
    sc_signal< sc_lv<64> > zext_ln303_7_fu_893_p1;
    sc_signal< sc_lv<64> > zext_ln303_32_fu_911_p1;
    sc_signal< sc_lv<64> > zext_ln303_8_fu_922_p1;
    sc_signal< sc_lv<64> > zext_ln303_33_fu_940_p1;
    sc_signal< sc_lv<64> > zext_ln303_9_fu_951_p1;
    sc_signal< sc_lv<64> > zext_ln303_34_fu_969_p1;
    sc_signal< sc_lv<64> > zext_ln303_10_fu_980_p1;
    sc_signal< sc_lv<64> > zext_ln303_35_fu_998_p1;
    sc_signal< sc_lv<64> > zext_ln303_11_fu_1009_p1;
    sc_signal< sc_lv<64> > zext_ln303_36_fu_1027_p1;
    sc_signal< sc_lv<64> > zext_ln303_12_fu_1038_p1;
    sc_signal< sc_lv<64> > zext_ln303_37_fu_1056_p1;
    sc_signal< sc_lv<64> > zext_ln303_13_fu_1067_p1;
    sc_signal< sc_lv<64> > zext_ln303_fu_1078_p1;
    sc_signal< sc_lv<64> > zext_ln303_14_fu_1089_p1;
    sc_signal< sc_lv<64> > zext_ln303_38_fu_1107_p1;
    sc_signal< sc_lv<64> > zext_ln303_15_fu_1118_p1;
    sc_signal< sc_lv<64> > zext_ln303_39_fu_1136_p1;
    sc_signal< sc_lv<64> > zext_ln303_16_fu_1147_p1;
    sc_signal< sc_lv<64> > zext_ln303_40_fu_1165_p1;
    sc_signal< sc_lv<64> > zext_ln303_17_fu_1176_p1;
    sc_signal< sc_lv<64> > zext_ln303_41_fu_1194_p1;
    sc_signal< sc_lv<64> > zext_ln303_18_fu_1205_p1;
    sc_signal< sc_lv<64> > zext_ln303_42_fu_1223_p1;
    sc_signal< sc_lv<64> > zext_ln303_19_fu_1234_p1;
    sc_signal< sc_lv<64> > zext_ln303_43_fu_1252_p1;
    sc_signal< sc_lv<64> > zext_ln303_20_fu_1263_p1;
    sc_signal< sc_lv<64> > zext_ln303_44_fu_1281_p1;
    sc_signal< sc_lv<64> > zext_ln303_21_fu_1292_p1;
    sc_signal< sc_lv<64> > zext_ln303_45_fu_1310_p1;
    sc_signal< sc_lv<64> > zext_ln303_22_fu_1321_p1;
    sc_signal< sc_lv<64> > zext_ln303_46_fu_1339_p1;
    sc_signal< sc_lv<64> > zext_ln303_23_fu_1350_p1;
    sc_signal< sc_lv<64> > zext_ln303_47_fu_1368_p1;
    sc_signal< sc_lv<64> > zext_ln303_24_fu_1379_p1;
    sc_signal< sc_lv<64> > zext_ln303_48_fu_1409_p1;
    sc_signal< sc_lv<64> > zext_ln303_25_fu_1420_p1;
    sc_signal< sc_lv<64> > zext_ln303_49_fu_1438_p1;
    sc_signal< sc_lv<32> > or_ln286_fu_619_p2;
    sc_signal< sc_lv<1> > empty_fu_639_p2;
    sc_signal< sc_lv<31> > trunc_ln289_fu_635_p1;
    sc_signal< sc_lv<31> > smax_fu_645_p3;
    sc_signal< sc_lv<32> > smax_cast_fu_653_p1;
    sc_signal< sc_lv<32> > zext_ln286_fu_663_p1;
    sc_signal< sc_lv<10> > select_ln303_fu_724_p3;
    sc_signal< sc_lv<10> > add_ln303_25_fu_731_p2;
    sc_signal< sc_lv<10> > add_ln303_fu_742_p2;
    sc_signal< sc_lv<10> > select_ln303_1_fu_753_p3;
    sc_signal< sc_lv<10> > add_ln303_26_fu_760_p2;
    sc_signal< sc_lv<10> > add_ln303_1_fu_771_p2;
    sc_signal< sc_lv<10> > select_ln303_2_fu_782_p3;
    sc_signal< sc_lv<10> > add_ln303_27_fu_789_p2;
    sc_signal< sc_lv<10> > add_ln303_2_fu_800_p2;
    sc_signal< sc_lv<10> > select_ln303_3_fu_811_p3;
    sc_signal< sc_lv<10> > add_ln303_28_fu_818_p2;
    sc_signal< sc_lv<10> > add_ln303_3_fu_829_p2;
    sc_signal< sc_lv<10> > select_ln303_4_fu_840_p3;
    sc_signal< sc_lv<10> > add_ln303_29_fu_847_p2;
    sc_signal< sc_lv<10> > add_ln303_4_fu_858_p2;
    sc_signal< sc_lv<10> > select_ln303_5_fu_869_p3;
    sc_signal< sc_lv<10> > add_ln303_30_fu_876_p2;
    sc_signal< sc_lv<10> > add_ln303_5_fu_887_p2;
    sc_signal< sc_lv<10> > select_ln303_6_fu_898_p3;
    sc_signal< sc_lv<10> > add_ln303_31_fu_905_p2;
    sc_signal< sc_lv<10> > add_ln303_6_fu_916_p2;
    sc_signal< sc_lv<10> > select_ln303_7_fu_927_p3;
    sc_signal< sc_lv<10> > add_ln303_32_fu_934_p2;
    sc_signal< sc_lv<10> > add_ln303_7_fu_945_p2;
    sc_signal< sc_lv<10> > select_ln303_8_fu_956_p3;
    sc_signal< sc_lv<10> > add_ln303_33_fu_963_p2;
    sc_signal< sc_lv<10> > add_ln303_8_fu_974_p2;
    sc_signal< sc_lv<10> > select_ln303_9_fu_985_p3;
    sc_signal< sc_lv<10> > add_ln303_34_fu_992_p2;
    sc_signal< sc_lv<10> > add_ln303_9_fu_1003_p2;
    sc_signal< sc_lv<10> > select_ln303_10_fu_1014_p3;
    sc_signal< sc_lv<10> > add_ln303_35_fu_1021_p2;
    sc_signal< sc_lv<10> > add_ln303_10_fu_1032_p2;
    sc_signal< sc_lv<10> > select_ln303_11_fu_1043_p3;
    sc_signal< sc_lv<10> > add_ln303_36_fu_1050_p2;
    sc_signal< sc_lv<10> > add_ln303_11_fu_1061_p2;
    sc_signal< sc_lv<10> > add_ln303_24_fu_1072_p2;
    sc_signal< sc_lv<10> > add_ln303_12_fu_1083_p2;
    sc_signal< sc_lv<10> > select_ln303_12_fu_1094_p3;
    sc_signal< sc_lv<10> > add_ln303_37_fu_1101_p2;
    sc_signal< sc_lv<10> > add_ln303_13_fu_1112_p2;
    sc_signal< sc_lv<10> > select_ln303_13_fu_1123_p3;
    sc_signal< sc_lv<10> > add_ln303_38_fu_1130_p2;
    sc_signal< sc_lv<10> > add_ln303_14_fu_1141_p2;
    sc_signal< sc_lv<10> > select_ln303_14_fu_1152_p3;
    sc_signal< sc_lv<10> > add_ln303_39_fu_1159_p2;
    sc_signal< sc_lv<10> > add_ln303_15_fu_1170_p2;
    sc_signal< sc_lv<10> > select_ln303_15_fu_1181_p3;
    sc_signal< sc_lv<10> > add_ln303_40_fu_1188_p2;
    sc_signal< sc_lv<10> > add_ln303_16_fu_1199_p2;
    sc_signal< sc_lv<10> > select_ln303_16_fu_1210_p3;
    sc_signal< sc_lv<10> > add_ln303_41_fu_1217_p2;
    sc_signal< sc_lv<10> > add_ln303_17_fu_1228_p2;
    sc_signal< sc_lv<10> > select_ln303_17_fu_1239_p3;
    sc_signal< sc_lv<10> > add_ln303_42_fu_1246_p2;
    sc_signal< sc_lv<10> > add_ln303_18_fu_1257_p2;
    sc_signal< sc_lv<10> > select_ln303_18_fu_1268_p3;
    sc_signal< sc_lv<10> > add_ln303_43_fu_1275_p2;
    sc_signal< sc_lv<10> > add_ln303_19_fu_1286_p2;
    sc_signal< sc_lv<10> > select_ln303_19_fu_1297_p3;
    sc_signal< sc_lv<10> > add_ln303_44_fu_1304_p2;
    sc_signal< sc_lv<10> > add_ln303_20_fu_1315_p2;
    sc_signal< sc_lv<10> > select_ln303_20_fu_1326_p3;
    sc_signal< sc_lv<10> > add_ln303_45_fu_1333_p2;
    sc_signal< sc_lv<10> > add_ln303_21_fu_1344_p2;
    sc_signal< sc_lv<10> > select_ln303_21_fu_1355_p3;
    sc_signal< sc_lv<10> > add_ln303_46_fu_1362_p2;
    sc_signal< sc_lv<10> > add_ln303_22_fu_1373_p2;
    sc_signal< sc_lv<10> > select_ln303_22_fu_1396_p3;
    sc_signal< sc_lv<10> > add_ln303_47_fu_1403_p2;
    sc_signal< sc_lv<10> > add_ln303_23_fu_1414_p2;
    sc_signal< sc_lv<10> > select_ln303_23_fu_1425_p3;
    sc_signal< sc_lv<30> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<30> ap_ST_fsm_state1;
    static const sc_lv<30> ap_ST_fsm_state2;
    static const sc_lv<30> ap_ST_fsm_state3;
    static const sc_lv<30> ap_ST_fsm_state4;
    static const sc_lv<30> ap_ST_fsm_state5;
    static const sc_lv<30> ap_ST_fsm_state6;
    static const sc_lv<30> ap_ST_fsm_state7;
    static const sc_lv<30> ap_ST_fsm_state8;
    static const sc_lv<30> ap_ST_fsm_state9;
    static const sc_lv<30> ap_ST_fsm_state10;
    static const sc_lv<30> ap_ST_fsm_state11;
    static const sc_lv<30> ap_ST_fsm_state12;
    static const sc_lv<30> ap_ST_fsm_state13;
    static const sc_lv<30> ap_ST_fsm_state14;
    static const sc_lv<30> ap_ST_fsm_state15;
    static const sc_lv<30> ap_ST_fsm_state16;
    static const sc_lv<30> ap_ST_fsm_state17;
    static const sc_lv<30> ap_ST_fsm_state18;
    static const sc_lv<30> ap_ST_fsm_state19;
    static const sc_lv<30> ap_ST_fsm_state20;
    static const sc_lv<30> ap_ST_fsm_state21;
    static const sc_lv<30> ap_ST_fsm_state22;
    static const sc_lv<30> ap_ST_fsm_state23;
    static const sc_lv<30> ap_ST_fsm_state24;
    static const sc_lv<30> ap_ST_fsm_state25;
    static const sc_lv<30> ap_ST_fsm_state26;
    static const sc_lv<30> ap_ST_fsm_state27;
    static const sc_lv<30> ap_ST_fsm_state28;
    static const sc_lv<30> ap_ST_fsm_state29;
    static const sc_lv<30> ap_ST_fsm_state30;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<10> ap_const_lv10_0;
    static const sc_lv<32> ap_const_lv32_271;
    static const sc_lv<31> ap_const_lv31_1;
    static const sc_lv<5> ap_const_lv5_19;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<10> ap_const_lv10_18;
    static const sc_lv<10> ap_const_lv10_1;
    static const sc_lv<10> ap_const_lv10_17;
    static const sc_lv<10> ap_const_lv10_2;
    static const sc_lv<10> ap_const_lv10_16;
    static const sc_lv<10> ap_const_lv10_3;
    static const sc_lv<10> ap_const_lv10_15;
    static const sc_lv<10> ap_const_lv10_4;
    static const sc_lv<10> ap_const_lv10_14;
    static const sc_lv<10> ap_const_lv10_5;
    static const sc_lv<10> ap_const_lv10_13;
    static const sc_lv<10> ap_const_lv10_6;
    static const sc_lv<10> ap_const_lv10_12;
    static const sc_lv<10> ap_const_lv10_7;
    static const sc_lv<10> ap_const_lv10_11;
    static const sc_lv<10> ap_const_lv10_8;
    static const sc_lv<10> ap_const_lv10_10;
    static const sc_lv<10> ap_const_lv10_9;
    static const sc_lv<10> ap_const_lv10_F;
    static const sc_lv<10> ap_const_lv10_A;
    static const sc_lv<10> ap_const_lv10_E;
    static const sc_lv<10> ap_const_lv10_B;
    static const sc_lv<10> ap_const_lv10_D;
    static const sc_lv<10> ap_const_lv10_C;
    static const sc_lv<10> ap_const_lv10_19;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_add_ln291_fu_683_p2();
    void thread_add_ln303_10_fu_1032_p2();
    void thread_add_ln303_11_fu_1061_p2();
    void thread_add_ln303_12_fu_1083_p2();
    void thread_add_ln303_13_fu_1112_p2();
    void thread_add_ln303_14_fu_1141_p2();
    void thread_add_ln303_15_fu_1170_p2();
    void thread_add_ln303_16_fu_1199_p2();
    void thread_add_ln303_17_fu_1228_p2();
    void thread_add_ln303_18_fu_1257_p2();
    void thread_add_ln303_19_fu_1286_p2();
    void thread_add_ln303_1_fu_771_p2();
    void thread_add_ln303_20_fu_1315_p2();
    void thread_add_ln303_21_fu_1344_p2();
    void thread_add_ln303_22_fu_1373_p2();
    void thread_add_ln303_23_fu_1414_p2();
    void thread_add_ln303_24_fu_1072_p2();
    void thread_add_ln303_25_fu_731_p2();
    void thread_add_ln303_26_fu_760_p2();
    void thread_add_ln303_27_fu_789_p2();
    void thread_add_ln303_28_fu_818_p2();
    void thread_add_ln303_29_fu_847_p2();
    void thread_add_ln303_2_fu_800_p2();
    void thread_add_ln303_30_fu_876_p2();
    void thread_add_ln303_31_fu_905_p2();
    void thread_add_ln303_32_fu_934_p2();
    void thread_add_ln303_33_fu_963_p2();
    void thread_add_ln303_34_fu_992_p2();
    void thread_add_ln303_35_fu_1021_p2();
    void thread_add_ln303_36_fu_1050_p2();
    void thread_add_ln303_37_fu_1101_p2();
    void thread_add_ln303_38_fu_1130_p2();
    void thread_add_ln303_39_fu_1159_p2();
    void thread_add_ln303_3_fu_829_p2();
    void thread_add_ln303_40_fu_1188_p2();
    void thread_add_ln303_41_fu_1217_p2();
    void thread_add_ln303_42_fu_1246_p2();
    void thread_add_ln303_43_fu_1275_p2();
    void thread_add_ln303_44_fu_1304_p2();
    void thread_add_ln303_45_fu_1333_p2();
    void thread_add_ln303_46_fu_1362_p2();
    void thread_add_ln303_47_fu_1403_p2();
    void thread_add_ln303_48_fu_1432_p2();
    void thread_add_ln303_49_fu_1384_p2();
    void thread_add_ln303_4_fu_858_p2();
    void thread_add_ln303_50_fu_1390_p2();
    void thread_add_ln303_5_fu_887_p2();
    void thread_add_ln303_6_fu_916_p2();
    void thread_add_ln303_7_fu_945_p2();
    void thread_add_ln303_8_fu_974_p2();
    void thread_add_ln303_9_fu_1003_p2();
    void thread_add_ln303_fu_742_p2();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state27();
    void thread_ap_CS_fsm_state28();
    void thread_ap_CS_fsm_state29();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state30();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
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
    void thread_empty_fu_639_p2();
    void thread_h_fu_689_p2();
    void thread_i_fu_701_p2();
    void thread_icmp_ln283_fu_613_p2();
    void thread_icmp_ln286_fu_667_p2();
    void thread_icmp_ln298_fu_695_p2();
    void thread_icmp_ln303_fu_707_p2();
    void thread_j_fu_657_p2();
    void thread_k_fu_672_p2();
    void thread_or_ln286_fu_619_p2();
    void thread_select_ln303_10_fu_1014_p3();
    void thread_select_ln303_11_fu_1043_p3();
    void thread_select_ln303_12_fu_1094_p3();
    void thread_select_ln303_13_fu_1123_p3();
    void thread_select_ln303_14_fu_1152_p3();
    void thread_select_ln303_15_fu_1181_p3();
    void thread_select_ln303_16_fu_1210_p3();
    void thread_select_ln303_17_fu_1239_p3();
    void thread_select_ln303_18_fu_1268_p3();
    void thread_select_ln303_19_fu_1297_p3();
    void thread_select_ln303_1_fu_753_p3();
    void thread_select_ln303_20_fu_1326_p3();
    void thread_select_ln303_21_fu_1355_p3();
    void thread_select_ln303_22_fu_1396_p3();
    void thread_select_ln303_23_fu_1425_p3();
    void thread_select_ln303_2_fu_782_p3();
    void thread_select_ln303_3_fu_811_p3();
    void thread_select_ln303_4_fu_840_p3();
    void thread_select_ln303_5_fu_869_p3();
    void thread_select_ln303_6_fu_898_p3();
    void thread_select_ln303_7_fu_927_p3();
    void thread_select_ln303_8_fu_956_p3();
    void thread_select_ln303_9_fu_985_p3();
    void thread_select_ln303_fu_724_p3();
    void thread_sext_ln286_fu_625_p1();
    void thread_sext_ln289_1_fu_678_p1();
    void thread_sext_ln289_fu_630_p1();
    void thread_smax_cast_fu_653_p1();
    void thread_smax_fu_645_p3();
    void thread_trunc_ln289_fu_635_p1();
    void thread_unr1d_address0();
    void thread_unr1d_ce0();
    void thread_unr1d_we0();
    void thread_x_fu_718_p2();
    void thread_zext_ln286_fu_663_p1();
    void thread_zext_ln303_10_fu_980_p1();
    void thread_zext_ln303_11_fu_1009_p1();
    void thread_zext_ln303_12_fu_1038_p1();
    void thread_zext_ln303_13_fu_1067_p1();
    void thread_zext_ln303_14_fu_1089_p1();
    void thread_zext_ln303_15_fu_1118_p1();
    void thread_zext_ln303_16_fu_1147_p1();
    void thread_zext_ln303_17_fu_1176_p1();
    void thread_zext_ln303_18_fu_1205_p1();
    void thread_zext_ln303_19_fu_1234_p1();
    void thread_zext_ln303_1_fu_713_p1();
    void thread_zext_ln303_20_fu_1263_p1();
    void thread_zext_ln303_21_fu_1292_p1();
    void thread_zext_ln303_22_fu_1321_p1();
    void thread_zext_ln303_23_fu_1350_p1();
    void thread_zext_ln303_24_fu_1379_p1();
    void thread_zext_ln303_25_fu_1420_p1();
    void thread_zext_ln303_26_fu_737_p1();
    void thread_zext_ln303_27_fu_766_p1();
    void thread_zext_ln303_28_fu_795_p1();
    void thread_zext_ln303_29_fu_824_p1();
    void thread_zext_ln303_2_fu_748_p1();
    void thread_zext_ln303_30_fu_853_p1();
    void thread_zext_ln303_31_fu_882_p1();
    void thread_zext_ln303_32_fu_911_p1();
    void thread_zext_ln303_33_fu_940_p1();
    void thread_zext_ln303_34_fu_969_p1();
    void thread_zext_ln303_35_fu_998_p1();
    void thread_zext_ln303_36_fu_1027_p1();
    void thread_zext_ln303_37_fu_1056_p1();
    void thread_zext_ln303_38_fu_1107_p1();
    void thread_zext_ln303_39_fu_1136_p1();
    void thread_zext_ln303_3_fu_777_p1();
    void thread_zext_ln303_40_fu_1165_p1();
    void thread_zext_ln303_41_fu_1194_p1();
    void thread_zext_ln303_42_fu_1223_p1();
    void thread_zext_ln303_43_fu_1252_p1();
    void thread_zext_ln303_44_fu_1281_p1();
    void thread_zext_ln303_45_fu_1310_p1();
    void thread_zext_ln303_46_fu_1339_p1();
    void thread_zext_ln303_47_fu_1368_p1();
    void thread_zext_ln303_48_fu_1409_p1();
    void thread_zext_ln303_49_fu_1438_p1();
    void thread_zext_ln303_4_fu_806_p1();
    void thread_zext_ln303_5_fu_835_p1();
    void thread_zext_ln303_6_fu_864_p1();
    void thread_zext_ln303_7_fu_893_p1();
    void thread_zext_ln303_8_fu_922_p1();
    void thread_zext_ln303_9_fu_951_p1();
    void thread_zext_ln303_fu_1078_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif