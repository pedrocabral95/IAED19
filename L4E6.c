
Escreva um programa que leia uma linha do terminal (use a função do exercício anterior) 
e que escreve no terminal o mesmo texto, 
mas com as letras minúsculas substituídas pelas respectivas letras maiúsculas. 
Implemente a função void maiusculas(char s[]).
 
 
Input: Today is nOt the DAY
Output: today is not the day

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void maiusculas(char *string);

int main() {


	int size = 80;

	char *line;

	line = (char*) malloc (sizeof(char)*size);

	fgets(line, size,stdin);

	maiusculas(line);

	fputs(line,stdout);

	free(line);

	return 0;
}

void maiusculas(char *string){

	int iter, stl;

	stl = strlen(string);

	for(iter = 0; iter < stl ; iter++) {

		if (string[iter] < 91 && string[iter] > 64) {
			string[iter] = string[iter] + 'a' - 'A'; 
		}
		
	}
}
