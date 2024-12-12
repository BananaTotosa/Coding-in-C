#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2, n3;
	char opcao;
	
	printf("Digite 2 numeros: ");
	scanf("%i %i", &n1, &n2);
	
	printf("Escolha o que deseja fazer com os numeros:\n A - Somar os dois numeros\n S - Subtrair os dois numeros\n M - Multiplicar os dois numeros\n Q - Obter o quociente dos dois numeros\n");
	scanf(" %c", &opcao);
	
	switch(opcao){
		case 'A': 
		case 'a':{
			n3 = n1 + n2;
			printf("O valor da soma = %i", n3);
			break;
	}
		case 'S': 
		case 's':{
			n3 = n1 - n2;
			printf("O valor da subtracao = %i", n3);
			break;
	}
		case 'M': 
		case 'm':{
			n3 = n1 * n2;
			printf("O valor da multiplicacao = %i", n3);
			break;
	}
		case 'Q': 
		case 'q':{
			n3 = n1 / n2;
			printf("O valor do quociente = %i", n3);
			break;
	}
		default:
			printf("A opcao escolhida eh invalida");
			break;
}
	return 0;
}
