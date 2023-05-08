#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i,buffer,buffer2;
	printf("Digite dois numeros");
	scanf("%i\n%i",&buffer,&buffer2);
	fflush(stdin);
	
	if(buffer > buffer2){
		for(i = buffer2 + 1;buffer -1 >= i; i++){
			if(i % 2 ==0){
				printf("%i",i);
			}
			else{
				printf(" ");
			}
		}
	}
	else{
		for(i =buffer +1;buffer2 -1 >= i; i++){
			if(i % 2 == 0){
				printf("%i",i);
			}
			else{
				printf(" ");
			}
		}
	}
	return 0;
}
