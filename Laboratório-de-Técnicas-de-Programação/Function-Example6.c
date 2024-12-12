/* Faça uma sub-rotina que receba como parâmetro dois vetores de dez números inteiros, 
determine e mostre o vetor intersecção entre eles.*/

#include <stdio.h>
#include <stdlib.h>

int interseccao(int A[10], int B[10], int C[10]) {
    int cont = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (A[i] == B[j]) {
                C[cont] = A[i];
                cont++;
                break;
            }
        }
    }
    return cont;
}

void imprime_vetor(int V[10], char nome, int t) {
    printf("Vetor %c: [ ", nome);
    for (int i = 0; i < t; i++)
        printf("%d, ", V[i]);
    printf(" ]\n");
}

int contem(int V[10], int t, int e) {
    for (int i = 0; i < t; i++)
        if (e == V[i])
            return 1;
    return 0;
}

void cria_conjunto(int V[10]) {
    int numero;
    for (int i = 0; i < 10;) {
        numero = rand() % 20;
        if (!contem(V, i, numero)) { 
            V[i] = numero;
            i++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int X[10], Y[10], Z[10], qte, numero;

    cria_conjunto(X);
    cria_conjunto(Y);

    qte = interseccao(X, Y, Z);

    imprime_vetor(X, 'X', 10);
    imprime_vetor(Y, 'Y', 10);
    imprime_vetor(Z, 'Z', qte);

    return 0;
}
