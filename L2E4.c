Escreva um programa que calcule e imprima a média de N números reais dados pelo utilizador. O programa deverá primeiro pedir ao utilizador um inteiro N, representando a quantidade de números que vão ser introduzidos. 
Os números reais devem ser representados pelo tipo float. 
O resultado deve ser impresso com o comando printf("%.2f", media);.

Input: 4
       5
       6
       7
       8
Output: A média é: 6.50



#include <stdio.h>

int main() {
	int N, cont = 0;
	float a,media=0;
	scanf("%d", &N);
	while (cont < N) {
		scanf("%f", &a);
		media += a;
		cont++;
	} 
	media = media/N;

	printf("A média é: %.2f\n", media );
	return 0;
}
