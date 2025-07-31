//Найти наименьший элемент главной диагонали матрицы С(n, n) и вывести на печать столбец, в котором он находится. 

#include <iostream>
using namespace std;
int main () {
	setlocale(LC_ALL, "RU");
	const int n = 5;
	int N[n][n];
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			N[i][k] = -10 + rand() % 28;
			cout << N[i][k] << "\t";
		}
		cout << endl;
	}

	int min = N[0][0];
	int t = 0;
	for (int i = 0; i < n; i++) {
		if (N[i][i] < min) {
			min = N[i][i];
			t = i;
		}
	}

	cout << " Стобец : \n";
	for (int i = 0; i < n; i++) {
		cout << N[i][t] << endl;
	}

	return 0;
}