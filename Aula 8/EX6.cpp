#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i,cds;
	float preco,customedio,custototal;
	printf("Insira o valor de CDs investidos e o preco investido em cada um\n");
	printf("Quantos cds foram comprados? ");
	scanf("%i",&cds);
	
	for(i=0;i<=cds;i++){
		printf("Preco %i ",i);
		scanf("%f",&preco);
		custototal += preco;
	}
	customedio = custototal /(float) cds;
	printf("O custotal e %.2f e o customedio e %.2f",custototal,customedio);
}
