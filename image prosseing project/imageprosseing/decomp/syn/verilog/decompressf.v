// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2019.1
// Copyright (C) 1986-2019 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="decompressf,hls_ip_2019_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020-clg484-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.279000,HLS_SYN_LAT=-1,HLS_SYN_TPT=none,HLS_SYN_MEM=2,HLS_SYN_DSP=0,HLS_SYN_FF=333,HLS_SYN_LUT=587,HLS_VERSION=2019_1}" *)

module decompressf (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        c_address0,
        c_ce0,
        c_q0,
        c_address1,
        c_ce1,
        c_q1,
        dc_address0,
        dc_ce0,
        dc_we0,
        dc_d0
);

parameter    ap_ST_fsm_state1 = 7'd1;
parameter    ap_ST_fsm_state2 = 7'd2;
parameter    ap_ST_fsm_state3 = 7'd4;
parameter    ap_ST_fsm_state4 = 7'd8;
parameter    ap_ST_fsm_state5 = 7'd16;
parameter    ap_ST_fsm_state6 = 7'd32;
parameter    ap_ST_fsm_state7 = 7'd64;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] c_address0;
output   c_ce0;
input  [31:0] c_q0;
output  [9:0] c_address1;
output   c_ce1;
input  [31:0] c_q1;
output  [9:0] dc_address0;
output   dc_ce0;
output   dc_we0;
output  [31:0] dc_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg c_ce0;
reg c_ce1;
reg dc_ce0;
reg dc_we0;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire    ap_CS_fsm_state2;
wire   [0:0] icmp_ln283_fu_221_p2;
reg   [31:0] c_load_reg_406;
wire    ap_CS_fsm_state3;
reg   [31:0] c_load_1_reg_411;
wire   [31:0] j_3_fu_265_p2;
reg   [31:0] j_3_reg_416;
wire   [30:0] k_fu_280_p2;
wire    ap_CS_fsm_state4;
wire   [31:0] add_ln291_fu_291_p2;
wire   [0:0] icmp_ln286_fu_275_p2;
wire   [31:0] h_fu_297_p2;
wire   [9:0] add_ln303_2_fu_303_p2;
reg   [9:0] add_ln303_2_reg_439;
wire    ap_CS_fsm_state5;
wire   [9:0] add_ln303_3_fu_309_p2;
reg   [9:0] add_ln303_3_reg_444;
wire   [4:0] i_fu_321_p2;
reg   [4:0] i_reg_452;
wire   [0:0] icmp_ln303_fu_327_p2;
reg   [0:0] icmp_ln303_reg_457;
wire   [0:0] icmp_ln298_fu_315_p2;
wire   [4:0] j_fu_343_p2;
reg   [4:0] j_reg_465;
wire    ap_CS_fsm_state6;
wire   [0:0] icmp_ln300_fu_337_p2;
wire   [9:0] add_ln303_1_fu_377_p2;
reg   [9:0] add_ln303_1_reg_475;
wire   [31:0] x_fu_383_p2;
reg   [9:0] unr1d_address0;
reg    unr1d_ce0;
reg    unr1d_we0;
wire   [31:0] unr1d_q0;
reg   [31:0] j_0_reg_118;
reg  signed [31:0] h_0_reg_130;
reg  signed [31:0] j_1_reg_142;
reg   [30:0] k_0_reg_152;
reg   [31:0] x_0_reg_163;
reg   [4:0] i_0_reg_175;
reg   [9:0] phi_mul_reg_186;
reg   [9:0] phi_mul1_reg_198;
reg   [4:0] j_2_reg_210;
wire    ap_CS_fsm_state7;
wire  signed [63:0] sext_ln286_fu_233_p1;
wire  signed [63:0] sext_ln289_fu_238_p1;
wire  signed [63:0] sext_ln289_1_fu_286_p1;
wire   [63:0] zext_ln303_fu_355_p1;
wire   [63:0] zext_ln303_2_fu_389_p1;
wire   [31:0] or_ln286_fu_227_p2;
wire   [0:0] empty_fu_247_p2;
wire   [30:0] trunc_ln289_fu_243_p1;
wire   [30:0] smax_fu_253_p3;
wire   [31:0] smax_cast_fu_261_p1;
wire   [31:0] zext_ln286_fu_271_p1;
wire   [9:0] zext_ln300_fu_333_p1;
wire   [9:0] add_ln303_fu_349_p2;
wire   [4:0] sub_ln303_fu_360_p2;
wire   [4:0] select_ln303_fu_366_p3;
wire   [9:0] zext_ln303_1_fu_373_p1;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'd1;
end

decompressf_unr1d #(
    .DataWidth( 32 ),
    .AddressRange( 625 ),
    .AddressWidth( 10 ))
