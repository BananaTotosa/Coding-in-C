#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int A, B, C;
	
	printf("Digite os valores: ");
	scanf("%i %i", &A, &B);
	
	if (A == B) {
		C = A + B;
		
		printf("O resultado foi de: %i\n", C);
	}
	else {
		C = A * B;
		
		printf("O resultado foi de: %i\n", C);
	} 
			
	return 0;
}
