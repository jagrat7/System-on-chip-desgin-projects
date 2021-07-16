// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _blurf_HH_
#define _blurf_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct blurf : public sc_module {
    // Port declarations 16
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<14> > a1_address0;
    sc_out< sc_logic > a1_ce0;
    sc_in< sc_lv<32> > a1_q0;
    sc_out< sc_lv<14> > a1_address1;
    sc_out< sc_logic > a1_ce1;
    sc_in< sc_lv<32> > a1_q1;
    sc_out< sc_lv<14> > b1_address0;
    sc_out< sc_logic > b1_ce0;
    sc_out< sc_logic > b1_we0;
    sc_out< sc_lv<32> > b1_d0;


    // Module declarations
    blurf(sc_module_name name);
    SC_HAS_PROCESS(blurf);

    ~blurf();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<56> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > reg_485;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > ap_CS_fsm_state27;
    sc_signal< sc_logic > ap_CS_fsm_state28;
    sc_signal< sc_logic > ap_CS_fsm_state34;
    sc_signal< sc_logic > ap_CS_fsm_state35;
    sc_signal< sc_logic > ap_CS_fsm_state41;
    sc_signal< sc_logic > ap_CS_fsm_state42;
    sc_signal< sc_logic > ap_CS_fsm_state45;
    sc_signal< sc_logic > ap_CS_fsm_state46;
    sc_signal< sc_logic > ap_CS_fsm_state49;
    sc_signal< sc_logic > ap_CS_fsm_state50;
    sc_signal< sc_logic > ap_CS_fsm_state53;
    sc_signal< sc_lv<32> > reg_490;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > ap_CS_fsm_state54;
    sc_signal< sc_lv<32> > grp_fu_495_p2;
    sc_signal< sc_lv<32> > reg_531;
    sc_signal< sc_lv<32> > grp_fu_501_p2;
    sc_signal< sc_lv<32> > reg_535;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<32> > grp_fu_507_p2;
    sc_signal< sc_lv<32> > reg_539;
    sc_signal< sc_lv<32> > grp_fu_513_p2;
    sc_signal< sc_lv<32> > reg_543;
    sc_signal< sc_logic > ap_CS_fsm_state29;
    sc_signal< sc_logic > ap_CS_fsm_state36;
    sc_signal< sc_lv<32> > grp_fu_519_p2;
    sc_signal< sc_lv<32> > reg_547;
    sc_signal< sc_lv<32> > grp_fu_557_p2;
    sc_signal< sc_lv<32> > reg_631;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_lv<32> > grp_fu_577_p2;
    sc_signal< sc_lv<32> > reg_635;
    sc_signal< sc_logic > ap_CS_fsm_state30;
    sc_signal< sc_logic > ap_CS_fsm_state37;
    sc_signal< sc_lv<30> > reg_639;
    sc_signal< sc_logic > ap_CS_fsm_state43;
    sc_signal< sc_logic > ap_CS_fsm_state47;
    sc_signal< sc_logic > ap_CS_fsm_state51;
    sc_signal< sc_lv<30> > reg_643;
    sc_signal< sc_lv<15> > zext_ln75_2_fu_653_p1;
    sc_signal< sc_lv<15> > zext_ln75_2_reg_1686;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<14> > add_ln75_fu_657_p2;
    sc_signal< sc_lv<14> > add_ln75_reg_1693;
    sc_signal< sc_lv<7> > i_fu_673_p2;
    sc_signal< sc_lv<7> > i_reg_1701;
    sc_signal< sc_lv<14> > trunc_ln106_fu_689_p1;
    sc_signal< sc_lv<14> > trunc_ln106_reg_1706;
    sc_signal< sc_lv<1> > icmp_ln75_fu_667_p2;
    sc_signal< sc_lv<14> > a1_addr_8_reg_1718;
    sc_signal< sc_lv<14> > a1_addr_9_reg_1723;
    sc_signal< sc_lv<14> > a1_addr_14_reg_1728;
    sc_signal< sc_lv<14> > a1_addr_15_reg_1733;
    sc_signal< sc_lv<14> > a1_addr_4_reg_1738;
    sc_signal< sc_lv<14> > a1_addr_7_reg_1743;
    sc_signal< sc_lv<14> > a1_addr_12_reg_1748;
    sc_signal< sc_lv<14> > a1_addr_13_reg_1753;
    sc_signal< sc_lv<14> > b1_addr_1_reg_1758;
    sc_signal< sc_lv<14> > b1_addr_2_reg_1763;
    sc_signal< sc_lv<1> > icmp_ln91_fu_765_p2;
    sc_signal< sc_lv<1> > icmp_ln91_reg_1768;
    sc_signal< sc_lv<15> > mul_ln95_fu_781_p2;
    sc_signal< sc_lv<15> > mul_ln95_reg_1774;
    sc_signal< sc_lv<14> > a1_addr_5_reg_1784;
    sc_signal< sc_lv<14> > a1_addr_6_reg_1789;
    sc_signal< sc_lv<14> > a1_addr_10_reg_1795;
    sc_signal< sc_lv<14> > a1_addr_11_reg_1800;
    sc_signal< sc_lv<1> > icmp_ln103_fu_825_p2;
    sc_signal< sc_lv<1> > icmp_ln103_reg_1805;
    sc_signal< sc_lv<7> > j_fu_842_p2;
    sc_signal< sc_lv<7> > j_reg_1813;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<1> > icmp_ln79_fu_854_p2;
    sc_signal< sc_lv<1> > icmp_ln79_reg_1822;
    sc_signal< sc_lv<1> > icmp_ln77_fu_836_p2;
    sc_signal< sc_lv<1> > icmp_ln91_1_fu_860_p2;
    sc_signal< sc_lv<1> > icmp_ln91_1_reg_1826;
    sc_signal< sc_lv<1> > and_ln91_fu_866_p2;
    sc_signal< sc_lv<1> > and_ln91_reg_1830;
    sc_signal< sc_lv<1> > and_ln103_fu_871_p2;
    sc_signal< sc_lv<1> > and_ln103_reg_1834;
    sc_signal< sc_lv<1> > icmp_ln116_fu_876_p2;
    sc_signal< sc_lv<1> > icmp_ln116_reg_1838;
    sc_signal< sc_lv<1> > and_ln116_fu_882_p2;
    sc_signal< sc_lv<1> > and_ln116_reg_1842;
    sc_signal< sc_lv<14> > zext_ln178_1_fu_887_p1;
    sc_signal< sc_lv<14> > zext_ln178_1_reg_1846;
    sc_signal< sc_lv<8> > grp_fu_468_p2;
    sc_signal< sc_lv<8> > add_ln179_reg_1856;
    sc_signal< sc_lv<15> > sext_ln179_fu_902_p1;
    sc_signal< sc_lv<15> > sext_ln179_reg_1861;
    sc_signal< sc_lv<15> > sext_ln166_fu_916_p1;
    sc_signal< sc_lv<15> > sext_ln166_reg_1871;
    sc_signal< sc_lv<14> > zext_ln86_fu_972_p1;
    sc_signal< sc_lv<14> > zext_ln86_reg_1896;
    sc_signal< sc_lv<14> > zext_ln87_fu_986_p1;
    sc_signal< sc_lv<14> > zext_ln87_reg_1906;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<15> > add_ln182_fu_1013_p2;
    sc_signal< sc_lv<15> > add_ln182_reg_1921;
    sc_signal< sc_lv<32> > grp_fu_473_p2;
    sc_signal< sc_lv<32> > add_ln186_reg_1931;
    sc_signal< sc_lv<14> > add_ln184_fu_1031_p2;
    sc_signal< sc_lv<14> > add_ln184_reg_1936;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<14> > add_ln185_fu_1042_p2;
    sc_signal< sc_lv<14> > add_ln185_reg_1946;
    sc_signal< sc_lv<14> > add_ln183_fu_1051_p2;
    sc_signal< sc_lv<14> > add_ln183_reg_1951;
    sc_signal< sc_lv<14> > add_ln186_8_fu_1056_p2;
    sc_signal< sc_lv<14> > add_ln186_8_reg_1956;
    sc_signal< sc_lv<32> > add_ln186_1_reg_1961;
    sc_signal< sc_lv<64> > zext_ln186_fu_1074_p1;
    sc_signal< sc_lv<64> > zext_ln186_reg_1981;
    sc_signal< sc_lv<32> > se_3_reg_1991;
    sc_signal< sc_lv<32> > add_ln186_5_fu_1078_p2;
    sc_signal< sc_lv<32> > add_ln186_5_reg_1996;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_lv<32> > add_ln186_7_fu_1098_p2;
    sc_signal< sc_lv<32> > add_ln186_7_reg_2001;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<1> > tmp_36_reg_2006;
    sc_signal< sc_lv<65> > mul_ln186_fu_1115_p2;
    sc_signal< sc_lv<65> > mul_ln186_reg_2012;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<29> > tmp_38_reg_2017;
    sc_signal< sc_lv<32> > select_ln186_1_fu_1166_p3;
    sc_signal< sc_lv<32> > select_ln186_1_reg_2022;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > zext_ln174_fu_1205_p1;
    sc_signal< sc_lv<64> > zext_ln174_reg_2037;
    sc_signal< sc_lv<1> > tmp_33_reg_2052;
    sc_signal< sc_lv<65> > mul_ln174_fu_1228_p2;
    sc_signal< sc_lv<65> > mul_ln174_reg_2058;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_lv<30> > tmp_35_reg_2063;
    sc_signal< sc_lv<32> > select_ln174_1_fu_1279_p3;
    sc_signal< sc_lv<32> > select_ln174_1_reg_2068;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<14> > zext_ln159_fu_1286_p1;
    sc_signal< sc_lv<14> > zext_ln159_reg_2073;
    sc_signal< sc_lv<14> > zext_ln160_fu_1300_p1;
    sc_signal< sc_lv<14> > zext_ln160_reg_2083;
    sc_signal< sc_lv<64> > zext_ln162_fu_1318_p1;
    sc_signal< sc_lv<64> > zext_ln162_reg_2093;
    sc_signal< sc_lv<1> > tmp_30_reg_2108;
    sc_signal< sc_lv<65> > mul_ln162_fu_1337_p2;
    sc_signal< sc_lv<65> > mul_ln162_reg_2114;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_lv<30> > tmp_32_reg_2119;
    sc_signal< sc_lv<32> > select_ln162_1_fu_1388_p3;
    sc_signal< sc_lv<32> > select_ln162_1_reg_2124;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<1> > tmp_27_reg_2129;
    sc_signal< sc_lv<65> > mul_ln150_fu_1399_p2;
    sc_signal< sc_lv<65> > mul_ln150_reg_2135;
    sc_signal< sc_logic > ap_CS_fsm_state31;
    sc_signal< sc_lv<30> > tmp_29_reg_2140;
    sc_signal< sc_lv<32> > select_ln150_1_fu_1450_p3;
    sc_signal< sc_lv<32> > select_ln150_1_reg_2145;
    sc_signal< sc_logic > ap_CS_fsm_state32;
    sc_signal< sc_lv<1> > tmp_24_reg_2150;
    sc_signal< sc_lv<65> > mul_ln138_fu_1461_p2;
    sc_signal< sc_lv<65> > mul_ln138_reg_2156;
    sc_signal< sc_logic > ap_CS_fsm_state38;
    sc_signal< sc_lv<30> > tmp_26_reg_2161;
    sc_signal< sc_lv<32> > select_ln138_1_fu_1512_p3;
    sc_signal< sc_lv<32> > select_ln138_1_reg_2166;
    sc_signal< sc_logic > ap_CS_fsm_state39;
    sc_signal< sc_lv<1> > tmp_23_reg_2171;
    sc_signal< sc_lv<1> > tmp_22_reg_2176;
    sc_signal< sc_lv<1> > tmp_21_reg_2181;
    sc_signal< sc_lv<64> > zext_ln89_2_fu_1602_p1;
    sc_signal< sc_lv<64> > zext_ln89_2_reg_2186;
    sc_signal< sc_lv<32> > add_ln89_fu_1617_p2;
    sc_signal< sc_lv<32> > add_ln89_reg_2201;
    sc_signal< sc_lv<1> > tmp_20_reg_2206;
    sc_signal< sc_logic > ap_CS_fsm_state55;
    sc_signal< sc_lv<30> > tmp_2_reg_2211;
    sc_signal< sc_lv<30> > tmp_3_reg_2216;
    sc_signal< sc_lv<7> > i_0_reg_432;
    sc_signal< sc_lv<14> > phi_mul_reg_444;
    sc_signal< sc_lv<7> > j_0_reg_456;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_lv<64> > zext_ln106_2_fu_704_p1;
    sc_signal< sc_lv<64> > zext_ln110_fu_715_p1;
    sc_signal< sc_lv<64> > zext_ln106_1_fu_693_p1;
    sc_signal< sc_lv<64> > zext_ln148_fu_726_p1;
    sc_signal< sc_lv<64> > zext_ln93_fu_737_p1;
    sc_signal< sc_lv<64> > zext_ln101_2_fu_748_p1;
    sc_signal< sc_lv<64> > zext_ln125_fu_760_p1;
    sc_signal< sc_lv<64> > zext_ln75_1_fu_647_p1;
    sc_signal< sc_lv<64> > sext_ln95_2_fu_798_p1;
    sc_signal< sc_lv<64> > sext_ln97_fu_809_p1;
    sc_signal< sc_lv<64> > sext_ln95_1_fu_787_p1;
    sc_signal< sc_lv<64> > zext_ln121_fu_820_p1;
    sc_signal< sc_lv<64> > zext_ln178_2_fu_897_p1;
    sc_signal< sc_lv<64> > zext_ln179_fu_911_p1;
    sc_signal< sc_lv<64> > zext_ln166_fu_925_p1;
    sc_signal< sc_lv<64> > zext_ln168_2_fu_939_p1;
    sc_signal< sc_lv<64> > zext_ln154_fu_957_p1;
    sc_signal< sc_lv<64> > zext_ln155_fu_967_p1;
    sc_signal< sc_lv<64> > zext_ln86_1_fu_981_p1;
    sc_signal< sc_lv<64> > zext_ln87_1_fu_995_p1;
    sc_signal< sc_lv<64> > zext_ln181_fu_1008_p1;
    sc_signal< sc_lv<64> > zext_ln180_2_fu_1026_p1;
    sc_signal< sc_lv<64> > sext_ln182_fu_1038_p1;
    sc_signal< sc_lv<64> > zext_ln184_fu_1062_p1;
    sc_signal< sc_lv<64> > zext_ln183_fu_1066_p1;
    sc_signal< sc_lv<64> > zext_ln185_fu_1070_p1;
    sc_signal< sc_lv<64> > zext_ln170_fu_1177_p1;
    sc_signal< sc_lv<64> > zext_ln169_2_fu_1190_p1;
    sc_signal< sc_lv<64> > zext_ln173_fu_1219_p1;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > zext_ln159_1_fu_1295_p1;
    sc_signal< sc_lv<64> > zext_ln160_1_fu_1308_p1;
    sc_signal< sc_lv<64> > zext_ln161_fu_1328_p1;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_lv<64> > zext_ln88_fu_1612_p1;
    sc_signal< sc_logic > ap_CS_fsm_state56;
    sc_signal< sc_logic > ap_CS_fsm_state33;
    sc_signal< sc_logic > ap_CS_fsm_state40;
    sc_signal< sc_logic > ap_CS_fsm_state44;
    sc_signal< sc_lv<32> > sext_ln126_fu_1540_p1;
    sc_signal< sc_logic > ap_CS_fsm_state48;
    sc_signal< sc_lv<32> > sext_ln113_fu_1566_p1;
    sc_signal< sc_logic > ap_CS_fsm_state52;
    sc_signal< sc_lv<32> > sext_ln101_fu_1592_p1;
    sc_signal< sc_lv<32> > sext_ln89_fu_1681_p1;
    sc_signal< sc_lv<8> > zext_ln77_fu_831_p1;
    sc_signal< sc_lv<32> > grp_fu_479_p2;
    sc_signal< sc_lv<32> > grp_fu_551_p2;
    sc_signal< sc_lv<32> > grp_fu_571_p2;
    sc_signal< sc_lv<32> > grp_fu_525_p2;
    sc_signal< sc_lv<32> > grp_fu_591_p2;
    sc_signal< sc_lv<32> > grp_fu_605_p2;
    sc_signal< sc_lv<7> > mul_ln106_fu_683_p1;
    sc_signal< sc_lv<15> > mul_ln106_fu_683_p2;
    sc_signal< sc_lv<14> > add_ln106_fu_698_p2;
    sc_signal< sc_lv<14> > add_ln110_fu_709_p2;
    sc_signal< sc_lv<14> > or_ln148_fu_720_p2;
    sc_signal< sc_lv<14> > add_ln93_fu_731_p2;
    sc_signal< sc_lv<14> > add_ln101_3_fu_742_p2;
    sc_signal< sc_lv<14> > or_ln125_fu_754_p2;
    sc_signal< sc_lv<8> > zext_ln75_fu_663_p1;
    sc_signal< sc_lv<8> > add_ln95_fu_771_p2;
    sc_signal< sc_lv<8> > mul_ln95_fu_781_p1;
    sc_signal< sc_lv<15> > add_ln95_1_fu_792_p2;
    sc_signal< sc_lv<15> > add_ln97_fu_803_p2;
    sc_signal< sc_lv<15> > or_ln121_fu_814_p2;
    sc_signal< sc_lv<7> > or_ln79_fu_848_p2;
    sc_signal< sc_lv<14> > add_ln178_fu_891_p2;
    sc_signal< sc_lv<15> > add_ln179_1_fu_906_p2;
    sc_signal< sc_lv<8> > sext_ln166_fu_916_p0;
    sc_signal< sc_lv<15> > add_ln166_1_fu_920_p2;
    sc_signal< sc_lv<15> > zext_ln168_fu_930_p1;
    sc_signal< sc_lv<15> > add_ln168_fu_934_p2;
    sc_signal< sc_lv<15> > sext_ln154_1_fu_948_p1;
    sc_signal< sc_lv<15> > add_ln154_1_fu_952_p2;
    sc_signal< sc_lv<14> > sext_ln154_fu_944_p1;
    sc_signal< sc_lv<14> > add_ln155_fu_962_p2;
    sc_signal< sc_lv<14> > add_ln86_fu_976_p2;
    sc_signal< sc_lv<14> > add_ln87_fu_990_p2;
    sc_signal< sc_lv<15> > zext_ln178_fu_1000_p1;
    sc_signal< sc_lv<15> > add_ln181_fu_1003_p2;
    sc_signal< sc_lv<15> > zext_ln180_fu_1017_p1;
    sc_signal< sc_lv<15> > add_ln180_fu_1021_p2;
    sc_signal< sc_lv<14> > sext_ln179_1_fu_1035_p1;
    sc_signal< sc_lv<14> > zext_ln180_1_fu_1047_p1;
    sc_signal< sc_lv<32> > add_ln186_3_fu_1087_p2;
    sc_signal< sc_lv<32> > add_ln186_6_fu_1093_p2;
    sc_signal< sc_lv<32> > add_ln186_2_fu_1083_p2;
    sc_signal< sc_lv<32> > mul_ln186_fu_1115_p0;
    sc_signal< sc_lv<65> > sub_ln186_fu_1131_p2;
    sc_signal< sc_lv<29> > tmp_37_fu_1136_p4;
    sc_signal< sc_lv<32> > sext_ln186_1_fu_1146_p1;
    sc_signal< sc_lv<32> > sext_ln186_2_fu_1150_p1;
    sc_signal< sc_lv<32> > select_ln186_fu_1153_p3;
    sc_signal< sc_lv<32> > sub_ln186_1_fu_1160_p2;
    sc_signal< sc_lv<15> > add_ln170_fu_1173_p2;
    sc_signal< sc_lv<15> > zext_ln169_fu_1182_p1;
    sc_signal< sc_lv<15> > add_ln169_fu_1185_p2;
    sc_signal< sc_lv<14> > zext_ln168_1_fu_1195_p1;
    sc_signal< sc_lv<14> > add_ln174_5_fu_1199_p2;
    sc_signal< sc_lv<14> > zext_ln169_1_fu_1210_p1;
    sc_signal< sc_lv<14> > add_ln173_fu_1213_p2;
    sc_signal< sc_lv<32> > mul_ln174_fu_1228_p0;
    sc_signal< sc_lv<65> > sub_ln174_fu_1244_p2;
    sc_signal< sc_lv<30> > tmp_34_fu_1249_p4;
    sc_signal< sc_lv<32> > sext_ln174_1_fu_1259_p1;
    sc_signal< sc_lv<32> > sext_ln174_2_fu_1263_p1;
    sc_signal< sc_lv<32> > select_ln174_fu_1266_p3;
    sc_signal< sc_lv<32> > sub_ln174_1_fu_1273_p2;
    sc_signal< sc_lv<14> > add_ln159_fu_1290_p2;
    sc_signal< sc_lv<14> > add_ln160_fu_1303_p2;
    sc_signal< sc_lv<14> > add_ln162_5_fu_1313_p2;
    sc_signal< sc_lv<14> > add_ln161_fu_1323_p2;
    sc_signal< sc_lv<32> > mul_ln162_fu_1337_p0;
    sc_signal< sc_lv<65> > sub_ln162_fu_1353_p2;
    sc_signal< sc_lv<30> > tmp_31_fu_1358_p4;
    sc_signal< sc_lv<32> > sext_ln162_1_fu_1368_p1;
    sc_signal< sc_lv<32> > sext_ln162_2_fu_1372_p1;
    sc_signal< sc_lv<32> > select_ln162_fu_1375_p3;
    sc_signal< sc_lv<32> > sub_ln162_1_fu_1382_p2;
    sc_signal< sc_lv<32> > mul_ln150_fu_1399_p0;
    sc_signal< sc_lv<65> > sub_ln150_fu_1415_p2;
    sc_signal< sc_lv<30> > tmp_28_fu_1420_p4;
    sc_signal< sc_lv<32> > sext_ln150_1_fu_1430_p1;
    sc_signal< sc_lv<32> > sext_ln150_2_fu_1434_p1;
    sc_signal< sc_lv<32> > select_ln150_fu_1437_p3;
    sc_signal< sc_lv<32> > sub_ln150_1_fu_1444_p2;
    sc_signal< sc_lv<32> > mul_ln138_fu_1461_p0;
    sc_signal< sc_lv<65> > sub_ln138_fu_1477_p2;
    sc_signal< sc_lv<30> > tmp_25_fu_1482_p4;
    sc_signal< sc_lv<32> > sext_ln138_1_fu_1492_p1;
    sc_signal< sc_lv<32> > sext_ln138_2_fu_1496_p1;
    sc_signal< sc_lv<32> > select_ln138_fu_1499_p3;
    sc_signal< sc_lv<32> > sub_ln138_1_fu_1506_p2;
    sc_signal< sc_lv<31> > zext_ln126_fu_1519_p1;
    sc_signal< sc_lv<31> > sub_ln126_1_fu_1523_p2;
    sc_signal< sc_lv<31> > zext_ln126_1_fu_1529_p1;
    sc_signal< sc_lv<31> > select_ln126_fu_1533_p3;
    sc_signal< sc_lv<31> > zext_ln113_fu_1545_p1;
    sc_signal< sc_lv<31> > sub_ln113_1_fu_1549_p2;
    sc_signal< sc_lv<31> > zext_ln113_1_fu_1555_p1;
    sc_signal< sc_lv<31> > select_ln113_fu_1559_p3;
    sc_signal< sc_lv<31> > zext_ln101_fu_1571_p1;
    sc_signal< sc_lv<31> > sub_ln101_1_fu_1575_p2;
    sc_signal< sc_lv<31> > zext_ln101_1_fu_1581_p1;
    sc_signal< sc_lv<31> > select_ln101_fu_1585_p3;
    sc_signal< sc_lv<14> > add_ln89_3_fu_1597_p2;
    sc_signal< sc_lv<14> > add_ln88_fu_1607_p2;
    sc_signal< sc_lv<32> > add_ln89_2_fu_1623_p2;
    sc_signal< sc_lv<32> > sub_ln89_fu_1636_p2;
    sc_signal< sc_lv<31> > zext_ln89_fu_1662_p1;
    sc_signal< sc_lv<31> > sub_ln89_1_fu_1665_p2;
    sc_signal< sc_lv<31> > zext_ln89_1_fu_1671_p1;
    sc_signal< sc_lv<31> > select_ln89_fu_1674_p3;
    sc_signal< sc_lv<56> > ap_NS_fsm;
    sc_signal< sc_lv<15> > mul_ln106_fu_683_p10;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<56> ap_ST_fsm_state1;
    static const sc_lv<56> ap_ST_fsm_state2;
    static const sc_lv<56> ap_ST_fsm_state3;
    static const sc_lv<56> ap_ST_fsm_state4;
    static const sc_lv<56> ap_ST_fsm_state5;
    static const sc_lv<56> ap_ST_fsm_state6;
    static const sc_lv<56> ap_ST_fsm_state7;
    static const sc_lv<56> ap_ST_fsm_state8;
    static const sc_lv<56> ap_ST_fsm_state9;
    static const sc_lv<56> ap_ST_fsm_state10;
    static const sc_lv<56> ap_ST_fsm_state11;
    static const sc_lv<56> ap_ST_fsm_state12;
    static const sc_lv<56> ap_ST_fsm_state13;
    static const sc_lv<56> ap_ST_fsm_state14;
    static const sc_lv<56> ap_ST_fsm_state15;
    static const sc_lv<56> ap_ST_fsm_state16;
    static const sc_lv<56> ap_ST_fsm_state17;
    static const sc_lv<56> ap_ST_fsm_state18;
    static const sc_lv<56> ap_ST_fsm_state19;
    static const sc_lv<56> ap_ST_fsm_state20;
    static const sc_lv<56> ap_ST_fsm_state21;
    static const sc_lv<56> ap_ST_fsm_state22;
    static const sc_lv<56> ap_ST_fsm_state23;
    static const sc_lv<56> ap_ST_fsm_state24;
    static const sc_lv<56> ap_ST_fsm_state25;
    static const sc_lv<56> ap_ST_fsm_state26;
    static const sc_lv<56> ap_ST_fsm_state27;
    static const sc_lv<56> ap_ST_fsm_state28;
    static const sc_lv<56> ap_ST_fsm_state29;
    static const sc_lv<56> ap_ST_fsm_state30;
    static const sc_lv<56> ap_ST_fsm_state31;
    static const sc_lv<56> ap_ST_fsm_state32;
    static const sc_lv<56> ap_ST_fsm_state33;
    static const sc_lv<56> ap_ST_fsm_state34;
    static const sc_lv<56> ap_ST_fsm_state35;
    static const sc_lv<56> ap_ST_fsm_state36;
    static const sc_lv<56> ap_ST_fsm_state37;
    static const sc_lv<56> ap_ST_fsm_state38;
    static const sc_lv<56> ap_ST_fsm_state39;
    static const sc_lv<56> ap_ST_fsm_state40;
    static const sc_lv<56> ap_ST_fsm_state41;
    static const sc_lv<56> ap_ST_fsm_state42;
    static const sc_lv<56> ap_ST_fsm_state43;
    static const sc_lv<56> ap_ST_fsm_state44;
    static const sc_lv<56> ap_ST_fsm_state45;
    static const sc_lv<56> ap_ST_fsm_state46;
    static const sc_lv<56> ap_ST_fsm_state47;
    static const sc_lv<56> ap_ST_fsm_state48;
    static const sc_lv<56> ap_ST_fsm_state49;
    static const sc_lv<56> ap_ST_fsm_state50;
    static const sc_lv<56> ap_ST_fsm_state51;
    static const sc_lv<56> ap_ST_fsm_state52;
    static const sc_lv<56> ap_ST_fsm_state53;
    static const sc_lv<56> ap_ST_fsm_state54;
    static const sc_lv<56> ap_ST_fsm_state55;
    static const sc_lv<56> ap_ST_fsm_state56;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<32> ap_const_lv32_1A;
    static const sc_lv<32> ap_const_lv32_1B;
    static const sc_lv<32> ap_const_lv32_21;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_28;
    static const sc_lv<32> ap_const_lv32_29;
    static const sc_lv<32> ap_const_lv32_2C;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_30;
    static const sc_lv<32> ap_const_lv32_31;
    static const sc_lv<32> ap_const_lv32_34;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_35;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<32> ap_const_lv32_1C;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_1D;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_2A;
    static const sc_lv<32> ap_const_lv32_2E;
    static const sc_lv<32> ap_const_lv32_32;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_25;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_36;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_37;
    static const sc_lv<32> ap_const_lv32_20;
    static const sc_lv<32> ap_const_lv32_27;
    static const sc_lv<32> ap_const_lv32_2B;
    static const sc_lv<32> ap_const_lv32_2F;
    static const sc_lv<32> ap_const_lv32_33;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<14> ap_const_lv14_64;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<15> ap_const_lv15_64;
    static const sc_lv<14> ap_const_lv14_62;
    static const sc_lv<14> ap_const_lv14_63;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<7> ap_const_lv7_63;
    static const sc_lv<15> ap_const_lv15_63;
    static const sc_lv<15> ap_const_lv15_62;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<65> ap_const_lv65_1C71C71C8;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<65> ap_const_lv65_155555556;
    static const sc_lv<31> ap_const_lv31_0;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a1_address0();
    void thread_a1_address1();
    void thread_a1_ce0();
    void thread_a1_ce1();
    void thread_add_ln101_3_fu_742_p2();
    void thread_add_ln106_fu_698_p2();
    void thread_add_ln110_fu_709_p2();
    void thread_add_ln154_1_fu_952_p2();
    void thread_add_ln155_fu_962_p2();
    void thread_add_ln159_fu_1290_p2();
    void thread_add_ln160_fu_1303_p2();
    void thread_add_ln161_fu_1323_p2();
    void thread_add_ln162_5_fu_1313_p2();
    void thread_add_ln166_1_fu_920_p2();
    void thread_add_ln168_fu_934_p2();
    void thread_add_ln169_fu_1185_p2();
    void thread_add_ln170_fu_1173_p2();
    void thread_add_ln173_fu_1213_p2();
    void thread_add_ln174_5_fu_1199_p2();
    void thread_add_ln178_fu_891_p2();
    void thread_add_ln179_1_fu_906_p2();
    void thread_add_ln180_fu_1021_p2();
    void thread_add_ln181_fu_1003_p2();
    void thread_add_ln182_fu_1013_p2();
    void thread_add_ln183_fu_1051_p2();
    void thread_add_ln184_fu_1031_p2();
    void thread_add_ln185_fu_1042_p2();
    void thread_add_ln186_2_fu_1083_p2();
    void thread_add_ln186_3_fu_1087_p2();
    void thread_add_ln186_5_fu_1078_p2();
    void thread_add_ln186_6_fu_1093_p2();
    void thread_add_ln186_7_fu_1098_p2();
    void thread_add_ln186_8_fu_1056_p2();
    void thread_add_ln75_fu_657_p2();
    void thread_add_ln86_fu_976_p2();
    void thread_add_ln87_fu_990_p2();
    void thread_add_ln88_fu_1607_p2();
    void thread_add_ln89_2_fu_1623_p2();
    void thread_add_ln89_3_fu_1597_p2();
    void thread_add_ln89_fu_1617_p2();
    void thread_add_ln93_fu_731_p2();
    void thread_add_ln95_1_fu_792_p2();
    void thread_add_ln95_fu_771_p2();
    void thread_add_ln97_fu_803_p2();
    void thread_and_ln103_fu_871_p2();
    void thread_and_ln116_fu_882_p2();
    void thread_and_ln91_fu_866_p2();
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
    void thread_ap_CS_fsm_state31();
    void thread_ap_CS_fsm_state32();
    void thread_ap_CS_fsm_state33();
    void thread_ap_CS_fsm_state34();
    void thread_ap_CS_fsm_state35();
    void thread_ap_CS_fsm_state36();
    void thread_ap_CS_fsm_state37();
    void thread_ap_CS_fsm_state38();
    void thread_ap_CS_fsm_state39();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state40();
    void thread_ap_CS_fsm_state41();
    void thread_ap_CS_fsm_state42();
    void thread_ap_CS_fsm_state43();
    void thread_ap_CS_fsm_state44();
    void thread_ap_CS_fsm_state45();
    void thread_ap_CS_fsm_state46();
    void thread_ap_CS_fsm_state47();
    void thread_ap_CS_fsm_state48();
    void thread_ap_CS_fsm_state49();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state50();
    void thread_ap_CS_fsm_state51();
    void thread_ap_CS_fsm_state52();
    void thread_ap_CS_fsm_state53();
    void thread_ap_CS_fsm_state54();
    void thread_ap_CS_fsm_state55();
    void thread_ap_CS_fsm_state56();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b1_address0();
    void thread_b1_ce0();
    void thread_b1_d0();
    void thread_b1_we0();
    void thread_grp_fu_468_p2();
    void thread_grp_fu_473_p2();
    void thread_grp_fu_479_p2();
    void thread_grp_fu_495_p2();
    void thread_grp_fu_501_p2();
    void thread_grp_fu_507_p2();
    void thread_grp_fu_513_p2();
    void thread_grp_fu_519_p2();
    void thread_grp_fu_525_p2();
    void thread_grp_fu_551_p2();
    void thread_grp_fu_557_p2();
    void thread_grp_fu_571_p2();
    void thread_grp_fu_577_p2();
    void thread_grp_fu_591_p2();
    void thread_grp_fu_605_p2();
    void thread_i_fu_673_p2();
    void thread_icmp_ln103_fu_825_p2();
    void thread_icmp_ln116_fu_876_p2();
    void thread_icmp_ln75_fu_667_p2();
    void thread_icmp_ln77_fu_836_p2();
    void thread_icmp_ln79_fu_854_p2();
    void thread_icmp_ln91_1_fu_860_p2();
    void thread_icmp_ln91_fu_765_p2();
    void thread_j_fu_842_p2();
    void thread_mul_ln106_fu_683_p1();
    void thread_mul_ln106_fu_683_p10();
    void thread_mul_ln106_fu_683_p2();
    void thread_mul_ln138_fu_1461_p0();
    void thread_mul_ln138_fu_1461_p2();
    void thread_mul_ln150_fu_1399_p0();
    void thread_mul_ln150_fu_1399_p2();
    void thread_mul_ln162_fu_1337_p0();
    void thread_mul_ln162_fu_1337_p2();
    void thread_mul_ln174_fu_1228_p0();
    void thread_mul_ln174_fu_1228_p2();
    void thread_mul_ln186_fu_1115_p0();
    void thread_mul_ln186_fu_1115_p2();
    void thread_mul_ln95_fu_781_p1();
    void thread_mul_ln95_fu_781_p2();
    void thread_or_ln121_fu_814_p2();
    void thread_or_ln125_fu_754_p2();
    void thread_or_ln148_fu_720_p2();
    void thread_or_ln79_fu_848_p2();
    void thread_select_ln101_fu_1585_p3();
    void thread_select_ln113_fu_1559_p3();
    void thread_select_ln126_fu_1533_p3();
    void thread_select_ln138_1_fu_1512_p3();
    void thread_select_ln138_fu_1499_p3();
    void thread_select_ln150_1_fu_1450_p3();
    void thread_select_ln150_fu_1437_p3();
    void thread_select_ln162_1_fu_1388_p3();
    void thread_select_ln162_fu_1375_p3();
    void thread_select_ln174_1_fu_1279_p3();
    void thread_select_ln174_fu_1266_p3();
    void thread_select_ln186_1_fu_1166_p3();
    void thread_select_ln186_fu_1153_p3();
    void thread_select_ln89_fu_1674_p3();
    void thread_sext_ln101_fu_1592_p1();
    void thread_sext_ln113_fu_1566_p1();
    void thread_sext_ln126_fu_1540_p1();
    void thread_sext_ln138_1_fu_1492_p1();
    void thread_sext_ln138_2_fu_1496_p1();
    void thread_sext_ln150_1_fu_1430_p1();
    void thread_sext_ln150_2_fu_1434_p1();
    void thread_sext_ln154_1_fu_948_p1();
    void thread_sext_ln154_fu_944_p1();
    void thread_sext_ln162_1_fu_1368_p1();
    void thread_sext_ln162_2_fu_1372_p1();
    void thread_sext_ln166_fu_916_p0();
    void thread_sext_ln166_fu_916_p1();
    void thread_sext_ln174_1_fu_1259_p1();
    void thread_sext_ln174_2_fu_1263_p1();
    void thread_sext_ln179_1_fu_1035_p1();
    void thread_sext_ln179_fu_902_p1();
    void thread_sext_ln182_fu_1038_p1();
    void thread_sext_ln186_1_fu_1146_p1();
    void thread_sext_ln186_2_fu_1150_p1();
    void thread_sext_ln89_fu_1681_p1();
    void thread_sext_ln95_1_fu_787_p1();
    void thread_sext_ln95_2_fu_798_p1();
    void thread_sext_ln97_fu_809_p1();
    void thread_sub_ln101_1_fu_1575_p2();
    void thread_sub_ln113_1_fu_1549_p2();
    void thread_sub_ln126_1_fu_1523_p2();
    void thread_sub_ln138_1_fu_1506_p2();
    void thread_sub_ln138_fu_1477_p2();
    void thread_sub_ln150_1_fu_1444_p2();
    void thread_sub_ln150_fu_1415_p2();
    void thread_sub_ln162_1_fu_1382_p2();
    void thread_sub_ln162_fu_1353_p2();
    void thread_sub_ln174_1_fu_1273_p2();
    void thread_sub_ln174_fu_1244_p2();
    void thread_sub_ln186_1_fu_1160_p2();
    void thread_sub_ln186_fu_1131_p2();
    void thread_sub_ln89_1_fu_1665_p2();
    void thread_sub_ln89_fu_1636_p2();
    void thread_tmp_25_fu_1482_p4();
    void thread_tmp_28_fu_1420_p4();
    void thread_tmp_31_fu_1358_p4();
    void thread_tmp_34_fu_1249_p4();
    void thread_tmp_37_fu_1136_p4();
    void thread_trunc_ln106_fu_689_p1();
    void thread_zext_ln101_1_fu_1581_p1();
    void thread_zext_ln101_2_fu_748_p1();
    void thread_zext_ln101_fu_1571_p1();
    void thread_zext_ln106_1_fu_693_p1();
    void thread_zext_ln106_2_fu_704_p1();
    void thread_zext_ln110_fu_715_p1();
    void thread_zext_ln113_1_fu_1555_p1();
    void thread_zext_ln113_fu_1545_p1();
    void thread_zext_ln121_fu_820_p1();
    void thread_zext_ln125_fu_760_p1();
    void thread_zext_ln126_1_fu_1529_p1();
    void thread_zext_ln126_fu_1519_p1();
    void thread_zext_ln148_fu_726_p1();
    void thread_zext_ln154_fu_957_p1();
    void thread_zext_ln155_fu_967_p1();
    void thread_zext_ln159_1_fu_1295_p1();
    void thread_zext_ln159_fu_1286_p1();
    void thread_zext_ln160_1_fu_1308_p1();
    void thread_zext_ln160_fu_1300_p1();
    void thread_zext_ln161_fu_1328_p1();
    void thread_zext_ln162_fu_1318_p1();
    void thread_zext_ln166_fu_925_p1();
    void thread_zext_ln168_1_fu_1195_p1();
    void thread_zext_ln168_2_fu_939_p1();
    void thread_zext_ln168_fu_930_p1();
    void thread_zext_ln169_1_fu_1210_p1();
    void thread_zext_ln169_2_fu_1190_p1();
    void thread_zext_ln169_fu_1182_p1();
    void thread_zext_ln170_fu_1177_p1();
    void thread_zext_ln173_fu_1219_p1();
    void thread_zext_ln174_fu_1205_p1();
    void thread_zext_ln178_1_fu_887_p1();
    void thread_zext_ln178_2_fu_897_p1();
    void thread_zext_ln178_fu_1000_p1();
    void thread_zext_ln179_fu_911_p1();
    void thread_zext_ln180_1_fu_1047_p1();
    void thread_zext_ln180_2_fu_1026_p1();
    void thread_zext_ln180_fu_1017_p1();
    void thread_zext_ln181_fu_1008_p1();
    void thread_zext_ln183_fu_1066_p1();
    void thread_zext_ln184_fu_1062_p1();
    void thread_zext_ln185_fu_1070_p1();
    void thread_zext_ln186_fu_1074_p1();
    void thread_zext_ln75_1_fu_647_p1();
    void thread_zext_ln75_2_fu_653_p1();
    void thread_zext_ln75_fu_663_p1();
    void thread_zext_ln77_fu_831_p1();
    void thread_zext_ln86_1_fu_981_p1();
    void thread_zext_ln86_fu_972_p1();
    void thread_zext_ln87_1_fu_995_p1();
    void thread_zext_ln87_fu_986_p1();
    void thread_zext_ln88_fu_1612_p1();
    void thread_zext_ln89_1_fu_1671_p1();
    void thread_zext_ln89_2_fu_1602_p1();
    void thread_zext_ln89_fu_1662_p1();
    void thread_zext_ln93_fu_737_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
