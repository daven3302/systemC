#include "Monitor.h"

void Monitor:: monitor(){
	a = A; b = B; s = S;
	cout << "A\tB\tS\tC_in\tC_out" << endl;
	for(int i = 3 ; i >= 0 ; i--)
		cout << a[i];
	cout << "\t";
	for(int i = 3 ; i >= 0 ; i--)
		cout << b[i];
	cout << "\t";
	for(int i = 3 ; i >= 0 ; i--)
		cout << s[i];
	cout << "\t";
	cout << C_in << "\t" << C_out << "\t" << endl;
	/**************************/
	
}
