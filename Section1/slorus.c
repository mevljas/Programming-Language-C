#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
 Program s pomocjo generatorja nakljucnih stevil
  napove izzid enega niza odbojkarske tekme med 
  Slovenijo in Rusijo 
*/
int main(int argc, char *args[]){
  srand(time(NULL));

  int x = rand() % 10;
  int z, p;

  // predpostavka: verjetnost, da bo zmagovalka prejela 
  // 25, 26, 27, 28, 29, 30 točk je 0.5, 0.1, 0.1, 0.1, 0.1, 0.1
  if (x < 5) 
	z = 25;
  else
	z = 25 + (x-4);

  // ce se je igralo na razliko ...
  if (z>25)
	p = z-2; // ... ima porazenka 2 manj ko tzmagovalka ...
  else
	p = rand() % 24; // sicer ima porazenka nakljucno stevilo tock

  int slo, rus;
  // kdo je zmagovalec? 50% slo, 50% rus
  if (rand() % 100 < 50) {
 	slo=z;
	rus=p;
  } else {
	slo=p;
	rus=z;
  }

  printf("Slovenija : Rusija - %d : %d \n", slo, rus);

  return 0;
}
