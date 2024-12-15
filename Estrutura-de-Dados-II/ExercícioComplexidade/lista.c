#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#define TAMANHO_INICIAL 5

typedef struct lista {
    int* array;
    int tamanho;
    int quantidade;
} Lista;

Lista* criarLista(){
    Lista *novalista = malloc(sizeof(Lista));
    novalista->array = malloc(sizeof(int)*TAMANHO_INICIAL);
    novalista->tamanho = TAMANHO_INICIAL;
    novalista->quantidade = 0;
    return novalista;
}

void inserir(Lista* lista, int valor) {
    // ajusta tamanho do array se necessário
    if(lista->quantidade == lista->tamanho) {
        lista->tamanho = lista->tamanho*2;
        lista->array = realloc(lista->array, sizeof(int) * lista->tamanho);
    }
   
    lista->array[lista->quantidade] = valor;
    lista->quantidade++;
}

void inserirEm(Lista* lista, int posicao, int valor){
    if(posicao < 0 || posicao > lista->quantidade) {
        printf("Posição %d inválida para lista com tamanho %d\n", posicao, lista->quantidade);
        return;
    }
   
    // ajusta tamanho do array se necessário
    if(lista->quantidade == lista->tamanho) {
        lista->tamanho = lista->tamanho*2;
        lista->array = realloc(lista->array, sizeof(int) * lista->tamanho);
    }
   
    // ajusta itens uma casa pra frente até posicao
    for(int i = lista->quantidade; i > posicao; i--) {
        lista->array[i] = lista->array[i-1];
    }
   
    lista->array[posicao] = valor;
    lista->quantidade++;
}

int alterar(Lista* lista, int posicao, int valor) {
    if(posicao < 0 || posicao >= lista->quantidade) {
        printf("Posição %d inválida para lista com tamanho %d\n", posicao, lista->quantidade);
        return -1;
    }
   
    int valorAnterior = lista->array[posicao];
    lista->array[posicao] = valor;
    return valorAnterior;
}

int remover(Lista* lista, int posicao) {
    if(posicao < 0 || posicao >= lista->quantidade) {
        printf("Posição %d inválida para lista com tamanho %d\n", posicao, lista->quantidade);
        return -1;
    }
   
    int valorAnterior = lista->array[posicao];
   
    // volta itens até posicao e limpa último valor
    for(int i = posicao; i < lista->quantidade; i++) {
        if(i == lista->quantidade-1){
            lista->array[i] = 0;
        } else {
            lista->array[i] = lista->array[i+1];
        }
    }
   
    lista->quantidade--;
   
    // ajusta tamanho do array se necessário
    if(lista->quantidade <= lista->tamanho/3) {
        lista->tamanho = lista->tamanho/2;
        lista->array = realloc(lista->array, sizeof(int) * lista->tamanho);
    }
   
    return valorAnterior;
}

void imprimir(Lista* lista) {
    printf("[ ");
    for(int i = 0; i < lista->quantidade; i++){
        if(i == lista->quantidade-1){
            printf("%d ", lista->array[i]);
        } else {
            printf("%d, ", lista->array[i]);
        }
    }
    printf("]\n");
    printf("Tamanho do array: %d\n", lista->tamanho);
}

int quantidadeItens(Lista* lista) {
    return lista->quantidade;
}

int estaVazia(Lista* lista) {
    return lista->quantidade == 0;
}

int buscar(Lista* lista, int valor) {
    for (int i = 0; i < lista->quantidade; i++) {
        if (lista->array[i] == valor) {
            return i; 
        }
    }
    return -1; 
}

void liberarMemoria(Lista* lista) {
    free(lista->array);
    free(lista);
}

//
