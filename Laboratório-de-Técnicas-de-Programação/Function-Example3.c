#include <stdio.h>

int determina_divisores(int);

int main(int argc, char const *argv[])
{
    int n, soma;

    printf("Informe um valor inteiro positivo: ");
    scanf("%d", &n);

    soma = determina_divisores(n);

    printf("A soma dos divisores de %d é %d\n", n, soma);

    return 0;
}

int determina_divisores(int numero) {
    int s = 0;
    for (int i = 1; i <= numero/2; i++)
        if (numero % i == 0)
            s += i;
    return s + numero;
}
