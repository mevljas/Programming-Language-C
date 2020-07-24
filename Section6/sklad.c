#include <stdio.h>
#include <stdlib.h>
#include "sklad.h"
 


void init(sklad *s, int n){

	s->tab = (int *) malloc(n * sizeof(int));
	s->i = -1;
	s->velikost = n;
}


void push(sklad *s, int x){

	if( s->i + 1 >= s->velikost){
		printf("Napaka: sklad je poln.\n");
	}
	else
		s->tab[++s->i] = x;
	
}


int pop(sklad *s){
	if( s->i == -1){
		printf("Napaka: sklad je prazen.\n");
		return -1;
		}
  	return s->tab[s->i--];

}

void destroy(sklad *s){

	free(s->tab); 
}


int isEmpty(sklad *s){

	return s-> i == -1 ? 1 : 0;
}

