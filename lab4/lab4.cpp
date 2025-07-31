//heart var13
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	setlocale(LC_CTYPE, "RU");

	char a, p=' ';
	cout<< "Введите символ: ";
	cin >> a ;
	
	cout << setw(7) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a;
	cout << setw(5) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(5) << setfill(p) <<p ;
	cout << setw(9) << setfill(a) << a;
	cout << setw(1) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(4) << setfill(p) << p;
	cout << setw(21) << setfill(a) << a<<endl;
	cout << setw(3) << setfill(p) << p;
	cout << setw(23) << setfill(a) << a << endl;
	cout << setw(4) << setfill(p) << p;
	cout << setw(21) << setfill(a) << a <<endl;
	cout << setw(6) << setfill(p) << p;
	cout << setw(17) << setfill(a) << a << endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(13) << setfill(a) << a << endl;
	cout << setw(10) << setfill(p) << p;
	cout << setw(9) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(14) << setfill(p) << p;
	cout << setw(1) << setfill(a) << a << endl;

	return 0;
}