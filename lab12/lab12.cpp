// 1) Дан целочисленный массив Х, содержащий n элементов. 
// Найти количество различных чисел среди элементов этого массива.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int n = 10;
	int z = n;
	int M[n], * pM=M;

	
	for (int i = 0; i < n; i++) {
		cout << "Enter element: "; cin >> pM[i];
		for (int k=0; k<=i; k++){
			if (k == i) { continue; }
			if (pM[k] == pM[i]) { z = z - 1; break; }
		}
	
	}
	cout << "количество различных чисел среди элементов этого массива: " << z;


	return 0;
}