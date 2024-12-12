#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float reais, dolar, marco, libra;
	
	printf("Digite a quantidade de reais: ");
	scanf("%f", &reais);
	
	dolar = reais / 1.80;
	marco = reais / 2.00;
	libra = reais / 3.57;
	
	printf("O valor em dolares: %f\n", dolar);
	printf("O valor em marcos alemaes: %f\n", marco);
	printf("O valor em libras esterlinas: %f\n", libra);
	
	return 0;
}
