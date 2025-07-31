// 1) В одномерном массиве, состоящем из вещественных элементов,
// вычислить сумму элементов массива с нечетными номерами и сумму элементов массива, 
// расположенных между первым и последним отрицательными элементами.

#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	float* pm;
	int n;
	cout << "Введите кол-во эл-в: "; cin >> n;

	if (!(pm = (float*)malloc(n * sizeof(float)))) {
		cout << "Not enough memory";
	}

	int t = 0;
	for (int i = 0; i < n; i++) {
		*(pm + i) = -10 + rand() % 21;
	}

	cout << "Массив: ";
	for (int i = 0; i < n; i++) {
		cout << *(pm + i) << "\t";
	}

	for (int i = 2; i < n; i = i + 2) {
		t += *(pm + i);
	}

	int y, x;
	for (int i = 0; i < n; i++) {
		if (*(pm + i) < 0) {
			y = i;
			break;
		}
	}

	for (int i = (n-1); i >=0 ; i--) {
		if (*(pm + i) < 0) {
			x = i;
			break;
		}
	}

	int r = 0;
	for (int i = y + 1; i < x; i++) {
		r += *(pm + i);
	}
	free(pm);

	cout << "\nCумма элементов массива с нечетными номерами: " << t << "\nCуммa элементов массива, расположенных между первым и последним отрицательными элементами: " << r;


	return 0;
}