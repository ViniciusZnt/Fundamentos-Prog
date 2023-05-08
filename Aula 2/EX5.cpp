#include <stdio.h>
#include <stdlib.h>


int main (void){
	float numero;
	int num;
	printf("Escreva um numero ");
	scanf ("%f",&numero);
	num = numero;
	if(numero == num){
		printf("\nSeu numero e inteiro ");
}
	else{
		printf("\nSeu numero e real ");
	}
}
