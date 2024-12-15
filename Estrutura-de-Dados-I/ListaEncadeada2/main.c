#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *lista = criarLista();
    
    inserir(lista, 5);
    imprimir(lista);
    
    inserir(lista, 9);
    imprimir(lista);
    
    inserir(lista, 3);
    imprimir(lista);
    
    inserirEm(lista, 1, 13);
    imprimir(lista);

    inserirEm(lista, -1, 20);
    imprimir(lista);
    
    inserirEm(lista, 0, 21);
    imprimir(lista);
    
    alterar(lista, 1, 99);
    imprimir(lista);
    
    alterar(lista, 0, 4);
    imprimir(lista);
    
    remover(lista, 3);
    imprimir(lista);
    
    remover(lista, 0);
    imprimir(lista);
    
    printf("Qtde: %d\n", quantidadeItens(lista));
    printf("Vazia: %d\n", estaVazia(lista));
    liberarMemoria(lista);
    
    return 0;
}



