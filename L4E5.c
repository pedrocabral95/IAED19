Escreva uma programa que lê caracteres do teclado, caracter a caracter, 
até encontrar o caracter '\n' e escreve a linha lida no terminal. 
Implemente a função int leLinha(char s[]) que lê a linha para a string s e 
devolve o número de caracteres lidos.

Input: No proximo ano vou viajar para o Mali

Output: No proximo ano vou viajar para o Mali
        30
        
        
        
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int leLinha(char *linha);

int main() {

	int size = 80,c, ci =0;
	char *line;

	line = (char*) malloc(sizeof(char)*size);


	while ((c = getchar()) != '\n' && c != EOF) {
		line[ci] += c;
		ci++;
		putchar(c);
	}
	
	printf("\n%d\n",leLinha(line));

	free(line);
	return 0;
}

int leLinha(char *linha){
	int iter,stl, count = 0;
	stl = strlen(linha);

	for (iter = 0 ; iter < stl; iter++) {
		if ( (linha[iter] < 58 && linha[iter] > 47) || (linha[iter] < 91 && linha[iter] > 64) || (linha[iter] < 123 && linha[iter] > 96 ) ) {
			count++;
		}
	}
	return count;
}
