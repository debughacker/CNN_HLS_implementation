// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _conv_HH_
#define _conv_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct conv : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<7> > a_address0;
    sc_out< sc_logic > a_ce0;
    sc_in< sc_lv<32> > a_q0;
    sc_out< sc_lv<7> > b_address0;
    sc_out< sc_logic > b_ce0;
    sc_in< sc_lv<32> > b_q0;
    sc_out< sc_lv<32> > c;
    sc_out< sc_logic > c_ap_vld;


    // Module declarations
    conv(sc_module_name name);
    SC_HAS_PROCESS(conv);

    ~conv();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<7> > next_mul_fu_110_p2;
    sc_signal< sc_lv<7> > next_mul_reg_177;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<4> > i_1_fu_122_p2;
    sc_signal< sc_lv<4> > i_1_reg_185;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<4> > j_1_fu_150_p2;
    sc_signal< sc_lv<4> > j_1_reg_203;
    sc_signal< sc_lv<32> > a_load_reg_208;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<32> > b_load_reg_213;
    sc_signal< sc_lv<32> > tmp_fu_156_p2;
    sc_signal< sc_lv<32> > tmp_reg_218;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<4> > i_reg_67;
    sc_signal< sc_lv<1> > exitcond_fu_144_p2;
    sc_signal< sc_lv<7> > phi_mul_reg_78;
    sc_signal< sc_lv<4> > j_reg_90;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<1> > exitcond1_fu_116_p2;
    sc_signal< sc_lv<32> > tmp_2_cast_fu_138_p1;
    sc_signal< sc_lv<32> > sum_fu_32;
    sc_signal< sc_lv<32> > sum_1_fu_160_p2;
    sc_signal< sc_lv<7> > j_cast1_cast_fu_128_p1;
    sc_signal< sc_lv<7> > tmp_2_fu_132_p2;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<7> ap_const_lv7_B;
    static const sc_lv<4> ap_const_lv4_B;
    static const sc_lv<4> ap_const_lv4_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_address0();
    void thread_a_ce0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_address0();
    void thread_b_ce0();
    void thread_c();
    void thread_c_ap_vld();
    void thread_exitcond1_fu_116_p2();
    void thread_exitcond_fu_144_p2();
    void thread_i_1_fu_122_p2();
    void thread_j_1_fu_150_p2();
    void thread_j_cast1_cast_fu_128_p1();
    void thread_next_mul_fu_110_p2();
    void thread_sum_1_fu_160_p2();
    void thread_tmp_2_cast_fu_138_p1();
    void thread_tmp_2_fu_132_p2();
    void thread_tmp_fu_156_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
