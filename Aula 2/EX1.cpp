#include <stdio.h>
#include <stdlib.h>

int main (void){
	int buffer1;
	int buffer2;
	
	printf("Escreva dois numeros \n");
	scanf("%i",&buffer1);
	scanf("%i",&buffer2);
	if (buffer1 == buffer2){
		printf("Os numeros sao iguais");
	}
	if(buffer1 > buffer2){
		printf("O primeiro numero e maior");
	}
	if(buffer1 < buffer2){
		printf("O segundo numero e maior");
	}
	if(buffer1 == 0 && buffer2 == 0){
		printf("Error");
	}
}