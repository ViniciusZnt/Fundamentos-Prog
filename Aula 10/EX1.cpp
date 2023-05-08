#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main (void){
	int i,vetor[10],totalvet;
	
	printf("Digite 10 valores para um vetor receber \n");
	
	for(i=0;i<10;i++){
		printf("Vetor %i ",i);
		scanf("%i",&vetor[i]);
		fflush(stdin);
		totalvet += vetor[i];
	}
	system("clear||cls");
	
		printf("Soma dos Vetores eh: %i ",totalvet);
}
