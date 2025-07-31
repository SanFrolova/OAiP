//1. Ввести целые числа в массив A[n, m] (n, m > 0) и все отрицательные 
// элементы в нечетных строках заменить на такие же положительные.
//2. Написать программу, преобразующую строку, состоящую только из прописных букв,
// в строку, состоящую из прописных и строчных букв, 
// при этом первая буква после точки  и пробела  прописная, остальные  строчные.

#include <iostream>
#include <cstring>
#include <time.h>

using namespace std;


void processMatrix(int** matrix, int n, int m) {
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 != 0) { 
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] < 0) {
                    matrix[i][j] = -matrix[i][j]; 
                }
            }
        }
    }

    cout << "Измененная матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}
 
void processString(char* str) {
    bool capitalizeNext = true;
    for (int i = 0; str[i] != '\0'; i++) {
        if (capitalizeNext && str[i] >= 'A' && str[i] <= 'Z') {
            
            capitalizeNext = false;
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }

        if (str[i] == '.' || str[i] == ' ') {
            capitalizeNext = true;
        }
    }

    cout << "Преобразованная строка: " << str << endl;
}


int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int c;
    cout << "Выберите задачу: 1-матрица, 2-строка\nВведите число: ";
   
    cin >> c;

    switch (c) {
    case 1: {
  
        int n, m;
        cout << "Введите n: ";
        cin >> n;
        cout << "Введите m: ";
        cin >> m;

        int** matrix = new int* [n];
        for (int i = 0; i < n; i++) {
            matrix[i] = new int[m];
        }

        cout << "Матрица:" << endl;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
               matrix[i][j]=-4+rand()%9;
               cout << matrix[i][j]<< "\t";
            }
            cout << endl;
        }

       
      
        processMatrix(matrix, n, m);
       
        for (int i = 0; i < n; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
        break;
    }
    case 2: {
       
        cin.ignore(); 
        char str[256];
        cout << "Введите строку (только прописные буквы): ";
        cin.getline(str, 256);

        
        processString(str);
        break;
    }
    default:
        cout << "Некорректный выбор!" << endl;
    }

    return 0;
}