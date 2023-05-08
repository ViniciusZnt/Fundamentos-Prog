#include <stdio.h>
#include <stdlib.h>

int main (void){
	int opcao1,opcao2,opcao3,opcao4,opcao5;
	printf("Escolha uma opcao:\n[1]Mamifero\n[2]Aves\n[3]Repteis");
	scanf("%i",&opcao1);
	fflush(stdin);
	switch(opcao1){
		case[1]:
			printf("Mamifero");
			printf("Escolha uma opcao:\n[1]Quadrupede\n[2]Bipede\n[3]Voador\n[4]Aquatico");
			scanf("%i",&opcao2);
			fflush(stdin);
			switch(opcao2){
				case[1]:
					printf("Quadrupede");
					printf("Escolha uma opcao:\n[1]Carnivoro\n[2]Herbivoro");
					scanf("%i",&opcao3);
					switch(opcao3){
						case[1]:
							printf("Mamifero + Quadrupede + Carnivoro = Leao");
						case[2]:
							printf("Mamifero + Quadrupede + Herbivoro = Cavalo");
						}
				case[2]:
					printf("Bipede");
					printf("Escolha uma opcao:\n[1]Onivoro\n[2]Frutifero");
					scanf("%i",&opcao3);
					switch(opcao3){
						case[1]:
							printf("Mamifero + Bipede + Onivoro = Homem");
						case[2]:
							printf("Mamifero + Bipede + Frutifero = Macaco");
						}
				case[3]:
					printf("Voador");
					printf("Mamifero + Voador = Morcego");
				case[4]:
					printf("Aquatico");
					printf("Mamifero + Aquatico = Baleia");
				}
		case[2]:
			printf("Ave");
			printf("Escolha uma opcao:\n[1]Nao Voadora\n[2]Nadadora\n[3]De rapina");
			scanf("%i",opcao2);
			fflsuh(stdin);
			switch(opcao2){
				printf("Nao voadora");
				printf("Escolha uma opcao:\n[1]Tropical\n[2]Polar");
				scanf("%i",&opcao3);
				fflush(stdin);
				switch(opcao3){
					case[1]:
						printf("Tropical");
				}
			}
					
				
			
	}
}