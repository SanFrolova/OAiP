//1. Дан одномерный массив.Определить, сколько отрицательных элементов
//   находится после последнего минимального элемента.
//2. Проверить, все ли столбцы матрицы содержат хотя бы один положительный элемент.
//   Если нет, то в первом столбце, не удовлетворяющем условию, 
//   заменить отрицательные элементы их модулями.

#include <iostream>
#include <time.h>
using namespace std;

void solveTask1(const int* A, int n, int& rez) {
    int min = 0;

    for (int i = 0; i < n; ++i) {
        if (A[i] <= A[min]) {
            min = i;
        }
    }

    rez = 0;
    for (int i = min + 1; i < n; ++i) {
        if (A[i] < 0) {
            rez++;
        }
    }
}


bool solveTask2(int** matrix, int rows, int cols, int& col) {
    col = -1;

    for (int k = 0; k < cols; ++k) {
        bool j = false;
        for (int m = 0; m < rows; ++m) {
            if (matrix[m][k] > 0) {
                j = true;
                break;
            }
        }

        if (!j) {
            col = k;
            return false;
        }
    }
    return true;
}

void solveTask2abs(int** M, int rows, int col) {
    for (int m = 0; m < rows; ++m) {
        if (M[m][col] < 0) {
            M[m][col] = abs(M[m][col]);
        }
    }
}

int main() {
    //1)
    setlocale(LC_ALL, "RU");
    int n;
    cout << "Введите размер массива: ";
    cin >> n;

    int* A = new int[n];
    cout << "Mассив:\n";
    for (int i = 0; i < n; ++i) {
        A[i] = -10 + rand() % 21;
        cout << A[i] << " ";
    }

    int rez = 0;

    solveTask1(A, n, rez);
    cout << "Количество отрицательных элементов после последнего минимального элемента: " << rez << endl;
    delete[] A;


    //2)
    int k, m;
    cout << "\nВведите количество строк и столбцов матрицы: ";
    cin >> k >> m;


    int** M = new int* [k];
    for (int i = 0; i < k; ++i) {
        M[i] = new int[m];
    }

    cout << "Mатрицa:\n";
    for (int i = 0; i < k; ++i) {
        for (int j = 0; j < m; ++j) {
            M[i][j] = -10 + rand() % 15;
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    int col;
    if (solveTask2(M, k, m, col)) {
        cout << "Error";
    }
    else {
        solveTask2abs(M, k, col);

        cout << "Отредактированная матрица:\n";
        for (int i = 0; i < k; ++i) {
            for (int j = 0; j < m; ++j) {
                cout << M[i][j] << "\t";
            }
            cout << endl;
        }
    }

    for (int i = 0; i < k; ++i) {
        delete[] M[i];
    }
    delete[] M;

    return 0;
}