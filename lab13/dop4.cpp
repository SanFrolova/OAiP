// dop4 4.Отредактировать заданное предложение, 
// удаляя из него все слова с нечетными номерами и переворачивая слова с четными номерами.
// Пример: HOW DO YOU DO преобразовать в OD OD.

#include <iostream>
#include <stdio.h>
using namespace std;
int main() {

	setlocale(LC_ALL, "RU");
	char s[500];
	int k = 1, t = 0;
	cout << "Enter string : "; gets_s(s);
	for (int i = 0; i < 500; i++) {

		if (s[i] == ' ') {
			k++;
		}
		else if (s[i] == '\0') {
			break;
		}
		if (k % 2 != 0) {
			s[t] = s[i];
			t++;
		}
	}
	int j = 0;
	for (int i = 0; i <= 500; i++) {
		if (s[i] == ' ' or s[i]=='\0') {
			int p = j;
			for (int u = 0; u < p; u++) {	
				int l = (i - j) + u;
				char r = *(s+l);
				int h = i-1 - u;
				*(s+l) = *(s+h);
				*(s+h) = r;
				p--;
			}
			j = 0;
		}
		else { j++; }
	}

	for (int i = 0; i < t; i++) {
		cout << s[i];
	}

	return 0;
}
