#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main( int argc, char * args[]){
	srand(time(NULL));
	
	int x = rand() % 10;
	int z,slo,p,rus;
	if (x < 5)
		z = 26;
	else
		z = 25 + (x-4);

	if (z > 25)
		p = z - 2;
	else
		p = rand() % 24;

	if (rand() % 100 < 50) {
		slo = z;
		rus = p;

	} else {
		slo = p;
		rus = z;
	}

	printf("Slovenija : Rusija - %d : %d\n", slo, rus);

	return 0;
}
