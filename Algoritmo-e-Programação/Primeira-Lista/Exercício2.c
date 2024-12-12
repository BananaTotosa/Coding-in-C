#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int a, b, c, multiplicacao;
	
	printf("Digite o primeiro numero: ");
	scanf("%d", &a);
	
	printf("Digite o segundo numero: ");
	scanf("%d", &b);
	
	printf("Digite o terceiro numero: ");
	scanf("%d", &c);
	
	multiplicacao = a * b * c;
	
	printf("Resultado = %d\n", multiplicacao);
	
	return 0;
}
