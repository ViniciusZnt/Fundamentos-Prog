#include <stdio.h>
#include <stdlib.h>

int main (void){
	int qnotas,i;
	float nota,somanotas;
	printf("Insira a quantidade de notas e cada uma das notas para saber a media bimestral da turma\n");
	printf("Quantidade de notas: ");
	scanf("%i",&qnotas);
	for(i=1;i<=qnotas;i++){
		printf("Nota %i ",i);
		scanf("%f",&nota);
		somanotas += nota;
	}
	printf("A media bimestral da turma e %.2f",(float)somanotas/qnotas);
}
