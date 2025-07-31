//fir-tree var3
#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "RU");

	using namespace std;
	char a, p = ' ';
	cout << "Введите символ: ";
	cin >> a;


	cout << setw(14) << setfill(p) << p;
	cout << setw(1) << setfill(a) << a << endl;
	cout << setw(13) << setfill(p) << p;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(13) << setfill(p) << p;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(5) << setfill(p) << p;
	cout << setw(19) << setfill(a) << a << endl;

	cout << setw(12) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	return 0;
}