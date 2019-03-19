#include <stdio.h>
#include <stdlib.h>

typedef struct numComplex {
	double real;
	double imaginary;
} NumComplex ; 

NumComplex sumComplex( NumComplex cp1, NumComplex cp2) {
	NumComplex _new;
	_new.real = cp1.real + cp2.real;
	_new.imaginary = cp1.imaginary + cp2.imaginary;
	return _new;
}

NumComplex readNumComplex() {

	NumComplex cp1;
	char sinal, i;
	scanf("%lf", &cp1.real);
	scanf("%c", &sinal);
	scanf("%lf", &cp1.imaginary);
	scanf("%c", &i);

	if (sinal == '-') { 
		cp1.imaginary *= -1;
	}
	return cp1;
}
void writeNumComplex(NumComplex cp) {

	if (cp.imaginary >= 0) {
		printf("%.2f+%.2fi", cp.real, cp.imaginary);
	}
	else {
		printf("%.2f%.2fi", cp.real, cp.imaginary );
	}
}

int main() {

	NumComplex _cp1;
	NumComplex _cp2;
	NumComplex _sum;
	_cp1 = readNumComplex();
	_cp2 = readNumComplex();

	_sum	= sumComplex(_cp1,_cp2);

	writeNumComplex(_sum);
	return 0;
} 
