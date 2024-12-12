#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int casa = 0, c4 = 0, c5 = 0, c7 = 0, c12 = 0, total_pessoas = 0, pessoas;
    float total4 = 0, total5 = 0, total7 = 0, total12 = 0;
    int canal;

    printf("Digite o canal que a casa %i estava sendo assistido (4, 5, 7, 12, 0 para sair):\n", casa+1);
    scanf("%i", &canal);

    while(canal != 0){
        if (canal == 4){
            printf("Digite o numero de pessoas assistindo:\n");
            scanf("%i", &pessoas);
            c4 += pessoas;
            total_pessoas += pessoas;
        }
        else if (canal == 5){
            printf("Digite o numero de pessoas assistindo:\n");
            scanf("%i", &pessoas);
            c5 += pessoas;
            total_pessoas += pessoas;    
        }
        else if (canal == 7){
            printf("Digite o numero de pessoas assistindo:\n");
            scanf("%i", &pessoas);
            c7 += pessoas;
            total_pessoas += pessoas;
        }
        else if (canal == 12){
            printf("Digite o numero de pessoas assistindo:\n");
            scanf("%i", &pessoas);
			c12 += pessoas;
            total_pessoas += pessoas;
        }
        casa++;
        printf("Digite o canal que a casa %i estava sendo assistido (4, 5, 7, 12, 0 para sair):\n", casa+1);
        scanf("%i", &canal);
    }

        total4 = (float)c4 / total_pessoas * 100;
        total5 = (float)c5 / total_pessoas * 100;
        total7 = (float)c7 / total_pessoas * 100;
        total12 = (float)c12 / total_pessoas * 100;

        printf("A porcentagem de audiencia da emissora 4 foi de: %.1f%%\n", total4);
        printf("A porcentagem de audiencia da emissora 5 foi de: %.1f%%\n", total5);
        printf("A porcentagem de audiencia da emissora 7 foi de: %.1f%%\n", total7);
        printf("A porcentagem de audiencia da emissora 12 foi de: %.1f%%\n", total12);
 
    }
    return 0;
}
