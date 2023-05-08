#include <stdio.h>
#include <stdlib.h>

int main (void){
	int buffer;
	printf("Digite um numero ");
	scanf("%i",&buffer);
	fflush(stdin);
	if (buffer % 2 == 0){
		printf("O numero e par ");
	}
	if (buffer % 2 != 0){
		printf("O numero e impar ");
	}
}