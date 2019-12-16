#include "Monitor.h"


void Monitor:: monitor()
{
		if(t > 0 && t <= 64)
			cout << result << "\t";
		if(t % 8 == 0)
			cout << endl;
		t++;
}


