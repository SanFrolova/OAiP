// dop3

/*#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double a = 1, b = 6;
    int n = 200;
    double h, x, s = 0, f;
    h = (b - a) / n;
    x = a;

    while (x <= (b - h)) {
        f = 1 + x * x * x;
        s = s + 0.5 * h * (f + (1 + pow(x + h, 3)));

        x = x + h;
    }
    cout << s;
    return 0;
}



#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double a = 1, b = 6;
	int n = 200, i = 1;
	double h, x, s1 = 0, s2 = 0, S, f;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) {
		f = 1 + x * x * x;
		s2 = s2 + f;
		x = x + h;
		f = 1 + x * x * x;
		s1 = s1 + f;
		x = x + h;


		i++;
	}
	S = (h / 3) * ((1 + a * a * a) + 4 * (1 + pow(a + h, 3)) + 4 * s1 + 2 * s2 + (1 + b * b * b));
	cout << S;

	return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
	double a = -2, b = 2, e = 0.0001, x;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((x*x*x + 2*x - 1) * (a * a * a + 2 * a - 1) <= 0) {
			b = x;
		}
		else { a = x; }
	}
	cout << "x = " << x;
	return 0;
}
