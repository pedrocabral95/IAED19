 Escreva um programa que pede ao utilizador um valor N correspondente a um certo período de tempo em segundos. 
 O programa deverá apresentar no output esse período de tempo no formato HH:MM:SS.

Sugestão: utilize o operador que calcula o resto da divisão (%).

Input: 96

Output: Horas: 0 Minutos:1 Segundos: 36
#include <stdio.h>
#include <stdio.h>

int main() {

	int N, hora, min, sec;

	scanf("%d",&N);

	hora = N/3600;

	min = (N -(3600*hora))/60;

	sec= (N -(3600*hora)-(min*60));

	printf("Horas: %d Minutos:%d Segundos: %d\n",hora,min,sec);
	return 0;
}
