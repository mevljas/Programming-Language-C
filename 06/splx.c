#include <stdio.h>


typedef struct kompleksno {

	int re;
	int im;


} cplx;

void izpisi(cplx z) {

	printf("%d + %d i\n",z.re, z.im);


}

cplx sestej(cplx w, cplx z){
	//ce vracamo strukturjo, je to zelo dobra stvar v C-ju. Vrne ceu paket(strukturuo)

	cplx r = {w.re+z.re, w.im+z.im};
	return r;

}



int main(void){
	cplx z;
	z.re = 3; z.im = 5;  //prva moznost inicializacije
	izpisi(z);


	cplx w = {4,8};  //drugi nacin
	izpisi(w);

	cplx x = {.im=7, .re=9}; //tretja moznost
	izpisi(x);


	cplx y = {.im=7}; //cetrta moznost
	izpisi(y);

	cplx rezultat = sestej(z,w);
	izpisi(rezultat);


	return 0;

}
