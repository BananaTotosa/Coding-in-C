#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    float vendas[12];
} Vendedor;

char meses[12][5] = {"Jan", "Fev", "Mar", "Abr", "Mai", "Jun",
                     "Jul", "Ago", "Set", "Out", "Nov", "Dez"};

int main(void)
{
    Vendedor vs[4];
    int op = 1, num, mes, v_maior;
    float tot_vendas = 0, m_vendas = 0;

    while (op != 99) {
        system("clear");
        printf("-- Gerencia Vendedores --\n");
        printf("1 - Cadastrar vendedor\n");
        printf("2 - Cadastrar venda\n");
        printf("3 - Consultar vendas de um vendedor no mês\n");
        printf("4 - Consultar total de vendas de um vendedor\n");
        printf("5 - Mostar o vendedor que mais vendeu no mês\n");
        printf("6 - Mostrar o mês com mais vendas\n");
        printf("99 - Sair\n");
        printf("Escolha uma opção: ");
        scanf(" %d", &op);

        switch (op) {
            case 1: 
                printf("-- Cadastro de Vendedor --\n");
                printf("Informe o número do vendedor (1-4): ");
                scanf(" %d", &num);
                printf("Vendedor %d\nNome: ", num);
                scanf(" %[^\n]", vs[num-1].nome);
                break;
            case 2:
                printf("-- Cadastro de Venda --\n");
                printf("Informe o número do vendedor: ");
                scanf(" %d", &num);
                --num;
                printf("Informe o mês (1-12): ");
                scanf(" %d", &mes);
                --mes;
                printf("Informe as vendas de %s no mês %s: ", vs[num].nome, 
                        meses[mes]);
                scanf(" %f", &vs[num].vendas[mes]);
                break;
            case 3:
                printf("-- Consultar vendas --");
                printf("Informe o número do vendedor: ");
                scanf(" %d", &num);
                --num;
                printf("Informe o mês (1-12): ");
                scanf(" %d", &mes);
                --mes;
                printf("O vendedor %s vendeu R$%.2f no mês %s\n",
                        vs[num].nome, vs[num].vendas[mes], meses[mes]);
                break;
            case 4:
                printf("-- Consultar total de vendas --\n");
                printf("Informe o número do vendedor: ");
                scanf(" %d", &num);
                --num;
                tot_vendas = 0;
                for (int i = 0; i < 12; i++)
                    tot_vendas += vs[num].vendas[i];
                printf("O vendedor %s vendeu no total R$%.2f\n", 
                        vs[num].nome, tot_vendas);
                break;
            case 5:
                printf("-- Consultar melhor vendedor no mês --\n");
                printf("Informe o mês (1-12): ");
                scanf(" %d", &mes);
                --mes;
                v_maior = 0;
                for (int i = 0; i < 12; i++)
                    if (vs[i].vendas[mes] > vs[v_maior].vendas[mes])
                        v_maior = i;
                printf("%s foi o que mais vendeu em %s com R$%.2f\n",
                        vs[v_maior].nome, meses[mes], vs[v_maior].vendas[mes]);
                break;
            case 6:
                printf("-- Consultar mes com mais vendas -- \n");
                v_maior = 0;
                tot_vendas = 0;
                for (int i = 0; i < 4; i++)
                    tot_vendas += vs[i].vendas[0];
                for (int i = 1; i < 12; i++) {
                    m_vendas = 0;
                    for (int j = 0; j < 4; j++) 
                        m_vendas += vs[j].vendas[i];
                    if (m_vendas > tot_vendas) {
                        tot_vendas = m_vendas;
                        v_maior = i;
                    }
                }
                printf("O mes %s vendeu mais que todos com R$%.2f\n",
                        meses[v_maior], tot_vendas);
                break;
            case 99:
                printf("Saindo ...");
                break;
            default: printf("Opção inválida!!!\n");
        }
        printf("Aperte qualquer tecla para continuar ...\n");
        system("read");
    } 
}
