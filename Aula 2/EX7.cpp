#include <stdio.h>
#include <stdlib.h>

int main(void){
	char letra;
	printf("Digite uma letra ");
	scanf("%c",&letra);
	fflush(stdin);
	if(letra >= '0' && letra <='9'){
		printf("Escreva uma letra!!");
	}
	if(letra == 'a' || letra == 'e' || letra =='i' || letra =='o' || letra =='u' || letra == 'A' || letra == 'E' || letra =='I' || letra =='O' || letra =='U'){
		printf("A letra e uma vogal");
	}
	else{
		printf("A letra e uma consoante");
	}
}