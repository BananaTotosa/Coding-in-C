#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float fixo, vendas, final;
	
	printf("Digite o salario fixo: ");
	scanf("%f", &fixo);
	
	printf("Digite o valor de vendas: ");
	scanf("%f", &vendas);
	
	final = fixo + 0.04 * vendas;
	
	printf("Resultado = %f\n", final);
	
	return 0;
}
