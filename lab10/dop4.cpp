// dop4 В массиве M, размером k, много совпадающих элементов.
// Найти количество различных элементов в нем (не упорядочивая массив)

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU"); //набор языкового стандратра
	const int k = 20;
	int M[k], m[k], n = 1;
	for (int i = 0; i < k; i++) {
		cout << "Введите " << i << " элемент массива: "; cin >> M[i];
	}
	m[0] = M[0];
	while (n < k) {
		for(int l=0; l<n; l++){
			if (M[n] = m[l]) { n++; }
			else {}
		}

	}
	return 0;
}

