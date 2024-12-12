#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i = 0 , m = 0, h = 0; 
	char sexo;
	float media, alturaM, alturaH, soma_altura = 0, maior_altura, menor_altura = 100;
	
	while (i <= 4){
		printf("Digite o sexo do individuo %i:\n", i+1);
		scanf(" %c", &sexo);
			if(sexo == 'M' || sexo == 'm'){
				printf("Digite a altura da %i mulher:\n", m+1);
				scanf(" %f", &alturaM);
				m++;
				soma_altura += alturaM;
				
				if (maior_altura < alturaM)
				maior_altura = alturaM;
		
		 		if (menor_altura > alturaM)
				menor_altura = alturaM;
			} 
			else {
				printf("Digite a altura do %i homem:\n", h+1);
				scanf(" %f", &alturaH);
				h++;
				
				if (maior_altura < alturaH)
				maior_altura = alturaH;
		
				if (menor_altura > alturaH)
				menor_altura = alturaH;
			}
		i++;
	}
	media = soma_altura / m--;
	printf("A menor altura foi: %.1f\n", menor_altura);
	printf("A maior altura foi: %.1f\n", maior_altura);
	printf("A quantidade de homens foi: %i\n", h);
	printf("A media das alturas das mulheres foi: %.2f", media);
	
	return 0;
}
