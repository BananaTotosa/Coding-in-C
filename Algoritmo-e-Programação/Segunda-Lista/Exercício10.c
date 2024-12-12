#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float peso, altura, final;
	
	printf("Digite o seu peso e altura: ");
	scanf("%f %f", &peso, &altura);
	
	final = peso / pow(altura, 2);
	if (final < 18.5)
		printf("ABAIXO DO PESO");
	else if (final < 25)
		printf("PESO NORMAL");
	else if (final < 30)
		printf("ACIMA DO PESO");
	else 
		printf("OBESO");
	
	return 0;
}
