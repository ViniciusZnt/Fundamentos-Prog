#include <stdio.h>
#include <stdlib.h>

int main(void){
	int mat[5][5],l,c;
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("Digite [%i][%i]: ",l,c);
			scanf("%i",&mat[l][c]);
			fflush(stdin);
		}
	}
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("%i\t",mat[l][c]);
		}
		printf("\n");
	}
	
	return 0;
}