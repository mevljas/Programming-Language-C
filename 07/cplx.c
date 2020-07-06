#include "include/cplx.h"
#include <stdio.h>


void sestej(cplx x1, cplx x2, cplx * r) {

	(*r).re = x1.re + x2.re;
	r->im = x1.im + x2.im;

}


int main(void){

	cplx w = {1, 2};
	cplx z = {.im =5, .re = 3};

	cplx rezultat = {13, 14};

	sestej(w, z, &rezultat);


	printf("%d + %d i\n", rezultat.re, rezultat.im);


}
