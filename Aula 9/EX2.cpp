#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	char name[50];
	
	printf("Digite seu nome");
	gets(name);
	printf("%s",name);
	
	return 0;
}