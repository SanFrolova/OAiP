// 1) Дан массив А размера n, не содержащий нулевых элементов.
// Преобразовать массив А так, чтобы вначале шли положительные элементы,
// а затем отрицательные. Дополнительные массивы не использовать.


//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	const int n = 10;
//	int A[n], x=-1, y=n;
//	for (int i = 0; i < n; i++) {
//		cout << "Enter element: "; cin >> *(A+i);
//	}
//	int j = 0;
//
//	while (j < y) {
//		if (*(A + j) > 0) {
//			x++;
//			*(A+x) = *(A + j);
//			j++;
//		}
//
//		else{
//			y--;
//			int p = *(A + j);
//			*(A+j) = *(A + y);
//			*(A + y) = p;
//		}	
//	}
//
//	int i = 0;
//	while (i < n) {
//		cout << i << " элемент :\t" << *(A + i) << "\t Место в памяти: " << (A + i) << endl;
//		i++;
//	}
//
//
//	return 0;
//}
//
//
//




// 2) Определить, содержится ли наибольший элемент массива F в массиве D?


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Ru");
	int F[9] = { 5,6,7,8,9,1,2,3,4 }, D[11] = { -4,2,6,-12, 7, 1, 1, 9, 3, 4, 2 };
	int max, * pm = &max;
	*pm = *(F);
	for (int i = 1; i < 9; i++) {
		if ((*(F + i)) > *pm) {
			*pm = *(F + i);
		}
		else { continue; }
	}
	cout << "Наибольший элемент массива F: " << *pm << "\nМесто в памяти: "<< pm;
	
	for (int i = 0; i < 11; i++) {
		if (*(D + i) == *pm) {
			cout << "\n\nНаибольший элемент массива F содержится в массиве D";
			break;
		}
		else { continue; }
	}

	return 0;
}