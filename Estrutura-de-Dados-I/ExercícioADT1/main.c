#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    Aluno* elvis;
    elvis = criarAluno("Elvis Presley", 89, 4321);
   
    printf("O nome do elvis é: %s\n", obterNome(elvis));
    printf("A idade do elvis é: %d\n", obterIdade(elvis));
    printf("O código do elvis é: %d\n", obterCodigo(elvis));

    free(elvis);

    return 0;
}
