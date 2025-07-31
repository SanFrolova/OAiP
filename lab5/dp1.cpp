// dop1

#include <iostream>
using namespace std;
int  main()
{
	setlocale(LC_ALL, "RU");
	int a, b, c, s;
	cout << "Введите число а : "; cin >> a;
	cout << "\nВведите число b :"; cin >> b;
	cout << "\nВведите число c :"; cin >> c;
	s = (a % 5 == 0 ? a : 0) + (b % 5 == 0 ? b : 0) + (c % 5 == 0 ? c : 0);
	cout << "Результат :" << s;

	return 0;
}