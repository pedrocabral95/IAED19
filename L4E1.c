Escreva um programa que peça ao utilizador um número inteiro positivo n < VECMAX,
onde VECMAX=100. Depois, leia n números inteiros positivos.
No final o programa deverá escrever uma representação gráfica dos valores lidos como o que se segue.

Input: n = 4
       5
       3
       4
       1
       
Output: *****
        ***
        ****
        *
#include <stdio.h>
#include <stdlib.h>
#define VECMAX 100

void horizonte( int vetor[], int N);
int main() {

	int N,v, vetor[VECMAX],cont = 0;
	printf("Insira um numero menor que %d.\n = ", VECMAX );

	scanf("%d", &N);
	while (cont < N) {
		scanf("%d", &v);
		vetor[cont] = v;
		cont++;
	}
	horizonte(vetor, N);
	
	return 0;
}

void horizonte( int vetor[], int N){
	int iter = 0,aux;
	while(iter < N) {
			aux = vetor[iter]; 
			while (aux != 0) {
				printf("*");
				aux--;
			}
			printf("\n");
			iter++;
		}
}
