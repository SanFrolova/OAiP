// lab9 метод трапецией

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    double a = 8, b = 14;
    int n = 200;
    double h, x, s = 0, f;
    h = (b - a) / n;
    x = a;
    
    while (x <= (b-h)){
        f = 2 + x * x * x;
        s = s + 0.5 * h * (f + (2 + pow((x + h), 3)));

    x = x + h;
}
    cout << s;
    return 0;
}



