#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	char resposta;
		do{
		for(i=100; i<= 200; i++){
			if(i % 2 == 0){
				printf("%i\n",i);
			}
			else{
				printf(" ");
			}
		}
		printf("Deseja rebootar o programa?\n");
		printf("S ou N");
		scanf("%c",&resposta);
		}
		while(resposta == 'S' || resposta == 's');
	return 0;

}
