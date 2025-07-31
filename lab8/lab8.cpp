// lab8

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	double d, q, y[5] = { 5, 7, 0.9, 0.5, 2 };
	float sum = 0;
	d = ((y[0] < y[1]) and (y[0] < y[2]) and (y[0] < y[3]) and (y[0] < y[4]) ? y[0] : 0) + ((y[1] < y[0]) and (y[1] < y[2]) and (y[1] < y[3]) and (y[1] < y[4]) ? y[1] : 0) + ((y[2] < y[1]) and (y[2] < y[0]) and (y[2] < y[3]) and (y[2] < y[4]) ? y[2] : 0) + ((y[4] < y[1]) and (y[4] < y[2]) and (y[4] < y[3]) and (y[0] > y[4]) ? y[4] : 0) + ((y[3] < y[1]) and (y[3] < y[2]) and (y[0] > y[3]) and (y[3] < y[4]) ? y[3] : 0);
	for (int i = 0; i < 5; i++ ) {
		q = (4*y[i] + d);
		sum += q;
}
	cout << sum;
	return 0;
}

