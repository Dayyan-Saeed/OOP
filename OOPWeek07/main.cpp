#include <iostream>

#include "Fraction.h"
#include "Supportive.h"

using namespace std;

int main() {

	const int max = 10;
	Fraction f1, f2(4), f3(7, 11), f4(5, 11);

	Fraction r[max];

	r[0] = f1 + f2;

	r[1] = f2 + f3;
	r[2] = f2.add(f3);
	r[3] = f2.operator+(f3);
	
	r[4] = f3 * f4;
	r[5] = f3.mul(f4);
	r[6] = f3.operator*(f4);

	r[7] = add(f2, f3);
	r[8] = mul(f3, f4);
	r[9] = div(f3, f4);

	for (int i = 0; i < max; i++) {

		r[i].display();
	}

	return 0;
}