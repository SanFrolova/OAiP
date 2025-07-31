// var16 numbers
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	float a=77, b=33, c, s=666, f=999;
	
	//а)поменять а и b с помощью переменной c
	c = a * b;
	a = c / a;
	b = c / b;
	printf("a = "); printf("%f", a);
	printf("\nb = "); printf("%f", b);
	//б)поменять s и f без использования переменной 
	f = f/s;
	s = f * s;
	f = s / f;
	printf("\ns = "); printf("%f", s);
	printf("\nf = "); printf("%f", f);


	return 0;




}