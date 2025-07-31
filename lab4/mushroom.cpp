//mushroom var16
#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "RU");

	using namespace std;
	char a, p = ' ';
	cout << "Введите символ: ";
	cin >> a;


	cout << setw(11) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a<<endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(11) << setfill(a) << a << endl;
	cout << setw(6) << setfill(p) << p;
	cout << setw(15) << setfill(a) << a<< endl;
	cout << setw(4) << setfill(p) << p;
	cout << setw(19) << setfill(a) << a << endl;
	cout << setw(3) << setfill(p) << p;
	cout << setw(21) << setfill(a) << a << endl;
	cout << setw(3) << setfill(p) << p;
	cout << setw(21) << setfill(a) << a << endl;
	cout << setw(5) << setfill(p) << p;
	cout << setw(17) << setfill(a) << a << endl;
	cout << setw(11) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(11) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(11) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(3) << setfill(a) << a << endl;

	return 0;
}