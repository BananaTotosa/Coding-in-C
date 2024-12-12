#include <stdio.h>
#include <stdlib.h>

int main ( ) {
	int valor, estado, final;
	
	printf("Digite o valor do produto: ");
	scanf("%i" ,&valor);
	
	printf("Digite o estado destino do produto:\n");
	printf("Sendo:\n 1 - MG\n 2 - SP\n 3 - RJ\n 4 - MS\n");
	scanf("%i", &estado);
	
	switch (estado)
	{
	case 1:
		final = 1.07 * valor;
		printf("O valor sera de %i\n", final);
		break;
	case 2:
		final = 1.12 * valor;
		printf("O valor sera de %i\n", final);
		break;
	case 3:
		final = 1.15 * valor;
		printf("O valor sera de %i\n", final);
		break;
	case 4:
		final = 1.08 * valor;
		printf("O valor sera de %i\n", final);
		break;
	default:
		printf("opcao invalida");
		break;			
	}
	
	return 0;
	
}
