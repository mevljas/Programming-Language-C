#include <stdio.h>


typedef struct kompleksno {

	int re;
	int im;


} cplx;

void izpisi(cplx z) {

	printf("%d + %d i\n",z.re, z.im);


}



int main(void){
	cplx stevila[3];

	stevila[0].re=3; stevila[0].im=5;
	stevila[1].re=2; stevila[1].im=3;
	stevila[2].re=1; stevila[2].im=7;

	
	izpisi(stevila[1]);

	cplx *p; //kazalec na ip cplx
	p = stevila;	//pokazem na prvi element tabele

	izpisi(*p);	//izpise prov kompleksno stevilo - mogoce napaka?

	
	//spremenim prvo stevilo v tabeli
	(*p).re = 2;
	(*p).im = 7;


	//lahko tudi takole
	p->re = 2;	//kamor kae
	p->im = 7;

	return 0;

}
