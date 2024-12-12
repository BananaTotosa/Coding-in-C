#include <stdio.h>
#include <string.h>

// Definindo o máximo de pedidos que podem ser recebidos
#define max_pedidos 145
// Definindo o número máximos de mesas
#define max_mesas 20

// Criando uma struct para armazenar os dados dos pedidos
typedef struct {
  int mesa;
  char nome_quitute[100];
  int quantidade;
  float valor_porcao;
} Pedido;

// Definindo um array capaz de armazenar os 145 pedidos
Pedido pedidos[max_pedidos];
// Definindo um arraz para mesas
int mesas[max_mesas];
// Iniciando os pedidos em 0
int total_pedidos = 0;
// Iniciando as mesas em 0
int n_mesas = 0;

// Função de mostrar o cardápio
void Cardapio() {
  printf("\n\n=================================\n");
  printf("*           CARDÁPIO          *\n");
  printf("=================================\n\n");
  printf("====================================================================="
         "===================================================================================================================================\n\n");
  printf("** Petiscos:\n\n");
  printf("(1) --> Bolinho de Bacalhau (6 unidades): Deliciosos bolinhos de "
         "bacalhau crocantes por fora e macios por dentro. Acompanha molho de "
         "pimenta especial. - R$ 18,90\n\n");
  printf("(2) --> Pastel de Carne Seca com Queijo (porção com 8 unidades): "
         "Pastéis recheados com suculenta carne seca e queijo derretido. "
         "Servidos com molho de pimenta ou molho de ervas. - R$ 15,50\n\n");
  printf("(3) --> Calabresa Acebolada: Fatias de calabresa grelhadas com "
         "cebolas douradas, acompanhadas de pão italiano. - R$ 16,80\n\n");
  printf(
      "(4) --> Frango à Passarinho: Pedacinhos de frango fritos e temperados "
      "com alho e ervas. Acompanha molho barbecue. - R$ 20,50\n\n");
  printf("(5) --> Sarapatel: Prato típico com miúdos suínos cozidos em "
         "temperos especiais. Acompanha farofa e pão. - R$ 26,90\n\n");
  printf("(6) --> Linguiça de Dumont: Linguiça artesanal de carne suína "
         "temperada, grelhada na brasa. Acompanha mandioca cozida. - R$ "
         "24,50\n\n");
  printf("(7) --> Buchada de Bode (porção individual): Buchada tradicional "
         "recheada com miúdos de bode, arroz e temperos regionais. - R$ "
         "29,90\n\n");
  printf("(8) --> Cabeça de Macaco (porção para compartilhar): Deliciosa carne "
         "de porco desfiada, acompanhada de mandioca e molho picante. - R$ "
         "35,90\n\n");
  printf("====================================================================="
     "===================================================================================================================================\n\n");
  printf("\n** Sanduíches:\n\n");
  printf("(9) --> Sanduíche de Pernil: Pernil desfiado, queijo prato, e "
         "vinagrete no pão francês. Acompanha batata frita. - R$ 22,90\n\n");
  printf("(10) --> X-Bacon: Hambúrguer suculento, queijo cheddar, bacon "
         "crocante, alface e tomate no pão de hambúrguer. Acompanha onion "
         "rings. - R$ 25,50\n\n");
  printf("(11) --> Misto Quente de Linguiça: Linguiça artesanal, queijo "
         "muçarela, e tomate no pão de forma. Acompanha porção de batata "
         "chips. - R$ 18,50\n\n");
  printf("====================================================================="
     "===================================================================================================================================\n\n");
  printf("\n** Pratos Principais:\n\n");
  printf("(12) --> Feijoada Completa (porção individual): Feijoada preparada "
         "com carnes nobres, couve, arroz, farofa, laranja e torresmo. - R$ "
         "32,90\n\n");
  printf("(13) --> Strogonoff de Carne: Carne macia, molho cremoso de "
         "cogumelos, arroz branco e batata palha. - R$ 28,50\n\n");
  printf(
      "(14) --> Espaguete à Carbonara: Massa al dente, molho à base de queijo "
      "parmesão, ovos e bacon. Acompanha pão de alho. - R$ 24,90\n\n");
  printf("====================================================================="
     "===================================================================================================================================\n\n");
  printf("\n** Bebidas:\n\n");
  printf("(15) --> Caipirinha Tradicional: Cachaça, limão, açúcar e gelo. - R$ "
         "14,90\n\n");
  printf("(16) --> Chopp Artesanal (300ml): Chopp gelado, leve e saboroso. - "
         "R$ 8,50\n\n");
  printf("(17) --> Coquetel de Frutas com Álcool: Uma mistura refrescante de "
         "frutas da estação com destilado da casa. - R$ 16,90\n\n");
  printf("====================================================================="
     "===================================================================================================================================\n\n");
  printf("\n** Sobremesas:\n\n");
  printf("(18) --> Petit Gateau de Chocolate: Bolinho quente de chocolate com "
         "recheio cremoso. Acompanha sorvete de baunilha. - R$ 14,50\n\n");
  printf("(19) --> Pudim de Leite Condensado: Clássico pudim de leite "
         "condensado com calda de caramelo. - R$ 10,90\n\n");
  printf("(20) --> Mousse de Maracujá: Mousse leve e aerado de maracujá. - R$ "
         "12,90\n\n");
  printf("====================================================================="
     "===================================================================================================================================\n\n");
}

