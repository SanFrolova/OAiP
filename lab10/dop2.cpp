// dop2 Подсчитать количество пар соседних элементов массива с одинаковыми значениями

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	const int k = 10;
	int M[k], n=1, rez=0;
	for (int i = 0; i < k; i++) {
		std::cout << "Введите " << i << " элемент массива: "; 
		cin >> M[i];
	}
	while (n < k) {
		(M[n] == M[n - 1] ? rez++ : rez = rez + 0);
		n++;
	} 
	std::cout << "\nколичество пар соседних элементов массива с одинаковыми значениями : " << rez;
	return 0;
}

