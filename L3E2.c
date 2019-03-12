
Escreva um programa que desenhe uma pirâmide de números utilizando a função void piramide(int N);. 
O valor de N, dado pelo utilizador, deverá ser obrigatoriamente superior ou igual 2. 
O espaço (carácter ' ') deve ser usado como o separador. 

Input: Insita um valor maior ou igual a 2!
       4
Output:       1 
            1 2 1 
          1 2 3 2 1 
        1 2 3 4 3 2 1             
        
        #include <stdio.h>

void piramide(int N);

int main() {
	int N;
	printf("Insita um valor maior ou igual a 2!\n");
	scanf("%d", &N);

	if (N < 2) {
		printf("Error!\n");
	}
	else {
		piramide(N);
	}
	return 0;
}

void piramide(int N) {

	int count, spaces = 1, mul;

	
	for (count = 0 ; count < N; count++) {

		for( spaces = (N - count); spaces >0; spaces--) {
			printf("  ");
		}
		mul = 1;

		while (mul < count + 1){
			printf("%d ", mul);
			mul +=1;
		}
		/*printf("%d ",count);*/
		while (mul != 0) {
			printf("%d ", mul);
			mul-= 1;
		}
		printf("\n");
	}
	return;
}
