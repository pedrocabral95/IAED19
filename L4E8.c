Escreva um programa que leia dois números inteiros em representação decimal e 
imprime o maior desses dois números. Podem assumir que os dois números têm o mesmo número de algarismos.

Nota: Os números podem ser demasiado grandes para ser guardados
numa variável do tipo long long, por exemplo 9988888888888888888887 e 9988888888888888888888.

Input: 45645213456841531
       45655454350451345
       
Output: O maior numero é : 45655454350451345. 




#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

	char *stringOne, *stringTwo;

	unsigned long int _nOne = 0, _nTwo = 0, _iter;

	stringTwo = (char *) malloc(sizeof(char)*81); /* string max value 80 + 1 ('\0')*/
	stringOne = (char *) malloc(sizeof(char)*81); /* string max value 80 + 1 ('\0')*/

	printf("Insira dois numeros inteiros para comparar\n");

	scanf("%s", stringOne);

	for ( _iter = 0 ; stringOne[_iter] != '\0' && _iter < strlen(stringOne); _iter++) {
		_nOne = _nOne * 10 + stringOne[_iter] - '0';
	}

	scanf("%s", stringTwo);

	for ( _iter = 0 ; stringTwo[_iter] != '\0' && _iter < strlen(stringTwo); _iter++) {
		_nTwo = _nTwo * 10 + stringTwo[_iter] - '0';
	}

	if (_nTwo > _nOne)
		printf("O maior numero é : %lu. \n", _nTwo);
	if (_nOne > _nTwo)
		printf("O maior numero é : %lu. \n", _nOne);
	if ( _nTwo == _nOne) {
		printf("Numero iguais\n");
	}
