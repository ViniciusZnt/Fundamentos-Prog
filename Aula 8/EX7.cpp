#include <stdio.h>
#include <stdlib.h>

int main (void){
	int buffer,i;
	printf("Digite um numero de 1 a 10 para imprimir a tabuada do mesmo: ");
	scanf("%i",&buffer);
	
	for(i = 0; i<=10; i++){
		printf("%i x %i = %i\n",i,buffer,(i*buffer));
	}
	return 0;
}
