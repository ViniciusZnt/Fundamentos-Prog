#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	int maq1;
	int maq2;
	int maq3;
	printf("Quantas 20 CV serao compradas? ");
	scanf("%i",&maq1);
	fflush(stdin);
	
	printf("Quantas 1 CV serao compradas?");
	scanf("%i",&maq2);
	fflush(stdin);
	
	printf("Quantas 5 CV serao compradas?");
	scanf("%i",&maq3);
	fflush(stdin);
	
	printf("\tVoce pediu %i maquinas 20 CV\n\t%i maquinas 1 CV\n\t%i maquinas 5 CV",maq1,maq2,maq3);
	
	int customaq1 = maq1 * 1500;
	int customaq2 = maq2 * 300;
	int customaq3 = maq3 * 600;
	int custototal = customaq1 + customaq2 + customaq3;
	printf("\n\tO custo da maquina 1 e %i\n\tO custo da maquina 2 e"
	" %i\n\tO custo da maquina 3 e %i\n\tO custo Total e %i",customaq1,customaq2,customaq3,custototal); 
}
