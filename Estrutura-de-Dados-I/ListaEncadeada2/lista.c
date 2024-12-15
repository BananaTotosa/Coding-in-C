#include <stdio.h>
#include <stdlib.h>
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
    return nova_lista;
}

void inserir(Lista* lista, int valor) {
    // criar o novo node
    No *novo_no = malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = NULL;
    
    if(lista->primeiro == NULL) {
        lista->primeiro = novo_no;
    } else {
        No *no_atual = lista->primeiro;
        while(no_atual->proximo != NULL) {
            no_atual = no_atual->proximo;
        }
        no_atual->proximo = novo_no;
    }
}

void inserirEm(Lista* lista, int posicao, int valor) {
    // Verificar se posicao é valida
    if(posicao < 0) {
        return;
    } else if(posicao == 0) {
        // Se posicao == 0 caso de exceção, insere no primeiro
        No *novo_no = malloc(sizeof(No));
        novo_no->dado = valor;
        novo_no->proximo = lista->primeiro;
        lista->primeiro = novo_no;
        return;
    } else {
        No *no_atual = lista->primeiro;
        int qtde = 0;
        while(no_atual != NULL) {
            qtde++;
            no_atual = no_atual->proximo;
        }
        
        if(posicao > qtde) {
            return;
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
    
    // Ajustar ponteiros
    novo_no->proximo = no_atual->proximo;
    no_atual->proximo = novo_no;
}

void imprimir(Lista* lista) {
    No *no_atual = lista->primeiro;
    printf("[");
    while(no_atual != NULL) {
        printf(" %d ", no_atual->dado);
        no_atual = no_atual->proximo;
    }
    printf("]\n");
}

int alterar(Lista* lista, int posicao, int valor) {
    No *no_atual = lista->primeiro;
    int i = 0;
    if(no_atual == NULL){
        printf("\nNao ha itens para alterar");
        return -1;
    }else{
        while(no_atual != NULL){
            i++;
            no_atual = no_atual->proximo;
        }
    }

    if(posicao > i || posicao < 0){
        printf("\nPossicao invalida");
        return -1;
    }else{
        no_atual = lista->primeiro;
        for(int j = 0; j < posicao; j++){
            no_atual = no_atual->proximo;
        }
        no_atual->dado = valor;
        return 0;
        }
}

int remover(Lista* lista, int posicao){
    int qtde = 0;
    No *no_atual = lista->primeiro; 
        while(no_atual != NULL) {
            qtde++;
        no_atual = no_atual->proximo;
    }
 
    if(posicao < 0 || posicao >= qtde){
        printf("Posição inválida"); 
    } else if(posicao == 0){
        no_atual = lista->primeiro;
        lista->primeiro = no_atual->proximo;
        int valor_anterior = 0; 
        valor_anterior = no_atual->dado;
        free(no_atual);
        return valor_anterior;
  } else {
        No *no_atual = lista->primeiro;
        for(int i = 0; i<posicao-1; i++) {
            no_atual = no_atual->proximo;
        }
    
    No* aux = no_atual->proximo;
    int valor_anterior = aux->dado;
    no_atual->proximo = aux->proximo;
    free(aux);
    return valor_anterior;
  }
}

int quantidadeItens(Lista* lista){
    No *no_atual = lista->primeiro;
    int qtde = 0;
    while(no_atual != NULL) {
        qtde++;
        no_atual = no_atual->proximo;
    }
    return qtde;
}

int estaVazia(Lista* lista){
    if(lista->primeiro == NULL){
        return 1;
    } else
        return 0;
    
}

int buscar(Lista* lista, int valor){
}
        
void liberarMemoria(Lista* lista){
    No* no_atual = lista->primeiro;
    No* no_aux;
    while(no_atual != NULL){
        no_aux = no_atual->proximo; 
        free(no_atual); 
        no_atual = no_aux; 
    }
    free(lista);
}






