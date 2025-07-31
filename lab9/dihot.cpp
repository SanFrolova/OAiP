// dihot

#include <iostream>
using namespace std;
int main()
{
	double a=-2, b=0, e = 0.0001, x;
	while (abs(a-b)>2*e){
	x = (a + b) / 2;
	if (((pow(e, x) + x - 4) * (pow(e, a) + a - 4)) <= 0) {
		b = x;
	}
	else {a = x; }
}
	cout << "x = " << x;
	return 0;
}
