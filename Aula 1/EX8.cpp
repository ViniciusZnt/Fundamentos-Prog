#include <stdio.h>
#include <stdlib.h>

int main (void){
	printf("Digite 4 notas \n");
	float nota1,nota2,nota3,nota4;
	scanf("%f %f %f %f",&nota1,&nota2,&nota3,&nota4);
	fflush(stdin);
	printf("A media eh %.2f ",(nota1+nota2+nota3+nota4)/4);
}