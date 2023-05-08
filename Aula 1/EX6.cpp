#include <stdio.h>
#include <stdlib.h>

int main(void){
double raio;
printf("Digite o Raio de um Circulo: ");
scanf("%lf",&raio);

double conta = 3.14 * (raio*raio);
printf("O rai da Circunferencia e : %.4lf",conta);
}