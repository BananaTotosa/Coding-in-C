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
    if(lista->quantidade == lista->tamanho) {
        
        // --- fazendo na mão ---
        
        // lista->tamanho = lista->tamanho*2;
        // int* novoArray = malloc(sizeof(int)*lista->tamanho);
        // for(int i = 0; i < lista->quantidade; i++) {
        //     novoArray[i] = lista->array[i];
        // }
        // free(lista->array);
        // lista->array = novoArray;
        
        // com realloc
        lista->tamanho = lista->tamanho*2;
        lista->array = realloc(lista->array, sizeof(int)*lista->tamanho);
    }
    
    lista->array[lista->quantidade] = valor;
    lista->quantidade++;
}

void inserirEm(Lista* lista, int posicao, int valor) {
    // atividade
    // verificar se posicao é valida (posicao >= 0, posicao <= qtde)
    // Fiz ao contrário 
    if(posicao < 0 || posicao >= lista->quantidade){
        printf("Posição inválida");
        return -1;
    }
    
    // verificar necessidade de aumentar array
    if(lista->quantidade == lista->tamanho) {
        lista->tamanho = lista->tamanho*2;
        lista->array = realloc(lista->array, sizeof(int)*lista->tamanho);
    }
    
    // inserir na posicao reajustando itens do array
    for(int i = lista->quantidade; i > posicao; i--) {
        lista->array[i] = lista->array[i - 1];
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
    if(posicao < 0 || posicao >= lista->quantidade){
        printf("Nenhum ");
        return -1;
    }
    
    int valorAnterior = lista->array[posicao];
    
    // voltar itens até posicao e limpar último valor
    for(int i = posicao; i < lista->quantidade; i++) {
        if(i == lista->quantidade-1){
            lista->array[i] = 0;
        } else {
            lista->array[i] = lista->array[i+1];
        }
    }
    
    lista->quantidade--;
    
    // atividade: reduzir tamanho do array pela metade caso quantidade <= tamanho/3
    if(lista->quantidade <= lista->tamanho/3){
    lista->tamanho = lista->tamanho/2;
    lista->array = realloc(lista->array, sizeof(int)*lista->tamanho);    
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
    // próximo bimestre
    return -1;
}

void liberarMemoria(Lista* lista) {
    free(lista->array);
    free(lista);
}

