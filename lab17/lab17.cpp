//1. Дан массив A вещественного типа, содержащий 20 положительных
// и отрицательных элементов. Сформировать массив B из положительных элементов массива A,
// имеющих четный индекс. Найти сумму квадратов элементов нового массива.
// 2. Дана целочисленная квадратная матрица.Если минимальное значение
// находится на главной диагонали, то вывести его значение и индексы.


#include <iostream>
#include <time.h>
using namespace std;


void solveTask1(const float* A, int sA, float*& B, int& sB, float& rez) {

    sB = 0;
    for (int i = 0; i < sA; i += 2) {
        if (A[i] > 0) {
            sB++;
        }
    }

    B = new float[sB];
    rez = 0.0;

    int j = 0;
    for (int i = 0; i < sA; i += 2) {
        if (A[i] > 0) {
            B[j] = A[i];
            rez += A[i] * A[i];
            j++;
        }
    }
}


bool solveTask2(int** M, int n, int& min, int& row, int& col) {
    bool b = false;

    min = M[0][0];
    row = 0; col = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (min > M[i][j]) {
                min = M[i][i];
                row = i;
                col = j;
            }
        }
    }

    if (row == col) {
        b = true;
    }

    return b;
}

int main() {
    setlocale(LC_ALL, "RU");
    srand(time(NULL));

    //1)
    const int sA = 20;
    float* A = new float[sA];
    cout << "Массив:\n";
    for (int i = 0; i < sA; ++i) {
        cin >> A[i];
    }

    float* B = nullptr;
    int sB = 0;
    float rez = 0.0;
    solveTask1(A, sA, B, sB, rez);

    cout << "\n\nМассив B:\n";
    for (int i = 0; i < sB; ++i) {
        cout << B[i] << " ";
    }
    cout << "\nСумма квадратов элементов массива B: " << rez << endl;


    delete[] A;
    delete[] B;



    // 2)
    int n;
    cout << "\n\n\nВведите размер квадратной матрицы: ";
    cin >> n;

    int** M = new int* [n];
    for (int i = 0; i < n; ++i) {
        M[i] = new int[n];
    }

    cout << "\nMатрица:\n";
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            M[i][j] = -10 + rand() % 21;
            cout << M[i][j] << "\t";
        }
        cout << endl;
    }

    int min, row, col;
    if (solveTask2(M, n, min, row, col)) {
        cout << "Минимальный элемент на главной диагонали: " << min << ", его индексы: " << row << ", " << col << "\n";
    }
    else {
        cout << "Соответствующие элементы отсутствуют";
    }

    for (int i = 0; i < n; ++i) {
        delete[] M[i];
    }
    delete[] M;

    return 0;
}