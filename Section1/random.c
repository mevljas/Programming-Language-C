#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main( int argc, char * args[]){
	// obseg nakljucnih stevil: [0 ... RAND_MAX]
	printf("Najvecje je nakljucno stevilo: %d\n", RAND_MAX);
	//privzeto seme, števila so vedno ista

	// ce zelimo, da je ob vsakem zagonu programa drug 
  // nabor nakljucnih ste

	srand(time(NULL));	//dolocimo novo seme, da ne bo vedno isto. uporaibmo time

	//arc4random() je bolj pocasno a bolj sigurno


	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());
	printf("%d\n", rand());

	return 0;
}
