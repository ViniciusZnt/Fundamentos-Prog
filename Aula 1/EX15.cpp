#import <stdio.h>
#import <stdlib.h>


int main(void){
    int Largura;
    int Altura;
    int Lperm2 = 3;
    printf("\tQuantos metros de Largura de Parede quer pintar ");
    scanf("%i",&Largura);
    printf("\n\tQuantos metros de Altura de Parede quer pintar ");
    scanf("\n\t%i",&Altura);
    
    int metroquadrado = Largura * Altura;
    int Litros = metroquadrado * Lperm2;
    double Latas = (double)Litros/3.6;
    
    printf("\n\tVoce precisara de %lf Latas ",Latas);
}
