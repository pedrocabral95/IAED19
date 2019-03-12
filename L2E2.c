/*
Escreva um programa que leia dois inteiros positivos N, M e imprima o menor deles na primeira linha e o maior na segunda.

Input: 50
       2
Output: Menor: 2
        Maior: 50

#include <stdio.h>
#include <stdlib.h>


int main() {

	int *p, N, cont = 1, max, min, asker; /* *p is a pointer to int */
	scanf("%d", &N);
	p = (int *) malloc(sizeof(int)*N); // allocates the requested (N) memory
 
	scanf("%d", &min);
 	max = min;
	while (cont < N) {
		scanf("%d", &asker);
		if ( asker > max) {
			max = asker;
		}
		if (asker < min) {
			min = asker;
		}
		cont++;
	}
	printf("Menor: %d\nMaior: %d\n", min, max);
	free(p); // deallocates memory
	return 0;
}
      
