#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int idade = 1, i = 0;
	float media, soma_idade = 0;
	
	while (idade != 0){
		printf("Digite a idade do individuo %i\n", i+1);
		scanf("%i", &idade);
		soma_idade += idade;
		i++;
	}
	
	media = soma_idade / (i-1);
	printf("A media das idade eh de:\n");
	printf("%.1f / %i = %.1f\n", soma_idade, i-1, media);
	
	return 0;
}
