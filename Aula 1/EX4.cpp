#include <stdio.h>

int main() {
    float metros, centimetros;
    printf("Digite o comprimento em metros: ");
    scanf("%f", &metros);
    fflush(stdin);
    centimetros = metros * 100;
    printf("%.2f metros equivalem a %.2f centimetros\n", metros, centimetros);
    return 0;
}
