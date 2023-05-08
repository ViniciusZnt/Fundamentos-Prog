#include <stdio.h>
#include <stdlib.h>

int main(void){
	float num1;
	float num2, res;
	printf("Qual o tipo de operacao?\n [ 1 ]  Adicao\n [ 2 ]  Subtracao\n [ 3 ]  Multiplicacao\n [ 4 ]  Divisao\n [ 5 ]  Fim\n");
	int opcao;
	scanf("%i",&opcao);
	fflush(stdin);
	printf("Digite um numero ");
	scanf("%f",&num1);
	fflush(stdin);
	printf("Digite outro numero ");
	scanf("%f",&num2);
	fflush(stdin);
	
	
	switch(opcao){
		case 1:
			if (num1 != 0 && num2!=0){
				
				res = num1 + num2;
				printf("%.2f + %.2f = %.2f",num1,num2,res);
			}else{
				printf("Digite um numero diferente de zero");
			}
			break;
		case 2:
			if (num1 != 0 && num2!=0){
				
				res = num1 - num2;
				printf("%.2f - %.2f = %.2f",num1,num2,res);
			}else{
				printf("Digite um numero diferente de zero");
			}
			break;
		case 3:
			if (num1 != 0 && num2!=0){
			
				res = num1 * num2;
				printf("%.2f x %.2f = %.2f",num1,num2,res);
			}else{
			printf("Digite um numero diferente de zero");
			}
			break;
		case 4:
			if (num1 != 0 && num2!=0){
			
				res = num1 / num2;
				printf("%.2f / %.2f = %.2f",num1,num2,res);
			}else{
			printf("Digite um numero diferente de zero");
			}
			break;
		case 5:
			printf("Saindo");	
	}
}
