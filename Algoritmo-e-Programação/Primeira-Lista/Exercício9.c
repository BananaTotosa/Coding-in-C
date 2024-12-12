#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float maior, menor, altura, A;
	
	printf("Calcule a area de um trapezio\n");
	printf("Digite o valor da base maior: ");
	scanf("%f", &maior);
	
	printf("Digite o valor da base menor: ");
	scanf("%f", &menor);
	
	printf("Digite o valor da altura: ");
	scanf("%f", &altura);
	
	A = (maior + menor) * altura / 2;
	
	printf("O valor da area sera de = %f\n", A);
	
	return 0;
}
