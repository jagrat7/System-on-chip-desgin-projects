// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="compressf,hls_ip_2019_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.775000,HLS_SYN_LAT=2506,HLS_SYN_TPT=none,HLS_SYN_MEM=2,HLS_SYN_DSP=1,HLS_SYN_FF=393,HLS_SYN_LUT=812,HLS_VERSION=2019_1}" *)

module compressf (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        as_address0,
        as_ce0,
        as_q0,
        as_address1,
        as_ce1,
        as_q1,
        bs_address0,
        bs_ce0,
        bs_we0,
        bs_d0
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_pp0_stage0 = 7'd2;
parameter    ap_ST_fsm_pp0_stage1 = 7'd4;
parameter    ap_ST_fsm_state6 = 7'd8;
parameter    ap_ST_fsm_pp1_stage0 = 7'd16;
parameter    ap_ST_fsm_pp1_stage1 = 7'd32;
parameter    ap_ST_fsm_state11 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] as_address0;
output   as_ce0;
input  [31:0] as_q0;
output  [9:0] as_address1;
output   as_ce1;
input  [31:0] as_q1;
output  [9:0] bs_address0;
output   bs_ce0;
output   bs_we0;
output  [31:0] bs_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg as_ce0;
reg as_ce1;
reg[9:0] bs_address0;
reg bs_ce0;
reg bs_we0;
reg[31:0] bs_d0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [9:0] indvar_flatten_reg_161;
reg   [9:0] k_0_reg_172;
reg   [4:0] i_0_reg_183;
reg   [31:0] x_0_reg_194;
reg   [9:0] k_1_reg_205;
reg   [4:0] j_0_reg_216;
reg   [9:0] i_1_reg_227;
wire   [0:0] icmp_ln211_fu_238_p2;
reg   [0:0] icmp_ln211_reg_520;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln211_reg_520_pp0_iter1_reg;
wire   [9:0] add_ln211_fu_244_p2;
reg   [9:0] add_ln211_reg_524;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] icmp_ln214_fu_268_p2;
reg   [0:0] icmp_ln214_reg_529;
wire   [9:0] select_ln220_fu_274_p3;
reg   [9:0] select_ln220_reg_534;
wire   [4:0] select_ln220_1_fu_282_p3;
reg   [4:0] select_ln220_1_reg_540;
wire   [4:0] select_ln220_2_fu_290_p3;
reg   [4:0] select_ln220_2_reg_548;
wire   [9:0] mul_ln218_fu_302_p2;
reg   [9:0] mul_ln218_reg_554;
wire   [0:0] icmp_ln220_fu_308_p2;
reg   [0:0] icmp_ln220_reg_560;
wire   [0:0] icmp_ln220_1_fu_314_p2;
reg   [0:0] icmp_ln220_1_reg_565;
wire   [9:0] select_ln211_fu_320_p3;
reg   [9:0] select_ln211_reg_570;
wire   [31:0] select_ln211_1_fu_328_p3;
reg   [31:0] select_ln211_1_reg_575;
wire   [9:0] zext_ln214_fu_341_p1;
reg   [9:0] zext_ln214_reg_580;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_state5_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
wire   [9:0] add_ln219_fu_354_p2;
reg   [9:0] add_ln219_reg_590;
wire   [4:0] j_fu_385_p2;
reg   [4:0] j_reg_600;
reg   [31:0] as_load_1_reg_605;
reg    ap_enable_reg_pp0_iter1;
wire   [9:0] grp_fu_513_p3;
reg   [9:0] add_ln220_reg_610;
wire   [0:0] icmp_ln228_fu_411_p2;
reg   [0:0] icmp_ln228_reg_630;
wire    ap_CS_fsm_pp1_stage0;
wire    ap_block_state7_pp1_stage0_iter0;
wire    ap_block_state9_pp1_stage0_iter1;
wire    ap_block_pp1_stage0_11001;
wire   [9:0] i_2_fu_417_p2;
reg   [9:0] i_2_reg_634;
reg    ap_enable_reg_pp1_iter0;
wire   [10:0] zext_ln228_fu_423_p1;
reg   [10:0] zext_ln228_reg_639;
wire   [31:0] odoarr_q1;
reg   [31:0] odoarr_load_1_reg_654;
wire    ap_CS_fsm_pp1_stage1;
wire    ap_block_state8_pp1_stage1_iter0;
wire    ap_block_state10_pp1_stage1_iter1;
wire    ap_block_pp1_stage1_11001;
wire   [0:0] icmp_ln232_fu_437_p2;
reg   [0:0] icmp_ln232_reg_660;
reg  signed [31:0] cp_1_load_reg_669;
wire   [0:0] icmp_ln237_fu_456_p2;
reg   [0:0] icmp_ln237_reg_675;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
wire    ap_block_pp0_stage1_subdone;
wire    ap_CS_fsm_state6;
wire    ap_block_pp1_stage0_subdone;
reg    ap_condition_pp1_exit_iter0_state7;
reg    ap_enable_reg_pp1_iter1;
wire    ap_block_pp1_stage1_subdone;
reg   [9:0] odoarr_address0;
reg    odoarr_ce0;
reg    odoarr_we0;
reg   [31:0] odoarr_d0;
wire   [31:0] odoarr_q0;
reg   [9:0] odoarr_address1;
reg    odoarr_ce1;
reg   [9:0] ap_phi_mux_indvar_flatten_phi_fu_165_p4;
wire    ap_block_pp0_stage0;
reg   [9:0] ap_phi_mux_k_0_phi_fu_176_p4;
reg   [4:0] ap_phi_mux_i_0_phi_fu_187_p4;
reg   [31:0] ap_phi_mux_x_0_phi_fu_198_p4;
reg   [9:0] ap_phi_mux_k_1_phi_fu_209_p4;
reg   [4:0] ap_phi_mux_j_0_phi_fu_220_p4;
reg   [9:0] ap_phi_mux_i_1_phi_fu_231_p4;
wire    ap_block_pp1_stage0;
wire   [63:0] zext_ln218_2_fu_349_p1;
wire    ap_block_pp0_stage1;
wire   [63:0] zext_ln220_3_fu_380_p1;
wire   [63:0] zext_ln218_1_fu_393_p1;
wire   [63:0] zext_ln220_1_fu_397_p1;
wire   [63:0] zext_ln232_fu_427_p1;
wire   [63:0] zext_ln232_1_fu_432_p1;
wire  signed [63:0] sext_ln237_fu_448_p1;
wire    ap_block_pp1_stage1;
wire  signed [63:0] sext_ln240_fu_461_p1;
wire  signed [63:0] sext_ln241_fu_474_p1;
reg   [31:0] count_1_fu_62;
wire   [31:0] select_ln243_fu_479_p3;
wire   [31:0] count_fu_502_p2;
reg   [31:0] cp_1_fu_66;
wire   [31:0] cp_fu_487_p2;
wire   [9:0] add_ln219_1_fu_262_p2;
wire   [4:0] i_fu_256_p2;
wire   [4:0] mul_ln218_fu_302_p0;
wire   [31:0] x_fu_250_p2;
wire   [9:0] add_ln218_fu_344_p2;
wire   [0:0] select_ln220_3_fu_336_p3;
wire   [4:0] sub_ln220_fu_359_p2;
wire   [4:0] select_ln220_4_fu_364_p3;
wire   [9:0] zext_ln220_2_fu_371_p1;
wire   [9:0] add_ln220_1_fu_375_p2;
wire   [10:0] add_ln237_fu_443_p2;
wire  signed [31:0] sext_ln240_fu_461_p0;
wire   [31:0] add_ln241_fu_469_p2;
wire   [4:0] grp_fu_513_p0;
wire   [5:0] grp_fu_513_p1;
wire   [4:0] grp_fu_513_p2;
wire    ap_CS_fsm_state11;
reg   [6:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
reg    ap_idle_pp1;
wire    ap_enable_pp1;
wire   [9:0] grp_fu_513_p00;
wire   [9:0] mul_ln218_fu_302_p00;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp1_iter0 = 1'b0;
#0 ap_enable_reg_pp1_iter1 = 1'b0;
end

compressf_odoarr #(
    .DataWidth( 32 ),
    .AddressRange( 625 ),
    .AddressWidth( 10 ))
