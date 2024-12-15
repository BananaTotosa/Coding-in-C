#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *minhaLista = criarLista();
    
    printf("Lista está vazia: %i \n", estaVazia(minhaLista));
    printf("Quantidade de itens da lista é: %i \n", quantidadeItens(minhaLista));
    imprimir(minhaLista);
    printf("\n\n");
    
    inserir(minhaLista, 11);
    inserir(minhaLista, 13);
    inserir(minhaLista, 18);
    inserir(minhaLista, 24);
    inserir(minhaLista, 29);
    inserir(minhaLista, 55);
    
    printf("Lista está vazia: %i \n", estaVazia(minhaLista));
    printf("Quantidade de itens da lista é: %i \n", quantidadeItens(minhaLista));
    imprimir(minhaLista);
    printf("\n\n");
    
    printf("Item removido: %d\n", remover(minhaLista, 9));
    printf("Item removido: %d\n", remover(minhaLista, 2));
    printf("Item removido: %d\n", remover(minhaLista, 3));
    printf("Item removido: %d\n", remover(minhaLista, 1));
    
    printf("Lista está vazia: %i \n", estaVazia(minhaLista));
    printf("Quantidade de itens da lista é: %i \n", quantidadeItens(minhaLista));
    imprimir(minhaLista);
    printf("\n\n");
    
    printf("Item alterado: %d\n", alterar(minhaLista, 1, 77));
    printf("Item alterado: %d\n", alterar(minhaLista, 0, 99));
    
    printf("Lista está vazia: %i \n", estaVazia(minhaLista));
    printf("Quantidade de itens da lista é: %i \n", quantidadeItens(minhaLista));
    imprimir(minhaLista);
    printf("\n\n");
    
    
    liberarMemoria(minhaLista);
    
    return 0;
}

