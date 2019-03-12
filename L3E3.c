 Escreva um programa que desenhe uma cruz nas diagonais utilizando a função void cruz(int N);
 O asterisco (carácter '*') deve ser usado para desenhar a cruz
 Hífen (carácter '-') deve ser usado como o separador. 
 Input: Insira um numero > 2 para fazer uma cruz
        4
 
 Output:  *--*
          -**-
          -**-
          *--*
          
 Input: Insira um numero > 2 para fazer uma cruz
        7
 
 Output:    *-----*
            -*---*-
            --*-*--
            ---*---
            --*-*--
            -*---*-
            *-----*

 
 #include <stdio.h>
void cruz(int N);

int main(void) {

	int N;

	printf("Insira um numero > 2 para fazer uma cruz\n");

	scanf("%d", &N);

	cruz(N);

	return 0;

}

void cruz(int N){

	int lesq, ldir;
	
	for ( lesq = 0 ; lesq < N; lesq++){
		for (ldir = N; ldir != 0;ldir--){
			if (lesq == ldir - 1 || N - ldir == lesq){
				printf("*");
			}
			else {
				printf("-");
			}
		}
	printf("\n");
  }
}
		 




	 
