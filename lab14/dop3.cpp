// 3) Путем перестановки элементов квадратной вещественной матрицы добиться того, 
// чтобы ее максимальный элемент находился в левом верхнем углу,
// следующий по величине  в позиции (2, 2), следующий  в позиции (3, 3) и т. д., 
// заполнив таким образом всю главную диагональ.

#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int n = 3;
	int N[n][n], M[n*n];
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			*(*(N + i) + k) = -10 + rand() % 81;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl << endl;
	}
	cout << endl;
	int k = 0;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			M[k++] = N[i][j]; 
		} 
	} 
	int max = M[0];
	for (int i = 0; i < n * n; i++) {
		for (int j = 0; j < n*n; ++j) {
			if (M[j] < M[j + 1]) {
				int t = M[j];
				M[j] = M[j + 1];
				M[j + 1] = t;
			}
		}
	}

	for (int i = 0; i < n; ++i) { 
		N[i][i] = M[i]; 
	}
	
	k = n; 
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i != j) { 
				N[i][j] = M[k++]; 
			} 
		} 
	} 

	cout << "Отредактированный массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl;
	}
 
	return 0;
}