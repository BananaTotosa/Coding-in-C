#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        printf("%d = ano bissexto.", ano);
    } else {
        printf("%d = nao bissexto.", ano);
    }

    return 0;
}
