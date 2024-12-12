#include <stdio.h>

int main() {
    float t1, t2, t3, delta, pontos, delta1, delta2, delta3, t_padrao1, t_padrao2, t_padrao3; 
    int num_equipe, pontos_etapa1, pontos_etapa2, pontos_etapa3, pontos_total, equipe_vencedora = -1, pontos_vencedora = 0;
	
	printf("Informe o tempo padrao da primeira fase (tempo em minutos): ");
	scanf("%f", &t_padrao1);
	t_padrao1 = t_padrao1 * 60;
	printf("Informe o tempo padrao da segunda fase (tempo em minutos): ");
	scanf("%f", &t_padrao2);
	t_padrao2 = t_padrao2 * 60;
	printf("Insira o tempo padrao da terceira fase (tempo em minutos): ");
	scanf("%f", &t_padrao3);
	t_padrao3 = t_padrao3 * 60;
	
	printf("Digite o numero de inscricao da equipe:\n");
    scanf("%d", &num_equipe);
    
	while (num_equipe != 9999) {
        printf("Digite o primeiro, segundo e terceiro tempo da equipe (tempo em minutos):\n");
    	scanf("%f %f %f", &t1, &t2, &t3);
    	
    	t1 = t1 * 60;
    	t2 = t2 * 60;
    	t3 = t3 * 60;
    	
    	delta1 = t_padrao1 - t1;
    	delta2 = t_padrao2 - t2;
    	delta3 = t_padrao3 - t3;
		
		pontos_etapa1 = pontos_etapa2 = pontos_etapa3 = pontos_total = 0;
		
		pontos = 0;
        if(delta1 < 3){
		pontos += 100;
		}
		else if (delta1 >= 3 && delta1 <= 5){
		pontos += 80;
		}
		else{
		pontos += 80 - (delta1 - 5)/5;
		}
        pontos_etapa1 = (int) pontos;
		
		pontos = 0;
        if(delta2 < 3){
		pontos += 100;
		}
		else if (delta2 >= 3 && delta2 <= 5){
		pontos += 80;
		}
		else{
		pontos += 80 - (delta2 - 5)/5;
		}
        pontos_etapa2 = (int) pontos;
		
		pontos = 0;
        if(delta3 < 3){
            pontos += 100;
        }
        else if (delta3 >= 3 && delta3 <= 5){
            pontos += 80;
        }
        else{
            pontos += 80 - (delta3 - 5)/5;
        }
        pontos_etapa3 = (int) pontos;

        pontos_total = pontos_etapa1 + pontos_etapa2 + pontos_etapa3;

        if (pontos_total > pontos_vencedora) {
            equipe_vencedora = num_equipe; 
            pontos_vencedora = pontos_total; 
        }

        printf("Equipe %d obteve %d pontos na etapa 1, %d pontos na etapa 2, %d pontos na etapa 3 = %d pontos\n", num_equipe, pontos_etapa1, pontos_etapa2, pontos_etapa3, pontos_total);

        printf("Digite o numero de inscricao da equipe:\n");
        scanf("%d", &num_equipe);
    }

    printf("Equipe vencedora: %d com %d pontos\n", equipe_vencedora, pontos_vencedora);

    return 0;
}
