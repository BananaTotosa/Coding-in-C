#include <stdlib.h>
#include <stdio.h>
#include "pilha.h"

typedef struct pilha{
    int* array;
    int tamanho;
    int quantidade;
} Pilha;

Pilha* criarPilha(int tamanho) {
    // Alocar pilha na memória heap
    // Inicializar valores considerando parâmetro recebido
    Pilha *novapilha = malloc(sizeof(tamanho));
    novapilha->array = malloc(sizeof(int)*tamanho);
    novapilha->tamanho = tamanho;
    novapilha->quantidade = 0;
    // Retornar ponteiro
    return novapilha;
}

void liberarMemoria(Pilha* pilha){
    // Liberar toda memória heap alocada
    free(pilha->array);
    free(pilha);
}

void empilhar(Pilha* pilha, int valor){
    // Caso esteja cheia printar mensagem de erro
    if(pilha->quantidade == pilha->tamanho) {
        printf("Pilha cheia, não foi possível adicionar o número %d\n", valor);
    } else {
    // Adicionar novo item ao final da pilha
    pilha->array[pilha->quantidade] = valor;
    pilha->quantidade++;
    }
}

int pegar(Pilha* pilha){
    // Remover e retornar último valor da pilha
    // Fiz uma condição, se caso usar a função pegar com qtde < 0, retorne valor inválido
    if(pilha->quantidade > 0){
    int valorAnterior = pilha->array[pilha->quantidade-1];
    pilha->array[pilha->quantidade-1] = 0;
    pilha->quantidade--;
    
    return valorAnterior;    
    } else {
        return -1;
    }
}

int ver(Pilha* pilha, int indice){
    // Retornar valor de determinado índice da pilha
    if(pilha->quantidade == 0){
        return 0;
    } else {
        return pilha->array[indice];
    }
}

int verEmCima(Pilha* pilha){
    // Retornar valor da última posição da pilha
    if(pilha->quantidade == 0){
        return -1;
    } else {
        return pilha->array[pilha->quantidade-1];
    }
}

int estaVazia(Pilha* pilha){
    // Retornar se pilha está vazia
    // Fiz que 1 é quando está vazia e 0 quando quantidade > 0
    if(pilha->quantidade == 0){
    return 1;
    } else {
    return 0;
    }
}
int estaCheia(Pilha* pilha){
    // Retornar se pilha está cheia
    // Fiz que 1 é quando está cheia e 0 quando ainda não ultrapassou o limite
    if(pilha->quantidade == pilha->tamanho) {
    return 1;
    } else {
    return 0;
    }
}




