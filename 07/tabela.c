#include <stdio.h>

#define N 5


// uporaba kazalcne aritmetike: po tabeli se premikamo 
// z p++ (korak na naslednji element), konec tabele
// detektiramo z p <= &zanjiElement

int main(void) {
  int tab[N] = {5, 4, 3, 2, 1};

  int *p = tab; // s p pokazemo na zacetek tabele ...
	// ... in se sprehodimo do konca
	while (p <= &tab[N-1]) {
		printf("Naslov: %p, Vrednost: %d\n", p, *p);
		p++;
	}

	
	p = tab; 					// s p pokazemo na prvi element
	int *q = &tab[3];	// s q pokazemo na 4. element
	int a = (q-p);    // razlika med p in q je 3 (elemente)
	printf("%d\n", a);
}
