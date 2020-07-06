#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main( int argc, char * args[]){

	int a = atoi(args[1]);
	int b = atoi(args[2]);
	b = b + 1;
	int x = atoi(args[3]);


	if (argc != 4) {
		printf("Napacno stevilo arugmentov \n", args[0]);
		return 1;
	}

	srand(time(NULL));

	float scale = rand() / (float) RAND_MAX; /* [0, 1.0] */
	int n = a + scale * ( b - a ); /* [min, max] */



	int razlika = b - a;
	float verjetnost = 100 / razlika;
	if ( x == n){
		printf("Bravo, uganil si (verjetnost zadetka: %0.2f%%) \n", verjetnost);
	}
	
	else{
		printf("Narobe, pravo stevilo je %d (verjetnost zadetka: %0.2f%%) \n", n, verjetnost);
	}



	
	return 0;
}
