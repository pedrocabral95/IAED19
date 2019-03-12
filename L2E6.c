Escreva um programa que pede ao utilizador um valor positivo N. No output, 
  deverá mostrar o número de dígitos que compõem N (na primeira linha), 
  assim como a soma dos dígitos de N (na segunda linha). 
Por exemplo, o número 12345 tem 5 dígitos e a soma desses dígitos é 15.

Input: 684851
Output: Numeros: 6 Soma: 32 Numero introduzido: 684851


#include <stdio.h>

int main() {
	int N, numeros=0 , soma=0, n;

	scanf("%d", &N);

	n = N;

	while (n != 0){
		soma += n% 10;
		n = n/10;
		numeros++;
	}

	printf("Numeros: %d Soma: %d Numero introduzido: %d\n", numeros, soma, N );
	return 0;
}
