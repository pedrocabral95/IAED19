Escreva um programa que peça ao utilizador um número inteiro positivo n < VECMAX, onde VECMAX=100. 
Depois, leia n números inteiros positivos. 
No final o programa deverá escrever uma representação gráfica dos valores lidos como o que se segue.

Input: Insira um numero menor que 100
       n = 6
       4
       5
       6
       3
       2
       1

       
Output:   *   
         **   
        ***   
        ****  
        ***** 
        ******



#include <stdio.h>
#include <stdlib.h>
#define VECMAX 100

void vertical( int vetor[], int N);
int main() {

	int N,v, vetor[VECMAX],cont = 0;
	printf("Insira um numero menor que %d.\nn = ", VECMAX);

	scanf("%d", &N);
	while (cont < N) {
		scanf("%d", &v);
		vetor[cont] = v;
		cont++;
	}
	vertical(vetor, N);
	
	return 0;
}

void vertical( int vetor[], int N){
	int iter = 0, iterb , max;
	max = vetor[iter];
	for (iter = 0 ; iter < N; iter++){
		if (vetor[iter] > max) {
			max = vetor[iter];
		}
	}

	for (iter = max ; iter !=0 ; iter--) { 
		for (iterb = 0 ;iterb < N ; iterb++){
			if (vetor[iterb] >= iter) {
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
