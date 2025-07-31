// lab9par
#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double a = 8, b = 14;
	int n = 200, i=1;
	double h, x, s1 = 0, s2 = 0, S, f;
	h = (b - a) / (2*n);
	x = a + 2*h;
	while (i < n) {
		f = 2 + x * x * x;
		s2 = s2 + f;
		x = x + h;
		f = 2 + x * x * x;
		s1 = s1 + f;
		x = x + h;


		i++;
	}
	S = (h/3) * ((2 + a * a * a) + 4 * (2 + pow(a + h, 3)) + 4 * s1 + 2*s2+(2 + b * b * b));
	cout << S;

	return 0;
}
