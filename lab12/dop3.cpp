// 1) Заданы два массива А и В. Подсчитать в них количество элементов,
// меньших значения t, и первым на печать вывести массив, имеющий наибольшее их количество.

//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	const int n = 10, k = 8;
//	int t, A[n], B[k];
//
//	cout << "Введите t: "; cin >> t;
//	int a=0, b=0;
//
//	cout << "Введите элементы массива A: \n";
//	for (int i = 0; i < n; i++) {
//		cout << "Enter element: "; cin >> *(A+i);
//	}
//
//	cout << "Введите элементы массива B: \n";
//	for (int i = 0; i < k; i++) {
//		cout << "Enter element: "; cin >> *(B + i);
//	}
//
//	for (int i = 0; i < n; i++) {
//		if (*(A + i) < t) {
//			a++;
//		}
//
//		if (i < k) {
//			if (*(B + i) < t) {
//				b++;
//			}
//		}
//		else { continue; }
//	}
//
//	cout << "\nКол-во элементов меньших t в массиве A: "<< a;
//	cout << "\nКол-во элементов меньших t в массиве B: " << b;
//	if (a > b) {
//		cout << "\n\nМассив A: ";
//		for (int i = 0; i < n; i++) {
//			cout << i << " элемент: " << *(A + i) << "\t Место в памяти: " << (A + i) << endl;
//		}
//	}
//	else if (a == b) {
//		cout << "\n\nВ массивах равное кол-ко элементов меньших t ";
//	}
//	else {
//		cout << "\n\nМассив B: ";
//		for (int i = 0; i < n; i++) {
//			cout << i << " элемент: " << *(B + i) << "\t Место в памяти: " << (B + i) << endl;
//		}
//	}
//
//	return 0;
//}
//







// 2) Даны два массива С и В, каждый из m элементов.Подсчитать количество таких чисел k, для которых :
//C[k] > D[k] и C[k] < D[k], С[k] = D[k].

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int m = 10;
	int C[m], B[m];
	cout << "Введите элементы массива C: \n";
	for (int i = 0; i < m; i++) {
		cout << "Enter element: "; cin >> *(C+i);
	}
	
	cout << "Введите элементы массива B: \n";
	for (int i = 0; i < m; i++) {
		cout << "Enter element: "; cin >> *(B + i);
	}

	int a=0, b=0, c=0;
	for (int k = 0; k < m; k++) {
		if (*(C+k)>*(B+k)){
			a++;
		}
		else if (*(C + k) < *(B + k)) {
			b++;
		}
		else{
			c++;
		}
	}

	cout << "\nКоличество чисел, удовлетворяющих условию C[k] > B[k]" << a;
	cout << "\nКоличество чисел, удовлетворяющих условию C[k] < B[k]" << b;
	cout << "\nКоличество чисел, удовлетворяющих условию C[k] = B[k]" << c;

	return 0;
}