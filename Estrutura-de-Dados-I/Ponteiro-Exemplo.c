/*Implemente as funções configuraNome, configuraIdade e configuraCodigo de forma a que elas recebam por referência um parâmetro do tipo Aluno e altere suas propriedades conforme passado. A saída esperada para o código é:

O nome do aluno é: Elvis Presley
A idade do aluno é: 89
O código do aluno é: 4321

main.c

#include <stdio.h>

typedef struct {
    char* nome;
    int idade;
    int codigo;
} Aluno;

int main()
{
    Aluno elvis;
    configuraNome(&elvis, "Elvis Presley");
    configuraIdade(&elvis, 89);
    configuraCodigo(&elvis, 4321);
    
    printf("O nome do aluno é: %s\n", elvis.nome);
    printf("A idade do aluno é: %d\n", elvis.idade);
    printf("O código do aluno é: %d\n", elvis.codigo);

    return 0;
}
*/

Main.c funções implementadas 

#include <stdio.h>

typedef struct {
    char* nome;
    int idade;
    int codigo;
} Aluno;

void configuraNome(Aluno *aluno, char Nome[30]) {
    aluno->nome = Nome;
}

void configuraIdade(Aluno *aluno, int idade) {
    aluno->idade = idade;
}

void configuraCodigo(Aluno *aluno, int codigo) {
    aluno->codigo = codigo;
}

int main()
{
    Aluno elvis;
    configuraNome(&elvis, "Elvis Presley");
    configuraIdade(&elvis, 89);
    configuraCodigo(&elvis, 4321);
    
    printf("O nome do aluno é: %s\n", elvis.nome);
    printf("A idade do aluno é: %d\n", elvis.idade);
    printf("O código do aluno é: %d\n", elvis.codigo);


    return 0;
}