// Função para obter o nome de um pedido
void ObterPedido(int opcao, char nome_quitute[]) {
  char nomes[][100] = {"Bolinho de Bacalhau", "Pastel de Carne Seca com Queijo", "Calabresa Acebolada",
                       "Frango à Passarinho", "Sarapatel", "Linguiça de Dumont", "Buchada de Bode",
                       "Cabeça de Macaco", "Sanduíche de Pernil", "X-Bacon", "Misto Quente de Linguiça",
                       "Feijoada Completa", "Strogonoff de Carne", "Espaguete à Carbonara",
                       "Caipirinha Tradicional", "Chopp Artesanal", "Coquetel de Frutas com Álcool",
                       "Petit Gateau de Chocolate", "Pudim de Leite Condensado", "Mousse de Maracujá"};

  // Verifica se a opção está dentro do intervalo válido
  if (opcao >= 1 && opcao <= 20) {
    strcpy(nome_quitute, nomes[opcao - 1]);
  } else {
    strcpy(nome_quitute, "Opção não encontrada no nosso cardápio, confira novamente!");
  }
}

// Função para obter o valor 
float ObterValorQuitute(int opcao) {
  float valores[] = {18.90, 15.50, 16.80, 20.50, 26.90, 24.50, 29.90, 35.90,
                     22.90, 25.50, 18.50, 32.90, 28.50, 24.90, 14.90, 8.50,
                     16.90, 14.50, 10.90, 12.90, 2.0};

  // Verifica se a opção está dentro do intervalo válido
  if (opcao >= 1 && opcao <= 20) {
    return valores[opcao - 1];
  } else {
    return 0.0; 
  }
}

// Iniciando a função de registrar os pedidos
void Registrar_pedidos() {
  int opcaoPedido;

 if (total_pedidos < max_pedidos && n_mesas < max_mesas) {
    printf("\n\n===========================\n");
    printf("*    REGISTRAR PEDIDOS  *\n");
    printf("===========================\n\n");

    Pedido novo_pedido;

    printf("Número da mesa (1-20) / Delivery (100 para cima): ");
    scanf("%d", &novo_pedido.mesa);

    printf("Pedido (Seguir números do cardápio): ");
    scanf("%d", &opcaoPedido);

    if (opcaoPedido >= 1 && opcaoPedido <= 20) {
        ObterPedido(opcaoPedido, novo_pedido.nome_quitute);
    novo_pedido.valor_porcao = ObterValorQuitute(opcaoPedido);
    } else {
      printf("Opção de pedido inválida.\n");
      return;
    }

    printf("Quantidade desejada: ");
    scanf("%d", &novo_pedido.quantidade);

    // Calcula o valor do pedido
    novo_pedido.valor_porcao = ObterValorQuitute(opcaoPedido);
    pedidos[total_pedidos] = novo_pedido;

    // Após a execução da função, o total de pedidos recebidos é incrementado
    total_pedidos++;
    // E o número de mesas ocupadas é incrementado
    n_mesas++;

    // Demonstra que o pedido foi registrado
    printf("\n-------------------------------------------\n");
    printf("| Pedido registrado! Aguarde o preparo... |\n");
    printf("-------------------------------------------\n\n");

  } else {
    printf("O limite de 145 pedidos foi alcançado.\n\n\n");
  }
}

