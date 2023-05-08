#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char sexo;
	printf("Escreva seu sexo com F ou M \n");
	scanf("%c",&sexo);
	fflush(stdin);
	
	if(sexo == 'F'){
		printf("\nSeu sexo e Feminino ");
	}	
	else if(sexo == 'M'){
		printf("\nSeu sexo e Masculino ");
	}
	else{
		printf("\nSeu sexo e indefinido ");
	}
}