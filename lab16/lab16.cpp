// 1. В матрице A[k, n], k <= 12, n <= 8 поменять местами строку, 
// содержащую элемент а со строкой, содержащей элемент b.
// 2. Дано предложение. Составить программу, которая выводит все слова, оканчивающиеся на - ая.

#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <windows.h>
using namespace std;


static bool searchwords(string word) {
	size_t length = word.length();
	string end;
	string endcontrol = "ая";
	for (int i = length - 1; i >= length - 2; i--) {
		end += word[i];
	}
	reverse(end.begin(), end.end());
	if (end == endcontrol) {
		return true;
	}
	else {
		return false;
	}
}


int solvetask1(int** A, int k, int n) {
	cout << "Массив: " << endl;
	for (int i = 0; i < k; i++) /*строка*/ {
		for (int m = 0; m < n; m++) /*столбец*/ {
			A[i][m] = 0 + rand() % 41;
			cout << *(*(A + i) + m) << "\t";
		}
		cout << endl;
	}

	int a, b;
	cout << "Enter a: "; cin >> a;
	cout << "Enter b: "; cin >> b;
	int *M = new int[n];
	int s=0;
	for (int i = 0; i < k; i++) {
		for (int m = 0; m < n; m++) {
			if (A[i][m] == a) {
				
				for (int l = 0; l < n; l++) {
					M[l] = A[i][l];
					s = i;
					
				}
				i = k;
				break;
			}
		}
	}

	for (int i = 0; i < k; i++) {
		for (int m = 0; m < n; m++) {
			if (A[i][m] == b) {
				
				for (int l = 0; l < n; l++) {
					A[s][l] = A[i][l];
					A[i][l] = M[l];
					
				}
				i = k;
				break;
			}
		}
	}

	return (**A);
}

int main() {
	setlocale(LC_ALL, "RU");
	int c;
	cout << "Введите номер задачи: "; cin >> c;
	switch (c) {
	case 1: {
		int** A; int k, n;
		cout << "Enter k: "; cin >> k;
		cout << "Enter n: "; cin >> n;

		if (k > 0 and k <= 12 and n > 0 and n <= 8) {
			 A = new int*[k];

			for (int i = 0; i < k; i++) {
				A[i] = new int [n];
			}
			**A = solvetask1(A, k, n);

			cout << "Отредактированный массив: " << endl;
			for (int i = 0; i < k; i++) /*строка*/ {
				for (int m = 0; m < n; m++) /*столбец*/ {
					cout << *(*(A + i) + m) << "\t";
				}
				cout << endl;
			}
			
		}
		
	}
	case 2: {
		SetConsoleCP(1251);
		SetConsoleOutputCP(1251);
		string word;
		int index = 0;
		cout << "Введите строку: ";
		while (cin >> word) {
			if (searchwords(word)) {
				cout << word<< "\t";
			}

			if (cin.get() == '\n') { break; }

		}
		return 0;
		break;
	}
	

	default:
		break;
	
	}
		
	return 0;
}