unr1d_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(unr1d_address0),
    .ce0(unr1d_ce0),
    .we0(unr1d_we0),
    .d0(c_load_1_reg_411),
    .q0(unr1d_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln286_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        h_0_reg_130 <= h_fu_297_p2;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        h_0_reg_130 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln283_fu_221_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        i_0_reg_175 <= 5'd0;
    end else if (((icmp_ln300_fu_337_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        i_0_reg_175 <= i_reg_452;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln286_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        j_0_reg_118 <= j_3_reg_416;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        j_0_reg_118 <= 32'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln286_fu_275_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_1_reg_142 <= add_ln291_fu_291_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_142 <= j_0_reg_118;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        j_2_reg_210 <= j_reg_465;
    end else if (((icmp_ln298_fu_315_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        j_2_reg_210 <= 5'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln286_fu_275_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        k_0_reg_152 <= k_fu_280_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        k_0_reg_152 <= 31'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln283_fu_221_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        phi_mul1_reg_198 <= 10'd0;
    end else if (((icmp_ln300_fu_337_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        phi_mul1_reg_198 <= add_ln303_2_reg_439;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln283_fu_221_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        phi_mul_reg_186 <= 10'd0;
    end else if (((icmp_ln300_fu_337_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        phi_mul_reg_186 <= add_ln303_3_reg_444;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln283_fu_221_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        x_0_reg_163 <= 32'd0;
    end else if (((icmp_ln300_fu_337_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
        x_0_reg_163 <= x_fu_383_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln300_fu_337_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state6))) begin
        add_ln303_1_reg_475 <= add_ln303_1_fu_377_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        add_ln303_2_reg_439 <= add_ln303_2_fu_303_p2;
        add_ln303_3_reg_444 <= add_ln303_3_fu_309_p2;
        i_reg_452 <= i_fu_321_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        c_load_1_reg_411 <= c_q1;
        c_load_reg_406 <= c_q0;
        j_3_reg_416 <= j_3_fu_265_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((icmp_ln298_fu_315_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        icmp_ln303_reg_457 <= icmp_ln303_fu_327_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        j_reg_465 <= j_fu_343_p2;
    end
end

always @ (*) begin
    if (((icmp_ln298_fu_315_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
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
    if (((icmp_ln298_fu_315_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        c_ce0 = 1'b1;
    end else begin
        c_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        c_ce1 = 1'b1;
    end else begin
        c_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        dc_ce0 = 1'b1;
    end else begin
        dc_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state7)) begin
        dc_we0 = 1'b1;
    end else begin
        dc_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        unr1d_address0 = zext_ln303_fu_355_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        unr1d_address0 = sext_ln289_1_fu_286_p1;
    end else begin
        unr1d_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state6))) begin
        unr1d_ce0 = 1'b1;
    end else begin
        unr1d_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((icmp_ln286_fu_275_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        unr1d_we0 = 1'b1;
    end else begin
        unr1d_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((icmp_ln283_fu_221_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            if (((icmp_ln286_fu_275_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state5 : begin
            if (((icmp_ln298_fu_315_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state5))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            if (((icmp_ln300_fu_337_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state6))) begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state7;
            end
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign add_ln291_fu_291_p2 = ($signed(j_1_reg_142) + $signed(32'd1));

assign add_ln303_1_fu_377_p2 = (phi_mul1_reg_198 + zext_ln303_1_fu_373_p1);

assign add_ln303_2_fu_303_p2 = (phi_mul1_reg_198 + 10'd25);

assign add_ln303_3_fu_309_p2 = (phi_mul_reg_186 + 10'd25);

assign add_ln303_fu_349_p2 = (zext_ln300_fu_333_p1 + phi_mul_reg_186);

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign c_address0 = sext_ln286_fu_233_p1;

assign c_address1 = sext_ln289_fu_238_p1;

assign dc_address0 = zext_ln303_2_fu_389_p1;

assign dc_d0 = unr1d_q0;

assign empty_fu_247_p2 = (($signed(c_q0) > $signed(32'd0)) ? 1'b1 : 1'b0);

assign h_fu_297_p2 = ($signed(h_0_reg_130) + $signed(32'd2));

assign i_fu_321_p2 = (i_0_reg_175 + 5'd1);

assign icmp_ln283_fu_221_p2 = (($signed(j_0_reg_118) < $signed(32'd625)) ? 1'b1 : 1'b0);

assign icmp_ln286_fu_275_p2 = (($signed(zext_ln286_fu_271_p1) < $signed(c_load_reg_406)) ? 1'b1 : 1'b0);

assign icmp_ln298_fu_315_p2 = ((i_0_reg_175 == 5'd25) ? 1'b1 : 1'b0);

assign icmp_ln300_fu_337_p2 = ((j_2_reg_210 == 5'd25) ? 1'b1 : 1'b0);

assign icmp_ln303_fu_327_p2 = ((x_0_reg_163 == 32'd0) ? 1'b1 : 1'b0);

assign j_3_fu_265_p2 = (smax_cast_fu_261_p1 + j_0_reg_118);

assign j_fu_343_p2 = (j_2_reg_210 + 5'd1);

assign k_fu_280_p2 = (k_0_reg_152 + 31'd1);

assign or_ln286_fu_227_p2 = (h_0_reg_130 | 32'd1);

assign select_ln303_fu_366_p3 = ((icmp_ln303_reg_457[0:0] === 1'b1) ? j_2_reg_210 : sub_ln303_fu_360_p2);

assign sext_ln286_fu_233_p1 = $signed(or_ln286_fu_227_p2);

assign sext_ln289_1_fu_286_p1 = j_1_reg_142;

assign sext_ln289_fu_238_p1 = h_0_reg_130;

assign smax_cast_fu_261_p1 = smax_fu_253_p3;

assign smax_fu_253_p3 = ((empty_fu_247_p2[0:0] === 1'b1) ? trunc_ln289_fu_243_p1 : 31'd0);

assign sub_ln303_fu_360_p2 = ($signed(5'd24) - $signed(j_2_reg_210));

assign trunc_ln289_fu_243_p1 = c_q0[30:0];

assign x_fu_383_p2 = (x_0_reg_163 ^ 32'd1);

assign zext_ln286_fu_271_p1 = k_0_reg_152;

assign zext_ln300_fu_333_p1 = j_2_reg_210;

assign zext_ln303_1_fu_373_p1 = select_ln303_fu_366_p3;

assign zext_ln303_2_fu_389_p1 = add_ln303_1_reg_475;

assign zext_ln303_fu_355_p1 = add_ln303_fu_349_p2;

endmodule //decompressf
