#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float A = 9000000, B = 20000000, totalA = 0, totalB = 0;
	int anos;
	
	while(A < B || A != B){
		totalA += A * 1.03;
		totalB += B * 1.015;
		
		A += totalA;
		B += totalB;
		printf("%f\n", totalA);
		anos++;
	} 
	
	printf("A quantidade de anos para a populacao A ultrapassar a B foi de: %i", anos);
	
	return 0;
	
}