// Função de buscar os pedidos registrados
void Buscar_pedidos_registrados() {
  printf("\n-----------------------------------\n");
  printf("-- Lista dos pedidos registrados --\n");
  printf("-----------------------------------\n\n");

  // Criando um loop que percorre o array de pedidos e mostra os pedidos registrados
  for (int i = 0; i < total_pedidos; i++) {
    printf("---------------------------------\n");
    printf("--> Pedido número: %d \n", i + 1);
    printf("--> Nome do pedido: %s \n", pedidos[i].nome_quitute);
    printf("--> Quantidade: %d \n", pedidos[i].quantidade);
    printf("--> Valor unitário: R$ %.2f \n", pedidos[i].valor_porcao);
    printf("--> Subtotal: R$ %.2f\n", pedidos[i].valor_porcao * pedidos[i].quantidade);
    printf("---------------------------------\n\n");
  }
}

// Criando a função que busca os pedidos pelo nome
void Buscar_por_nome() {

  char nome_busca[100];

  printf("\n-----------------------------------\n");
  printf("|  Resultados da busca por nome  |\n");
  printf("-----------------------------------\n\n");
  printf("Digite o nome do pedido para buscar: ");
  getchar();  // Consome o caractere de nova linha 
  fgets(nome_busca, 100, stdin);
  nome_busca[strcspn(nome_busca, "\n")] = 0; // Remove a nova linha (\n) que o fgets pode incluir

  // Loop que percorre o array de pedidos
  for (int i = 0; i < total_pedidos; i++) {
    if (strcmp(pedidos[i].nome_quitute, nome_busca) == 0) {
      // Mostra o pedido se o nome do quitute corresponder à busca
      printf("------------------------------\n");
      printf("--> Pedido número: %d\n", i + 1);
      printf("--> Nome do pedido: %s\n", pedidos[i].nome_quitute);
      printf("--> Quantidade: %d\n", pedidos[i].quantidade);
      printf("--> Valor unitário: R$ %.2f\n", pedidos[i].valor_porcao);
      printf("--> Subtotal: R$ %.2f\n", pedidos[i].valor_porcao * pedidos[i].quantidade);
      printf("------------------------------\n\n");
    }
  }
}

// Função que busca os pedidos por quantidade
void Buscar_por_quantidade(int quantidade_busca) {
  printf("\n----------------------------------------\n");
  printf("|  Resultados da busca por quantidade  |\n");
  printf("----------------------------------------\n\n");

  // Loop que percorre o array de pedidos
  for (int i = 0; i < total_pedidos; i++) {
    if (pedidos[i].quantidade == quantidade_busca) {
      // Mostra o pedido se a quantidade corresponder à busca
      printf("------------------------------\n");
      printf("--> Pedido número: %d \n", i + 1);
      printf("--> Nome do pedido: %s \n", pedidos[i].nome_quitute);
      printf("--> Quantidade: %d\n", pedidos[i].quantidade);
      printf("--> Valor unitário: R$ %.2f\n", pedidos[i].valor_porcao);
      printf("--> Subtotal: R$ %.2f\n", pedidos[i].valor_porcao * pedidos[i].quantidade);
      printf("------------------------------\n\n");
    }
  }
}

// Função que busca os pedidos por mesa
void Buscar_por_mesa() {
  int numero_mesa;

  printf("\n---------------------------------\n");
  printf("|  Resultados da busca por mesa  |\n");
  printf("----------------------------------\n\n");
  printf("Número da mesa: ");
  scanf("%d", &numero_mesa);  
  printf("\n\n-----------------------\n");
  printf("|  Pedidos da mesa %d  |\n", numero_mesa);
  printf("-----------------------\n\n");

  float subtotal = 0.0;

      for (int i = 0; i < total_pedidos; i++) {
          if (pedidos[i].mesa == numero_mesa) {
              printf("------------------------------\n");
              printf("--> Nome do pedido: %s\n", pedidos[i].nome_quitute);
              printf("--> Quantidade: %d\n", pedidos[i].quantidade);
              printf("--> Valor unitário: R$ %.2f\n", pedidos[i].valor_porcao);
              printf("------------------------------\n\n");

              subtotal += pedidos[i].valor_porcao * pedidos[i].quantidade;
          }
      }
      printf("-------------------------------\n");
      printf("--> Total da mesa %d : R$ %.2f \n", numero_mesa, subtotal);
      printf("-------------------------------\n\n");
}

