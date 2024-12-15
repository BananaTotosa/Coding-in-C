#include <stdlib.h>
typedef struct {
    char* nome;
    int idade;
    int codigo;
} Aluno;

Aluno* criarAluno(char* nome, int idade, int codigo) {
    Aluno* novoAluno = malloc(sizeof(Aluno));
    novoAluno->nome = nome;
    novoAluno->idade = idade;
    novoAluno->codigo = codigo;
    return novoAluno;
}

void configuraNome(Aluno* qualquerAluno, char* qualquerNome) {
    qualquerAluno->nome = qualquerNome;
}

void configuraIdade(Aluno* qualquerAluno, int qualquerIdade) {
    qualquerAluno->idade = qualquerIdade;
}

void configuraCodigo(Aluno* qualquerAluno, int qualquerCodigo) {
    qualquerAluno->codigo = qualquerCodigo;
}

char* obterNome(Aluno* aluno) {
    return aluno->nome;
}

int obterIdade(Aluno* aluno) {
    return aluno->idade;
}

int obterCodigo(Aluno* aluno) {
    return aluno->codigo;
}


