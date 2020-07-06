#include <stdio.h>




int main( int argc, char * args[]){

	int vsota = 2;

	int i;

	int prvi = 1;
	
	int drugi = 1;

	int trenutni;

	if (argc != 2) {
		printf("Napacno stevilo arugmentov \n", args[0]);
		return 1;
	}


	for(i=3; i <= atoi(args[1]); i++) {
		
		trenutni = prvi + drugi;
		prvi = drugi;
		drugi = trenutni;
		vsota = vsota + trenutni;
		
		
	}
	printf("Vsota prvih %d Fibonaccijevih stevil je %d\n", atoi(args[1]), vsota);

	return 0;
}
