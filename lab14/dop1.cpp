//1) Дана квадратная матрица порядка 2n, элементы которой фо рмируются
//случайным образом и находятся в пределах от 10 до 10. Получить новую матрицу,
//переставляя ее блоки размера n×n в соответствии со схемой.

#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int n = 2;
	double N[2 * n][2 * n], M[2*n][2*n];
	cout << "Массив: " << endl;
	for (int i = 0; i < 2*n; i++) /*строка*/ {
		for (int k = 0; k < 2*n; k++) /*столбец*/ {
			*(*(N + i) + k) = -10 + rand() % 21;
			cout << *(*(N + i) + k) << "\t";
		}
		cout << endl<<endl;
	}
	cout << endl;

	//int t = 0;
	//int b = n;
	//int t2 = 0;
	//int b2 = n;
	//for (int i = 0; i < 4; i++) /*блок*/ {
	//	for (int y = 0; y < n; y++) {
	//		for (int p=0; p<n; p++){
	//	
	//			for (int k = t; k < b; k++) {
	//				for (int l = t2; l < b2; l++) {
	//					M[i][y][p] = N[k][l];
	//				}
	//					
	//			}
	//			
	//		}
	//	}
	//	if (i == 0) { t2 = 0; b2 = n; t = n; b = 2 * n; }
	//			if (i == 1) { t2 = n; b2 = 2 * n; t = 0; b = n; }
	//			if (i == 2) { t2 = n; b2 = n*2; t = n; b = 2 * n; }
	//}

	//cout << "Вывод элементов блочного массива : \n\n";
	//for (int i1 = 0; i1 < 4; i1++) {
	//	for (int i2 = 0; i2 < n; i2++) {
	//		for (int i3 = 0; i3 < n; i3++) {

	//			cout << M[i1][i2][i3] << "\t";


	//		}
	//		cout << endl;
	//	}
	//	cout << endl << endl;
	//}

	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n; k++) {
			M[n + i][n + k] = N[i][k];	
		}
	}
	for (int i = n; i < 2*n; i++) {
		for (int k = 0; k < n; k++) {
			M[i-n][n + k] = N[i][k];
		}
	}
	for (int i = n; i < 2 * n; i++) {
		for (int k = n; k < n*2; k++) {
			M[i - n][k-n] = N[i][k];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int k = n; k < n*2; k++) {
			M[n + i][k-n] = N[i][k];
		}
	}

	cout << "Массив: " << endl;
	for (int i = 0; i < 2 * n; i++) /*строка*/ {
		for (int k = 0; k < 2 * n; k++) /*столбец*/ {
			cout << *(*(M + i) + k) << "\t";
		}
		cout << endl<< endl;
	}
	cout << endl;


	return 0;
}