#include <stdio.h>
#include "include/cplx.h"

void izpisi(cplx z) {
  printf("%d + %d i\n", z.re, z.im);
}

// funkcija sesteje dve stevili in vrne strukturo cplx
cplx sestej(cplx w, cplx z) {
  cplx r = {w.re+z.re,  w.im+z.im};
	return r;
}

int main(void) {
  cplx z;
  z.re=3; z.im=5;
  izpisi(z);

  cplx w = {4,8};  
  izpisi(w);

	cplx rezultat = sestej(z,w);
	izpisi(rezultat);

  cplx x = {.im=7, .re=9};
  izpisi(x);

	cplx y = {.im=13};
	izpisi(y);

  return 0;
}
