#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	float n1, n2, n3, n4, media;
	
	printf("Digite suas notas: ");
	scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
	
	media = (n1 + n2 + n3 + n4) / 4.0;
	
	printf("Sua media foi = %f\n", media);
	
	if (media > 7) 
		printf("Voce foi aprovado!!!");
	else 
		printf("Voce foi reprovado!!!");
	
	return 0;
}
