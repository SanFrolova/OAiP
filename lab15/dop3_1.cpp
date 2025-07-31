// 1) В одномерном массиве, состоящем из п вещественных элементов, 
// вычислить произведение отрицательных элементов массива и сумму положительных 
// элементов массива, расположенных до максимального элемента.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
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

	double t = 1;
	for (int i = 0; i < n; i++) {
		if (*(pm + i) < 0) {
			t *= *(pm + i);
		}
	}

	double max = *(pm);
	int h = 0;
	for (int i = 0; i < n; i++) {
		if (*(pm + i) > max) {
			max = *(pm + i);
			h = i;
		}
	}

	double r = 0;
	for (int i = 0; i < h; i++) {
		if (*(pm + i) > 0) {
			r += *(pm + i);
		}
	 }

	cout << "произведение отрицательных элементов массива : " << t << "\nсуммa положительных элементов массива, расположенных до максимального элемента : " << r;
	free(pm);

	return 0;
}