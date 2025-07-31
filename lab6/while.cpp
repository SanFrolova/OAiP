#include <iostream>
using namespace std;
void main() {
	setlocale(LC_ALL, "RU");
	float d, c, a, m, b, k;
	

	cout << "¬ведите а: "; cin >> a;
	cout << "\n¬ведите m: "; cin >> m;
	cout << "\n¬ведите b: "; cin >> b;
	k = a;
	while (k > 2.5){
		k -= 0.5;
		d = sin(k / a) / cos(m * b);
		c = d / (pow(d, 2) + 1) / (1 - exp(k));
		cout << "d = " << d << endl;
		cout << "c = " << c << endl << endl;
		
		
	}

}