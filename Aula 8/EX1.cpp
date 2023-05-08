#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i,buffer1,buffer2;
	printf("Digite dois numero");
	scanf("%i\n%i",&buffer1,&buffer2);
	fflush(stdin);
	
	if(buffer1 > buffer2){
		for(i = buffer2 + 1; buffer1 - 1 >= i; i++ ){
			printf("%i",i);
		}
	}
	else{
		for(i =buffer1 + 1; buffer2 -1 >= i; i++ ){
			printf("%i",i);
		}
	}
	return 0;
}
