Escreva um programa que leia uma linha e um carácter e 
escreve no terminal a mesma linha onde todas as ocorrências do carácter foram removidas. 
Implemente a função void apagaCaracter(char s[], char c).

Input: Tomorrow is another day
       o
       
Output: Tmrrw is anther day



#include <string.h>
#include <stdlib.h>
#include <stdio.h>

void apagaCaracter(char *string, char c);


int main() {

	int size = 80;

	char *line;
	int c;

	line = (char*) malloc(sizeof(char)*size);
	

	fgets(line,size,stdin);
	c = getchar();
	apagaCaracter(line,c);
	fputs(line,stdout);
	free(line);
	return 0;
}

void apagaCaracter(char *string, char c) {
	int iter, i;
	for (iter = i = 0 ; string[iter] != '\0'; iter++ ) {
		if (string[iter] != c) {
			string[i++] = string[iter]; 
		}
	}
	string[i]= '\0';

}
