// 2) Разделить массив на две части, поместив в первую элементы,
// меньшие среднего арифметического их суммы, а во вторую  большие

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int n = 10;
	double M[n], p = 0, * pM = M, M2[n], *pM2=M2;
	int x = 0, y = n-1;

	for (int i = 0; i < n; i++) {
		cout << "Enter element: "; cin >> pM[i];
		p += pM[i];
	}
	p = p / n;

	for (int i = 0; i < n; i++) {
		if (*(M+i) < p) {
			pM2[x] = pM[i];
			x++;
		}
		else { 
			pM2[y] = pM[i];
			y--;
		}
	}

	cout <<"\nСреднее арифметическая суммы элементов: "<<p<< "\n\nПерестроенный массив: \n";
	int i=0;
	while (i < n) {
		cout << i << " элемент :\t" << *(M2 + i) << "\t Место в памяти: " << (M2 + i)<< endl;
		i++;
	}


	return 0;
}