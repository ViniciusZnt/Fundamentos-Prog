#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num1;
	int num2;
	float num3;
	printf("Apresente 3 numeros: ");
	scanf("\n%i",&num1);
	fflush(stdin);
	scanf("\n%i",&num2);
	fflush(stdin);
	scanf("\n%f",&num3);
	fflush(stdin);

	
	
	int calculo1 = (2 * num1) * (num2/2);
	float calculo2 = (3 * num1) +num3;
	float calculo3 = num3*num3*num3;
 	
	printf("O produto do dobro do primeiro com metade do segundo: %i\nA soma do triplo do primeiro com o terceiro: %f\nO terceiro elevado ao cubo: %f",calculo1,calculo2,calculo3);
}
