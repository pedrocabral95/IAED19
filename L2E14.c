Escreva um programa que leia um inteiro positivo N e imprima os números 1..N, um por linha.

Input: 4

Output: 1
        2
        3
        4
        
#include <stdio.h>

int main() {

	int a,cont = 1;
	scanf("%d",&a);
	while (cont <= a){
		printf("%d\n",cont);
		cont++;
	}
	return 0;
}
