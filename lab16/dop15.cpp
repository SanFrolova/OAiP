//1. В массиве, состоящем из вещественных элементов, 
// вычислить количество элементов массива, больших некоторого заданного числа С, 
// и произведение элементов массива, расположенных после максимального по модулю элемента.
// 2. Написать программу, преобразующую строку, состоящую из строчных букв, 
// в строку, состоящую из заглавных букв до первого пробела.
#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;


void task1(double* A, int size, double C) {
    int count = 0;
    double maxAbs = 0;
    int maxIndex = -1;

    for (int i = 0; i < size; i++) {
        if (A[i] > C) {
            count++;
        }
        if (fabs(A[i]) > maxAbs) {
            maxAbs = fabs(A[i]);
            maxIndex = i;
        }
    }

    double product = 1;
    bool hasElementsAfterMax = false;
    for (int i = maxIndex + 1; i < size; i++) {
        product *= A[i];
        hasElementsAfterMax = true;
    }

    cout << "Количество элементов больше " << C << ": " << count << endl;
    if (hasElementsAfterMax) {
        cout << "Произведение элементов после максимального по модулю: " << product << endl;
    }
    else {
        cout << "Нет элементов после максимального по модулю." << endl;
    }
}


void task2(char* str) {
    bool toUpper = true;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {  
            toUpper = false;
        }
        if (toUpper && str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A'); 
        }
    }

    cout << "Преобразованная строка: " << str << endl;
}


int main() {
    setlocale(LC_ALL, "RU");
    int c;
    cout << "Выберите задачу: 1-массив, 2-строка \nВведите число: ";
  
    cin >> c;

    switch (c) {
    case 1: {
        int size;
        cout << "Введите размер массива: ";
        cin >> size;

        double* A = new double[size];
        cout << "Введите элементы массива: ";
        for (int i = 0; i < size; i++) {
            cin >> A[i];
        }

        double C;
        cout << "Введите число C: ";
        cin >> C;

        task1(A, size, C);

        delete[] A; 
        break;
    }
    case 2: {
     
        cin.ignore();  
        char str[256];
        cout << "Введите строку: ";
        cin.getline(str, 256);

        task2(str);
        break;
    }
    default:
        cout << "Некорректный выбор!" << endl;
    }

    return 0;
}