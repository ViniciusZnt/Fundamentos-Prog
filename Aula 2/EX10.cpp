#include <stdio.h>
#include <stdlib.h>

int main(void){
	int aluno1,aluno2,aluno3,aluno4;
	float media;
	printf("Digite a idade de um alunos ");
	scanf("%i",&aluno1);
	fflush(stdin);
	printf("Digite a idade de um alunos ");
	scanf("%i",&aluno2);
	fflush(stdin);
	printf("Digite a idade de um alunos ");
	scanf("%i",&aluno3);
	fflush(stdin);
	printf("Digite a idade de um alunos ");
	scanf("%i",&aluno4);
	fflush(stdin);
	
	media = aluno1+aluno2+aluno3+aluno4/4;
	
	if(media <= 25 && media >= 0){
		printf("Turma Jovem");
	}
	else if(media > 25 && media <= 40){
		printf("Turma Adulta");
	}
	else{
		printf("Turma Idosa");
	}
}