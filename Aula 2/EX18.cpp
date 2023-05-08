#include <stdio.h>
#include <math.h>

int main (void){
	float a,b,c,delta;
	printf("Digite o a,b,c de uma equacao para ser calculado\n");
	scanf("%f",&a);
	fflush(stdin);
	scanf("%f",&b);
	fflush(stdin);
	scanf("%f",&c);
	fflush(stdin);
	
	delta = pow(b,2)-4*a*c;
	
	if(delta < 0){
	printf("A equacao nao tem resultado");
	}
		
	else if (delta > 0){
		printf("A equacao tem 2 x diferentes\n");
		printf("O resultado dos x sao: %f e %f\n",-b +sqrt(delta)/2*a,-b -sqrt(delta)/2*a);
	}
		else {
		printf("A equacao tem um x somente y\n");
		printf("O resultado do x e: %f",-b +sqrt(delta)/2*a);
		}
}