#include <stdio.h>
#include <stdlib.h>

int main (void){
	int base,expoente,pow=1,i;
	printf("Insira dois numeros ");
	scanf("%i %i",&base,&expoente);

	for(i=1; i <= expoente ; i++){
	pow = pow * base;
	}
	
	printf("O resultado de %i elevado a %i eh %i",base,expoente,pow);
	return 0;
}
