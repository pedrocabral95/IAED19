Escreva um programa que pede ao utilizador um inteiro positivo N e imprima o número de divisores de N. Recorde que os números primos têm 2 divisores.

Input: 4
Output: 1
        2
        4
        Divisores: 3

#include <stdio.h>

int main() {
	int N, divs = 1, cont = 0 , total=0;
	scanf("%d", &N);

	while (cont <= N){
		if ( N % divs == 0) {
			printf("%d\n", divs );
			total++;
		}
		divs++;
		cont++;
	}
	printf("Divisores : %d\n", total);
	return 0; 
}
