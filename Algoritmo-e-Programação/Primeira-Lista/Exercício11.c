#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float nascimento, atual , anos, meses, semanas, dias;
	
	printf("Digite seu ano de nascimento: ");
	scanf("%f", &nascimento);
	
	printf("Digite o ano atual: ");
	scanf("%f", &atual);
	
	anos = atual - nascimento;
	meses = anos * 12;
	semanas = anos * 52;
	dias = anos * 365;
	
	printf("A sua idade em anos: %f\n", anos);
	printf("A sua idade em meses: %f\n", meses);
	printf("A sua idade em semanas: %f\n", semanas);
	printf("A sua idade em dias: %f\n", dias);
	
	return 0;
}
