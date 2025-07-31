// dop1  В последовательности из n целых чисел найти и вывести значение суммы четных элементов.

#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RU");
	int n, sum=0;
	int y;
	cout << "Введите количество чисел последовательности: ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Введите число: "; cin >> y;
		if (i % 2 == 0) { sum += y; }
	}
	
	
	cout << sum;
}


