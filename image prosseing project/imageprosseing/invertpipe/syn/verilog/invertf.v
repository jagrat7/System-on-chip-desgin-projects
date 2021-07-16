// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="invertf,hls_ip_2019_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=9.634000,HLS_SYN_LAT=20003,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=1,HLS_SYN_FF=117,HLS_SYN_LUT=218,HLS_VERSION=2019_1}" *)

module invertf (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        ai_address0,
        ai_ce0,
        ai_q0,
        bi_address0,
        bi_ce0,
        bi_we0,
        bi_d0
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_pp0_stage0 = 4'd2;
parameter    ap_ST_fsm_pp0_stage1 = 4'd4;
parameter    ap_ST_fsm_state6 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [13:0] ai_address0;
output   ai_ce0;
input  [31:0] ai_q0;
output  [13:0] bi_address0;
output   bi_ce0;
output   bi_we0;
output  [31:0] bi_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg ai_ce0;
reg bi_ce0;
reg bi_we0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [13:0] indvar_flatten_reg_78;
reg   [6:0] i_0_reg_89;
reg   [6:0] j_0_reg_100;
wire   [0:0] icmp_ln324_fu_111_p2;
reg   [0:0] icmp_ln324_reg_181;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state2_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] icmp_ln324_reg_181_pp0_iter1_reg;
wire   [13:0] add_ln324_fu_117_p2;
reg   [13:0] add_ln324_reg_185;
reg    ap_enable_reg_pp0_iter0;
wire   [6:0] select_ln328_fu_135_p3;
reg   [6:0] select_ln328_reg_190;
wire   [6:0] select_ln328_1_fu_143_p3;
reg   [6:0] select_ln328_1_reg_196;
wire   [63:0] zext_ln328_2_fu_157_p1;
reg   [63:0] zext_ln328_2_reg_202;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state3_pp0_stage1_iter0;
wire    ap_block_state5_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
wire   [6:0] j_fu_161_p2;
reg   [6:0] j_reg_212;
reg   [31:0] ai_load_reg_217;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state2;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage1_subdone;
reg   [13:0] ap_phi_mux_indvar_flatten_phi_fu_82_p4;
wire    ap_block_pp0_stage0;
reg   [6:0] ap_phi_mux_i_0_phi_fu_93_p4;
reg   [6:0] ap_phi_mux_j_0_phi_fu_104_p4;
wire    ap_block_pp0_stage1;
wire   [0:0] icmp_ln326_fu_129_p2;
wire   [6:0] i_fu_123_p2;
wire   [13:0] grp_fu_172_p3;
wire   [6:0] grp_fu_172_p0;
wire   [7:0] grp_fu_172_p1;
wire   [6:0] grp_fu_172_p2;
wire    ap_CS_fsm_state6;
reg   [3:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [13:0] grp_fu_172_p00;
wire   [13:0] grp_fu_172_p20;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

invertf_mac_muladbkb #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 7 ),
    .din1_WIDTH( 8 ),
    .din2_WIDTH( 7 ),
    .dout_WIDTH( 14 ))
invertf_mac_muladbkb_U1(
    .din0(grp_fu_172_p0),
    .din1(grp_fu_172_p1),
    .din2(grp_fu_172_p2),
    .dout(grp_fu_172_p3)
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
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_condition_pp0_exit_iter0_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        i_0_reg_89 <= select_ln328_1_reg_196;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_0_reg_89 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        indvar_flatten_reg_78 <= add_ln324_reg_185;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        indvar_flatten_reg_78 <= 14'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        j_0_reg_100 <= j_reg_212;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        j_0_reg_100 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        add_ln324_reg_185 <= add_ln324_fu_117_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ai_load_reg_217 <= ai_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        icmp_ln324_reg_181 <= icmp_ln324_fu_111_p2;
        icmp_ln324_reg_181_pp0_iter1_reg <= icmp_ln324_reg_181;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        j_reg_212 <= j_fu_161_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_fu_111_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln328_1_reg_196 <= select_ln328_1_fu_143_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage0_11001) & (icmp_ln324_fu_111_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        select_ln328_reg_190 <= select_ln328_fu_135_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1))) begin
        zext_ln328_2_reg_202[13 : 0] <= zext_ln328_2_fu_157_p1[13 : 0];
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        ai_ce0 = 1'b1;
    end else begin
        ai_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((icmp_ln324_fu_111_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state2 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state2 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
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
    if (((icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_i_0_phi_fu_93_p4 = select_ln328_1_reg_196;
    end else begin
        ap_phi_mux_i_0_phi_fu_93_p4 = i_0_reg_89;
    end
end

always @ (*) begin
    if (((icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_82_p4 = add_ln324_reg_185;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_82_p4 = indvar_flatten_reg_78;
    end
end

always @ (*) begin
    if (((icmp_ln324_reg_181 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage0))) begin
        ap_phi_mux_j_0_phi_fu_104_p4 = j_reg_212;
    end else begin
        ap_phi_mux_j_0_phi_fu_104_p4 = j_0_reg_100;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        bi_ce0 = 1'b1;
    end else begin
        bi_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (icmp_ln324_reg_181_pp0_iter1_reg == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        bi_we0 = 1'b1;
    end else begin
        bi_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln324_fu_111_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (icmp_ln324_fu_111_p2 == 1'd1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((~((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage1_subdone)) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b0 == ap_block_pp0_stage1_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln324_fu_117_p2 = (ap_phi_mux_indvar_flatten_phi_fu_82_p4 + 14'd1);

assign ai_address0 = zext_ln328_2_fu_157_p1;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd3];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_state2_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state3_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign bi_address0 = zext_ln328_2_reg_202;

assign bi_d0 = (32'd255 - ai_load_reg_217);

assign grp_fu_172_p0 = grp_fu_172_p00;

assign grp_fu_172_p00 = select_ln328_1_reg_196;

assign grp_fu_172_p1 = 14'd100;

assign grp_fu_172_p2 = grp_fu_172_p20;

assign grp_fu_172_p20 = select_ln328_reg_190;

assign i_fu_123_p2 = (ap_phi_mux_i_0_phi_fu_93_p4 + 7'd1);

assign icmp_ln324_fu_111_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_82_p4 == 14'd10000) ? 1'b1 : 1'b0);

assign icmp_ln326_fu_129_p2 = ((ap_phi_mux_j_0_phi_fu_104_p4 == 7'd100) ? 1'b1 : 1'b0);

assign j_fu_161_p2 = (select_ln328_reg_190 + 7'd1);

assign select_ln328_1_fu_143_p3 = ((icmp_ln326_fu_129_p2[0:0] === 1'b1) ? i_fu_123_p2 : ap_phi_mux_i_0_phi_fu_93_p4);

assign select_ln328_fu_135_p3 = ((icmp_ln326_fu_129_p2[0:0] === 1'b1) ? 7'd0 : ap_phi_mux_j_0_phi_fu_104_p4);

assign zext_ln328_2_fu_157_p1 = grp_fu_172_p3;

always @ (posedge ap_clk) begin
    zext_ln328_2_reg_202[63:14] <= 50'b00000000000000000000000000000000000000000000000000;
end

endmodule //invertf
