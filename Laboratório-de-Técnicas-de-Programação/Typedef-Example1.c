#include <stdio.h>

typedef enum {
  Limpeza = 1, Alimento, Ferramenta
} Tipo;

typedef struct {
  char nome[50];
  int cod;
  float preco;
  Tipo tipo_prod;

  int baixas[4][6];

} Produto;

typedef struct {
    Produto produtos[50];
    int qtde;
} Estoque;

int main(void)
{
  Estoque meu_estoque;
  meu_estoque.qtde = 0;
  int op, cod, i;

  do {
    printf("-- Venda do Sr. Zé -- \n");
    printf("1 - Novo produto\n2 - Venda\n3 - Relatorios\n4 - Consultar\n9 - Sair\n");
    printf("Escolha uma opção: ");
    scanf("%d", &op);

    switch (op) {
        case 1: printf("-- Novo Produto --\n");
                printf("Nome: ");
                scanf(" %[^\n]", meu_estoque.produtos[meu_estoque.qtde].nome);
                printf("Codigo: ");
                scanf(" %d", &meu_estoque.produtos[meu_estoque.qtde].cod);
                printf("Preço: ");
                scanf(" %f", &meu_estoque.produtos[meu_estoque.qtde].preco);
                printf("Tipo (1-Limpeza, 2-Alimento, 3-Ferramenta): ");
                scanf(" %d", &meu_estoque.produtos[meu_estoque.qtde].tipo_prod);
                meu_estoque.qtde++;
                break;
        case 2: printf("-- Venda --\n");
                break;
        case 3: printf("-- Relatórios --\n");
                break;
        case 4: printf("-- Consultar --\n");
                printf("Qual o código do produto? ");
                scanf(" %d", &cod);
                i = 0;
                while (i < meu_estoque.qtde && 
                        meu_estoque.produtos[i].cod != cod)
                    i++;
                if (i < meu_estoque.qtde) {
                    printf("Nome: %s\n", meu_estoque.produtos[i].nome);
                    printf("Código: %d\n", meu_estoque.produtos[i].cod);
                    printf("Preço: %.2f\n", meu_estoque.produtos[i].preco);
                    printf("Tipo: %d\n", meu_estoque.produtos[i].tipo_prod);
                } 
                else
                    printf("Produto não encontrado ....\n");
                break;
        case 9: printf("Até mais tarde ....\n");
                break;
        default: printf("Opção inválida!!!\n");
    }

  } while (op != 9);
  
  
  return 0;
}
