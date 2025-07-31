// dop16
/*
#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double a = 0, b = 4;
    int n = 200;
    double h, x, s = 0, f;
    h = (b - a) / n;
    x = a;

    while (x <= (b - h)) {
        f = x * x + (1 / x);
        s = s + 0.5 * h * (f + (1/(x+h) + pow(x + h, 2)));

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
	double a = 0, b = 4;
	int n = 200, i = 1;
	double h, x, s1 = 0, s2 = 0, S, f;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	while (i < n) {
		f = x * x + (1 / x);
		s2 = s2 + f;
		x = x + h;
		f = x * x + (1 / x);
		s1 = s1 + f;
		x = x + h;


		i++;
	}
	S = (h / 3) * ((a * a + (1 / a)) + 4 * (pow(a + h, 2) + (1 / (a + h))) + 4 * s1 + 2 * s2 + (b*b+(1/b)));
	cout << S;

	return 0;
}*/


#include <iostream>
using namespace std;
int main()
{
	double a = -3, b = 10, e = 0.0001, x;
	while (abs(a - b) > 2 * e) {
		x = (a + b) / 2;
		if ((((x * x) + 4 * x - 2) * ((a * a) + 4 * a - 2)) <= 0) {
			b = x;
		}
		else { a = x; }
	}
	cout << "x = " << x;
	return 0;
}
