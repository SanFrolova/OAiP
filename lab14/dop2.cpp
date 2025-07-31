// 2) Латинским квадратом порядка n называется квадратная таблица размером nхn,
// каждая строка и каждый столбец которой содержат все числа от 1 до n. 
// Для заданного n в матрице L(n, n) построить латинский квадрат порядка n. 

#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	const int n = 5;
	int latin[n][n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			latin[i][j] = (i + j) % n + 1;
			cout << latin[i][j] << "\t";
		} 
		cout<<endl;
	}

	

	return 0;
}