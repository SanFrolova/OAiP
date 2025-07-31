// dop6 6. Найти непрерывную последовательность положительных чисел,
// сумма элементов в которой максимальная. 
// Максимальный размер массива 100 элементов. Диапазон значений от -100 до 100.
#include <iostream>
#include <time.h>

using namespace std;
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    const int num = 20;
    int mas[num], sum = 0, max = 0, endd=0;
    for (int i = 0; i < num; i++) {
        mas[i] = -100 + rand() % 200;
        cout << i << " элемент массива : " << mas[i] << endl;
    }
    for (int n = 0; n < num; n++) {

        if (mas[n] >= 0) {
            sum += mas[n];
        }
        else {
            if (sum >= max) {
                max = sum;
                sum = 0;
                endd = n-1;
            }
            else { sum = 0; }
        }

    }
    (sum >= max ? cout << "\nНаибольшая сумма подрят идущих положительных элементов: " << sum : cout << "Наибольшая сумма подрят идущих положительных элементов: " << max);
    cout << "\nНепрерывная последовательность положительных чисел заканчивается на " << endd << " элементе";

    return 0;
}