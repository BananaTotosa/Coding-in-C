#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2, n3, reprovado = 0, falta = 0, alunos = 1, maior = 0, menor = 10000, matricula, frequencia;
	float por_falta, media_total, nota_final = 0, nota_turma = 0;
	
	while (alunos <= 100){
		printf("Digite o numero da matricula do aluno %i:\n", alunos);
		scanf("%i", &matricula);
		
		printf("Digite a nota 1, 2 e 3:\n");
		scanf("%i %i %i", &n1, &n2, &n3);
		
		printf("Digite o numero de aulas que o aluno compareceu:\n");
		scanf("%i", &frequencia);
		
		nota_final = (n1 + n2 + n3) / 3.0;
		
		if(menor > nota_final)
		menor = nota_final;
		
		if(maior < nota_final)
		maior = nota_final;

		nota_turma += nota_final;
		printf("Matricula: %i\n", matricula);
		printf("Nota final: %f\n", nota_final);
		printf("Frequencia: %i\n", frequencia);
		
		if (frequencia < 40){
			falta++;
			printf("REPROVADO por falta\n");
			reprovado++;
		}
		if (nota_final >= 60 && frequencia >= 40)
			printf("Aprovado\n");
			
		else if (nota_final <= 60 && frequencia >= 40){
			printf("Reprovado\n");
			reprovado++;
		}	
		alunos++;
	}
	media_total = nota_turma / 100.0;
	por_falta = (float)falta / 100.0 * 100;
	printf("A menor nota foi %i e maior nota foi %i\n", menor, maior);
	printf("A media da turma foi de: %f\n", media_total);
	printf("O total de alunos reprovados foi de: %i\n", reprovado);
	printf("A porcentagem de alunos reprovados por infrequencia foi de: %f%%\n", por_falta);
	
	return 0;
}
