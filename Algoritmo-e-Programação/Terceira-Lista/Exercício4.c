#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char nome[150];
	float compra, venda, lucro, venda_total = 0, compra_total = 0, lucro_total = 0;
	int l10 = 0, l1020 = 0, l20 = 0;
	
	printf("Informe o nome do produto (Digite Sair para finalizar a listagem):\n");
	scanf(" %[^\n]", &nome);
	
	while(strcmp(nome, "Sair") != 0 && strcmp(nome, "sair") != 0){
		printf("Informe o valor de compra do produto:\n");
		scanf("%f", &compra);
		printf("Informe o valor de venda do produto:\n");
		scanf("%f", &venda);
		lucro =  venda - compra;
		
		if(lucro/venda < 0.1){
		l10++;
		}
		else if(lucro/venda < 0.2){
			l1020++;
		}
		else 
		l20++;
		
		compra_total += compra;
		venda_total += venda;
		lucro_total += lucro;
		
		printf("Informe o nome do produto (Digite Sair para finalizar a listagem):\n");
		scanf(" %[^\n]", &nome);	
	} 
	
	printf("%i mercadorias tiveram menos de 10%% de lucro\n", l10);
	printf("%i mercadorias tiveram menos de 20%% de lucro\n", l1020);
	printf("%i mercadorias tiveram mais de 20%% de lucro\n", l20);
	printf("R$%.2f foi o valor total de compras\n", compra_total);
	printf("R$%.2f foi o valor total de compras\n", venda_total);
	printf("R$%.2f foi o valor total de lucro\n", lucro_total);
	
	return 0;
}
