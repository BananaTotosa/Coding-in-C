#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int p = 0, sim_f = 0, nao_f = 0, nao_m = 0, sim_m = 0, F = 0, M = 0, Sim, Nao;
	float por_f, por_m;
	char sexo, resposta;
	
	while(p < 2000){
		printf("Digite o sexo do entrevistado (Digite F = feminino e M = masculino):\n");
		scanf(" %c", &sexo);
		if (sexo == 'F'|| sexo == 'F'){
		F++;
		printf("Digite sua resposta: S/N\n");
		scanf(" %c", &resposta);
			if (resposta == 'S'|| resposta == 's')
			sim_f++;
			else
			nao_f++;
		}
		else {
		M++;
		printf("Digite sua resposta: S/N\n");
		scanf(" %c", &resposta);
			if (resposta == 'S'|| resposta == 's')
			sim_m++;
			else
			nao_m++;
		}
		p++;
	}
	
	Sim = sim_f + sim_m;
	Nao = nao_f + nao_m;
	por_f = sim_f / F * 100;
	por_m = nao_m / M * 100;
	
	printf("O numero de pessoas que responderam sim foi de: %i\n", Sim);
	printf("O numero de pessoas que responderam noa foi de: %i\n", Nao);
	printf("a porcentagem de pessoas do sexo feminino que responderam sim foi de: %.1f%%\n", por_f);
	printf("a porcentagem de pessoas do sexo masculino que responderam nao foi de: %.1f%%\n", por_m);
		
	return 0;
}
