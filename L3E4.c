Escreva um programa que leia uma sequência de números separados por espaços e novas linhas, e imprima a mesma sequência, mas os números no output não deverão conter 0 no início, por exemplo, 007 deverá imprimir 7.

A excepção é o número 0, que se deverá imprimir como 0. A sequência no input termina com EOF.

Dica: a função int getchar() pode ser usada para ler um carácter.

Input: 1,5,2,3
Output: 1523

#include <stdio.h>

int main() {

	int N, sum = 0;

	while( (N = getchar()) != '\n' && N != EOF) {
		if (N < 58 && N > 48){
			sum = sum*10 + (int)N - '0';
		}
	}
	printf("%d\n",sum );

	return 0;
}

