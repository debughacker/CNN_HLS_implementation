// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.1
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "conv.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic conv::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic conv::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> conv::ap_ST_fsm_state1 = "1";
const sc_lv<6> conv::ap_ST_fsm_state2 = "10";
const sc_lv<6> conv::ap_ST_fsm_state3 = "100";
const sc_lv<6> conv::ap_ST_fsm_state4 = "1000";
const sc_lv<6> conv::ap_ST_fsm_state5 = "10000";
const sc_lv<6> conv::ap_ST_fsm_state6 = "100000";
const sc_lv<32> conv::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> conv::ap_const_lv32_1 = "1";
const sc_lv<32> conv::ap_const_lv32_2 = "10";
const sc_lv<32> conv::ap_const_lv32_3 = "11";
const sc_lv<32> conv::ap_const_lv32_4 = "100";
const sc_lv<4> conv::ap_const_lv4_0 = "0000";
const sc_lv<1> conv::ap_const_lv1_1 = "1";
const sc_lv<7> conv::ap_const_lv7_0 = "0000000";
const sc_lv<32> conv::ap_const_lv32_5 = "101";
const sc_lv<1> conv::ap_const_lv1_0 = "0";
const sc_lv<7> conv::ap_const_lv7_B = "1011";
const sc_lv<4> conv::ap_const_lv4_B = "1011";
const sc_lv<4> conv::ap_const_lv4_1 = "1";
const bool conv::ap_const_boolean_1 = true;

conv::conv(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_2_cast_fu_138_p1 );

    SC_METHOD(thread_a_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_116_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_116_p2 );

    SC_METHOD(thread_b_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_2_cast_fu_138_p1 );

    SC_METHOD(thread_b_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_c);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_116_p2 );
    sensitive << ( sum_fu_32 );

    SC_METHOD(thread_c_ap_vld);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_116_p2 );

    SC_METHOD(thread_exitcond1_fu_116_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_67 );

    SC_METHOD(thread_exitcond_fu_144_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_reg_90 );

    SC_METHOD(thread_i_1_fu_122_p2);
    sensitive << ( i_reg_67 );

    SC_METHOD(thread_j_1_fu_150_p2);
    sensitive << ( j_reg_90 );

    SC_METHOD(thread_j_cast1_cast_fu_128_p1);
    sensitive << ( j_reg_90 );

    SC_METHOD(thread_next_mul_fu_110_p2);
    sensitive << ( phi_mul_reg_78 );

    SC_METHOD(thread_sum_1_fu_160_p2);
    sensitive << ( tmp_reg_218 );
    sensitive << ( sum_fu_32 );

    SC_METHOD(thread_tmp_2_cast_fu_138_p1);
    sensitive << ( tmp_2_fu_132_p2 );

    SC_METHOD(thread_tmp_2_fu_132_p2);
    sensitive << ( phi_mul_reg_78 );
    sensitive << ( j_cast1_cast_fu_128_p1 );

    SC_METHOD(thread_tmp_fu_156_p2);
    sensitive << ( a_load_reg_208 );
    sensitive << ( b_load_reg_213 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond_fu_144_p2 );
    sensitive << ( exitcond1_fu_116_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "conv_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, b_q0, "(port)b_q0");
    sc_trace(mVcdFile, c, "(port)c");
    sc_trace(mVcdFile, c_ap_vld, "(port)c_ap_vld");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, next_mul_fu_110_p2, "next_mul_fu_110_p2");
    sc_trace(mVcdFile, next_mul_reg_177, "next_mul_reg_177");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_1_fu_122_p2, "i_1_fu_122_p2");
    sc_trace(mVcdFile, i_1_reg_185, "i_1_reg_185");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, j_1_fu_150_p2, "j_1_fu_150_p2");
    sc_trace(mVcdFile, j_1_reg_203, "j_1_reg_203");
    sc_trace(mVcdFile, a_load_reg_208, "a_load_reg_208");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, b_load_reg_213, "b_load_reg_213");
    sc_trace(mVcdFile, tmp_fu_156_p2, "tmp_fu_156_p2");
    sc_trace(mVcdFile, tmp_reg_218, "tmp_reg_218");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, i_reg_67, "i_reg_67");
    sc_trace(mVcdFile, exitcond_fu_144_p2, "exitcond_fu_144_p2");
    sc_trace(mVcdFile, phi_mul_reg_78, "phi_mul_reg_78");
    sc_trace(mVcdFile, j_reg_90, "j_reg_90");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, exitcond1_fu_116_p2, "exitcond1_fu_116_p2");
    sc_trace(mVcdFile, tmp_2_cast_fu_138_p1, "tmp_2_cast_fu_138_p1");
    sc_trace(mVcdFile, sum_fu_32, "sum_fu_32");
    sc_trace(mVcdFile, sum_1_fu_160_p2, "sum_1_fu_160_p2");
    sc_trace(mVcdFile, j_cast1_cast_fu_128_p1, "j_cast1_cast_fu_128_p1");
    sc_trace(mVcdFile, tmp_2_fu_132_p2, "tmp_2_fu_132_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("conv.hdltvin.dat");
    mHdltvoutHandle.open("conv.hdltvout.dat");
}

