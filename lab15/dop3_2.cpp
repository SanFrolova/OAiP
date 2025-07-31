// 2) Дана матрица размером 4x4. Найти сумму наименьших элементов ее
// нечетных строк и наибольших элементов ее четных строк.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int n;
	cout << "Enter n: "; cin >> n;
	
	double** N = new double* [n];

	for (int i = 0; i < n; i++) {
		N[i] = new double[n];
	}

	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			N[i][k] = -2 + rand() % 15;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}

	double t = 0, r=0;
	for (int i = 0; i < n; i++) {
		int max = N[i][0];
		int min = N[i][0];
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (N[i][j] < min) {
					min = N[i][j];
				}
			}
			t += min;
		}
		else {
			for (int j = 0; j < n; j++) {
				if (N[i][j] > max) {
					max = N[i][j];
				}
			}
			r += max;
		}
	}

	cout << "суммa наименьших элементов ее нечетных строк: " << t << "\nсумма наибольших элементов ее четных строк: " << r;



	delete (N[n]);
	delete (N);

	return 0;
}