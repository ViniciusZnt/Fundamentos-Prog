#include <stdio.h>
  
int main(){
    int A;
  
    printf("Coloque um número: ");
    scanf("%i", &A);
    fflush(stdin);
  	
    if (A > 0)
        printf("%i é positivo.", A);
    else if (A < 0)
        printf("%i é negativo.", A);
    else if (A == 0)
        printf("%i é zero.", A);
  
    return 0;
}