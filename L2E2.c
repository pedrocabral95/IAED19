Escreva um programa que determine o maior e o menor número de N números reais dados pelo utilizador. 
	Considere que N é um valor pedido ao utilizador.
Input : 52
	3
Output: Menor: 3
	Maior: 52
		
int main() {

	int *p, N, cont = 1, max, min, asker;
	scanf("%d", &N);
	p = (int *) malloc(sizeof(N));

	scanf("%d", &min);
 	max = min;
	while (cont < N) {
		scanf("%d", &asker);
		if ( asker > max) {
			max = asker;
		}
		if (asker < min) {
			min = asker;
		}
		cont++;
	}
	printf("Menor: %d\nMaior: %d\n", min, max);
	free(p);
	return 0;
}
