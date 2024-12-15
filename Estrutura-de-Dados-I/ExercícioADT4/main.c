#include <stdio.h>
#include "pilha.h"

int main()
{
    Pilha* pilha = criarPilha(10);
    empilhar(pilha, 3);
    empilhar(pilha, 7);
    empilhar(pilha, 5);
    printf("Em cima: %d\n", verEmCima(pilha));
    printf("Indice 0: %d\n", ver(pilha, 0));
    printf("Pegar: %d\n", pegar(pilha));
    printf("Pegar: %d\n", pegar(pilha));
    printf("Está cheia: %d\n", estaCheia(pilha));
    printf("Está vazia: %d\n", estaVazia(pilha));
    liberarMemoria(pilha);
    return 0;
}
