// dp4
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int r, p, q, f;
	cout << "Введите величины диагоналей ромба: "; cin >> p >> q;
	cout << "\nВведите радиус шара: "; cin >> r;
	f = p * q / sqrt(p * p + q * q);
	 f >= r ? cout << "Шар пройдёт в ромб" : cout << "Шар не пройдёт в ромб";




	return 0;
}