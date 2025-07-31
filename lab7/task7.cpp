// task7 Вывести первые 6 натуральных чисел, делителями которых являются числа 3 и 5.

#include <iostream>
using namespace std;
int main()
{ 
    setlocale(LC_ALL, "RU");
    int i = 1;
   
    for (int n = 0; n < 6;) {
        if (i % 3 == 0 and i % 5 == 0) {     
            n++;
            cout << i << endl;
        }    
        i++;
    }
    return 0;
}
