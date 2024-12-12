#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int tempo = 0;
	float massa = 0, massa_inicial, massa_final = 0, h, m, s;
	
	printf("Digite a massa inicial do material radioativo:\n");
	scanf("%f", &massa_inicial);
	massa = massa_inicial;
	
	while(massa > 0.5){
		massa_final = massa / 2.0;
		massa = massa_final;
		printf("%f gramas\n", massa);
		tempo++;
	}
	
	s = tempo * 50.0;
	m = tempo * 0.83;
	h = tempo * 0.013;
	
	printf("A massa inicial do material radioativo foi: %.2f\n", massa_inicial);
	printf("A massa final do material radioativo foi: %.2f\n", massa_final);
	printf("O tempo em segundos que levou para reduzir a massa para < 0.5 gramas foi de: %.2f segundos\n", s);
	printf("O tempo em minutos que levou para reduzir a massa para < 0.5 gramas foi de: %.2f minutos\n", m);
	printf("O tempo em horas que levou para reduzir a massa para < 0.5 gramas foi de: %.2f horas\n", h);
	
	return 0;
}
