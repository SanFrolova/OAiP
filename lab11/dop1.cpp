// dop1 
// 1) Ввести целое A и посчитать, сколько нулей в числе начиная с третьего бита по 13, включая эти биты.

//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	int A, rez=0;
//	char ty[16];
//	cout << "Введите А: "; cin >> A;
//	for (int k = 2; k < 12; k++) {
//		int B = 1 << k;
//		if ((A & B) >> k == 0) { rez += 1; }
//		else { continue; }
//	}
//	_itoa_s(A, ty, 2);
//	cout << "A : " << ty << endl;
//	cout << "Нулей в A начиная с третьего бита по 13: " << rez;
//	return 0;
//}




// 2) Инвертировать в числе А n битов вправо от позиции p, заменить ими m битов числа В, начиная с позиции q


//#include <iostream>
//using namespace std;
//int main() {
//	setlocale(LC_ALL, "RU");
//	char ter[16], ret[16], ret2[16], ter2[16];
//	int n, p, A, m, q, B, j;
//	cout << "Введите число А: "; cin >> A;
//	cout << "Введите позицию p: "; cin >> p;
//	cout << "Введите количество битов подлежащих инвертированию n: "; cin >> n;
//	cout << "\n\nВведите B: "; cin >> B;
//	cout << "Введите позицию q: "; cin >> q;
//	cout << "Введите количество битов подлежащих инвертированию m: "; cin >> m;
//
//	int k = 0, s = p - n;
//	for (int d = s; d < p; d++) {
//		k += pow(2, d);
//	}
//	
//	j = A & k;
//	j = ~j;
//	_itoa_s(A, ret, 2);
//	cout << "\n\nA: " << ret;
//	k = ~k;
//	A = A & k;
//	A = A + j;
//	_itoa_s(A, ter, 2);
//	cout << "\nИнвертированное A: " << ter;
//
//	k = 0;
//	for (int d = (q - m); d < q; d++) {
//		k += pow(2, d);
//	}
//	_itoa_s(B, ret2, 2);
//	cout << "\n\nB: " << ret2;
//	//j = A & k;
//	k = ~k;
//	B = B & k;
//	if (p > q) { j = j << (p - q); }
//	if (p < q) { j= j >> (q - p); }
//	B = B + j;
//	_itoa_s(B, ter2, 2);
//	cout << "\nA после замены: " << ter2;
//
//	return 0;
//}


#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	int n, A, p, iA, m, B, q, iB;
	char ter[16];

	cout << "А : "; cin >> A;
	_itoa_s(A, ter, 2);
	cout << "A : " << ter << endl;
	cout << "С какой позиции инвертировать? p : "; cin >> p;
	cout << "Сколько бит? n : "; cin >> n;
	cout << "B : "; cin >> B;
	_itoa_s(B, ter, 2);
	cout << "B : " << ter << endl;
	cout << "С какой позиции в B заменить? q : "; cin >> q;
	cout << "Сколько бит заменить? m : "; cin >> m;
	iA = ((1 << n) - 1) << ((p-n) - 1);
	_itoa_s(A ^ iA, ter, 2);
	cout << "Результат инверсии:" << ter << endl;

	

	iB = ((1 << m) - 1) << ((q-m) - 1);

	int rez = (A ^ iA >> ((p-n) - 1)) & ((1 << m) - 1);


	B = (B & ~iB) | (rez << ((q-m) - 1));
	_itoa_s(B, ter, 2);
	cout << "Результат замены в B : " << ter << endl;

	return 0;
}