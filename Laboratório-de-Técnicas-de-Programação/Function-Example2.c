#include <stdlib.h>
#include <stdio.h>

float calc_peso_ideal(float, char);

int main(int argc, char const *argv[])
{
    float alt, pideal;
    char sx;

    system("clear");
    printf("Informe a altura: ");
    scanf("%f", &alt);
    printf("Informe o sexo: ");
    scanf(" %c", &sx);

    pideal = calc_peso_ideal(alt, sx);

    if (pideal == -1)
        printf("Você informou um sexo inválido!!!");
    else
        printf("O peso ideal é %.2f\n", pideal);

    return 0;
}

float calc_peso_ideal(float altura, char sexo) {
    if (sexo == 'M')
        return 72.7 * altura - 58;
    if (sexo == 'F')
        return 62.1 * altura - 44.7;
    return -1;
}
