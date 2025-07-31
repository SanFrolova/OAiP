//вар13
// Ввести целое число A. Извлечь 2 бита числа A, 
// начиная с пятого по счету справа, и вставить их в число B, 
// начиная также с пятого бита по счету справа.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int A, B;
	char tem[16];
	cout << "Введите А: "; cin >> A;
	cout << "Введите B: "; cin >> B;
	int mA = 48;
	int s, iB, iA;
	s = A & mA;
	_itoa_s(A, tem, 2);
	cout<<"******************************\n"<<"Число А в 2с/с: "<< tem<< endl;
	_itoa_s(B, tem, 2);
	cout << "Число B в 2с/с: " << tem<< endl;
	iA = A ^ s;
	_itoa_s(iA, tem, 2);
	cout << "Число A с извлеченными битами в 2с/с: " << tem << endl;
	iB = B | s;
	_itoa_s(iB, tem, 2);
	cout << "Число B с вставленными битами в 2с/с: " << tem << endl;
	return 0;
}