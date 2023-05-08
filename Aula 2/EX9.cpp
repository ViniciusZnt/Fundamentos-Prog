#include <stdio.h>
#include <stdlib.h>

int main (void){
	float nota1, nota2, nota3, media;
	printf("Digite tres notas do seu semestre \n");
	scanf("%f %f %f",&nota1,&nota2,&nota3);
	fflush(stdin);
	media = (nota1 + nota2 + nota3) / 3;
	
	if (media >= 7 && media < 10){
		printf("Aprovado\n");
	}
	else if (media < 7 && media > 0){
		printf("Reprovado\n");
	}
	else {
		printf("Aprovado com Distincao\n");
	}
}