// Função de buscar os pedidos
void Buscar_pedidos() {
  char escolha_busca;
  printf("\n-----------------------------------\n");
  printf("-- Opções de busca de pedidos    --\n");
  printf("-----------------------------------\n");
  printf("-- (N) - Buscar por nome         --\n");
  printf("-- (Q) - Buscar por quantidade   --\n");
  printf("-- (M) - Buscar por mesa         --\n");
  printf("-- (G) - Lista geral de pedidos  --\n");
  printf("-----------------------------------\n\n");
  printf("Escolha uma opção de busca: ");
  scanf(" %c", &escolha_busca);

  switch (escolha_busca) {
  case 'N':
  case 'n': {
    Buscar_por_nome();
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

  case 'M':
  case 'm':
    Buscar_por_mesa();
    break;

  case 'G':
  case 'g':
    Buscar_pedidos_registrados();
    break;
  default:
    printf("\nOpção de busca inválida. Escolha entre: (N), (Q), (M) e (G).\n\n");
  }
}

// Função para fechar a conta
void Fechar_conta() {
  int numero_mesa;

  printf("\n\n===========================\n");
  printf("*       FECHAR CONTA    *\n");
  printf("===========================\n");
  printf("Número da mesa ou delivery: ");
  scanf("%d", &numero_mesa);
 if (numero_mesa >= 100){
     printf("\n-------------------------\n");
     printf("-- Conta do delivery %d --\n", numero_mesa); 
     printf("--------------------------\n\n");
  } else {
     printf("\n---------------------\n");
     printf("-- Conta da mesa %d --\n", numero_mesa);
     printf("---------------------\n\n");
  }

  float subtotal = 0.0;

  // Loop que percorre o array de pedidos
  for (int i = 0; i < total_pedidos; i++) {
    if (pedidos[i].mesa == numero_mesa) {
      printf("------------------------------\n");
      printf("--> Pedido número: %d\n", i + 1);
      printf("--> Nome do pedido: %s\n", pedidos[i].nome_quitute);
      printf("--> Quantidade: %d\n", pedidos[i].quantidade);
      printf("--> Valor unitário: R$ %.2f\n", pedidos[i].valor_porcao);
      printf("--> Valor total do pedido: R$ %.2f\n", pedidos[i].valor_porcao * pedidos[i].quantidade);
      printf("------------------------------\n\n");

      // Adiciona o valor total do pedido ao total da mesa
      subtotal += pedidos[i].valor_porcao * pedidos[i].quantidade;
    }
  }

  // Mostra o total da mesa
  printf("-------------------------------\n");
  if (numero_mesa >= 100){
      printf("--> Delivery %d\n", numero_mesa);
  } else {
  printf("--> Mesa %d\n", numero_mesa); 
  }
  printf("--> Total a pagar: R$ %.2f\n", subtotal);
  printf("-------------------------------\n\n");
}

// Função principal do código
int main() {

  char escolha;

  do {
    printf("=================================\n");
    printf("*  BOTEQUIM SABORES EXÓTICOS  *\n");
    printf("=================================\n\n");
    printf("=============================\n");
    printf("*        MENU PRINCIPAL     *\n");
    printf("=============================\n");
    printf("* (C) - Cardápio            *\n");
    printf("* (R) - Registrar pedidos   *\n");
    printf("* (B) - Buscar pedidos      *\n");
    printf("* (F) - Fechar conta        *\n");
    printf("* (S) - Sair                *\n");
    printf("=============================\n");
    printf("--> Escolha uma opção: ");
    scanf(" %c", &escolha);

    switch (escolha) {
    case 'C':
    case 'c':
      Cardapio();
      break;

    case 'R':
    case 'r':
      Registrar_pedidos();
      break;

    case 'B':
    case 'b':
      Buscar_pedidos();
      break;

    case 'F':
    case 'f':
      Fechar_conta();
      break;

    case 'S':
    case 's':
      printf("Saindo do programa...\n");
      break;

    default:
      printf("\nOpção inválida. Escolha entre: (C), (R), (B), (F) e (S).\n\n");
    }
  } while (escolha != 'S' && escolha != 's');

  return 0;
}

// Código feito por:
// João Henrique Nazar Tavares 
// Vinicius Henrique de Oliveira 
