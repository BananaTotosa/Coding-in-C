#include <stdio.h>
#include "lista.h"

int main()
{
    Lista *lista = criarLista();
    
    inserir(lista, 5);
    inserir(lista, 9);
    inserir(lista, 3);
    inserirEm(lista, 1, 13);

    return 0;
}
