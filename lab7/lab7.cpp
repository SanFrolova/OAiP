// lab7 var13

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double b = 3, c = 6 * pow(10, -4), a = 6, t, x;
	for (double i = 8; i <= 24; i = i + 4) {
		t = (a * i) / ((a * a - b) * exp(a + 1));
		x = t > (5 * c) ? 4.8 * pow(10, -3) + i * a : a + i * i * t;
		cout << "\n\nt = " << t << endl << "x = " << x;
	}



	return 0;
}
