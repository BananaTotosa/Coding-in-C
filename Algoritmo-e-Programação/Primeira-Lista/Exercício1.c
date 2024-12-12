#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a, b, sub;
	
	printf("Digite um valor: ");
	scanf("%d", &a);
	
	printf("Digite outro valor: ");
	scanf("%d", &b);
	
	sub = a - b;
	
	printf("O valor da conta = %d\n", sub); 
	
	return 0;
}
