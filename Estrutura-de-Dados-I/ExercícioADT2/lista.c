#include <stdlib.h>
#include <stdio.h>
#include "lista.h"
#define TAMANHO_INICIAL 20

typedef struct lista {
    int* array;
    int tamanho;
    int quantidade;
} Lista;

Lista* criarLista(){
    Lista *novalista = malloc(sizeof(Lista));
    novalista->array = malloc(sizeof(int)*TAMANHO_INICIAL);
    novalista->tamanho = TAMANHO_INICIAL;
    novalista->quantidade = 3;
    return novalista;
}

void inserir(Lista* lista, int valor) {
    // próxima aula
}

int alterar(Lista* lista, int posicao, int valor) {
    // próxima aula
    return -1;
}

int remover(Lista* lista, int posicao) {
    // próxima aula
    return -1;
}

void imprimir(Lista* lista) {
    printf("[");
    for(int i = 0; i < lista->quantidade; i++){
        if (i == lista->quantidade-1){
            printf("%d", lista->array[i]);
        } else {
        printf("%d, ", lista->array[i]);  
        }
    }
    printf("]\n");
}

int quantidadeItens(Lista* lista) {
    return lista->quantidade;
}

int estaVazia(Lista* lista) {
    if (lista->quantidade == 0){
        return 1;
    } else {
        return 0;
    }
}
//Não sei se é isso, mas fiz retornando 1 quando está vazia e 0 quando não está

int buscar(Lista* lista, int valor) {
    // próximo bimestre
    return -1;
}

void liberarMemoria(Lista* lista) {
    free(lista);
}


