#include <stdio.h>

int main() {
    int max_oper_standard = 24, max_oper_luxo = 32, total_operarios = 40;
    int num_oper_standard = 0, num_oper_luxo = 0, num_radios_standard = 0, num_radios_luxo = 0, lucro_maximo = 0;
    int lucro_standard, lucro_luxo, operarios_disponiveis, num_oper_luxo_disponiveis, num_oper_standard_disponiveis;

    printf("Digite o valor do lucro por radio standard: ");
    scanf("%d", &lucro_standard);
    printf("Digite o valor do lucro por radio de luxo: ");
    scanf("%d", &lucro_luxo);

    operarios_disponiveis = total_operarios;
    while (operarios_disponiveis > 0) {
        if (operarios_disponiveis >= max_oper_luxo*2) {
            num_oper_luxo += max_oper_luxo;
            num_radios_luxo += max_oper_luxo;
            operarios_disponiveis -= max_oper_luxo*2;
        } else if (operarios_disponiveis >= max_oper_luxo) {
            num_oper_luxo += max_oper_luxo;
            num_radios_luxo += max_oper_luxo;
            operarios_disponiveis -= max_oper_luxo;
        } else {
            num_oper_luxo_disponiveis = operarios_disponiveis/2;
            num_oper_luxo += num_oper_luxo_disponiveis;
            num_radios_luxo += num_oper_luxo_disponiveis;
            operarios_disponiveis -= num_oper_luxo_disponiveis*2;
        }

        num_oper_standard_disponiveis = operarios_disponiveis;
        if (num_oper_standard_disponiveis > max_oper_standard) {
            num_oper_standard_disponiveis = max_oper_standard;
        }
        num_oper_standard += num_oper_standard_disponiveis;
        num_radios_standard += num_oper_standard_disponiveis;
        operarios_disponiveis -= num_oper_standard_disponiveis;
    }

    lucro_maximo = num_radios_standard * lucro_standard + num_radios_luxo * lucro_luxo;

    printf("Esquema de produção que maximiza o lucro diario:\n");
    printf("Numero de operarios na linha standard: %d\n", num_oper_standard);
    printf("Numero de operarios na linha de luxo: %d\n", num_oper_luxo);
    printf("Numero de radios standard produzidos: %d\n", num_radios_standard);
    printf("Numero de radios de luxo produzidos: %d\n", num_radios_luxo);
    printf("Lucro diario: %d\n", lucro_maximo);

    return 0;
}
