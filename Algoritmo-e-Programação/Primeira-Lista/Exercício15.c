#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a1, a2, a3, a4;
	a4 = 180;
	
	printf("Digite o valor do primeiro angulo: ");
	scanf("%f", &a1);
	
	printf("Digite o valor do segundo angulo: ");
	scanf("%f", &a2);
	
	a3 = a4 - (a1 + a2);
	
	printf("O valor do terceiro angulo: %f\n", a3);
	
	return 0;
}
