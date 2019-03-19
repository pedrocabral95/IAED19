#include<stdlib.h>
#include<stdio.h>
#define ALUNOS 10
#define DISCIPLINAS 5


long scoreDisciplina(int valores[ALUNOS][DISCIPLINAS], int N);

long scoreAluno(int valores[ALUNOS][DISCIPLINAS], int N);

void score(int aluno, int disciplina,int entusiasmo, int valores[ALUNOS][DISCIPLINAS]);

int main() {

	int iter, iterb ,N, _aluno, _disciplina, _entusiamo, _alunoMax,_disciplinaMax;
	int valores[ALUNOS][DISCIPLINAS];
	long maxAluno = 0, maxDisciplina = 0, aux; 

	for (iter = 0 ; iter < ALUNOS; iter++) { /* Reset student values*/
		for (iterb = 0 ; iterb < DISCIPLINAS; iterb++) { /* Reset discipline values */
			valores[iter][iterb] = 0;
		}	
	}
	scanf("%d", &N); /* Input for N times to insert values */
	iter = 0;
	while (iter < N) {
		scanf("%d", &_aluno);
		scanf("%d", &_disciplina);
		scanf("%d", &_entusiamo);
		score(_aluno,_disciplina,_entusiamo,valores);
		iter++;
	}
	
	maxAluno = scoreAluno(valores, 0) ;
	_alunoMax = 0;
	for (iter = 1 ; iter < ALUNOS ; iter++) {
		aux = scoreAluno(valores, iter) ;
		if (aux > maxAluno) {
			maxAluno = aux;
			_alunoMax = iter;
		}
	}

	maxDisciplina = scoreDisciplina(valores, 0);
	_disciplinaMax = 0;
	for (iter = 1 ; iter < DISCIPLINAS ; iter++) {
		aux = scoreDisciplina(valores,iter);
		if (aux > maxDisciplina) {
			maxDisciplina = aux;
			_disciplinaMax = iter;
		}
	}
	
	printf("%d\n%d\n", _disciplinaMax, _alunoMax );
	return 0;
}

long scoreDisciplina(int valores[ALUNOS][DISCIPLINAS], int disciplina) {
	int iter;
	long media = 0;

	for (iter = 0; iter < ALUNOS ; iter++) {
		media += valores[iter][disciplina];
	}

	media = media/ALUNOS;
	return media;

}

long scoreAluno(int valores[ALUNOS][DISCIPLINAS], int aluno){
	int iter;
	long media = 0;

	for (iter = 0; iter < DISCIPLINAS; iter++) {
		media += valores[aluno][iter];
	}

	media = media/DISCIPLINAS;
	return media;
}

void score(int aluno, int disciplina,int entusiasmo, int valores[ALUNOS][DISCIPLINAS]) {
	valores[aluno][disciplina] = entusiasmo;
}
