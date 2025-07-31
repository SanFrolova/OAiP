// dop3 
// В последовательности из n вещественных чисел найти количество элементов, 
// стоящих между минимальным и максимальным значениями.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	float min= 0, a, max=0; 
	int n, imin, imax; 
	cout << "Введите количество чисел последовательности: "; cin >> n;
int i = 1;
	while ( i <= n){
	cout << "Введите число последовательности: "; cin >> a;
	if (a < min) {
		min = a;
		imin = i;
	}
	if (a > max) {
		max = a;
		imax= i;
	}
	i++;
}
	int rez;
	rez = abs(imin - imax);
	cout << "Количество элементов, стоящих между минимальным и максимальным значениями: " << rez;

	return 0;
}

