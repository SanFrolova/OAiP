//1. В массиве из целых чисел определить сумму элементов, 
//   расположенных между первым и последним нулевыми элементами
//2. Если есть в матрице строка, все элементы которой положительны, 
//   то найти сумму этих элементов.Уменьшить все элементы матрицы на эту сумму.

#include <iostream>
#include <time.h>
using namespace std;


int sumBetweenZeros(int* arr, int size) {
    int firstZeroIndex = -1;
    int lastZeroIndex = -1;

    for (int i = 0; i < size; i++) {
        if (arr[i] == 0) {
            if (firstZeroIndex == -1) {
                firstZeroIndex = i;
            }
            lastZeroIndex = i;
        }
    }

    if (firstZeroIndex == -1 || lastZeroIndex == firstZeroIndex) {
        return 0;
    }

    int sum = 0;
    for (int i = firstZeroIndex + 1; i < lastZeroIndex; i++) {
        sum += arr[i];
    }
    return sum;
}

int sumPositiveRow(int** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        bool allPositive = true;
        int rowSum = 0;

        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] <= 0) {
                allPositive = false;
                break;
            }
            rowSum += matrix[i][j];
        }

        if (allPositive) {
            for (int k=0; k<rows; k++){
                for (int j = 0; j < cols; j++) {
                    matrix[k][j] -= rowSum;
                }  
            }
            return rowSum;
        }
    }
    return 0; 
}

int main() {
    //1)
    setlocale(LC_ALL, "RU");
    srand(time(NULL));
    int size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Mассив: ";
    for (int i = 0; i < size; i++) {
        arr[i] = -5 + rand() % 11;
        cout << arr[i] << " ";
    }

    int sum = sumBetweenZeros(arr, size);
    cout << "Сумма элементов между первым и последним нулевыми элементами: " << sum << endl;

    delete[] arr;

    //2)
    int rows, cols;
    cout << "Введите количество строк и столбцов матрицы: ";
    cin >> rows >> cols;

    int** matrix = new int* [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new int[cols];
    }

    cout << "Mатрицa: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = -1 + rand() % 15;
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    int positiveSum = sumPositiveRow(matrix, rows, cols);
    cout << "Сумма положительных элементов в строке (если есть): " << positiveSum << endl;

    cout << "Отредактированная матрицa: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    for (int i = 0; i < rows; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}