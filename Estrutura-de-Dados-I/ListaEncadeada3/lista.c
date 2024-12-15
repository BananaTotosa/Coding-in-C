#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

typedef struct no No;
typedef struct no {
    int dado;
    No *proximo, *anterior;
}No;

typedef struct lista {
    No *primeiro;
    int quantidade;
}Lista;
 
No* criarNo(int valor, No *proximo, No *anterior) {
    No *novo_no = malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = proximo;
    novo_no->anterior = anterior;
    return novo_no;
}
 
Lista* criarLista() {
    Lista* nova_lista = malloc(sizeof(Lista));
    nova_lista->primeiro = NULL;
    nova_lista->quantidade = 0;
    return nova_lista;
}

void inserir(Lista* lista, int valor) {
    if(estaVazia(lista)) {
        No* novo_no = criarNo(valor, NULL, NULL);
        lista->primeiro = novo_no;
    } else {
        No* no_atual = lista->primeiro;
        while(no_atual->proximo != NULL) {
            no_atual = no_atual->proximo;
        }
        No* novo_no = criarNo(valor, NULL, no_atual);
        no_atual->proximo = novo_no;
    }
    
    lista->quantidade++;
}

void inserirEm(Lista* lista, int posicao, int valor) {
    No *no_atual = lista->primeiro; 
    if(posicao < 0 || posicao > lista->quantidade){
        printf("A posicão (%d) é inválida\n", posicao);
        return;
    }
    if(posicao == 0){
        No  *novo_no = criarNo(valor, lista->primeiro, NULL);
        no_atual->anterior = novo_no;
        lista->primeiro = novo_no;
    }
    else if(posicao == quantidadeItens(lista)){
        No* no_atual = lista->primeiro;
        while(no_atual->proximo != NULL) {
            no_atual = no_atual->proximo;
        }
        No* novo_no = criarNo(valor, NULL, no_atual);
        no_atual->proximo = novo_no;
    }
    else{
    for(int i = 0; i < posicao-1; i++){
        no_atual = no_atual->proximo;
    }
    No  *novo_no = criarNo(valor, no_atual->proximo, no_atual);
    no_atual->proximo->anterior = novo_no;
    no_atual->proximo = novo_no;
    }
    lista->quantidade++;
}

int alterar(Lista* lista, int posicao, int valor){
    No *no_atual = lista->primeiro; 
    if(posicao < 0 || posicao > lista->quantidade){
        return -1;
    } else{
    for(int i = 0; i < posicao; i++){
        no_atual = no_atual->proximo;
    }
    int aux = no_atual->dado;
    no_atual->dado = valor;
    return aux;
    }
}

int remover(Lista* lista, int posicao){
    No *no_atual = lista->primeiro; 
    if(posicao == 0){
        lista->primeiro = no_atual->proximo;
        if(no_atual->proximo != NULL){
        no_atual->proximo->anterior == NULL;
        }
        int aux = no_atual-> dado;
        lista->quantidade--;
        printf("Item removido: %d\n", aux);
        return aux;
    }
    if(posicao < 0 || posicao > lista->quantidade){
        return -1;
    }else{
    for(int i = 0; i < posicao; i++){
        no_atual = no_atual->proximo;
    }
    no_atual->anterior->proximo = no_atual->proximo;
    no_atual->proximo->anterior = no_atual->anterior;
    int aux = no_atual->dado;
    free(no_atual);
    lista->quantidade--;
    printf("Item removido: %d\n", aux);
    return aux;
    }
}

void imprimir(Lista* lista) {
    No *no_atual = lista->primeiro;
    printf("[");
    while(no_atual != NULL) {
        printf(" %d ", no_atual->dado);
        no_atual = no_atual->proximo;
    }
    printf("] Qtde: %d\n", lista->quantidade);
}

int quantidadeItens(Lista* lista){
    return lista->quantidade;
}

int estaVazia(Lista* lista){
    if (lista->primeiro == NULL){
        return 1;
    } else {
        return 0;
    }
}

int buscar(Lista* lista, int valor){
    // Seminario
    return -1;
}

void liberarMemoria(Lista* lista){
    No *no_atual = lista->primeiro;
    while(no_atual != NULL) {
        No *aux = no_atual;
        no_atual = no_atual->proximo;
        free(aux);
    }
    free(lista);
    printf("Memória liberada\n");
}


