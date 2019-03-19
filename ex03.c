#include <stdio.h>
#include <stdlib.h>


typedef struct Stock {
	char name[11];
	double value;
	double performance;
} Stock;

long calcPerformance( Stock *portofolio, int number){
	return portofolio[number].performance * portofolio[number].value;


}
void writeMostPerfomance(Stock *portofolio, int N) {
	int iter = 0, _mostPerformance = 0 ;

	double maxPerformance = calcPerformance(portofolio, iter) ;
	for (iter = 1 ; iter < N; iter++) {
		if (maxPerformance < calcPerformance(portofolio,iter)){
			maxPerformance = calcPerformance(portofolio, iter);
			_mostPerformance = iter;
		}
	}
	printf("%s %.2f %.2f\n", portofolio[_mostPerformance].name, portofolio[_mostPerformance].value, portofolio[_mostPerformance].performance);
}

int main() {

	int N, iter = 0;
	Stock  *portofolio;
	scanf("%d", &N);

	portofolio = (Stock*) malloc(sizeof(Stock)*N);

	while (iter < N) {
		scanf("%s%lf%lf", portofolio[iter].name , &portofolio[iter].value, &portofolio[iter].performance);
		iter++;
	}
	writeMostPerfomance(portofolio,N);
	return 0;
}