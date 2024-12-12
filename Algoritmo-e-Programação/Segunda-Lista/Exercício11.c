#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n1, n2, n3;
	
	printf("Digite 3 numeros: ");
	scanf("%i %i %i", &n1, &n2, &n3);
	
	if(n1 < n2 && n1 < n3 ){
		if (n2 < n3){
		printf("Ordem = %i, %i, %i\n", n1, n2, n3);
		} else {
		printf("Ordem = %i, %i, %i\n", n1, n3, n2);
		}
	} else if(n2 < n1 && n2 < n3) {
		if (n1 < n3) {
			printf("Ordem = %i, %i, %i\n", n2, n1, n3);
		} else {
			printf("Ordem = %i, %i, %i\n", n2, n3, n1);
		}
	} else {
		if (n1 < n2){
			printf("Ordem = %i, %i, %i\n", n3, n1, n2);
		} else {
			printf("Ordem = %i, %i, %i\n", n3, n2, n1);
		}
	}
			
	return 0;
}
