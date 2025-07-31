// var6 star
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");

	using namespace std;
	char a, p = ' ';
	cout << "      Введите символ: ";
	cin >> a;

	cout << setw(15) << setfill(p) << p;
	cout << setw(1) << setfill(a) << a << endl;
	cout << setw(14) << setfill(p) << p;
	cout << setw(3) << setfill(a) << a << endl;
	cout << setw(13) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(12) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(2) << setfill(p) << p;
	cout << setw(27) << setfill(a) << a << endl;
	cout << setw(5) << setfill(p) << p;
	cout << setw(21) << setfill(a) << a << endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(15) << setfill(a) << a << endl;
	cout << setw(9) << setfill(p) << p;
	cout << setw(13) << setfill(a) << a <<endl;
	cout << setw(8) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a;
	cout << setw(1) << setfill(p) << p;
	cout << setw(7) << setfill(a) << a << endl;
	cout << setw(7) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a ;
	cout << setw(7) << setfill(p) << p;
	cout << setw(5) << setfill(a) << a << endl;
	cout << setw(6) << setfill(p) << p;
	cout << setw(4) << setfill(a) << a ;
	cout << setw(11) << setfill(p) << p;
	cout << setw(4) << setfill(a) << a << endl;
	cout << setw(5) << setfill(p) << p;
	cout << setw(2) << setfill(a) << a;
	cout << setw(17) << setfill(p) << p;
	cout << setw(2) << setfill(a) << a << endl;
	
	
	return 0;

}