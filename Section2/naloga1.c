#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char * args[]) {

	srand(time(NULL));
	int n = 100;
	
	int st = 0;

	
	if (argc != 1) {
		n=atoi(args[1]);
	}

	int izbrano = 1 + rand() % n;




	int vpis;

	do {

		scanf("%d", &vpis);		

		if ( vpis > izbrano) {
			printf("PREVEC\n");
		}
		else if ( vpis < izbrano) {
			printf("PREMALO\n");
		}
		st++;

	}while(vpis != izbrano);	

	printf("Stevilo poskuskov %d\n",st);


	return 0;
}




