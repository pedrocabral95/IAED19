Escreva um programa que leia dois inteiros positivos N, M e
  imprima "yes" se M é um divisor de N, caso contrário, imprima "no".
  
Input: 4
       9
Output: No


#include<stdio.h>

int main() {

	int a ,b , aux;

	scanf("%d", &a);
	scanf("%d", &b);
	if (a < b) {
		aux = a;
		a = b ; 
		b = aux;
	}
	if ( a % b == 0) {
		printf("Yes!\n");
	}
	else {
		printf("No!\n");
	}
	return 0;
}
