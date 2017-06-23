// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="conv,hls_ip_2017_1,{HLS_INPUT_TYPE=cxx,HLS_INPUT_FLOAT=0,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7vx485tffg1761-2,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=1.567000,HLS_SYN_LAT=133,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=15,HLS_SYN_LUT=69}" *)

module conv (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_address0,
        a_ce0,
        a_we0,
        a_d0,
        a_q0,
        a_address1,
        a_ce1,
        a_we1,
        a_d1,
        a_q1,
        b_address0,
        b_ce0,
        b_we0,
        b_d0,
        b_q0,
        b_address1,
        b_ce1,
        b_we1,
        b_d1,
        b_q1,
        c
);

parameter    ap_ST_fsm_state1 = 3'd1;
parameter    ap_ST_fsm_state2 = 3'd2;
parameter    ap_ST_fsm_state3 = 3'd4;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [6:0] a_address0;
output   a_ce0;
output   a_we0;
output  [31:0] a_d0;
input  [31:0] a_q0;
output  [6:0] a_address1;
output   a_ce1;
output   a_we1;
output  [31:0] a_d1;
input  [31:0] a_q1;
output  [6:0] b_address0;
output   b_ce0;
output   b_we0;
output  [31:0] b_d0;
input  [31:0] b_q0;
output  [6:0] b_address1;
output   b_ce1;
output   b_we1;
output  [31:0] b_d1;
input  [31:0] b_q1;
input  [31:0] c;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [3:0] i_1_fu_50_p2;
reg   [3:0] i_1_reg_71;
wire    ap_CS_fsm_state2;
wire   [3:0] j_1_fu_62_p2;
wire    ap_CS_fsm_state3;
reg   [3:0] i_reg_22;
wire   [0:0] exitcond1_fu_56_p2;
reg   [3:0] j_reg_33;
wire   [0:0] exitcond2_fu_44_p2;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_56_p2 == 1'd1))) begin
        i_reg_22 <= i_1_reg_71;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_22 <= 4'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'd0 == exitcond2_fu_44_p2))) begin
        j_reg_33 <= 4'd0;
    end else if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_56_p2 == 1'd0))) begin
        j_reg_33 <= j_1_fu_62_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_71 <= i_1_fu_50_p2;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'd1 == exitcond2_fu_44_p2))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state2) & (1'd1 == exitcond2_fu_44_p2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state2) & (1'd1 == exitcond2_fu_44_p2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond1_fu_56_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_address0 = 7'd0;

assign a_address1 = 7'd0;

assign a_ce0 = 1'b0;

assign a_ce1 = 1'b0;

assign a_d0 = 32'd0;

assign a_d1 = 32'd0;

assign a_we0 = 1'b0;

assign a_we1 = 1'b0;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign b_address0 = 7'd0;

assign b_address1 = 7'd0;

assign b_ce0 = 1'b0;

assign b_ce1 = 1'b0;

assign b_d0 = 32'd0;

assign b_d1 = 32'd0;

assign b_we0 = 1'b0;

assign b_we1 = 1'b0;

assign exitcond1_fu_56_p2 = ((j_reg_33 == 4'd11) ? 1'b1 : 1'b0);

assign exitcond2_fu_44_p2 = ((i_reg_22 == 4'd11) ? 1'b1 : 1'b0);

assign i_1_fu_50_p2 = (i_reg_22 + 4'd1);

assign j_1_fu_62_p2 = (j_reg_33 + 4'd1);

endmodule //conv
