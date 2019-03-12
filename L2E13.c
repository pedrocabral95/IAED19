Escreva um programa que leia três inteiros e imprima-os por ordem na mesma linha.

O menor dos números deve aparecer como primeiro.

Input:12
      36
       2
Output: Menor: 2 , Médio: 12 , Maior: 36


#include<stdio.h>

int main() {
	int max, min, mid, aux ,cont = 0;
	scanf("%d", &min);
	max = min;
	while (cont < 2) {
		scanf("%d", &mid);
		if (mid > max) {
			aux = max;
			max = mid;
			mid = aux;
		}
		if (mid < min){
			aux = min;
			min = mid;
			mid = aux;
		}
		cont++;
	}	
	
	printf("Menor: %d , Médio: %d , Maior: %d \n", min,mid,max);
	
	return 0;
}
