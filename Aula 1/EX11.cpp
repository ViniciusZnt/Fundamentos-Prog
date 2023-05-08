#include <stdio.h>
#include <stdlib.h>

int main(void){
	double Firenheit;
	printf("Digite uma Temperatura em Firenheit: ");
	scanf("%lf",&Firenheit);
	
	double celcius = (Firenheit - 32.0/9.0) * 5;
	printf("A temperatura em Celcius e %.2lf",celcius);
}
