// dop3 Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	char s[500], sr[500];
	char* s2;
	int j = 0;
	cout << "Enret string: "; gets_s(s);
	for (int i = 0; i < 500; i++) {
		if (s[i] == ' ' or s[i] == '\0' or s[i] == ',') {
			j = i - j;
			int h = j, t=0;
			for (int k = 0; k < j; k++, h++) {
				if (h<i){
					*(s2 + k) = *(s+h);
					h++;
				}
			}
			int z = 0;
			for (int n = i; n < 500; n++) {
				if ((s[n] != ' ') or (s[n] != '\0') or (s[n] != ',')) {
					if (z == j) {
						int y = 0;
						int b = z;
						for (int m = 0; m < j; m++) {
							if (s2[m] == s2[b] and (b < (z + j))) {
								y++;
								b++;
							}
						}
						if (y != j) {
							for(int u=j; u<i; u++){
								sr[t] = s[u];
								t++;
							}
						}
					}
					z = 0;
				}
				else {z++;
				}
			}
			j = 0;
		}
		else { j++; }
	}

	cout << sr;

	return 0;
}