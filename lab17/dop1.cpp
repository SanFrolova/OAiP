//1. Определить сумму элементов целочисленного массива,  
//   расположенных между первым максимальным и последним минимальным элементами.
//2. Даны две квадратные целочисленные матрицы.
//   Если все числа положительны, то определить произведение этих матриц.


#include <iostream>
#include <time.h>
using namespace std;

void solveTask1(const int* array, int size, int& sum) {
    int maxIndex = 0;
    int minIndex = 0;


    for (int i = 1; i < size; ++i) {
        if (array[i] > array[maxIndex]) {
            maxIndex = i;
        }
        if (array[i] <= array[minIndex]) {
            minIndex = i;
        }
    }

    if (maxIndex > minIndex) {
        int s = maxIndex;
        maxIndex = minIndex;
        minIndex = s;

    }

    sum = 0;
    for (int i = maxIndex + 1; i < minIndex; ++i) {
        sum += array[i];
    }
}


bool solveArr(int** matrix, int size) {
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] < 0) {
                return false;
            }
        }
    }
    return true;
}


void solveTask2(int** matrix1, int** matrix2, int**& result, int size) {
    result = new int* [size];

    for (int i = 0; i < size; ++i) {
        result[i] = new int[size];
    }

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            result[i][j] = 0;
            for (int k = 0; k < size; ++k) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}

int main() {
    //1)
    setlocale(LC_ALL,"RU");
    srand(time(NULL));
    int sizeArray;
    cout << "Введите размер массива: ";
    cin >> sizeArray;

    int* array = new int[sizeArray];
    cout << "Mассив:\n";
    for (int i = 0; i < sizeArray; ++i) {
        array[i] = -1 + rand() % 20;
        cout << array[i]<< " ";
    }

    int sum = 0;
    solveTask1(array, sizeArray, sum);

    cout << "Сумма элементов, расположенных между первым максимальным и последним минимальным элементами: " << sum << endl;

    delete[] array;

    //2)
    int sizeMatrix;
    cout << "\nВведите размер квадратных матриц: ";
    cin >> sizeMatrix;

    int** matrix1 = new int* [sizeMatrix];
    for (int i = 0; i < sizeMatrix; ++i) {
        matrix1[i] = new int[sizeMatrix];
    }

    cout << "Введите элементы первой матрицы:\n";
    for (int i = 0; i < sizeMatrix; ++i) {
        for (int j = 0; j < sizeMatrix; ++j) {
            matrix1[i][j] = -1 + rand() % 25;
            cout<< matrix1[i][j]<< "\t";
        }
        cout << endl;
    }

    int** matrix2 = new int* [sizeMatrix];
    for (int i = 0; i < sizeMatrix; ++i) {
        matrix2[i] = new int[sizeMatrix];
    }

    cout << "Введите элементы второй матрицы:\n";
    for (int i = 0; i < sizeMatrix; ++i) {
        for (int j = 0; j < sizeMatrix; ++j) {
            matrix2[i][j] = -1 + rand() % 25;
            cout << matrix2[i][j] << "\t";
        }
        cout << endl;
    }

    if (solveArr(matrix1, sizeMatrix) && solveArr(matrix2, sizeMatrix)) {
        int** resultMatrix = nullptr;
        solveTask2(matrix1, matrix2, resultMatrix, sizeMatrix);

        cout << "Произведение матриц:\n";
        for (int i = 0; i < sizeMatrix; ++i) {
            for (int j = 0; j < sizeMatrix; ++j) {
                cout << resultMatrix[i][j] << "\t";
            }
            cout << endl;
        }

        for (int i = 0; i < sizeMatrix; ++i) {
            delete[] resultMatrix[i];
        }
        delete[] resultMatrix;
    }
    else {
        cout << "Не все элементы матриц положительные. Произведение матриц не вычисляется.\n";
    }

    for (int i = 0; i < sizeMatrix; ++i) {
        delete[] matrix1[i];
        delete[] matrix2[i];
    }
    delete[] matrix1;
    delete[] matrix2;

    return 0;
}