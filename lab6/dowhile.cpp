#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float d, c, m = 6, b = 5 * pow(10, 3), k[3] = { 1.7, 5, -2 };
	for (int n = 0; n < 3; n++) {
		for (float a = 2; a < 3; a += 0.2) {
			d = sin(k[n] / a ) / cos(m * b);
			c = d / (pow(d, 2) + 1) / (1 - exp(k[n]));
			cout << "d = " << d << endl;
			cout << "c = " << c << endl << endl;
		}
		
		
	}

	return 0;
}