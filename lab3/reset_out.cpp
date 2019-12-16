#include "reset_out.h"

void rst_mon::rst_out()
{
    cout << "reset = " << rst.read() << endl;
}