// 1) В одномерном массиве, состоящем из вещественных элементов,
// вычислить сумму элементов массива с нечетными номерами и сумму элементов массива, 
// расположенных между первым и последним отрицательными элементами.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	double* pm;
	int n;
	cout << "Введите кол-во эл-в: "; cin >> n;

	if (!(pm = (double*)malloc(n * sizeof(double)))) {
		cout << "Not enough memory";
	}


	cout << "Массив: \n";
	for (int i = 0; i < n; i++) {
		cin >> pm[i];
	}
	
	double t = 0;
	for (int i = 1; i < n; i = i + 2) {
		t += *(pm + i);
	}
	int x, y;
	for (int i = 0; i < n; i++) {
		if (*(pm + i) < 0) {
			x = i;
			break;
		}
	}

	for (int i = n - 1; i >= 0; i--) {
		if (*(pm + i) < 0) {
			y = i;
			break;
		}
	}

	double r = 0;
	for (int i = x + 1; i < y; i++) {
		r += *(pm + i);
	}

	cout << "Cуммa элементов массива с нечетными номерами: " << t << "\nCуммa элементов массива, расположенных между первым и последним отрицательными элементами: " << r;


	free(pm);

	return 0;
}