//1) Var 14)  Дана матрица А(n, n) и целое число m. Преобразовать матрицу по правилу:
// строку с номером m сделать столбцом с номером m, а столбец с номером m сделать строкой с номером m. 

#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int n = 5;
	int N[n][n], B[n];
	cout << "Массив: " << endl;
	for (int i = 0; i < n; i++) /*строка*/ {
		for (int k = 0; k < n; k++) /*столбец*/ {
			N[i][k] = 0 + rand() % 25;
			cout << N[i][k]<< "\t";
		}
		cout << endl;
	}

	int m;
	cout << "Enter m : "; cin >> m;
	if (m<=n and m>0){
		m--;
		for (int i = 0; i < n; i++) {
			B[i] = N[m][i];
			N[m][i] = N[i][m];
			N[i][m] = B[i];
		}

		cout << "Отредактированный массив: " << endl;
		for (int i = 0; i < n; i++) /*строка*/ {
			for (int k = 0; k < n; k++) /*столбец*/ {
				cout << N[i][k] << "\t";
			}
			cout << endl;
		}


	}
	else { 
		cout << "Error"; 
	}



	return 0;
}