#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *minhaLista = criarLista();
    
    printf("Lista está vazia: %i \n", estaVazia(minhaLista));
    printf("Quantidade de itens da lista é: %i \n", quantidadeItens(minhaLista));
    
    imprimir(minhaLista);
    liberarMemoria(minhaLista);
    
    return 0;
}
