/*
Escreva um programa que determine e imprima o maior de três números inteiros dados pelo utilizador.

Input: 4 52 45
Output: O maior número é 52.
*/

#include<stdio.h>

int main() {

	int a,b=0,c;
	scanf("%d", &a);
	c = a; 
	while (b < 2) {
		scanf("%d", &a);
		if (a > c){ // Defining the max value
			c = a; 
		}
		b++;
	}
	printf("O maior numero é %d\n", c);
	return 0;
}
