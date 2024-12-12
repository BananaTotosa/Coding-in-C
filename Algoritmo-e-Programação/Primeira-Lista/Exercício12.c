#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float salario, c1, c2, restante;
	
	printf("Digite o salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor da primeira conta: ");
	scanf("%f", &c1);
	
	printf("Digite o valor da segunda conta: ");
	scanf("%f", &c2);
	
	restante = salario - (c1 * 1.02 + c2 * 1.02);
	
	printf("O valor restante do salario: %f\n", restante);
	
	return 0;
}