conv::~conv() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
}

void conv::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_144_p2.read(), ap_const_lv1_1))) {
        i_reg_67 = i_1_reg_185.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_67 = ap_const_lv4_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_116_p2.read(), ap_const_lv1_0))) {
        j_reg_90 = ap_const_lv4_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        j_reg_90 = j_1_reg_203.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_144_p2.read(), ap_const_lv1_1))) {
        phi_mul_reg_78 = next_mul_reg_177.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        phi_mul_reg_78 = ap_const_lv7_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        sum_fu_32 = sum_1_fu_160_p2.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        sum_fu_32 = ap_const_lv32_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        a_load_reg_208 = a_q0.read();
        b_load_reg_213 = b_q0.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_1_reg_185 = i_1_fu_122_p2.read();
        next_mul_reg_177 = next_mul_fu_110_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_1_reg_203 = j_1_fu_150_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        tmp_reg_218 = tmp_fu_156_p2.read();
    }
}

void conv::thread_a_address0() {
    a_address0 =  (sc_lv<7>) (tmp_2_cast_fu_138_p1.read());
}

void conv::thread_a_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        a_ce0 = ap_const_logic_1;
    } else {
        a_ce0 = ap_const_logic_0;
    }
}

void conv::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void conv::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void conv::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void conv::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void conv::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void conv::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void conv::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_116_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void conv::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void conv::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_116_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void conv::thread_b_address0() {
    b_address0 =  (sc_lv<7>) (tmp_2_cast_fu_138_p1.read());
}

void conv::thread_b_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        b_ce0 = ap_const_logic_1;
    } else {
        b_ce0 = ap_const_logic_0;
    }
}

void conv::thread_c() {
    c = sum_fu_32.read();
}

void conv::thread_c_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_116_p2.read()))) {
        c_ap_vld = ap_const_logic_1;
    } else {
        c_ap_vld = ap_const_logic_0;
    }
}

void conv::thread_exitcond1_fu_116_p2() {
    exitcond1_fu_116_p2 = (!i_reg_67.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_67.read() == ap_const_lv4_B);
}

void conv::thread_exitcond_fu_144_p2() {
    exitcond_fu_144_p2 = (!j_reg_90.read().is_01() || !ap_const_lv4_B.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_90.read() == ap_const_lv4_B);
}

void conv::thread_i_1_fu_122_p2() {
    i_1_fu_122_p2 = (!i_reg_67.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i_reg_67.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv::thread_j_1_fu_150_p2() {
    j_1_fu_150_p2 = (!j_reg_90.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j_reg_90.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void conv::thread_j_cast1_cast_fu_128_p1() {
    j_cast1_cast_fu_128_p1 = esl_zext<7,4>(j_reg_90.read());
}

void conv::thread_next_mul_fu_110_p2() {
    next_mul_fu_110_p2 = (!phi_mul_reg_78.read().is_01() || !ap_const_lv7_B.is_01())? sc_lv<7>(): (sc_biguint<7>(phi_mul_reg_78.read()) + sc_biguint<7>(ap_const_lv7_B));
}

void conv::thread_sum_1_fu_160_p2() {
    sum_1_fu_160_p2 = (!tmp_reg_218.read().is_01() || !sum_fu_32.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp_reg_218.read()) + sc_biguint<32>(sum_fu_32.read()));
}

void conv::thread_tmp_2_cast_fu_138_p1() {
    tmp_2_cast_fu_138_p1 = esl_zext<32,7>(tmp_2_fu_132_p2.read());
}

void conv::thread_tmp_2_fu_132_p2() {
    tmp_2_fu_132_p2 = (!phi_mul_reg_78.read().is_01() || !j_cast1_cast_fu_128_p1.read().is_01())? sc_lv<7>(): (sc_biguint<7>(phi_mul_reg_78.read()) + sc_biguint<7>(j_cast1_cast_fu_128_p1.read()));
}

void conv::thread_tmp_fu_156_p2() {
    tmp_fu_156_p2 = (!b_load_reg_213.read().is_01() || !a_load_reg_208.read().is_01())? sc_lv<32>(): sc_bigint<32>(b_load_reg_213.read()) * sc_bigint<32>(a_load_reg_208.read());
}

void conv::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_116_p2.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond_fu_144_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXXXX";
            break;
    }
}

void conv::thread_hdltv_gen() {
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
        mHdltvinHandle << " , " <<  " \"b_q0\" :  \"" << b_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c\" :  \"" << c.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"c_ap_vld\" :  \"" << c_ap_vld.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

