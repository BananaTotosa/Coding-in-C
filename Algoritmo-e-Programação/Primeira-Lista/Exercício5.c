#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, valor;
	
	printf("Digite o valor do produto: ");
	scanf("%f", &a);
	
	valor = a - 0.10 * a;
	
	printf("Resultado = %f\n", valor);
	
	return 0;
}
