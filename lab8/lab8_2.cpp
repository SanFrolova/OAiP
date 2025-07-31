// lab8_2

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double t = 0.5, x[] = { 8, -2.3, -8.4, 5.1, 9 }, y, sum=0;
	while (t <= 3) {
		if (t > 2) {
			for (int i = 0; i < 5; i++) {
				sum += ((x[i] * x[i]) + t);
			}
			y = sum;
			cout << "Для всех t>2, y = " << y << endl;
		}
		else if (t <= 2) { y = cos(t * t);
		cout << "Для всех t<=2, y = " << y << endl;
		}

			t = t + 0.5;
	}
   
}
