//dop3
// 1) Ввести целое число A. Инвертировать все биты с 2 по 14, включая эти биты. Вывести результат.

//#include <iostream>
//using namespace std;
//
//int main()
//{
//	setlocale(LC_ALL, "RU");
//	char ter[16];
//	int A, iA = 16382;
//	cout << "А : "; cin >> A;
//	_itoa_s(A, ter, 2);
//	cout << "A : " << ter << endl;
//	int i = 0;
//	_itoa_s(A ^ (((1 << 14) - 0x1) << 1), ter, 2);
//	cout << "res : " << ter << endl;
//	_itoa_s((((1 << 14) - 0x1) << 1), ter, 2);
//	cout << "" << ter << endl;
//	return 0;
//}



// 2) Инвертировать n битов в числе А влево от позиции p, заменить ими m битов числа В, начиная с позиции q.
	#include <iostream>
	using namespace std;

	int main()
	{
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
		iA = (((1 << n) - 1) << p - 1);
		_itoa_s(A ^ iA, ter, 2);
		cout << "Результат инверсии в А :" << ter << endl;


		iB = ((1 << m) - 1) << (q - 1);

		int rez;
		rez = (A ^ iA >> (p - 1)) & ((1 << m) - 1);

		B = (B & ~iB) | (rez << (q - 1));
		_itoa_s(B, ter, 2);
		cout << "Результат замены в B : " << ter << endl;


		return 0;
	}