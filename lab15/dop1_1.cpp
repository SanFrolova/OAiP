//1) В одномерном массиве, состоящем из n вещественных элементов, 
// вычислить количество отрицательных элементов массива и сумму модулей элементов, 
// расположенных после минимального по модулю элемента.

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

	int t = 0;
	for (int i = 0; i < n; i++) {
		if (*(pm + i) < 0) {
			t++;
		}
	}

	double min = abs(*pm);
	int k = 0;
	for (int i = 0; i < n; i++) {
		if (abs(*(pm + i)) < min) {
			min = *(pm + i);
			k++;
		}
	}

	double r = 0;
	for (int i = n-1; i >k; i--) {
		r += abs(*(pm + i));
	}

	cout << "количество отрицательных элементов массива : " << t << "\nсуммa модулей элементов, расположенных после минимального по модулю элемента : " << r;
	free(pm);

	return 0;
}