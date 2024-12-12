#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int idade;
    char sexo;
    float salario;
    int num_filhos;
} Habitante;

void le_habitantes(Habitante[5]);
float calc_media_salarial(Habitante[5]);
void calc_menor_maior_idade(Habitante[5],int*,int*);
int calc_mulheres_3_500(Habitante[5]);

int main(int argc, char const *argv[])
{
    Habitante hvet[5];
    float media = 0;
    int maior_idade, menor_idade, qtdmulheres = 0;

    system("clear");
    le_habitantes(hvet);

    media = calc_media_salarial(hvet);
    calc_menor_maior_idade(hvet, &menor_idade, &maior_idade);
    qtdmulheres = calc_mulheres_3_500(hvet);

    printf("A média salarial é R$%.2f\n", media);
    printf("A menor idade é %d e a maior idade é %d.\n", 
        menor_idade, maior_idade);
    printf("Mulheres com até 3 filhos e que recebem até R$ 500,00: %d\n", 
        qtdmulheres);

    return 0;
}

void le_habitantes(Habitante habs[5]) {
    for (int i = 0; i < 5; i++) {
        printf(" -- Habitante %d -- \n", i+1);
        printf("Idade: ");
        scanf("%d", &habs[i].idade);
        printf("Sexo: ");
        scanf(" %c", &habs[i].sexo);
        printf("Salário: ");
        scanf(" %f", &habs[i].salario);
        printf("Num. de filhos: ");
        scanf(" %d", &habs[i].num_filhos);
    }
}

float calc_media_salarial(Habitante habs[5]) {
    float media = 0;
    for (int i = 0; i < 5; i++)
        media += habs[i].salario;
    return media / 5;
}

void calc_menor_maior_idade(Habitante habs[5],int *menor,int *maior) {
    *menor = *maior = habs[0].idade;
    for (int i = 0; i < 5; i++) {
        if (habs[i].idade < *menor)
            *menor = habs[i].idade;
        if (habs[i].idade > *maior)
            *maior = habs[i].idade;
    }
}

int calc_mulheres_3_500(Habitante habs[5]) {
    int qtd = 0;
    for (int i = 0; i < 5; i++)
        if (habs[i].sexo = 'F' && 
            habs[i].salario <= 500 && 
            habs[i].num_filhos == 3)
            qtd++;
    return qtd;
}
