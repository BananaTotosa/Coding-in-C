#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int dia, mes, ano, maximo;
	
	printf("Digite o dia/mes/ano: ");
	scanf("%i %i %i", &dia, &mes, &ano);
	
	if (dia < 1 || dia > 31)
		return 0;
		
	if (mes <1 || mes > 12)
		return 0;
		
	if (ano < 1)
		return 0;
	
	if (mes == 2) {
		if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
		maximo = 29;
    	} else 
        maximo = 28;
	} else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
		maximo = 30;
		} else 
		maximo = 31;
		
	if (dia <1 || dia > maximo) {
		return 0;	
	}
	
	if (dia == 31 && mes == 12){
		printf("01/01/%i\n", ano+1);
	} else if (dia == maximo){
		printf("01/%i/%i\n", mes+1, ano);
    } else {
        printf("%i/%i/%i\n", dia+1, mes, ano);
    }
	return 0;
}
