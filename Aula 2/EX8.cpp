#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, num3;
    printf("Digite 3 numeros:\n");
    scanf("%i %i %i", &num1, &num2, &num3);
    fflush(stdin);
    if (num1 > num3) {  //Esse vai trocar o primeiro pelo terceiro caso o terceiro seja menor que o primeiro
        int tmp = num3;
        num3 = num1;
        num1 = tmp;
    }
    if (num1 > num2) {  //Esse vai trocar o primeiro pelo segundo caso o segundo seja menor que o primeiro
        int tmp = num2;
        num2 = num1;
        num1 = tmp;
    }
    if (num2 > num3) {  //Esse vai trocar o segundo pelo terceiro caso o terceiro seja menor que o segundo
        int tmp = num3;
        num3 = num2;
        num2 = tmp;
    }
    printf("%i %i %i", num1, num2, num3);
}