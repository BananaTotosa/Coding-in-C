#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int curso, vaga, f, m, candidatos = 0, total = 0, maior_candidatos = 0, maior_curso = 0;
	float candidatos_vagas, por_f;
	
	printf("Digite o codigo do curso (digite 0 para sair):\n");
	scanf("%i", &curso);
	
	while(curso != 0){
		printf("Digite a quantidade de vagas:\n");
		scanf("%i", &vaga);
		printf("Digite a quantidade de candidatos do sexo feminino:\n");
		scanf("%i", &f);
		printf("Digite a quantidade de candidatos do sexo masculino:\n");
		scanf("%i", &m);
		candidatos = f + m;
		candidatos_vagas = (float)candidatos / vaga;
		por_f = (float)f / candidatos * 100;
		
		if (candidatos_vagas > maior_candidatos){
			maior_candidatos += candidatos_vagas;
			maior_curso = curso;
		}	
		
		total += candidatos;
		
		printf("Curso: %i\n", curso);
		printf("Candidatos por vaga: %.1f\n", candidatos_vagas);
		printf("Porcentagem de de candidatos do sexo feminino foi de: %.1f\n", por_f);
		
		printf("Digite o codigo do curso (digite 0 para sair):\n");
		scanf("%i", &curso);
		
	}
	printf("O maior numero de candidatos por vaga foi de %i sendo do curso %i\n", maior_candidatos, maior_curso);
	printf("O total de candidatos foi de: %i\n", total);
	
	return 0;
}
