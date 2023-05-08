#include <stdio.h>
#include <stdlib.h>

int main (void){
	int numero;
	int numero1;
	int numero2;
	
	printf("Escreva um numero ");
	scanf("%i",&numero);
	
	if(numero % 2 == 0){
		int numero1 = numero + 1;
		printf("O numero e par, mas para nao ser par e %i",numero1);
	}
	if (numero % 2 != 0){
		int numero2 = numero + 1;
		printf("O numero e impar, mas para nao ser impar e %i",numero2);
	}
}
