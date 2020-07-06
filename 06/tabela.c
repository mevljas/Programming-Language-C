#include <stdio.h>
#include <stdlib.h>



int main(void) {

	int tab[] = {1,2,3,4,5};
	int *p1 = tab;
	p1[1] = 15; //isto kot tab[1] = 15

	int *p2;	//imam kazalec
	//p2 bi radi uporabili kot tabelo intov; v tabeli bomo imeli 10 stevilk
	p2 = (int *) malloc(10 * sizeof(int));		//mallokc rezervira prostor nekje v pomnilniku. Dobro je da typecastamo. Lahko upriambo kot tabelo
	p2[1] = 15;	//vpisi 15 tja, kamor kaze p2


	// deklrariran
}
