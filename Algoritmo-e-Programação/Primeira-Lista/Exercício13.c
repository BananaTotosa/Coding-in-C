#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float c1, c2, hipo;
	
	printf("Digite o valor do primeiro cateto: ");
	scanf("%f", &c1);
	
	printf("Digite o valor do segundo cateto: ");
	scanf("%f", &c2);
	
	hipo = sqrt(c1 * c1 + c2 * c2);
	
	printf("O valor da hipotenusa: %f\n", hipo);
	
	return 0;
}
