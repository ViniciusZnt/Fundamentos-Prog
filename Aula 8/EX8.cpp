#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int populacaoA = 80000,populacaoB = 200000,anos = 0;
	float crescA = 0.03,crescB = 0.015;
	
	
	while (populacaoA != populacaoB){
		populacaoA *=  crescA;
		populacaoB *=  crescB;
		anos++;
	}
	printf("%i sao necessarios para que as cidade cheguem no mesmo valor",anos);
}
