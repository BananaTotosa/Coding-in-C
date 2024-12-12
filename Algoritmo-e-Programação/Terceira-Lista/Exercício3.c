#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	float C;
	int F = 50.0;

	while (F < 151.0){
		C = (F - 32.0) * 5.0 / 9.0;
		printf("%i F = %f C\n", F, C);
		F++;
	}
	return 0;
}
