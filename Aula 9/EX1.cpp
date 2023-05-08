#include <stdio.h>
#include <stdlib.h>

int main (void){
	int vet[10],i;
	
	for(i=0;i<10;i++){
		printf("Digite %i numero ",i+1);
		scanf("%i",&vet[i]);
		fflush(stdin);
	}
	
	for(i=0;i<10;i++){
		printf("vet[%i]=%i\n",i,vet[i]);
	}
	
	return 0;
}