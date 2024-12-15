/*
Elabore uma estatística do tempo que as seguintes operações consomem de tempo:
a) inserção de N elementos no início da lista.
b) inserção de N elementos no final da lista.
c) consulta de N elementos da lista. A consulta deve ser feita pela posição (que deve ser gerada aleatoriamente).

Realize a mensuração do tempo de cada tarefa de forma independente, por meio da função clock() (exemplo da aula). Para facilitar a tarefa, considere sempre o mesmo elemento.

A tarefa deve ser realizada para diferentes valores de N (1000, 2000, 3000, ...). Para cada valor de N, salve o tempo de execução para posterior análise.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 1000 // Alterar o valor de N para ver o tempo de execução no final e na consulta da Lista
#define M 100000 // Alterar o valor de N para ver o tempo de execução no inicio da lista

typedef struct no {
    int dado;
    struct no *proximo;
} No;

typedef struct lista {
    No *primeiro;
    int quantidade;
} Lista;

Lista* criarLista() {
    Lista* nova_lista = malloc(sizeof(Lista));
    nova_lista->primeiro = NULL;
    nova_lista->quantidade = 0;
    return nova_lista;
}

No* criar_no(int valor, No *proximo) {
    No *novo_no = malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = proximo;
    return novo_no;
}

void inserir(Lista* lista, int valor) {
    No *novo_no = criar_no(valor, NULL);
    if (lista->primeiro == NULL) {
        lista->primeiro = novo_no;
    } else {
        No *no_atual = lista->primeiro;
        while (no_atual->proximo != NULL) {
            no_atual = no_atual->proximo;
        }
        no_atual->proximo = novo_no;
    }
    lista->quantidade++;
}

void inserirEm(Lista* lista, int posicao, int valor) {
    if (posicao < 0 || posicao > lista->quantidade) {
        printf("Posição inválida\n");
        return;
    }
    if (posicao == 0) {
        No *novo_no = criar_no(valor, lista->primeiro);
        lista->primeiro = novo_no;
    } else {
        No *no_atual = lista->primeiro;
        for (int i = 0; i < posicao - 1; i++) {
            no_atual = no_atual->proximo;
        }
        No *novo_no = criar_no(valor, no_atual->proximo);
        no_atual->proximo = novo_no;
    }
    lista->quantidade++;
}

int buscar(Lista* lista, int posicao) {
    if (posicao < 0 || posicao >= lista->quantidade) {
        printf("Posição inválida\n");
        return -1;
    }
    No *no_atual = lista->primeiro;
    for (int i = 0; i < posicao; i++) {
        no_atual = no_atual->proximo;
    }
    return no_atual->dado;
}

int main() {
    Lista* listaEncadeada = criarLista();
    
    clock_t inicio, fim;
    unsigned long int tempo;
    
    // Exercício 2-a
    inicio = clock();
    for (int i = 0; i < M; i++) {
        inserirEm(listaEncadeada, 0, i);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("tempo de execução no inicio: %lu milissegundo\n", tempo);
    
    // Exercício 2-b
    listaEncadeada = criarLista();
    inicio = clock();
    for (int i = 0; i < N; i++) {
        inserir(listaEncadeada, i);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("tempo de execução no final: %lu milissegundos\n", tempo);
    
     // Exercício 2-c
    inicio = clock();
    for (int i = 0; i < N; i++) {
        int posicao = rand() % N;
        buscar(listaEncadeada, posicao);
    }
    fim = clock();
    tempo = (fim - inicio) * 1000 / CLOCKS_PER_SEC;
    printf("Tempo de execução na consulta: %lu milissegundos\n", tempo);
    
    return 0;
}
