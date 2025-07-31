//1. Отредактировать заданное предложение, удаляя из него все слова с чётными номерами.


//#include <iostream>
//#include <stdio.h>
//using namespace std;
//int main() {
//	
//	setlocale(LC_ALL, "RU");
//	char s[500];
//	int k = 1, t = 0;
//	cout << "Enter string : "; gets_s(s);
//    for (int i=0; i<500; i++){
//		
//		if ( s[i] == ' ' ) {
//			k++;
//		}
//		else if (s[i] == '\0') {
//			break;
//		}
//		if (k%2!=0){
//			s[t] = s[i];
//			t++;
//			}
//		
//	}
//	
//	for (int i = 0; i < t; i++) {
//		cout << s[i];
//	}
//
//	return 0;
//}







//2. Дана строка символов, состоящая из произвольного текста, слова разделены пробелами.
// Определить порядковый номер слова, один из символов которого находится на 
// k - й позиции(если на k - ю позицию попадает пробел, то найти номер предыдущего слова).

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	char s[500]; int k;
	cout << "Enter string : "; gets_s(s);
	cout << "Enter k :"; cin >> k;

	int t = 1;
	for (int i = 0; i <k; i++) {
		if (*(s + i) == ' ') {
			t++;
		}
	}

	

	cout << "\n\nПорядковый номер слова, один из символов которого находится на k - й позиции: " << t;


	return 0;
}
