// dop1 Имеются результаты n ежедневных измерений количества выпавших осадков.
// За какую из недель (отрезок времени длиной 7 дней), считая с начала периода измерений,
// выпало наибольшее количество осадков?

#include <iostream>
#include <time.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    setlocale(LC_ALL, "RU");
    const int h = 23;
    int mas[h], max=0, sum=0, kipr =0;
    for (int i = 0; i < h; i++) {
        mas[i] = 0 + rand() % 100;
        cout << i+1 <<" день, осадки :" << mas[i] << endl;
    }
    for (int k = 1; k <= (h / 7); k++) {
        for (int n = (7*k-7); n < (7 * k); n++) {
            sum += mas[n];
                if (sum >= max){
                    max = sum;
                    kipr = k;
                }
        }
        sum = 0;
    }
    printf("За %d неделю выпало больше всего осадков : %d", kipr, max);
    return 0;
}

