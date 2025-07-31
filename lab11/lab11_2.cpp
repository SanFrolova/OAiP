//Var13_2
//Инвертировать в 1 n битов в числе А вправо от позиции p
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	char ter[16], ret[16];
	int n, p, A;
	cout << "Введите число А: "; cin >> A;
	cout << "Введите количество битов подлежащих инвертированию n: "; cin >> n;
	cout << "Введите позицию p: "; cin >> p;
	
	int k=0, s = p - n;
	for (int d = s; d < p; d++) {
		k += pow(2, d);
	}
	_itoa_s(A, ret, 2);
	cout << "\n\nA: " << ret;
	A = A | k;
	_itoa_s(A, ter, 2);
	cout << "\nИнвертированное A: " << ter;

	return 0;
}