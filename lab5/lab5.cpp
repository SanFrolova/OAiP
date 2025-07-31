#include <iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "RU");
	int k;
	cout << "Введите k : ";
	cin >> k;
	if (k <= 0)
		cout << "Error" << endl;
	else if (k % 10 ==0)
		cout << "Мы нашли " << k << " грибов в лесу" << endl;
	else if (k%10==1)
		cout << "Мы нашли " << k << " гриб в лесу" << endl;
	else if (k % 10 <5)
		cout << "Мы нашли " << k << " гриба в лесу" << endl;
	else if (k % 10 <9)
		cout << "Мы нашли " << k << " грибов в лесу" << endl;
	
		return 0;
}
