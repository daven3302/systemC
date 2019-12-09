#include "full_Adder.h"
void full_Adder::full_adder()
{
    a = A.read(); b = B.read(); c[0]= C_in.read();
    a1 = a[0]; b1 = b[0]; cc1 = c[0];
    aa = a1; bb = b1; cc = cc1; 
    u1.A(aa); u1.B(bb); u1.C_in(cc); u1.S(ss); u1.C_out(co);
    s[0] = ss.read(); c[1] = co.read();
    a1 = a[1]; b1 =  b[1]; cc1 = c[1];
    aa = a1; bb = b1; cc = cc1; 
    u2.A(aa); u2.B(bb); u2.C_in(cc); u2.S(ss); u2.C_out(co);
    s[1] = ss.read(); c[2] = co.read();
    a1 = a[2]; b1 =  b[2]; cc1 = c[2];
    aa = a1; bb = b1; cc = cc1; 
    u3.A(aa); u3.B(bb); u3.C_in(cc); u3.S(ss); u3.C_out(co);
    s[2] = ss.read(); c[3] = co.read();
    a1 = a[3]; b1 = b[3]; cc1 = c[3];
    aa = a1; bb = b1; cc = cc1; 
    u4.A(aa); u4.B(bb); u4.C_in(cc); u4.S(ss); u4.C_out(co);
    s[3] = ss.read(); c[4] = co.read();
    co1 = c[4]; C_out = co1; S = s;

}
