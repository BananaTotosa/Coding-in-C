#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char sexo;
	float altura, peso;
	
	printf("Informe o sexo:\n M ou F\n");
	scanf("%c", &sexo);
	
	printf("Informe sua altura em metros: ");
	scanf("%f", &altura);
	
	if (sexo == 'M')
		peso = (72.7 * altura) - 58;
	else 
		peso = (62.1 * altura) - 44.7;
	
	printf("Seu peso ideal = %.2f", peso);
			
	return 0;
}
