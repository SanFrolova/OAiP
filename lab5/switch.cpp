//switch
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int c;
	cout << "Вы хотите завести кота? (1- да, 2-нет)" << endl;
	cin >> c;
	switch (c)
	{
		case 2: cout << "Хотите купить собаку? (1- да, 2-нет)" << endl;
			cin >> c;
			switch (c) {
				case 2: cout << "Одному тоже хорошо" << endl; break;
				case 1: cout << "Хаски? (1-да, 2-нет)" << endl;
					cin >> c;
					switch (c) {
						case 1: cout << "Приятной покупки!" << endl; break;
						case 2: cout << "Берите любую другую" << endl; break;
					}
	
			break;
		    }
		case 1: cout << "Все коты хорошие, берите любого!";


		break;
	}

	return 0;
}