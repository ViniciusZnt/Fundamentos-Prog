#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i,count = 0;
	char vetor[10];
	
	printf("Digite 10 valores para um vetor receber \n");
	
	for(i=0;i<10;i++){
		printf("Vetor %i ",i);
		scanf("%c",&vetor[i]);
		fflush(stdin);
	}
	for(i=0;i<10;i++){
		if(vetor[i] != 'a' && vetor[i] != 'e' && vetor[i] != 'i' && vetor[i] != 'o' && vetor[i] != 'u'){
			printf("Vetor %i tem %c \n",i,vetor[i]);
			count++;
		}
		else{
			printf(" \n");
		}
	}
	printf("Foram lidas %i consoantes",count);
	
	return 0;
}
