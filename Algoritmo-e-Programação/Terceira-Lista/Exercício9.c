#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n_criancas, periodo, m = 0, f = 0, mes, mes24 = 0, crianca_morta = 0;
	char sexo;
	float Cm, Mm, m24;
	
	printf("Digite o numeros de criancas nascidas:\n");
	scanf("%i", &n_criancas);
	printf("Digite qual o periodo em meses:\n");
	scanf("%i", &periodo);
	
	printf("Digite o sexo da crianca (M para masculino e F para feminino) e digite (V para sair):\n");
	scanf(" %c", &sexo);
	
	while (sexo != 'V' && crianca_morta < n_criancas){
		if (sexo == 'M' || sexo == 'm')
		m++;
		else
		f++;
		
		printf("Digite o numero de meses de vida da crianca:\n");
		scanf("%i", &mes);
		if(mes <= 24)
		mes24++;
		crianca_morta++;
		
		printf("Digite o sexo da crianca (M para masculino e F para feminino) e digite (V para sair):\n");
		scanf(" %c", &sexo);
	}
	
	Cm = (float)crianca_morta / n_criancas * 100;
	Mm = (float)m / n_criancas * 100;
	m24 = (float)mes24 / n_criancas * 100;
	
	printf("A porcentagem de criancas mortas no periodo foi de: %f%%\n", Cm);
	printf("A porcentagem de criancas do sexo masculino mortas no periodo foi de: %f%%\n", Mm);
	printf("A porcentagem de criancas que viveram 24 meses ou menos no periodo foi de: %f%%\n", m24);
	
	return 0;
}
