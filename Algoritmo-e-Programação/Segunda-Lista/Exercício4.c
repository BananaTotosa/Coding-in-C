#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float n1, n2;
	
	printf("Digite os numeros: ");
	scanf("%f %f", &n1, &n2);
	
	if (n1 > n2)
		printf("n1 > n2\n");
	else 
		printf("n2 > n1\n");
		
	return 0;
}
