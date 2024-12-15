#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

typedef struct no {
    int dado;
    struct no *proximo;
    struct no *anterior;
} No;

typedef struct fila {
    No *primeiro;
    int quantidade;
    int tamanho;
} Fila;

No* criarNo(int valor, No *proximo, No *anterior) {
    No *novo_no = (No*)malloc(sizeof(No));
    novo_no->dado = valor;
    novo_no->proximo = proximo;
    novo_no->anterior = anterior;
    return novo_no;
}

Fila* criarFila(int tamanho) {
    Fila* nova_fila = malloc(sizeof(Fila));
    nova_fila->primeiro = NULL;
    nova_fila->quantidade = 0;
    nova_fila->tamanho = tamanho;
    return nova_fila;
}

void enfileirar(Fila* fila, int valor) {
    if (fila->quantidade == fila->tamanho) {
        printf("Não foi possível enfileirar %d. Fila cheia!\n", valor);
        return;
    }

    No* novo_no = criarNo(valor, NULL, NULL);
    if (fila->primeiro == NULL) {
        fila->primeiro = novo_no;
    } else {
        No* no_atual = fila->primeiro;
        while (no_atual->proximo != NULL) {
            no_atual = no_atual->proximo;
        }
        no_atual->proximo = novo_no;
        novo_no->anterior = no_atual;
    }
    fila->quantidade++;
}

int desenfileirar(Fila* fila) {
    if (fila->quantidade == 0) {
        printf("Não foi possível desenfileirar. Fila vazia!\n");
        return -1;
    }

    No* no_atual = fila->primeiro;
    int aux = no_atual->dado;
    fila->primeiro = no_atual->proximo;
    if (fila->primeiro != NULL) {
        fila->primeiro->anterior = NULL;
    }
    free(no_atual);
    fila->quantidade--;
    return aux;
}

int quantidadeItens(Fila* fila) {
    return fila->quantidade;
}

int primeiro(Fila* fila) {
    if (estaVazia(fila)) {
        printf("Fila vazia\n");
        return -1;
    }
    return fila->primeiro->dado;
}

int ultimo(Fila* fila) {
    if (estaVazia(fila)) {
        printf("Fila vazia\n");
        return -1;
    }

    No* no_atual = fila->primeiro;
    while (no_atual->proximo != NULL) {
        no_atual = no_atual->proximo;
    }
    return no_atual->dado;
}

int estaVazia(Fila* fila) {
    return fila->quantidade == 0;
}

int estaCheia(Fila* fila) {
    return fila->quantidade == fila->tamanho;
}

void liberarMemoria(Fila* fila) {
    No* no_atual = fila->primeiro;
    while (no_atual != NULL) {
        No* aux = no_atual;
        no_atual = no_atual->proximo;
        free(aux);
    }
    free(fila);
}



