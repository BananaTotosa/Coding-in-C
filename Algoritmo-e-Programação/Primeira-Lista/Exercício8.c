#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float peso, grama;
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	
	grama = peso * 1000;
	
	printf("Seu peso em gramas sera = %f\n", grama);
	
	return 0;
}
