#include "systemc.h"

SC_MODULE(bit_adder)
{
    sc_in<sc_int<1> > A,B;
    sc_in<sc_uint<1> > C_in;
    sc_out<sc_int<1> > S;
    sc_out<sc_uint<1> > C_out;
    sc_int<1> a,b,s;
    sc_uint<1> c_in,c_out;
    void add();
    SC_CTOR(bit_adder)
    {
        SC_METHOD(add);
        sensitive << A << B << C_in;
    }
};