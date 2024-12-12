#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float valor_total, prestacoes, valor_prestacoes;
	
	printf("Digite o valor total em reais e o numero de prestacoes desejadas: ");
	scanf("%f %f", &valor_total, &prestacoes);
	
	if (prestacoes > 12 && prestacoes < 24){
		valor_prestacoes = valor_total / prestacoes;
	} else if (prestacoes >= 24 && prestacoes < 36){
		valor_prestacoes = (valor_total * 1.1) / prestacoes; 
	} else if (prestacoes >= 36){
		valor_prestacoes = (valor_total * 1.15) / prestacoes;
	} else{
		printf("Valor minimo eh de 12 prestacoes");
		return 0;
	}
		
	printf("O valor de cada prestacao sera de: R$%f\n", valor_prestacoes);
		
	return 0;
	
}
