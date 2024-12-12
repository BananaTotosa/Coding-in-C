#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float raio, C, A, V, pi;
	pi = 3.14;
	
	printf("Digite o valor do raio: ");
	scanf("%f", &raio);
	
	C = 2 * pi * raio;
	A = pi * raio * raio;
	V = 3.0 / 4.0 * pi * pow(raio,3);
	
	printf("O comprimento da esfera: %f\n", C);
	printf("A area da esfera: %f\n", A);
	printf("O volume da esfera: %f\n", V);
	
	return 0;
}
