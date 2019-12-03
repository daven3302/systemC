#include "neutal_network.h"

void neural_network::Neural_network()
{
    sc_int<1> w_one,w_two,z;
    w_one = 10; w_two = -10; z = -5;
    b1.initial(w_one,w_two,z); b1(A,B,O1); 
    b2.initial(w_two,w_one,z); b2(A,B,O2);
    b3.initial(w_one,w_two,z); b3(O1,O2,Y);
}