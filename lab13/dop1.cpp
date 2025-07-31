// dop1 В заданной последовательности слов найти все слова, имеющие заданное окончание.
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	char s[500], ok[5];
	cout << "Enter string :"; gets_s(s);
	cout << "Введите окончание: "; gets_s(ok);
	int k = 0;
	for (int i = 499; i >= 0; i--) {
		if ((*(s + i) >= 32 and *(s + i) <= 47) or (*(s + i) >= 58 and *(s + i) <= 64) or *(s + i) == '\0') {
			if (strlen(ok)==3) {
				if (*(s + i - 1) == ok[2]) {
					if (*(s + i - 2) == ok[1]) {
						if (*(s	+ i - 3) == ok[0]) {
							k++;
						}
					}
				}
			}
		

		if (strlen(ok) == 2) {
			if (*(s + i - 1) == ok[1]) {
				if (*(s + i - 2) == ok[0]) {
					k++;
				}
			}
		}

		if (strlen(ok) == 1) {
			if (*(s + i - 1) == ok[0]) {
					k++;
				}
			}
		}
	}

	cout << "Кол-во всех слов, имеющих заданное окончание : " << k;



	return 0;
}
