#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (int argc, char * args[]) {

	srand(time(NULL));

	int a, b, n;

	printf("Vpisi a: ");scanf("%d", &a);
	printf("Vpisi b: ");scanf("%d", &b);
	printf("Vpisi n: ");scanf("%d", &n);

	
	if (n > b - a + 1) {
		printf("Ne gre...\n");
		return 1;
	}

	

	//rezerviramo prostor za tabeli velikost n. Ne moremo vedit kaj je trenutno v tem delu pomnilnika! Lahko je karkoli, ne inicializira
	//C nima podatkovnega tipa Boolean, uproalbjamo 1 in 0
	int stevila[n];
	int stVpisanih = 0;

	while(stVpisanih < n) {
		int x = a + rand() % (b - a + 1);

		int zeObstaja = 0;

		for(int i = 0; i < stVpisanih; i++){
			if(stevila[i] == x){
				zeObstaja = 1;
				break;
			}
		}

		if( zeObstaja == 0) { //ne obstaja 
			stevila[stVpisanih] = x;
			stVpisanih++;
		}
	
	}
	for(int i = 0; i < stVpisanih; i++) {
		printf("%d ", stevila[i]);
	}


	return 0;
}
