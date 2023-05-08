#include <stdio.h>
#include <stdlib.h>

int main (void){
	float vetor[10];
	int i;
	
	for(i=1;i<=10;i++){
	printf("Vetor %i ",i);
	scanf("%f",&vetor[i]);
	fflush(stdin);
	}
	for(i=10;i>=0;i--){
		printf("Vetor %i = %.2f\n",i,vetor[i]);
	}
	
}
