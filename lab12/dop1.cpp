////1) Ввести целое число N.Выделить из этого числа цифры,
//// кратные m, и записать их в одномерный массив.
//
//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "Ru");
//	const int n = 20;
//	int M[n], N, m;
//	
//	cout << "Введите число : "; 
//	cin >> N;
//	cout << "\nКратность (m) : ";
//	cin >> m;
//	int i = -1;
//	while (N != 0) {
//		int k=N % 10;
//		N = (N - (N % 10))/10;
//		if (k % m==0) { 
//			i++;
//			*(M+i) = k;
//		}
//		else { continue; }
//		
//	}
//	int j = 0;
//	while (j <= i) {
//		cout << j << " элемент: " << *(M+j) << "\t Место в памяти: " << (M+j) << endl;
//		j++;
//	}
//
//
//	return 0;
//}









//2) Заданы два массива по 10 целых чисел в каждом.
// Найти наибольшее среди чисел первого массива, которое не входит во второй массив.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int n = 10;
	int M1[n], M2[n], *pM1=M1, *pM2=M2;
	int max = *(M1+0), rezult=0;

	cout << "Введите элементы первого массива: \n";
	for (int i = 0; i < n; i++) {
		cout << "Enter element: "; cin >> pM1[i];
	}
	cout << "\n\nВведите элементы второго массива: \n";
	for (int i = 0; i < n; i++) {
		cout << "Enter element: "; cin >> pM2[i];
	}
	

	for (int i = 0; i < n; i++) {
		int k = 0;
			for (int j = 0; j < n; j++) {
				if (*(M1+i) != *(M2+j)) { 
					k++; 
				}
				
			}
			if (*(M1 + i) >max and k == 10) {
				max = *(M1 + i);
				rezult = *(M1+i);
			}
			else {
				continue; }
		
	}

	if (rezult != 0) {
		cout << "Наибольшее среди чисел первого массива, которое не входит во второй массив : " << rezult;
	}
	else {
		cout << "Таких чисел нет";
	}
	return 0;
}