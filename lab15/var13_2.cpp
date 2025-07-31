//2) Найти в матрице первую строку, все элементы которой равны нулю. 
//Все элементы столбца с таким же номером уменьшить вдвое.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int n, m;
	cout << "Enter rows: "; cin >> n;
	cout << "Enter columns: "; cin >> m;
	double** N = new double* [n];

	for (int i = 0; i < n; i++) {
		N[i] = new double[m];
	}
	
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < m; k++) /*столбец*/ {
			N[i][k] = 0 + rand() % 2;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}

	int t = 0;
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < m; k++) {
			if (*(*(N + i) + k) == 0) {
				t++;
			}
		}
		if (t == m) {
			int c = i;
			if (c > m) {
				c = c - m;
			}
			for (int u = 0; u < m; u++) {
				*(*(N + u) + i) = (*(*(N + u) + i) / 2);
			}
			break;
		}
		t = 0;
	}

	cout << "Отредактированный массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < m; k++) /*столбец*/ {
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}

	delete (N[m]);
	delete (N);
	return 0;
}