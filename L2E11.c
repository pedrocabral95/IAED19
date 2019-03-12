Escreva um programa que leia dois inteiros positivos N, M e imprima o menor deles na primeira linha e o maior na segunda.

Input: 50
       2
Output: Menor: 2
        Maior: 50

#include <stdio.h>
#include <stdlib.h>


int main() {

	int n , m;

	scanf("%d", &m);

	scanf("%d", &n);

	if (m > n) {
		printf("Menor: %d\n Maior: %d.\n", n,m);
	}
	if (m < n) {
		printf("Menor: %d\n Maior: %d.\n", m,n);
	}
	else {
		printf("Numeros iguais");
	}
	return 0;
}
      
