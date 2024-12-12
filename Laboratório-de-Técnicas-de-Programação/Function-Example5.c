#include <stdio.h>
#include <stdlib.h>

void separa_vetor(int X[10], int A[10], int *ta, int B[10], int *tb) {
    *ta = *tb = 0;
    for (int i = 0; i < 10; i++) {
        if (X[i] > 0) {
            A[*ta] = X[i];
            (*ta)++;
        } else {
            B[*tb] = X[i];
            (*tb)++;
        }
    }
}

void imprime_vetor(int v[10], int t, char nome) {
    printf("Vetor %c possui %d elementos.\n[", nome, t);
    for (int i = 0; i < t; i++)
        printf("%d, ", v[i]);
    printf("]\n");
}

int main(int argc, char const *argv[]) {
    int vet[10], vetA[10], vetB[10], tveta, tvetb;

    system("clear");

    for (int i = 0; i < 10; i++) {
        vet[i] = rand() % 20 - 10;
        printf("Informe um valor: %d\n", vet[i]);
    }

    separa_vetor(vet, vetA, &tveta, vetB, &tvetb);

    imprime_vetor(vetA, tveta, 'A');
    imprime_vetor(vetB, tvetb, 'B');

    return 0;
}
