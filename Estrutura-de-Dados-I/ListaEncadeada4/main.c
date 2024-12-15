#include <stdio.h>
#include "fila.h"

int main()
{
    Fila* fila = criarFila(5);
    enfileirar(fila, 3);
    enfileirar(fila, 7);
    enfileirar(fila, 5);
    enfileirar(fila, 9);
    enfileirar(fila, 11);
    enfileirar(fila, 18);
    printf("Último: %d\n", ultimo(fila));
    printf("Está cheia: %d\n", estaCheia(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    printf("Primeiro: %d\n", primeiro(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    printf("Desenfileirando: %d\n", desenfileirar(fila));
    enfileirar(fila, 18);
    printf("Quantidade de itens: %d\n", quantidadeItens(fila));
    printf("Está vazia: %d\n", estaVazia(fila));
    liberarMemoria(fila);
    return 0;
}
