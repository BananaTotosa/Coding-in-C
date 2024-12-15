#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
typedef struct no No;
typedef struct no {
    int dado;
    No *proximo;
}No;

typedef struct lista {
    No *primeiro;
}Lista;

Lista* criarLista() {
    Lista* nova_lista = malloc(sizeof(Lista));
    nova_lista->primeiro = NULL;
    
    printf("Nova lista criada no endereço %p\n", nova_lista);
    return nova_lista;
}

void inserir(Lista* lista, int valor) {
    // criar o novo node
    No *novo_no = malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = NULL;
    printf("Novo no criado %d-%p\n", novo_no->dado, novo_no);
    
    if(lista->primeiro == NULL) {
        lista->primeiro = novo_no;
        printf("Inserindo %d-%p no começo da lista\n", novo_no->dado, novo_no);
    } else {
        No *no_atual = lista->primeiro;
        printf("Inicialização do nó atual %d-%p\n", no_atual->dado, no_atual);
        while(no_atual->proximo != NULL) {
            printf("Navegando nó atual de %d-%p para %d-%p\n", no_atual->dado, no_atual, no_atual->proximo->dado, no_atual->proximo);
            no_atual = no_atual->proximo;
        }
        no_atual->proximo = novo_no;
        printf("Inserindo novo nó %d-%p em no_atual %d-%p\n",novo_no->dado, novo_no, no_atual->dado, no_atual);
    }
}

void inserirEm(Lista* lista, int posicao, int valor) {
        // Verificar se posicao é valida
    if(posicao < 0) {
        printf("Posição inválida\n");
    } else if(posicao == 0) {
        No *novo_no = malloc(sizeof(No));
        novo_no->dado = valor;
        novo_no->proximo = lista->primeiro;
        lista->primeiro = novo_no;
    } else {
        No *no_atual = lista->primeiro;
        int aux = 0;
        while(no_atual != NULL) {
            aux++;
            no_atual = no_atual->proximo;
        }
       
        if(posicao > aux) {
            printf("Posição inválida\n");
        }
    }
   
    // Criar novo no
    No *novo_no = malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = NULL;
   
    // Navegar até nó anterior ao da posicao especificada
    No *no_atual = lista->primeiro;
    for(int i = 1; i<posicao; i++) {
        no_atual = no_atual->proximo;
    }
   
    novo_no->proximo = no_atual->proximo;
    no_atual->proximo = novo_no;
}


