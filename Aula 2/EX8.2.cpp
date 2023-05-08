#include <stdio.h>
#include <stdlib.h>

int main (void){
	int num1,num2,num3;
	printf("Digite 1 numeros ");
	scanf("%i",&num1);
	fflush(stdin);
	printf("Digite 2 numeros ");
	scanf("%i",&num2);
	fflush(stdin);
	printf("Digite 3 numeros ");
	scanf("%i",&num3);
	fflush(stdin);
	
	if(num1 > num2 && num1 > num3){
		if(num2 > num3){
			printf("A ordem eh %i %i %i",num1,num2,num3);
		}
		if(num3 > num2){
			printf("A ordem eh %i %i ¨%i",num1,num3,num2);
		}
	}
	if (num2 > num1 && num2 > num3){
		if(num1 > num3){
			printf("A ordem eh %i %i %i",num2,num1,num3);
		}
		if(num3 > num1){
			printf("A ordem eh %i %i %i",num2,num3,num1);
		}
	}
	if (num3 > num1 && num3 > num2){
		if(num1 > num2){
			printf("A ordem eh %i %i %i",num3,num1,num2);
		}
		if(num2 > num1){
			printf("A ordem eh %i %i %i",num3,num2,num1);
		}
	}
}
