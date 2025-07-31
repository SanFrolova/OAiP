// lab10 В массиве А каждый элемент, кроме первого, заменить суммой всех предыдущих.
#include <iostream>
#include <time.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	const int mas = 10;
	int A[mas];

	 A[0] = 0 + rand() % 99;
	 cout << "0 элемент массива равен : " << A[0] << endl;
	 for (int i = 1; i < mas;  i++) {
		 int k = i - 1;
		 A[i]=0 + rand() % 99;
		 cout << i << " элемент массива равен : " << A[i] << ";    ";
		 A[i] = A[k] + A[i];
		 cout << i << " элемент массива после нахождения суммы предыдущих : " << A[i] << endl;

	 }
	return 0;
}
