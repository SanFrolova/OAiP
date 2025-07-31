// dop_3 Из заданного предложения удалить те слова, которые уже встречались в предложении раньше.

#include <iostream>
using namespace std;
int main(){
    //This is a test sentence, and this test is just a test of removing duplicate words.
    const int size = 1024,
        size2 = 20;
    char s[size];
    char s2[size][size2] = { '\0' };

    int a = 0;

    cout << "Enter string :  ";
    cin.getline(s, 1024);

    char* p = s;


    while (*p) {

        char* p2 = p;

        while (*p && *p2 != ',' && *p2 != ' ') {
            p2++;
        }

        size_t s3 = p2 - p;
        for (int i = 0; i < s3; i++) {
            *(*(s2 + a) + i) = *(p + i);
        }
        *(*(s2 + a) + s3) = '\0';

        a++;
        if (*p2) {
            p = *p2 == ',' ? p2 + 2 : p2 + 1;
        }
        else p = p2;
    }

    for (int i = 0; i < a; i++) {
        for (int j = i + 1; j < a; j++) {
            if (strcmp(s2[i], s2[j]) == 0) {
                for (int k = j; k < a - 1; k++) {
                    int l = 0;
                    while (s2[k + 1][l] != '\0') {
                        s2[k][l] = s2[k + 1][l];
                        l++;
                    }
                    s2[k][l] = '\0';
                }
                a--;
                j--;
            }
        }
    }

    for (int i = 0; i < a; i++) {
        cout << s2[i] << ' ';
    }

}