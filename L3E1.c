Escreva um programa que desenhe um quadrado de números como o que se segue utilizando a função void quadrado(int N);
O valor de N, dado pelo utilizador, deverá ser obrigatoriamente maior ou igual 2.
O tab (carácter '\t') deve ser usado como o separador. 

Input: Insira um numero:
       ?8
Output: 1	  2	  3	  4	  5	  6	  7	  8	
        2	  3 	4	  5	  6 	7	  8 	9	
        3	  4	  5	  6	  7	  8	  9	  10	
        4	  5	  6 	7	  8	  9 	10	11	
        5	  6	  7	  8	  9	  10	11	12	
        6	  7	  8	  9	  10	11	12	13	
        7	  8	  9	  10	11	12	13	14	
        8 	9	  10  11	12	13	14	15	

#include <stdio.h>

void quadrado(int N);

int main() {

	int N;
	printf("Insira um numero:\n?");
	scanf("%d", &N);
	if ( N < 2 ) {
		printf("Tem de escolher um numero superior a 2!\n");
	}
	else {
		quadrado(N);
	}
	return 0;
}
	
void quadrado(int n) {

	int col, lin;

	for (col = 1; col <= n ; col++) {
		for (lin = col ; lin < (n+col); lin++) {
			printf("%d\t", lin);
		}
		printf("\n");
	}
	return;
}
