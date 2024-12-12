#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int t = 0, turma5 = 0, aluno = 0, A = 0, P = 0, i = 0, matricula;
	char turma, AP;
	float ausencia;
	
	while (t < 2){
		t++;
		A = 0;
		P = 0;
		i = 0;
		printf("Digite a turma:\n");
		scanf(" %c", &turma);
		printf("Digite o numero de alunos:\n");
		scanf("%i", &aluno);
		
		while (i < aluno){
			printf("Digite o numero da matricula:\n");
			scanf("%i", &matricula);
			printf("Digite (A) para ausente e (P) para presente:\n");
			scanf(" %c", &AP);
			
			if (AP == 'A' || AP == 'a'){
				A++;
			}
			else 
				P++;
			i++;
		}
		ausencia = ((float)A / aluno) * 100;
		printf("A turma %c teve %.1f%% de ausencia\n", turma, ausencia);
		
		if (ausencia > 5)
		turma5++;
	}
	
	printf("%i turma(s) com a porcentagem de ausencia maior que 5", turma5);
	
	
	return 0;
}
