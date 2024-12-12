#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, divisao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f", &a);
	
	printf("Digite o segundo valor: ");
	scanf("%f", &b);
	
	divisao = a / b;
	
	printf("Resultado = %f\n", divisao);
	
	return 0;
}