odoarr_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(odoarr_address0),
    .ce0(odoarr_ce0),
    .we0(odoarr_we0),
    .d0(odoarr_d0),
    .q0(odoarr_q0),
    .address1(odoarr_address1),
    .ce1(odoarr_ce1),
    .q1(odoarr_q1)
);

compressf_mac_mulbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 5 ),
    .din1_WIDTH( 6 ),
    .din2_WIDTH( 5 ),
    .dout_WIDTH( 10 ))
compressf_mac_mulbkb_U1(
    .din0(grp_fu_513_p0),
    .din1(grp_fu_513_p1),
    .din2(grp_fu_513_p2),
    .dout(grp_fu_513_p3)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage1_subdone) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage0_subdone) & (1'b1 == ap_condition_pp1_exit_iter0_state7) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            ap_enable_reg_pp1_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp1_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp1_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp1_stage1_subdone) & (1'b1 == ap_CS_fsm_pp1_stage1))) begin
            ap_enable_reg_pp1_iter1 <= ap_enable_reg_pp1_iter0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp1_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (icmp_ln232_reg_660 == 1'd1) & (1'b0 == ap_block_pp1_stage1_11001))) begin
        count_1_fu_62 <= count_fu_502_p2;
    end else if (((icmp_ln232_reg_660 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (1'b0 == ap_block_pp1_stage1_11001))) begin
        count_1_fu_62 <= select_ln243_fu_479_p3;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        count_1_fu_62 <= 32'd1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln232_reg_660 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (1'b0 == ap_block_pp1_stage1_11001))) begin
        cp_1_fu_66 <= cp_fu_487_p2;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        cp_1_fu_66 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        i_0_reg_183 <= select_ln220_2_reg_548;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_0_reg_183 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_1_reg_227 <= 10'd0;
    end else if (((icmp_ln228_reg_630 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        i_1_reg_227 <= i_2_reg_634;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        indvar_flatten_reg_161 <= add_ln211_reg_524;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        indvar_flatten_reg_161 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        j_0_reg_216 <= j_reg_600;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_0_reg_216 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        k_0_reg_172 <= select_ln211_reg_570;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_0_reg_172 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        k_1_reg_205 <= add_ln219_reg_590;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        k_1_reg_205 <= 10'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        x_0_reg_194 <= select_ln211_1_reg_575;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        x_0_reg_194 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln211_reg_524 <= add_ln211_fu_244_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        add_ln219_reg_590 <= add_ln219_fu_354_p2;
        j_reg_600 <= j_fu_385_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        add_ln220_reg_610 <= grp_fu_513_p3;
        as_load_1_reg_605 <= as_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln232_reg_660 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        cp_1_load_reg_669 <= cp_1_fu_66;
        icmp_ln237_reg_675 <= icmp_ln237_fu_456_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        i_2_reg_634 <= i_2_fu_417_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln211_reg_520 <= icmp_ln211_fu_238_p2;
        icmp_ln211_reg_520_pp0_iter1_reg <= icmp_ln211_reg_520;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_fu_238_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln214_reg_529 <= icmp_ln214_fu_268_p2;
        icmp_ln220_1_reg_565 <= icmp_ln220_1_fu_314_p2;
        icmp_ln220_reg_560 <= icmp_ln220_fu_308_p2;
        mul_ln218_reg_554 <= mul_ln218_fu_302_p2;
        select_ln220_1_reg_540 <= select_ln220_1_fu_282_p3;
        select_ln220_reg_534 <= select_ln220_fu_274_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        icmp_ln228_reg_630 <= icmp_ln228_fu_411_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln228_reg_630 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage1) & (1'b0 == ap_block_pp1_stage1_11001))) begin
        icmp_ln232_reg_660 <= icmp_ln232_fu_437_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln228_reg_630 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage1) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage1_11001))) begin
        odoarr_load_1_reg_654 <= odoarr_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_fu_238_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln211_1_reg_575 <= select_ln211_1_fu_328_p3;
        select_ln211_reg_570 <= select_ln211_fu_320_p3;
        select_ln220_2_reg_548 <= select_ln220_2_fu_290_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        zext_ln214_reg_580[4 : 0] <= zext_ln214_fu_341_p1[4 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln228_fu_411_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001))) begin
        zext_ln228_reg_639[9 : 0] <= zext_ln228_fu_423_p1[9 : 0];
    end
