// var13_2 Задан массив из k символов латинского алфавита.
// Вывести на экран все символы, которые входят в этот массив по одному разу

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    const int n = 10;
    char latin[10]; int l = 0;
  
    for (int i = 0; i < n; i++) {
        latin[i] = (65 + rand() % 26) ;
        cout << latin[i] << " ";
    }
    cout << "\n\nПо одному разу: " << endl;

    for (int i = 0; i < 52; i++) {

        for (int k = 0; k < 52; k++) {
            if (k == i) continue;
            if (latin[i] == latin[k]) {
                l++; 
                break;
            }
        }
        if (l == 0) cout << latin[i]<< " ";
        l = 0;


    }

        return 0;
}

