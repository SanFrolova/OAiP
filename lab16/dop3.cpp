//1. Найти сумму элементов, лежащих ниже главной диагонали в целочисленном массиве A[n, n].
// 2. Написать программу, которая вводит несколько строк текста и символ «m» 
// и использует функцию, чтобы определить суммарное число вхождений символа в текст.

#include <iostream>
#include <cstring>

using namespace std;


int sumBelowDiagonal(int** matrix, int n) {
    int sum = 0;
    for (int i = 1; i < n; i++) { 
        for (int j = 0; j < i; j++) { 
            sum += matrix[i][j];
        }
    }
    return sum;
}


int countOccurrences(char** lines, int numLines, char target) {
    int count = 0;
    for (int i = 0; i < numLines; i++) {
        for (int j = 0; lines[i][j] != '\0'; j++) {
            if (lines[i][j] == target) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int c;
    cout << "Выберите задачу: 1-матрица, 2-строка\nВведите число: ";

    cin >> c;

    switch (c) {
    case 1: {
        int n;
        cout << "Введите n: ";
        cin >> n;

        int** matrix = new int* [n];
        for (int i = 0; i < n; i++) {
            matrix[i] = new int[n];
        }

        cout << "Mатрицa:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j]=-10+rand() % 21;
                cout << matrix[i][j] << "\t";
            }
           cout<<endl;
        }

        int sum = sumBelowDiagonal(matrix, n);
        cout << "Сумма элементов ниже главной диагонали: " << sum << endl;

        for (int i = 0; i < n; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
        break;
    }
    case 2: {
        int numLines;
        cout << "Введите количество строк текста: ";
        cin >> numLines;
        cin.ignore(); 
   
        char** lines = new char* [numLines];
        for (int i = 0; i < numLines; i++) {
            lines[i] = new char[256]; 
        }
 
        cout << "Введите строки текста:" << endl;
        for (int i = 0; i < numLines; i++) {
            cin.getline(lines[i], 256);
        }

        char target;
        cout << "Введите символ для подсчета: ";
        cin >> target;

        int count = countOccurrences(lines, numLines, target);
        cout << "Символ '" << target << "' встречается " << count << " раз." << endl;

        for (int i = 0; i < numLines; i++) {
            delete[] lines[i];
        }
        delete[] lines;
        break;
    }
    default:
        cout << "Некорректный выбор!" << endl;
    }

    return 0;
}