#include <stdlib.h>
#include <stdio.h>

int main()
{
    float valor_minimo, taxa_servico, valor, saldo;
    int qtd_transacoes, conta , transacoes;
    char codigo;

    printf("Informe o saldo minimo:\n");
    scanf("%f", &valor_minimo);

    printf("Informe a quantidade de transacoes:\n");
    scanf("%d", &qtd_transacoes);

    printf("Informe a taxa de servico:\n");
    scanf("%f", &taxa_servico);
    
    printf("Informe o numero da conta:\n");
    scanf("%d", &conta);

    while (conta > 0) {
        transacoes = 0;
        saldo = 0;
        
		while (transacoes < qtd_transacoes) {
        printf("Informe o valor:\n ");
        scanf("%f", &valor);

        printf("Informe o codigo: (R para retirar e D para depositar):\n");
        scanf(" %c", &codigo);

        if (codigo == 'R')
            saldo -= valor;
        else
            saldo += valor;

        transacoes++;
        }

        if (saldo < valor_minimo)
            saldo -= taxa_servico;

        if (saldo < 0) 
            printf("conta numero %d: NAO HA FUNDOS!!\n", conta);
        else
            printf("conta numero %d: R$ %.2f\n", conta, saldo);
            
		printf("Informe o numero da conta:");
    	scanf("%d", &conta);
        }
        
	return 0;
}
