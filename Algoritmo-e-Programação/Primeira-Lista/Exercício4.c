#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float a, b, media;
	
	printf("Digite a primeira nota: ");
	scanf("%f", &a);
	
	printf("Digite a segunda nota: ");
	scanf("%f", &b);
	
	media = (a * 2 + b * 3) / (2 + 3);
	
	printf("Resultado = %f\n", media);
	
	return 0;
}
