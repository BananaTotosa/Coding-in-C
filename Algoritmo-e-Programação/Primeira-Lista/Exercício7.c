#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float p, engordou, emagreceu;
	
	printf("Digite seu peso: ");
	scanf("%f", &p);
	
	engordou = 1.15 * p;
	emagreceu = 0.80 * p;
	
	printf("Se engordar 15 por cento, seu peso sera = %f\n", engordou);
	printf("Se emagrecer 20 por cento, seu peso sera = %f\n", emagreceu);
	
	return 0;
}
