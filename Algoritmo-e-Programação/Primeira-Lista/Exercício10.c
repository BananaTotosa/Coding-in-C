#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float minimo, salario, final;
	
	printf("Digite o valor do salario: ");
	scanf("%f", &salario);
	
	printf("Digite o valor do salario minimo: ");
	scanf("%f", &minimo);
	
	final = salario / minimo;
	
	printf("Esse funcionario ganha %f salarios minimos\n", final);
	
	return 0;
}
