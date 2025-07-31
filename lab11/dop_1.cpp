//dop1
// 1) Ввести целое A и посчитать, сколько нулей в числе начиная с третьего бита по 13, включая эти биты.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int A, rez=0;
	char ty[16];
	cout << "Введите А: "; cin >> A;
	for (int k = 2; k < 12; k++) {
		int B = 1 << k;
		if ((A & B) >> k == 0) { rez += 1; }
		else { continue; }
	}
	_itoa_s(A, ty, 2);
	cout << "A : " << ty << endl;
	cout << "Нулей в A начиная с третьего бита по 13: " << rez;
	return 0;
}



//#include <iostream>
//using namespace std;
//
//int main() {
//	setlocale(LC_ALL, "RU");
//	int n, A, p, iA, m, B, q, iB;
//	char ter[16];
//
//	cout << "А : "; cin >> A;
//	_itoa_s(A, ter, 2);
//	cout << "A : " << ter << endl;
//	cout << "С какой позиции инвертировать? p : "; cin >> p;
//	cout << "Сколько бит? n : "; cin >> n;
//	cout << "B : "; cin >> B;
//	_itoa_s(B, ter, 2);
//	cout << "B : " << ter << endl;
//	cout << "С какой позиции в B заменить? q : "; cin >> q;
//	cout << "Сколько бит заменить? m : "; cin >> m;
//	iA = ((1 << n) - 1) << ((p - n) - 1);
//	_itoa_s(A ^ iA, ter, 2);
//	cout << "Результат инверсии в А :" << ter << endl;
//
//
//
//	iB = ((1 << m) - 1) << ((q - m) - 1);
//
//	int rez;
//	rez= (A ^ iA >> ((p - n) - 1)) & ((1 << m) - 1);
//
//
//	B = (B & ~iB) | (rez << ((q - m) - 1));
//	_itoa_s(B, ter, 2);
//	cout << "Результат замены в B : " << ter << endl;
//
//	return 0;
//}