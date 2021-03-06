#include <stdlib.h>
#include <time.h>
#include <stdio.h>

// s pomocjo generatorja nakljucnih stevil "izracunaj" 
// stevilo Pi
// ideja: naključno generiraj točke v kvadratu [0,1]x[0,1]
//        in za vsako generirano tocko preveri, ce lezi v 
//        kroznem izseku, ki je ocrtan temu kvadratu.
//        Razmerje med tockami, ki lezijo v kroznem izseku 
//        in vsemi generiranimi tockami je 4 : pi.
int main(int argc, char *args[]) {  
  int N = 100000;

  srand(time(NULL));

  int vKrogu = 0; // koliko tock je padlo v krog
  for(int i=0; i<N; i++) {
	float x = (float) rand() / RAND_MAX;
	float y = (float) rand() / RAND_MAX;

	// je tocka padla v krog?
	if (x*x + y*y <= 1)
	  vKrogu++;
  }

  printf("pi = %.7f\n", 4.0*vKrogu/N);