end

always @ (*) begin
    if ((icmp_ln211_fu_238_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln228_fu_411_p2 == 1'd1)) begin
        ap_condition_pp1_exit_iter0_state7 = 1'b1;
    end else begin
        ap_condition_pp1_exit_iter0_state7 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp1_iter1 == 1'b0) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
        ap_idle_pp1 = 1'b1;
    end else begin
        ap_idle_pp1 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_i_0_phi_fu_187_p4 = select_ln220_2_reg_548;
    end else begin
        ap_phi_mux_i_0_phi_fu_187_p4 = i_0_reg_183;
    end
end

always @ (*) begin
    if (((icmp_ln228_reg_630 == 1'd0) & (1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        ap_phi_mux_i_1_phi_fu_231_p4 = i_2_reg_634;
    end else begin
        ap_phi_mux_i_1_phi_fu_231_p4 = i_1_reg_227;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_indvar_flatten_phi_fu_165_p4 = add_ln211_reg_524;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_165_p4 = indvar_flatten_reg_161;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_j_0_phi_fu_220_p4 = j_reg_600;
    end else begin
        ap_phi_mux_j_0_phi_fu_220_p4 = j_0_reg_216;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_k_0_phi_fu_176_p4 = select_ln211_reg_570;
    end else begin
        ap_phi_mux_k_0_phi_fu_176_p4 = k_0_reg_172;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_k_1_phi_fu_209_p4 = add_ln219_reg_590;
    end else begin
        ap_phi_mux_k_1_phi_fu_209_p4 = k_1_reg_205;
    end
end

always @ (*) begin
    if (((icmp_ln211_reg_520 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        ap_phi_mux_x_0_phi_fu_198_p4 = select_ln211_1_reg_575;
    end else begin
        ap_phi_mux_x_0_phi_fu_198_p4 = x_0_reg_194;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state11)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        as_ce0 = 1'b1;
    end else begin
        as_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        as_ce1 = 1'b1;
    end else begin
        as_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp1_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp1_stage1) & (1'b1 == ap_CS_fsm_pp1_stage1))) begin
            bs_address0 = sext_ln241_fu_474_p1;
        end else if (((1'b0 == ap_block_pp1_stage0) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            bs_address0 = sext_ln240_fu_461_p1;
        end else begin
            bs_address0 = 'bx;
        end
    end else begin
        bs_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (1'b0 == ap_block_pp1_stage1_11001)) | ((ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        bs_ce0 = 1'b1;
    end else begin
        bs_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp1_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp1_stage1) & (1'b1 == ap_CS_fsm_pp1_stage1))) begin
            bs_d0 = select_ln243_fu_479_p3;
        end else if (((1'b0 == ap_block_pp1_stage0) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            bs_d0 = odoarr_load_1_reg_654;
        end else begin
            bs_d0 = 'bx;
        end
    end else begin
        bs_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((icmp_ln232_reg_660 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (1'b0 == ap_block_pp1_stage1_11001)) | ((icmp_ln232_reg_660 == 1'd0) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        bs_we0 = 1'b1;
    end else begin
        bs_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp1_stage0) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
        odoarr_address0 = zext_ln232_fu_427_p1;
    end else if (((1'b0 == ap_block_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        odoarr_address0 = zext_ln220_1_fu_397_p1;
    end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        odoarr_address0 = zext_ln218_1_fu_393_p1;
    end else begin
        odoarr_address0 = 'bx;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp1_iter0 == 1'b1)) begin
        if (((1'b0 == ap_block_pp1_stage1) & (1'b1 == ap_CS_fsm_pp1_stage1))) begin
            odoarr_address1 = sext_ln237_fu_448_p1;
        end else if (((1'b0 == ap_block_pp1_stage0) & (1'b1 == ap_CS_fsm_pp1_stage0))) begin
            odoarr_address1 = zext_ln232_1_fu_432_p1;
        end else begin
            odoarr_address1 = 'bx;
        end
    end else begin
        odoarr_address1 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)))) begin
        odoarr_ce0 = 1'b1;
    end else begin
        odoarr_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp1_stage1) & (ap_enable_reg_pp1_iter0 == 1'b1) & (1'b0 == ap_block_pp1_stage1_11001)) | ((ap_enable_reg_pp1_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage0) & (1'b0 == ap_block_pp1_stage0_11001)))) begin
        odoarr_ce1 = 1'b1;
    end else begin
        odoarr_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((ap_enable_reg_pp0_iter1 == 1'b1)) begin
        if (((1'b0 == ap_block_pp0_stage1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
            odoarr_d0 = as_load_1_reg_605;
        end else if (((1'b0 == ap_block_pp0_stage0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            odoarr_d0 = as_q0;
        end else begin
            odoarr_d0 = 'bx;
        end
    end else begin
        odoarr_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln211_reg_520 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((icmp_ln211_reg_520_pp0_iter1_reg == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001)))) begin
        odoarr_we0 = 1'b1;
    end else begin
        odoarr_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((icmp_ln211_fu_238_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((icmp_ln211_fu_238_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((~((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1)) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b0 == ap_block_pp0_stage1_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_pp1_stage0;
        end
        ap_ST_fsm_pp1_stage0 : begin
            if ((~((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1) & (icmp_ln228_fu_411_p2 == 1'd1)) & (1'b0 == ap_block_pp1_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage1;
            end else if (((ap_enable_reg_pp1_iter1 == 1'b0) & (1'b0 == ap_block_pp1_stage0_subdone) & (ap_enable_reg_pp1_iter0 == 1'b1) & (icmp_ln228_fu_411_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end
        end
        ap_ST_fsm_pp1_stage1 : begin
            if ((~((1'b0 == ap_block_pp1_stage1_subdone) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (ap_enable_reg_pp1_iter0 == 1'b0)) & (1'b0 == ap_block_pp1_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage0;
            end else if (((1'b0 == ap_block_pp1_stage1_subdone) & (ap_enable_reg_pp1_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp1_stage1) & (ap_enable_reg_pp1_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp1_stage1;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln211_fu_244_p2 = (ap_phi_mux_indvar_flatten_phi_fu_165_p4 + 10'd1);

assign add_ln218_fu_344_p2 = (mul_ln218_reg_554 + zext_ln214_fu_341_p1);

assign add_ln219_1_fu_262_p2 = (ap_phi_mux_k_0_phi_fu_176_p4 + 10'd25);

assign add_ln219_fu_354_p2 = (select_ln220_reg_534 + 10'd1);

assign add_ln220_1_fu_375_p2 = (mul_ln218_reg_554 + zext_ln220_2_fu_371_p1);

assign add_ln237_fu_443_p2 = ($signed(zext_ln228_reg_639) + $signed(11'd2047));

assign add_ln241_fu_469_p2 = ($signed(cp_1_load_reg_669) + $signed(32'd1));

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_pp1_stage0 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_pp1_stage1 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp1_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp1_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp1_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp1_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp1_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign ap_enable_pp1 = (ap_idle_pp1 ^ 1'b1);

assign as_address0 = zext_ln218_2_fu_349_p1;

assign as_address1 = zext_ln220_3_fu_380_p1;

assign count_fu_502_p2 = (count_1_fu_62 + 32'd1);

assign cp_fu_487_p2 = ($signed(cp_1_load_reg_669) + $signed(32'd2));

assign grp_fu_513_p0 = grp_fu_513_p00;

assign grp_fu_513_p00 = select_ln220_2_reg_548;

assign grp_fu_513_p1 = 10'd25;

assign grp_fu_513_p2 = zext_ln214_reg_580;

assign i_2_fu_417_p2 = (ap_phi_mux_i_1_phi_fu_231_p4 + 10'd1);

assign i_fu_256_p2 = (ap_phi_mux_i_0_phi_fu_187_p4 + 5'd1);

assign icmp_ln211_fu_238_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_165_p4 == 10'd625) ? 1'b1 : 1'b0);

assign icmp_ln214_fu_268_p2 = ((ap_phi_mux_j_0_phi_fu_220_p4 == 5'd25) ? 1'b1 : 1'b0);

assign icmp_ln220_1_fu_314_p2 = ((ap_phi_mux_x_0_phi_fu_198_p4 == 32'd0) ? 1'b1 : 1'b0);

assign icmp_ln220_fu_308_p2 = ((ap_phi_mux_x_0_phi_fu_198_p4 == 32'd1) ? 1'b1 : 1'b0);

assign icmp_ln228_fu_411_p2 = ((ap_phi_mux_i_1_phi_fu_231_p4 == 10'd625) ? 1'b1 : 1'b0);

assign icmp_ln232_fu_437_p2 = ((odoarr_q0 == odoarr_q1) ? 1'b1 : 1'b0);

assign icmp_ln237_fu_456_p2 = ((odoarr_q1 == odoarr_load_1_reg_654) ? 1'b1 : 1'b0);

assign j_fu_385_p2 = (select_ln220_1_reg_540 + 5'd1);

assign mul_ln218_fu_302_p0 = mul_ln218_fu_302_p00;

assign mul_ln218_fu_302_p00 = select_ln220_2_fu_290_p3;

assign mul_ln218_fu_302_p2 = (mul_ln218_fu_302_p0 * $signed('h19));

assign select_ln211_1_fu_328_p3 = ((icmp_ln214_fu_268_p2[0:0] === 1'b1) ? x_fu_250_p2 : ap_phi_mux_x_0_phi_fu_198_p4);

assign select_ln211_fu_320_p3 = ((icmp_ln214_fu_268_p2[0:0] === 1'b1) ? add_ln219_1_fu_262_p2 : ap_phi_mux_k_0_phi_fu_176_p4);

assign select_ln220_1_fu_282_p3 = ((icmp_ln214_fu_268_p2[0:0] === 1'b1) ? 5'd0 : ap_phi_mux_j_0_phi_fu_220_p4);

assign select_ln220_2_fu_290_p3 = ((icmp_ln214_fu_268_p2[0:0] === 1'b1) ? i_fu_256_p2 : ap_phi_mux_i_0_phi_fu_187_p4);

assign select_ln220_3_fu_336_p3 = ((icmp_ln214_reg_529[0:0] === 1'b1) ? icmp_ln220_reg_560 : icmp_ln220_1_reg_565);

assign select_ln220_4_fu_364_p3 = ((select_ln220_3_fu_336_p3[0:0] === 1'b1) ? select_ln220_1_reg_540 : sub_ln220_fu_359_p2);

assign select_ln220_fu_274_p3 = ((icmp_ln214_fu_268_p2[0:0] === 1'b1) ? add_ln219_1_fu_262_p2 : ap_phi_mux_k_1_phi_fu_209_p4);

assign select_ln243_fu_479_p3 = ((icmp_ln237_reg_675[0:0] === 1'b1) ? count_1_fu_62 : 32'd1);

assign sext_ln237_fu_448_p1 = $signed(add_ln237_fu_443_p2);

assign sext_ln240_fu_461_p0 = cp_1_fu_66;

assign sext_ln240_fu_461_p1 = sext_ln240_fu_461_p0;

assign sext_ln241_fu_474_p1 = $signed(add_ln241_fu_469_p2);

assign sub_ln220_fu_359_p2 = ($signed(5'd24) - $signed(select_ln220_1_reg_540));

assign x_fu_250_p2 = (ap_phi_mux_x_0_phi_fu_198_p4 ^ 32'd1);

assign zext_ln214_fu_341_p1 = select_ln220_1_reg_540;

assign zext_ln218_1_fu_393_p1 = select_ln220_reg_534;

assign zext_ln218_2_fu_349_p1 = add_ln218_fu_344_p2;

assign zext_ln220_1_fu_397_p1 = add_ln220_reg_610;

assign zext_ln220_2_fu_371_p1 = select_ln220_4_fu_364_p3;

assign zext_ln220_3_fu_380_p1 = add_ln220_1_fu_375_p2;

assign zext_ln228_fu_423_p1 = ap_phi_mux_i_1_phi_fu_231_p4;

assign zext_ln232_1_fu_432_p1 = ap_phi_mux_i_1_phi_fu_231_p4;

assign zext_ln232_fu_427_p1 = i_2_fu_417_p2;

always @ (posedge ap_clk) begin
    zext_ln214_reg_580[9:5] <= 5'b00000;
    zext_ln228_reg_639[10] <= 1'b0;
end

endmodule //compressf
