// 2) Задана числовая матрица размером nxm. Определить количество таких элементов матрицы,
// значение каждого из которых больше суммы остальных элементов своего столбца.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int n = 5;
	int N[n][n];
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			*(*(N + i) + k) = -15 + rand() % 28;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}

	int t = 0, l = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) /*row*/ {
			l += *(*(N + k) + i);
		}

		for (int j = 0; j < n; j++) {
			if (*(*(N + j) + i) > l) {
				t++;
			}
		}
		l = 0;
	}

	cout << "Rez: " << t;



	return 0;
}
