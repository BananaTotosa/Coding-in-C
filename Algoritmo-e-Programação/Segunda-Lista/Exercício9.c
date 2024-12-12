#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int etiqueta, pagamento, valor;
	
	printf("Digite o preco da etiqueta: ");
	scanf("%i", &etiqueta);
	
	printf("Escolha o tipo de pagamento:\n 1 - A vista em dinheiro ou cheque\n 2 - A vista no cartao de credito\n 3 - Em duas vezes\n 4 - Em tres vezes\n");
	scanf("%i", &pagamento);
	
	switch(pagamento){
	case 1:
		valor = etiqueta * 0.90;
		break;
	case 2:
		valor = etiqueta * 0.85;
		break;
	case 3:
		valor = etiqueta / 2;
		break;
	case 4: 
		valor = (etiqueta * 1.10) / 3;
		break;
	default:
		printf("Numero invalido");
		break;
	}
		
	printf("O valor final sera = %i", valor);
	
	return 0;
}
