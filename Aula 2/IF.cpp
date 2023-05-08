#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

int num1;
int num2;
int main (void){
	printf("Digite dois numeros ");
	scanf("%i",&num1);
	scanf("%i",&num2);
	
		if(num1 == num2)
		printf("\n%i e igual a %i ",num1,num2);
		if (num1 > num2)
		printf("\n%i e maior que %i ",num1,num2);
		if(num1 < num2)
		printf("\n%i e menor que %i ",num1,num2);
	return 0;
	
}