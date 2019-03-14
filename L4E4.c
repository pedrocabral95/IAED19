Escreva um programa que leia uma palavra do terminal e verifica se a palavra é um palíndromo ou não. 
Uma palavra é um palíndromo se se escrever da mesma maneira da esquerda para a direita 
e vice-versa (por exemplo, "AMA" é um palíndromo). 
Se a palavra é um palíndromo, o programa deverá imprimir o valor True, e False, se não é.

Input: MAMAM

Output: True

Input: LEIC

Output: False


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {

	int size = 80,k, bol = 0;
	char *string; /* *string is a pointer to a char */

	string = (char*)malloc(sizeof(char)*size);

	scanf("%s", string);
	size = strlen(string);
	for(k = 0; k < size; k++ ) {

		if (string[k] == string[size-1-k]) {
			bol = 1;
		}
		else {
			bol = 0;
			break;
		}
	}
	if (bol == 1) {
		printf("True\n");
	}
	else {
		printf("False\n");
	}
	free(string);
	return 0;
}
