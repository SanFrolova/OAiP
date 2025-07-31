// 2) Найти в матрице первый столбец, все элементы которого положительны. 
// Знаки элементов предыдущего столбца изменить на противоположные.

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
			N[i][k] = -2 + rand() % 15;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}
	int l = 0;
	
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if (N[j][i] > 0) {
				l++;
			}
		}
		if (l == n) {
			for (int g = 0; g < n; g++) {
				N[g][i+1] = -(N[g][i+1]);
			}
			break;
		}
		l = 0;
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