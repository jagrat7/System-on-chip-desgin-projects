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
    // Port declarations 20
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
    sc_out< sc_lv<14> > b1_address1;
    sc_out< sc_logic > b1_ce1;
    sc_out< sc_logic > b1_we1;
    sc_out< sc_lv<32> > b1_d1;


    // Module declarations
    blurf(sc_module_name name);
    SC_HAS_PROCESS(blurf);

    ~blurf();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<7> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<14> > indvar_flatten_reg_451;
    sc_signal< sc_lv<7> > i_0_reg_462;
    sc_signal< sc_lv<7> > j_0_reg_473;
    sc_signal< sc_lv<7> > grp_fu_484_p2;
    sc_signal< sc_lv<7> > reg_512;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state8_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<1> > icmp_ln75_reg_1826;
    sc_signal< sc_lv<1> > icmp_ln79_reg_1908;
    sc_signal< sc_lv<1> > and_ln91_reg_1916;
    sc_signal< sc_lv<1> > and_ln103_reg_1920;
    sc_signal< sc_lv<1> > and_ln116_reg_1928;
    sc_signal< sc_lv<1> > icmp_ln91_1_reg_1912;
    sc_signal< sc_lv<1> > icmp_ln116_reg_1924;
    sc_signal< sc_lv<1> > select_ln75_4_reg_1904;
    sc_signal< sc_lv<1> > select_ln75_3_reg_1895;
    sc_signal< sc_lv<32> > grp_fu_494_p2;
    sc_signal< sc_lv<32> > reg_516;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state4_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state9_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<32> > reg_520;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< bool > ap_block_state6_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state11_pp0_stage4_iter1;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_lv<32> > reg_525;
    sc_signal< sc_lv<32> > reg_529;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_state5_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state10_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_11001;
    sc_signal< sc_lv<32> > reg_534;
    sc_signal< sc_lv<32> > grp_fu_500_p2;
    sc_signal< sc_lv<32> > reg_538;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state7_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state12_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<32> > grp_fu_542_p2;
    sc_signal< sc_lv<32> > reg_572;
    sc_signal< sc_lv<32> > grp_fu_554_p2;
    sc_signal< sc_lv<32> > reg_576;
    sc_signal< sc_lv<30> > reg_634;
    sc_signal< sc_lv<30> > reg_638;
    sc_signal< sc_lv<32> > grp_fu_620_p2;
    sc_signal< sc_lv<32> > reg_642;
    sc_signal< sc_lv<1> > icmp_ln75_fu_664_p2;
    sc_signal< sc_lv<14> > add_ln75_1_fu_670_p2;
    sc_signal< sc_lv<14> > add_ln75_1_reg_1830;
    sc_signal< sc_lv<7> > select_ln75_fu_682_p3;
    sc_signal< sc_lv<7> > select_ln75_reg_1835;
    sc_signal< sc_lv<15> > mul_ln86_fu_708_p2;
    sc_signal< sc_lv<15> > mul_ln86_reg_1847;
    sc_signal< sc_lv<14> > trunc_ln86_fu_714_p1;
    sc_signal< sc_lv<14> > trunc_ln86_reg_1854;
    sc_signal< sc_lv<7> > select_ln75_2_fu_718_p3;
    sc_signal< sc_lv<7> > select_ln75_2_reg_1867;
    sc_signal< sc_lv<15> > mul_ln88_fu_730_p2;
    sc_signal< sc_lv<15> > mul_ln88_reg_1872;
    sc_signal< sc_lv<14> > trunc_ln88_fu_736_p1;
    sc_signal< sc_lv<14> > trunc_ln88_reg_1880;
    sc_signal< sc_lv<1> > select_ln75_3_fu_746_p3;
    sc_signal< sc_lv<1> > select_ln75_3_reg_1895_pp0_iter1_reg;
    sc_signal< sc_lv<8> > add_ln75_fu_758_p2;
    sc_signal< sc_lv<8> > add_ln75_reg_1899;
    sc_signal< sc_lv<1> > select_ln75_4_fu_770_p3;
    sc_signal< sc_lv<1> > select_ln75_4_reg_1904_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln79_fu_784_p2;
    sc_signal< sc_lv<1> > icmp_ln79_reg_1908_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln91_1_fu_790_p2;
    sc_signal< sc_lv<1> > icmp_ln91_1_reg_1912_pp0_iter1_reg;
    sc_signal< sc_lv<1> > and_ln91_fu_796_p2;
    sc_signal< sc_lv<1> > and_ln91_reg_1916_pp0_iter1_reg;
    sc_signal< sc_lv<1> > and_ln103_fu_802_p2;
    sc_signal< sc_lv<1> > and_ln103_reg_1920_pp0_iter1_reg;
    sc_signal< sc_lv<1> > icmp_ln116_fu_808_p2;
    sc_signal< sc_lv<1> > icmp_ln116_reg_1924_pp0_iter1_reg;
    sc_signal< sc_lv<1> > and_ln116_fu_814_p2;
    sc_signal< sc_lv<1> > and_ln116_reg_1928_pp0_iter1_reg;
    sc_signal< sc_lv<14> > a1_addr_4_reg_1932;
    sc_signal< sc_lv<14> > a1_addr_5_reg_1937;
    sc_signal< sc_lv<14> > a1_addr_9_reg_1952;
    sc_signal< sc_lv<14> > b1_addr_1_reg_1958;
    sc_signal< sc_lv<14> > b1_addr_1_reg_1958_pp0_iter1_reg;
    sc_signal< sc_lv<15> > mul_ln95_fu_868_p2;
    sc_signal< sc_lv<15> > mul_ln95_reg_1964;
    sc_signal< sc_lv<14> > a1_addr_15_reg_1981;
    sc_signal< sc_lv<8> > zext_ln77_fu_890_p1;
    sc_signal< sc_lv<8> > zext_ln77_reg_1986;
    sc_signal< sc_lv<14> > zext_ln178_1_fu_894_p1;
    sc_signal< sc_lv<14> > zext_ln178_1_reg_1991;
    sc_signal< sc_lv<15> > sext_ln179_fu_908_p1;
    sc_signal< sc_lv<15> > sext_ln179_reg_2001;
    sc_signal< sc_lv<64> > zext_ln174_fu_930_p1;
    sc_signal< sc_lv<64> > zext_ln174_reg_2012;
    sc_signal< sc_lv<64> > zext_ln174_reg_2012_pp0_iter1_reg;
    sc_signal< sc_lv<15> > sext_ln154_fu_949_p1;
    sc_signal< sc_lv<15> > sext_ln154_reg_2027;
    sc_signal< sc_lv<14> > zext_ln159_fu_963_p1;
    sc_signal< sc_lv<14> > zext_ln159_reg_2037;
    sc_signal< sc_lv<14> > zext_ln86_1_fu_976_p1;
    sc_signal< sc_lv<14> > zext_ln86_1_reg_2047;
    sc_signal< sc_lv<14> > zext_ln87_fu_989_p1;
    sc_signal< sc_lv<14> > zext_ln87_reg_2057;
    sc_signal< sc_lv<14> > a1_addr_11_reg_2078;
    sc_signal< sc_lv<14> > b1_addr_2_reg_2083;
    sc_signal< sc_lv<14> > b1_addr_2_reg_2083_pp0_iter1_reg;
    sc_signal< sc_lv<14> > a1_addr_13_reg_2093;
    sc_signal< sc_lv<14> > add_ln186_8_fu_1070_p2;
    sc_signal< sc_lv<14> > add_ln186_8_reg_2108;
    sc_signal< sc_lv<14> > add_ln162_5_fu_1102_p2;
    sc_signal< sc_lv<14> > add_ln162_5_reg_2123;
    sc_signal< sc_lv<64> > zext_ln89_2_fu_1134_p1;
    sc_signal< sc_lv<64> > zext_ln89_2_reg_2138;
    sc_signal< sc_lv<64> > zext_ln186_fu_1157_p1;
    sc_signal< sc_lv<64> > zext_ln186_reg_2158;
    sc_signal< sc_lv<64> > zext_ln186_reg_2158_pp0_iter1_reg;
    sc_signal< sc_lv<64> > zext_ln162_fu_1194_p1;
    sc_signal< sc_lv<64> > zext_ln162_reg_2183;
    sc_signal< sc_lv<32> > add_ln138_fu_1198_p2;
    sc_signal< sc_lv<32> > add_ln138_reg_2193;
    sc_signal< sc_lv<32> > add_ln101_2_fu_1204_p2;
    sc_signal< sc_lv<32> > add_ln101_2_reg_2198;
    sc_signal< sc_lv<1> > tmp_20_reg_2203;
    sc_signal< sc_lv<30> > tmp_4_reg_2208;
    sc_signal< sc_lv<32> > add_ln89_fu_1228_p2;
    sc_signal< sc_lv<32> > add_ln89_reg_2213;
    sc_signal< sc_lv<15> > add_ln182_fu_1248_p2;
    sc_signal< sc_lv<15> > add_ln182_reg_2223;
    sc_signal< sc_lv<32> > add_ln186_5_fu_1265_p2;
    sc_signal< sc_lv<32> > add_ln186_5_reg_2233;
    sc_signal< sc_lv<32> > add_ln174_3_fu_1277_p2;
    sc_signal< sc_lv<32> > add_ln174_3_reg_2238;
    sc_signal< sc_lv<32> > add_ln138_3_fu_1283_p2;
    sc_signal< sc_lv<32> > add_ln138_3_reg_2243;
    sc_signal< sc_lv<1> > tmp_22_reg_2248;
    sc_signal< sc_lv<1> > tmp_21_reg_2253;
    sc_signal< sc_lv<31> > select_ln101_fu_1317_p3;
    sc_signal< sc_lv<31> > select_ln101_reg_2258;
    sc_signal< sc_lv<1> > tmp_19_reg_2263;
    sc_signal< sc_lv<30> > tmp_reg_2268;
    sc_signal< sc_lv<30> > tmp_2_reg_2273;
    sc_signal< sc_lv<7> > j_reg_2278;
    sc_signal< sc_lv<32> > add_ln174_4_fu_1379_p2;
    sc_signal< sc_lv<32> > add_ln174_4_reg_2288;
    sc_signal< sc_lv<1> > tmp_32_reg_2293;
    sc_signal< sc_lv<1> > tmp_29_reg_2299;
    sc_signal< sc_lv<1> > tmp_26_reg_2305;
    sc_signal< sc_lv<32> > add_ln138_4_fu_1397_p2;
    sc_signal< sc_lv<32> > add_ln138_4_reg_2311;
    sc_signal< sc_lv<1> > tmp_23_reg_2316;
    sc_signal< sc_lv<31> > select_ln113_fu_1450_p3;
    sc_signal< sc_lv<31> > select_ln113_reg_2322;
    sc_signal< sc_lv<32> > add_ln186_6_fu_1487_p2;
    sc_signal< sc_lv<32> > add_ln186_6_reg_2327;
    sc_signal< sc_lv<65> > mul_ln174_fu_1495_p2;
    sc_signal< sc_lv<65> > mul_ln174_reg_2332;
    sc_signal< sc_lv<30> > tmp_34_reg_2337;
    sc_signal< sc_lv<65> > mul_ln162_fu_1515_p2;
    sc_signal< sc_lv<65> > mul_ln162_reg_2342;
    sc_signal< sc_lv<30> > tmp_31_reg_2347;
    sc_signal< sc_lv<65> > mul_ln150_fu_1535_p2;
    sc_signal< sc_lv<65> > mul_ln150_reg_2352;
    sc_signal< sc_lv<30> > tmp_28_reg_2357;
    sc_signal< sc_lv<65> > mul_ln138_fu_1554_p2;
    sc_signal< sc_lv<65> > mul_ln138_reg_2362;
    sc_signal< sc_lv<30> > tmp_25_reg_2367;
    sc_signal< sc_lv<32> > add_ln186_7_fu_1584_p2;
    sc_signal< sc_lv<32> > add_ln186_7_reg_2372;
    sc_signal< sc_lv<1> > tmp_35_reg_2377;
    sc_signal< sc_lv<32> > select_ln174_1_fu_1632_p3;
    sc_signal< sc_lv<32> > select_ln174_1_reg_2383;
    sc_signal< sc_lv<32> > select_ln162_1_fu_1674_p3;
    sc_signal< sc_lv<32> > select_ln162_1_reg_2388;
    sc_signal< sc_lv<32> > select_ln150_1_fu_1716_p3;
    sc_signal< sc_lv<32> > select_ln150_1_reg_2393;
    sc_signal< sc_lv<32> > select_ln138_1_fu_1758_p3;
    sc_signal< sc_lv<32> > select_ln138_1_reg_2398;
    sc_signal< sc_lv<65> > mul_ln186_fu_1768_p2;
    sc_signal< sc_lv<65> > mul_ln186_reg_2403;
    sc_signal< sc_lv<29> > tmp_37_reg_2408;
    sc_signal< sc_lv<32> > select_ln186_1_fu_1819_p3;
    sc_signal< sc_lv<32> > select_ln186_1_reg_2413;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<14> > ap_phi_mux_indvar_flatten_phi_fu_455_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<7> > ap_phi_mux_i_0_phi_fu_466_p4;
    sc_signal< sc_lv<7> > ap_phi_mux_j_0_phi_fu_477_p4;
    sc_signal< sc_lv<64> > zext_ln106_fu_829_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<64> > zext_ln110_fu_839_p1;
    sc_signal< sc_lv<64> > zext_ln86_fu_820_p1;
    sc_signal< sc_lv<64> > zext_ln93_fu_849_p1;
    sc_signal< sc_lv<64> > zext_ln101_2_fu_859_p1;
    sc_signal< sc_lv<64> > sext_ln95_1_fu_874_p1;
    sc_signal< sc_lv<64> > zext_ln121_fu_885_p1;
    sc_signal< sc_lv<64> > zext_ln178_2_fu_903_p1;
    sc_signal< sc_lv<64> > sext_ln179_1_fu_917_p1;
    sc_signal< sc_lv<64> > zext_ln173_fu_944_p1;
    sc_signal< sc_lv<64> > sext_ln155_fu_958_p1;
    sc_signal< sc_lv<64> > zext_ln159_1_fu_971_p1;
    sc_signal< sc_lv<64> > zext_ln86_2_fu_984_p1;
    sc_signal< sc_lv<64> > zext_ln87_1_fu_998_p1;
    sc_signal< sc_lv<64> > zext_ln148_fu_1008_p1;
    sc_signal< bool > ap_block_pp0_stage2;
    sc_signal< sc_lv<64> > zext_ln125_fu_1023_p1;
    sc_signal< sc_lv<64> > zext_ln88_fu_1013_p1;
    sc_signal< sc_lv<64> > sext_ln95_2_fu_1033_p1;
    sc_signal< sc_lv<64> > sext_ln97_fu_1043_p1;
    sc_signal< sc_lv<64> > zext_ln184_fu_1052_p1;
    sc_signal< sc_lv<64> > zext_ln183_fu_1065_p1;
    sc_signal< sc_lv<64> > sext_ln168_fu_1083_p1;
    sc_signal< sc_lv<64> > sext_ln169_fu_1097_p1;
    sc_signal< sc_lv<64> > zext_ln160_1_fu_1115_p1;
    sc_signal< sc_lv<64> > zext_ln161_fu_1125_p1;
    sc_signal< sc_lv<64> > zext_ln88_1_fu_1143_p1;
    sc_signal< sc_lv<64> > sext_ln185_fu_1152_p1;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<64> > sext_ln166_1_fu_1170_p1;
    sc_signal< sc_lv<64> > sext_ln170_fu_1180_p1;
    sc_signal< sc_lv<64> > sext_ln154_1_fu_1189_p1;
    sc_signal< sc_lv<64> > sext_ln181_fu_1243_p1;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_lv<64> > sext_ln180_fu_1260_p1;
    sc_signal< sc_lv<64> > sext_ln182_fu_1369_p1;
    sc_signal< sc_lv<32> > sext_ln126_fu_1431_p1;
    sc_signal< sc_lv<32> > sext_ln89_fu_1476_p1;
    sc_signal< sc_lv<32> > sext_ln113_fu_1570_p1;
    sc_signal< sc_lv<32> > sext_ln101_fu_1574_p1;
    sc_signal< sc_lv<8> > grp_fu_489_p0;
    sc_signal< sc_lv<32> > grp_fu_548_p2;
    sc_signal< sc_lv<32> > grp_fu_560_p2;
    sc_signal< sc_lv<32> > grp_fu_580_p2;
    sc_signal< sc_lv<32> > grp_fu_594_p2;
    sc_signal< sc_lv<32> > grp_fu_566_p2;
    sc_signal< sc_lv<1> > icmp_ln77_fu_676_p2;
    sc_signal< sc_lv<7> > add_ln86_fu_690_p2;
    sc_signal< sc_lv<7> > i_fu_646_p2;
    sc_signal< sc_lv<7> > select_ln75_1_fu_696_p3;
    sc_signal< sc_lv<7> > mul_ln86_fu_708_p1;
    sc_signal< sc_lv<7> > mul_ln88_fu_730_p1;
    sc_signal< sc_lv<1> > icmp_ln91_2_fu_740_p2;
    sc_signal< sc_lv<1> > icmp_ln91_fu_652_p2;
    sc_signal< sc_lv<8> > zext_ln75_fu_754_p1;
    sc_signal< sc_lv<1> > icmp_ln103_1_fu_764_p2;
    sc_signal< sc_lv<1> > icmp_ln103_fu_658_p2;
    sc_signal< sc_lv<7> > or_ln79_fu_778_p2;
    sc_signal< sc_lv<14> > add_ln106_fu_824_p2;
    sc_signal< sc_lv<14> > add_ln110_fu_834_p2;
    sc_signal< sc_lv<14> > add_ln93_fu_844_p2;
    sc_signal< sc_lv<14> > add_ln101_3_fu_854_p2;
    sc_signal< sc_lv<8> > mul_ln95_fu_868_p1;
    sc_signal< sc_lv<15> > or_ln121_fu_879_p2;
    sc_signal< sc_lv<14> > add_ln178_1_fu_898_p2;
    sc_signal< sc_lv<8> > grp_fu_489_p2;
    sc_signal< sc_lv<15> > add_ln179_1_fu_912_p2;
    sc_signal< sc_lv<14> > zext_ln168_1_fu_922_p1;
    sc_signal< sc_lv<14> > add_ln174_5_fu_925_p2;
    sc_signal< sc_lv<14> > zext_ln169_1_fu_935_p1;
    sc_signal< sc_lv<14> > add_ln173_fu_939_p2;
    sc_signal< sc_lv<15> > add_ln155_fu_953_p2;
    sc_signal< sc_lv<14> > add_ln159_fu_966_p2;
    sc_signal< sc_lv<14> > add_ln86_1_fu_979_p2;
    sc_signal< sc_lv<14> > add_ln87_1_fu_993_p2;
    sc_signal< sc_lv<14> > or_ln148_fu_1003_p2;
    sc_signal< sc_lv<14> > or_ln125_fu_1018_p2;
    sc_signal< sc_lv<15> > add_ln95_fu_1028_p2;
    sc_signal< sc_lv<15> > add_ln97_fu_1038_p2;
    sc_signal< sc_lv<14> > add_ln184_fu_1048_p2;
    sc_signal< sc_lv<14> > zext_ln180_1_fu_1057_p1;
    sc_signal< sc_lv<14> > add_ln183_fu_1060_p2;
    sc_signal< sc_lv<15> > zext_ln168_fu_1075_p1;
    sc_signal< sc_lv<15> > add_ln168_fu_1078_p2;
    sc_signal< sc_lv<15> > zext_ln169_fu_1088_p1;
    sc_signal< sc_lv<15> > add_ln169_1_fu_1092_p2;
    sc_signal< sc_lv<14> > zext_ln160_fu_1106_p1;
    sc_signal< sc_lv<14> > add_ln160_1_fu_1110_p2;
    sc_signal< sc_lv<14> > add_ln161_fu_1120_p2;
    sc_signal< sc_lv<14> > add_ln89_3_fu_1130_p2;
    sc_signal< sc_lv<14> > add_ln88_fu_1139_p2;
    sc_signal< sc_lv<15> > add_ln185_fu_1148_p2;
    sc_signal< sc_lv<15> > sext_ln166_fu_1161_p1;
    sc_signal< sc_lv<15> > add_ln166_1_fu_1165_p2;
    sc_signal< sc_lv<15> > add_ln170_fu_1175_p2;
    sc_signal< sc_lv<15> > add_ln154_1_fu_1185_p2;
    sc_signal< sc_lv<32> > grp_fu_506_p2;
    sc_signal< sc_lv<15> > zext_ln178_fu_1234_p1;
    sc_signal< sc_lv<15> > add_ln181_fu_1238_p2;
    sc_signal< sc_lv<15> > zext_ln180_fu_1252_p1;
    sc_signal< sc_lv<15> > add_ln180_fu_1255_p2;
    sc_signal< sc_lv<32> > add_ln174_2_fu_1271_p2;
    sc_signal< sc_lv<32> > sub_ln101_fu_1289_p2;
    sc_signal< sc_lv<30> > tmp_3_fu_1294_p4;
    sc_signal< sc_lv<31> > zext_ln101_fu_1304_p1;
    sc_signal< sc_lv<31> > sub_ln101_1_fu_1308_p2;
    sc_signal< sc_lv<31> > zext_ln101_1_fu_1314_p1;
    sc_signal< sc_lv<32> > add_ln89_1_fu_1324_p2;
    sc_signal< sc_lv<32> > add_ln89_2_fu_1330_p2;
    sc_signal< sc_lv<32> > sub_ln89_fu_1343_p2;
    sc_signal< sc_lv<32> > add_ln174_1_fu_1373_p2;
    sc_signal< sc_lv<32> > add_ln138_1_fu_1392_p2;
    sc_signal< sc_lv<31> > zext_ln126_fu_1410_p1;
    sc_signal< sc_lv<31> > sub_ln126_1_fu_1414_p2;
    sc_signal< sc_lv<31> > zext_ln126_1_fu_1420_p1;
    sc_signal< sc_lv<31> > select_ln126_fu_1424_p3;
    sc_signal< sc_lv<31> > zext_ln113_fu_1436_p1;
    sc_signal< sc_lv<31> > sub_ln113_1_fu_1440_p2;
    sc_signal< sc_lv<31> > zext_ln113_1_fu_1446_p1;
    sc_signal< sc_lv<31> > zext_ln89_fu_1457_p1;
    sc_signal< sc_lv<31> > sub_ln89_1_fu_1460_p2;
    sc_signal< sc_lv<31> > zext_ln89_1_fu_1466_p1;
    sc_signal< sc_lv<31> > select_ln89_fu_1469_p3;
    sc_signal< sc_lv<32> > add_ln186_3_fu_1481_p2;
    sc_signal< sc_lv<32> > mul_ln174_fu_1495_p0;
    sc_signal< sc_lv<32> > mul_ln162_fu_1515_p0;
    sc_signal< sc_lv<32> > mul_ln150_fu_1535_p0;
    sc_signal< sc_lv<32> > mul_ln138_fu_1554_p0;
    sc_signal< sc_lv<32> > add_ln186_2_fu_1578_p2;
    sc_signal< sc_lv<65> > sub_ln174_fu_1597_p2;
    sc_signal< sc_lv<30> > tmp_33_fu_1602_p4;
    sc_signal< sc_lv<32> > sext_ln174_1_fu_1612_p1;
    sc_signal< sc_lv<32> > sext_ln174_2_fu_1616_p1;
    sc_signal< sc_lv<32> > select_ln174_fu_1619_p3;
    sc_signal< sc_lv<32> > sub_ln174_1_fu_1626_p2;
    sc_signal< sc_lv<65> > sub_ln162_fu_1639_p2;
    sc_signal< sc_lv<30> > tmp_30_fu_1644_p4;
    sc_signal< sc_lv<32> > sext_ln162_1_fu_1654_p1;
    sc_signal< sc_lv<32> > sext_ln162_2_fu_1658_p1;
    sc_signal< sc_lv<32> > select_ln162_fu_1661_p3;
    sc_signal< sc_lv<32> > sub_ln162_1_fu_1668_p2;
    sc_signal< sc_lv<65> > sub_ln150_fu_1681_p2;
    sc_signal< sc_lv<30> > tmp_27_fu_1686_p4;
    sc_signal< sc_lv<32> > sext_ln150_1_fu_1696_p1;
    sc_signal< sc_lv<32> > sext_ln150_2_fu_1700_p1;
    sc_signal< sc_lv<32> > select_ln150_fu_1703_p3;
    sc_signal< sc_lv<32> > sub_ln150_1_fu_1710_p2;
    sc_signal< sc_lv<65> > sub_ln138_fu_1723_p2;
    sc_signal< sc_lv<30> > tmp_24_fu_1728_p4;
    sc_signal< sc_lv<32> > sext_ln138_1_fu_1738_p1;
    sc_signal< sc_lv<32> > sext_ln138_2_fu_1742_p1;
    sc_signal< sc_lv<32> > select_ln138_fu_1745_p3;
    sc_signal< sc_lv<32> > sub_ln138_1_fu_1752_p2;
    sc_signal< sc_lv<32> > mul_ln186_fu_1768_p0;
    sc_signal< sc_lv<65> > sub_ln186_fu_1784_p2;
    sc_signal< sc_lv<29> > tmp_36_fu_1789_p4;
    sc_signal< sc_lv<32> > sext_ln186_1_fu_1799_p1;
    sc_signal< sc_lv<32> > sext_ln186_2_fu_1803_p1;
    sc_signal< sc_lv<32> > select_ln186_fu_1806_p3;
    sc_signal< sc_lv<32> > sub_ln186_1_fu_1813_p2;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_lv<7> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<15> > mul_ln86_fu_708_p10;
    sc_signal< sc_lv<15> > mul_ln88_fu_730_p10;
    sc_signal< bool > ap_condition_1664;
    sc_signal< bool > ap_condition_1668;
    sc_signal< bool > ap_condition_1679;
    sc_signal< bool > ap_condition_1683;
    sc_signal< bool > ap_condition_1687;
    sc_signal< bool > ap_condition_1691;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<7> ap_ST_fsm_state1;
    static const sc_lv<7> ap_ST_fsm_pp0_stage0;
    static const sc_lv<7> ap_ST_fsm_pp0_stage1;
    static const sc_lv<7> ap_ST_fsm_pp0_stage2;
    static const sc_lv<7> ap_ST_fsm_pp0_stage3;
    static const sc_lv<7> ap_ST_fsm_pp0_stage4;
    static const sc_lv<7> ap_ST_fsm_state13;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<14> ap_const_lv14_0;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<7> ap_const_lv7_63;
    static const sc_lv<14> ap_const_lv14_2710;
    static const sc_lv<14> ap_const_lv14_1;
    static const sc_lv<7> ap_const_lv7_64;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<15> ap_const_lv15_64;
    static const sc_lv<14> ap_const_lv14_62;
    static const sc_lv<14> ap_const_lv14_63;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<15> ap_const_lv15_63;
    static const sc_lv<15> ap_const_lv15_62;
    static const sc_lv<31> ap_const_lv31_0;
    static const sc_lv<65> ap_const_lv65_155555556;
    static const sc_lv<32> ap_const_lv32_23;
    static const sc_lv<32> ap_const_lv32_40;
    static const sc_lv<65> ap_const_lv65_0;
    static const sc_lv<65> ap_const_lv65_1C71C71C8;
    static const sc_lv<32> ap_const_lv32_24;
    static const sc_lv<32> ap_const_lv32_6;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a1_address0();
    void thread_a1_address1();
    void thread_a1_ce0();
    void thread_a1_ce1();
    void thread_add_ln101_2_fu_1204_p2();
    void thread_add_ln101_3_fu_854_p2();
    void thread_add_ln106_fu_824_p2();
    void thread_add_ln110_fu_834_p2();
    void thread_add_ln138_1_fu_1392_p2();
    void thread_add_ln138_3_fu_1283_p2();
    void thread_add_ln138_4_fu_1397_p2();
    void thread_add_ln138_fu_1198_p2();
    void thread_add_ln154_1_fu_1185_p2();
    void thread_add_ln155_fu_953_p2();
    void thread_add_ln159_fu_966_p2();
    void thread_add_ln160_1_fu_1110_p2();
    void thread_add_ln161_fu_1120_p2();
    void thread_add_ln162_5_fu_1102_p2();
    void thread_add_ln166_1_fu_1165_p2();
    void thread_add_ln168_fu_1078_p2();
    void thread_add_ln169_1_fu_1092_p2();
    void thread_add_ln170_fu_1175_p2();
    void thread_add_ln173_fu_939_p2();
    void thread_add_ln174_1_fu_1373_p2();
    void thread_add_ln174_2_fu_1271_p2();
    void thread_add_ln174_3_fu_1277_p2();
    void thread_add_ln174_4_fu_1379_p2();
    void thread_add_ln174_5_fu_925_p2();
    void thread_add_ln178_1_fu_898_p2();
    void thread_add_ln179_1_fu_912_p2();
    void thread_add_ln180_fu_1255_p2();
    void thread_add_ln181_fu_1238_p2();
    void thread_add_ln182_fu_1248_p2();
    void thread_add_ln183_fu_1060_p2();
    void thread_add_ln184_fu_1048_p2();
    void thread_add_ln185_fu_1148_p2();
    void thread_add_ln186_2_fu_1578_p2();
    void thread_add_ln186_3_fu_1481_p2();
    void thread_add_ln186_5_fu_1265_p2();
    void thread_add_ln186_6_fu_1487_p2();
    void thread_add_ln186_7_fu_1584_p2();
    void thread_add_ln186_8_fu_1070_p2();
    void thread_add_ln75_1_fu_670_p2();
    void thread_add_ln75_fu_758_p2();
    void thread_add_ln86_1_fu_979_p2();
    void thread_add_ln86_fu_690_p2();
    void thread_add_ln87_1_fu_993_p2();
    void thread_add_ln88_fu_1139_p2();
    void thread_add_ln89_1_fu_1324_p2();
    void thread_add_ln89_2_fu_1330_p2();
    void thread_add_ln89_3_fu_1130_p2();
    void thread_add_ln89_fu_1228_p2();
    void thread_add_ln93_fu_844_p2();
    void thread_add_ln95_fu_1028_p2();
    void thread_add_ln97_fu_1038_p2();
    void thread_and_ln103_fu_802_p2();
    void thread_and_ln116_fu_814_p2();
    void thread_and_ln91_fu_796_p2();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state13();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_11001();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_state10_pp0_stage3_iter1();
    void thread_ap_block_state11_pp0_stage4_iter1();
    void thread_ap_block_state12_pp0_stage0_iter2();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage1_iter0();
    void thread_ap_block_state4_pp0_stage2_iter0();
    void thread_ap_block_state5_pp0_stage3_iter0();
    void thread_ap_block_state6_pp0_stage4_iter0();
    void thread_ap_block_state7_pp0_stage0_iter1();
    void thread_ap_block_state8_pp0_stage1_iter1();
    void thread_ap_block_state9_pp0_stage2_iter1();
    void thread_ap_condition_1664();
    void thread_ap_condition_1668();
    void thread_ap_condition_1679();
    void thread_ap_condition_1683();
    void thread_ap_condition_1687();
    void thread_ap_condition_1691();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_i_0_phi_fu_466_p4();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_455_p4();
    void thread_ap_phi_mux_j_0_phi_fu_477_p4();
    void thread_ap_ready();
    void thread_b1_address0();
    void thread_b1_address1();
    void thread_b1_ce0();
    void thread_b1_ce1();
    void thread_b1_d0();
    void thread_b1_d1();
    void thread_b1_we0();
    void thread_b1_we1();
    void thread_grp_fu_484_p2();
    void thread_grp_fu_489_p0();
    void thread_grp_fu_489_p2();
    void thread_grp_fu_494_p2();
    void thread_grp_fu_500_p2();
    void thread_grp_fu_506_p2();
    void thread_grp_fu_542_p2();
    void thread_grp_fu_548_p2();
    void thread_grp_fu_554_p2();
    void thread_grp_fu_560_p2();
    void thread_grp_fu_566_p2();
    void thread_grp_fu_580_p2();
    void thread_grp_fu_594_p2();
    void thread_grp_fu_620_p2();
    void thread_i_fu_646_p2();
    void thread_icmp_ln103_1_fu_764_p2();
    void thread_icmp_ln103_fu_658_p2();
    void thread_icmp_ln116_fu_808_p2();
    void thread_icmp_ln75_fu_664_p2();
    void thread_icmp_ln77_fu_676_p2();
    void thread_icmp_ln79_fu_784_p2();
    void thread_icmp_ln91_1_fu_790_p2();
    void thread_icmp_ln91_2_fu_740_p2();
    void thread_icmp_ln91_fu_652_p2();
    void thread_mul_ln138_fu_1554_p0();
    void thread_mul_ln138_fu_1554_p2();
    void thread_mul_ln150_fu_1535_p0();
    void thread_mul_ln150_fu_1535_p2();
    void thread_mul_ln162_fu_1515_p0();
    void thread_mul_ln162_fu_1515_p2();
    void thread_mul_ln174_fu_1495_p0();
    void thread_mul_ln174_fu_1495_p2();
    void thread_mul_ln186_fu_1768_p0();
    void thread_mul_ln186_fu_1768_p2();
    void thread_mul_ln86_fu_708_p1();
    void thread_mul_ln86_fu_708_p10();
    void thread_mul_ln86_fu_708_p2();
    void thread_mul_ln88_fu_730_p1();
    void thread_mul_ln88_fu_730_p10();
    void thread_mul_ln88_fu_730_p2();
    void thread_mul_ln95_fu_868_p1();
    void thread_mul_ln95_fu_868_p2();
    void thread_or_ln121_fu_879_p2();
    void thread_or_ln125_fu_1018_p2();
    void thread_or_ln148_fu_1003_p2();
    void thread_or_ln79_fu_778_p2();
    void thread_select_ln101_fu_1317_p3();
    void thread_select_ln113_fu_1450_p3();
    void thread_select_ln126_fu_1424_p3();
    void thread_select_ln138_1_fu_1758_p3();
    void thread_select_ln138_fu_1745_p3();
    void thread_select_ln150_1_fu_1716_p3();
    void thread_select_ln150_fu_1703_p3();
    void thread_select_ln162_1_fu_1674_p3();
    void thread_select_ln162_fu_1661_p3();
    void thread_select_ln174_1_fu_1632_p3();
    void thread_select_ln174_fu_1619_p3();
    void thread_select_ln186_1_fu_1819_p3();
    void thread_select_ln186_fu_1806_p3();
    void thread_select_ln75_1_fu_696_p3();
    void thread_select_ln75_2_fu_718_p3();
    void thread_select_ln75_3_fu_746_p3();
    void thread_select_ln75_4_fu_770_p3();
    void thread_select_ln75_fu_682_p3();
    void thread_select_ln89_fu_1469_p3();
    void thread_sext_ln101_fu_1574_p1();
    void thread_sext_ln113_fu_1570_p1();
    void thread_sext_ln126_fu_1431_p1();
    void thread_sext_ln138_1_fu_1738_p1();
    void thread_sext_ln138_2_fu_1742_p1();
    void thread_sext_ln150_1_fu_1696_p1();
    void thread_sext_ln150_2_fu_1700_p1();
    void thread_sext_ln154_1_fu_1189_p1();
    void thread_sext_ln154_fu_949_p1();
    void thread_sext_ln155_fu_958_p1();
    void thread_sext_ln162_1_fu_1654_p1();
    void thread_sext_ln162_2_fu_1658_p1();
    void thread_sext_ln166_1_fu_1170_p1();
    void thread_sext_ln166_fu_1161_p1();
    void thread_sext_ln168_fu_1083_p1();
    void thread_sext_ln169_fu_1097_p1();
    void thread_sext_ln170_fu_1180_p1();
    void thread_sext_ln174_1_fu_1612_p1();
    void thread_sext_ln174_2_fu_1616_p1();
    void thread_sext_ln179_1_fu_917_p1();
    void thread_sext_ln179_fu_908_p1();
    void thread_sext_ln180_fu_1260_p1();
    void thread_sext_ln181_fu_1243_p1();
    void thread_sext_ln182_fu_1369_p1();
    void thread_sext_ln185_fu_1152_p1();
    void thread_sext_ln186_1_fu_1799_p1();
    void thread_sext_ln186_2_fu_1803_p1();
    void thread_sext_ln89_fu_1476_p1();
    void thread_sext_ln95_1_fu_874_p1();
    void thread_sext_ln95_2_fu_1033_p1();
    void thread_sext_ln97_fu_1043_p1();
    void thread_sub_ln101_1_fu_1308_p2();
    void thread_sub_ln101_fu_1289_p2();
    void thread_sub_ln113_1_fu_1440_p2();
    void thread_sub_ln126_1_fu_1414_p2();
    void thread_sub_ln138_1_fu_1752_p2();
    void thread_sub_ln138_fu_1723_p2();
    void thread_sub_ln150_1_fu_1710_p2();
    void thread_sub_ln150_fu_1681_p2();
    void thread_sub_ln162_1_fu_1668_p2();
    void thread_sub_ln162_fu_1639_p2();
    void thread_sub_ln174_1_fu_1626_p2();
    void thread_sub_ln174_fu_1597_p2();
    void thread_sub_ln186_1_fu_1813_p2();
    void thread_sub_ln186_fu_1784_p2();
    void thread_sub_ln89_1_fu_1460_p2();
    void thread_sub_ln89_fu_1343_p2();
    void thread_tmp_24_fu_1728_p4();
    void thread_tmp_27_fu_1686_p4();
    void thread_tmp_30_fu_1644_p4();
    void thread_tmp_33_fu_1602_p4();
    void thread_tmp_36_fu_1789_p4();
    void thread_tmp_3_fu_1294_p4();
    void thread_trunc_ln86_fu_714_p1();
    void thread_trunc_ln88_fu_736_p1();
    void thread_zext_ln101_1_fu_1314_p1();
    void thread_zext_ln101_2_fu_859_p1();
    void thread_zext_ln101_fu_1304_p1();
    void thread_zext_ln106_fu_829_p1();
    void thread_zext_ln110_fu_839_p1();
    void thread_zext_ln113_1_fu_1446_p1();
    void thread_zext_ln113_fu_1436_p1();
    void thread_zext_ln121_fu_885_p1();
    void thread_zext_ln125_fu_1023_p1();
    void thread_zext_ln126_1_fu_1420_p1();
    void thread_zext_ln126_fu_1410_p1();
    void thread_zext_ln148_fu_1008_p1();
    void thread_zext_ln159_1_fu_971_p1();
    void thread_zext_ln159_fu_963_p1();
    void thread_zext_ln160_1_fu_1115_p1();
    void thread_zext_ln160_fu_1106_p1();
    void thread_zext_ln161_fu_1125_p1();
    void thread_zext_ln162_fu_1194_p1();
    void thread_zext_ln168_1_fu_922_p1();
    void thread_zext_ln168_fu_1075_p1();
    void thread_zext_ln169_1_fu_935_p1();
    void thread_zext_ln169_fu_1088_p1();
    void thread_zext_ln173_fu_944_p1();
    void thread_zext_ln174_fu_930_p1();
    void thread_zext_ln178_1_fu_894_p1();
    void thread_zext_ln178_2_fu_903_p1();
    void thread_zext_ln178_fu_1234_p1();
    void thread_zext_ln180_1_fu_1057_p1();
    void thread_zext_ln180_fu_1252_p1();
    void thread_zext_ln183_fu_1065_p1();
    void thread_zext_ln184_fu_1052_p1();
    void thread_zext_ln186_fu_1157_p1();
    void thread_zext_ln75_fu_754_p1();
    void thread_zext_ln77_fu_890_p1();
    void thread_zext_ln86_1_fu_976_p1();
    void thread_zext_ln86_2_fu_984_p1();
    void thread_zext_ln86_fu_820_p1();
    void thread_zext_ln87_1_fu_998_p1();
    void thread_zext_ln87_fu_989_p1();
    void thread_zext_ln88_1_fu_1143_p1();
    void thread_zext_ln88_fu_1013_p1();
    void thread_zext_ln89_1_fu_1466_p1();
    void thread_zext_ln89_2_fu_1134_p1();
    void thread_zext_ln89_fu_1457_p1();
    void thread_zext_ln93_fu_849_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
