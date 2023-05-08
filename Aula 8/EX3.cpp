#include <stdio.h>
#include <stdlib.h>

int main (void){
	int n,max,min,i;
	printf("Digite 10 numeros: ");
	
	scanf("%i",&n);
	max = n;
	min = n;
	
	for (i = 2; i <= 10; i++){
		scanf("%i",&n);
		if(n > max){
			max = n;
		}
		if(n < min){
			min = n;
		}
	}
	
	printf("A diferenca entre o maior e menor numero e: %i",max - min);
}
