#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float n1, n2, media;
	
	printf("Digite suas notas: ");
	scanf("%f %f", &n1, &n2);
	
	media = (n1 + n2) / 2.0;
	
	printf("Sua media foi = %f\n", media);
	
	if (media < 3)
		printf("Voce foi reprovado!!!\n");
	else { 
	if (media < 7)
		printf("Voce esta de exame!!!\n");
	else 
		printf("Voce foi aprovado!!!\n");
	}
	
	return 0;
}
