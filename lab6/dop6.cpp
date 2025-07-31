// dop6  Из целого числа, введенного с клавиатуры,
// удалить все цифры 3 и 6 и вывести результат на экран.
#include <iostream>
#include <string>
using namespace std;

int main() {
    setlocale(LC_ALL, "RU");
    string n;
    cout << "Введите целое число: "; cin >> n;

    string progres;
    for (char poi: n) {
        if (poi != '3' && poi != '6') {
        progres += poi; }
    }
    cout << "Результат без 3 и 6: " << progres << std::endl;

    return 0;
}





