#include <stdio.h>
#include <stdlib.h>

int main (void){
	int vetor[5],i,soma = 0,multiplicacao = 1;
	
	
	for(i=0;i<5;i++){
		printf("Vetor %i ",i);
		scanf("%i",&vetor[i]);
		
		soma += vetor[i];
		multiplicacao *= vetor[i];
	}
	for(i=0;i<5;i++){
		printf("Vetor %i = %i\n",i,vetor[i]);
	}
	printf("Soma dos vetores %i\nMultiplicacao dos vetores %i",soma,multiplicacao);
}
