#include "Adder_1bit.h"


void Adder_1bit::adder_1bit()
{
    a = A; b = B; c_in = C_in;
    s = a|b|c_in;
    c_out = (a&b)|(a&c_in)|(b&c_in);
    S = s; C_out = c_out;
}
