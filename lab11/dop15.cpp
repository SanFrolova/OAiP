 /*dop15 
 1) Используя битовые операции проверить, кратно ли двум число А.*/


#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int A;
	cout << "Введите А: "; cin >> A;
	//int B = 1;
	if (A & 1 == 1) { cout << "Число А не кратно 2"; }
	else { cout << "Число А кратно 2"; }


	return 0;
}


 /*2) Установить в 0 n битов в числе А влево от позиции p*/


//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	char ter[16], ret[16];
//	int n, p, A;
//	cout << "Введите число А: "; cin >> A;
//	cout << "Введите количество битов подлежащих инвертированию n: "; cin >> n;
//	cout << "Введите позицию p: "; cin >> p;
//
//	int k = 0, s = p - n;
//	for (int d = s; d < p; d++) {
//		k += pow(2, d);
//	}
//	k = ~k;
//	_itoa_s(A, ret, 2);
//	cout << "\n\nA: " << ret;
//	A = A & k;
//	_itoa_s(A, ter, 2);
//	cout << "\nИнвертированное A: " << ter;
//
//	return 0;
//}