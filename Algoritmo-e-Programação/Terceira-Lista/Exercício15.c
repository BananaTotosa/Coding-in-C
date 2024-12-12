#include <stdio.h>

int main() {
    float preco_ingresso = 5.0, despesas = 200.0, lucro_maximo = 0.0, preco_lucro_maximo = 0.0, receita, lucro;
    int qtd_ingressos = 120, aumento_qtd = 26, qtd_lucro_maximo = 0, qtd_vendida;
    
    printf("Preco do ingresso / Quantidade vendida / Lucro \n");
    
    while (preco_ingresso >= 1.0) {
        qtd_vendida = qtd_ingressos + (aumento_qtd * ((5.0 - preco_ingresso) / 0.5));
        receita = preco_ingresso * qtd_vendida;
        lucro = receita - despesas;
        
        printf("R$%.2f = %d = R$%.2f\n", preco_ingresso, qtd_vendida, lucro);
        
        if (lucro > lucro_maximo) {
            lucro_maximo = lucro;
            preco_lucro_maximo = preco_ingresso;
            qtd_lucro_maximo = qtd_vendida;
        }
        
        preco_ingresso -= 0.5;
    }
    
    printf("\nLucro maximo: R$%.2f\n", lucro_maximo);
	printf("Preco do ingresso: R$%.2f\n", preco_lucro_maximo);
	printf("Quantidade de ingressos vendidos: %d\n", qtd_lucro_maximo);
    
    return 0;
}
