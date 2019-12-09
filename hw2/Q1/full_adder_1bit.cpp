#include "full_adder_1bit.h"

void bit_adder::add()
{
    a = A.read(); b = B.read(); c_in = C_in.read();
    s = a ^ b ^ c_in;
    c_out = (a&b)|(a&c_in)|(b&c_in);
    C_out.write(c_out);
}