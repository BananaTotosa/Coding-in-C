// Projeto Botequim
// --> Primeira função que devemos criar é a de registrar pedidos (ok)
// --> Segunda função é a de buscar os pedidos (ok)
// * Adicionar a opção de buscar por nome do quitute ou quantidade (ok)

#include <stdio.h>
#include <string.h>

// Definindo o máximo de pedidos que podem ser recebidos 
#define max_pedidos 145

// Criando uma struct para armazenar os dados dos pedidos
typedef struct {
  char nome_quitute[100];
  int quantidade;
  char tipo_quantidade[100];
  float valor;
} Pedido;

// Definindo um array capaz de armazenar os 145 pedidos
Pedido pedidos[max_pedidos];
// Iniciando os pedidos em 0
int total_pedidos = 0;

// Iniciando a função de registrar os pedidos
void Registrar_pedidos(){
  if (total_pedidos < max_pedidos){
    printf("Nome do quitute: ");
    scanf("%s", pedidos[total_pedidos].nome_quitute);

    printf("Quantidade desejada: ");
    scanf("%d", &pedidos[total_pedidos].quantidade);

    printf("Tipo da quantidade Unidade (U), Porção (P) ou Quilograma (Kg): ");
    scanf("%s" , pedidos[total_pedidos].tipo_quantidade);

    printf("Valor do pedido (R$): ");
    scanf("%f", &pedidos[total_pedidos].valor);

    // Após a execução da função, o total de pedidos recebidos é incrementado  
    total_pedidos++;

    // Demonstra que o pedido foi registrado
    printf("\n-------------------------------------------\n");
    printf("| Pedido registrado! Aguarde o preparo... |\n");
    printf("-------------------------------------------\n\n");

  } else {
    printf("O limite de 145 pedidos foi alcançado.\n\n\n");
  }
}

// Função de buscar os pedidos registrados
void Buscar_pedidos_registrados(){
  printf("\n-----------------------------------\n");
  printf("-- Lista dos pedidos registrados --\n");
  printf("-----------------------------------\n\n");

  // Criando um loop que percorre o array de pedidos e mostra os pedidos registrados
  for (int i = 0; i < total_pedidos; i++){
    printf("---------------------------------\n");
    printf("--> Pedido número: %d \n", i+1);
    printf("--> Nome do quitute: %s \n", pedidos[i].nome_quitute);
    printf("--> Quantidade: %d \n", pedidos[i].quantidade);
    printf("--> Tipo da quantidade: %s \n", pedidos[i].tipo_quantidade);
    printf("--> Valor do quitute: R$ %.2f \n", pedidos[i].valor);
    printf("---------------------------------\n\n");
  }
}

// Criando a função que busca os pedidos pelo nome
void Buscar_por_nome(char nome_busca[]) {
  printf("\n-----------------------------------\n");
  printf("-- Resultados da busca por nome --\n");
  printf("-----------------------------------\n\n");

  // Loop que percorre o array de pedidos
  for (int i = 0; i < total_pedidos; i++) {
    if (strcmp(pedidos[i].nome_quitute, nome_busca) == 0) {
      // Mostra o pedido se o nome do quitute corresponder à busca
      printf("------------------------------\n");
      printf("--> Pedido número: %d\n", i+1);
      printf("--> Nome do quitute: %s\n", pedidos[i].nome_quitute);
      printf("--> Quantidade: %d\n", pedidos[i].quantidade);
      printf("--> Tipo da quantidade: %s\n", pedidos[i].tipo_quantidade);
      printf("--> Valor do quitute: R$ %.2f\n", pedidos[i].valor);
      printf("------------------------------\n\n");
    }
  }
}

// Função que busca os pedidos por quantidade
void Buscar_por_quantidade(int quantidade_busca) {
  printf("\n----------------------------------------\n");
  printf("-- Resultados da busca por quantidade --\n");
  printf("----------------------------------------\n\n");

  // Loop que percorre o array de pedidos
  for (int i = 0; i < total_pedidos; i++) {
    if (pedidos[i].quantidade == quantidade_busca) {
      // Mostra o pedido se a quantidade corresponder à busca
      printf("------------------------------\n");
      printf("--> Pedido número: %d \n", i + 1);
      printf("--> Nome do quitute: %s \n", pedidos[i].nome_quitute);
      printf("--> Quantidade: %d \n", pedidos[i].quantidade);
      printf("--> Tipo da quantidade: %s \n", pedidos[i].tipo_quantidade);
      printf("--> Valor do quitute: R$ %.2f \n", pedidos[i].valor);
      printf("------------------------------\n\n");
    }
  }
}

// Função de buscar os pedidos 
void Buscar_pedidos() {
  char escolha_busca;
  printf("\n-----------------------------------\n");
  printf("-- Opções de busca de pedidos    --\n");
  printf("-----------------------------------\n");
  printf("-- (N) - Buscar por nome         --\n");
  printf("-- (Q) - Buscar por quantidade   --\n");
  printf("-- (G) - Lista geral de pedidos  --\n");
  printf("-----------------------------------\n\n");
  printf("Escolha uma opção de busca: ");
  scanf(" %c", &escolha_busca);

  switch (escolha_busca) {
    case 'N':
    case 'n': {
      char nome_busca[100];
      printf("Digite o nome do quitute para buscar: ");
      scanf("%s", nome_busca);
      Buscar_por_nome(nome_busca);
      break;
    }

    case 'Q':
    case 'q': {
      int quantidade_busca;
      printf("Digite a quantidade para buscar: ");
      scanf("%d", &quantidade_busca);
      Buscar_por_quantidade(quantidade_busca);
      break;
    }

    case 'G':
    case 'g': 
    Buscar_pedidos_registrados();
    break;
    default:
      printf("Opção de busca inválida. Escolha uma opção válida.\n");
  }
}

// Função principal do código
int main() {
  
  char escolha;

  do {
  printf("***********\n");
  printf("* BOTEQUIM - RIBEIRÃO PRETO *\n");
  printf("***********\n\n");
  printf("=============================\n");
  printf("* MENU PRINCIPAL - QUITUTES *\n");
  printf("=============================\n");
  printf("* (R) - Registrar pedidos   *\n");
  printf("* (B) - Buscar pedidos      *\n");
  printf("* (S) - Sair                *\n");
  printf("=============================\n");
  printf("--> Escolha uma opção: ");
  scanf(" %c", &escolha);

  switch (escolha){
    case 'R': 
    case 'r': 
      Registrar_pedidos();
    break;

    case 'B': 
    case 'b': 
      Buscar_pedidos();
    break;

    case 'S': 
    case 's': 
      printf("Saindo do programa...\n");
    break;

        default: printf("Opção inválida. Escolha uma opção válida\n");
      }
    } while (escolha != 'S' && escolha != 's');

    return 0;
}

// Código feito por:
// João Henrique Nazar Tavares 
// Vinicius Henrique de Oliveira 
