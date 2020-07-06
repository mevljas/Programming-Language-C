#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct stevila {

	int i;
	int tab[100];


} sklad;



void push(sklad *s, int x){
	s->tab[++s->i] = x;


}


int pop(sklad *s){
  	return s->tab[s->i--];

}






int main(int argc, char *args[]){

	sklad s;
	
	s.i = -1;

	char znak;
	int rezultat = 0;


	for(int i = 1; i < argc; i++){
	
		znak = args[i][0];



		if(isdigit(znak)){
			
			push(&s, znak - 48);	
			
		}
		else if( znak == '+'){

	
			push(&s, pop(&s) + pop(&s));
	
		}
		else if( znak == '*'){
	
			push(&s, pop(&s) * pop(&s));
	
		}
		else if( znak == '-'){

			int temp = pop(&s);
	
			push(&s, pop(&s) - temp);
	
		}
		else if( znak == '^'){

			int temp = pop(&s);
	
			push(&s,  (int) pow( pop(&s), temp ));
	
		}
	
	}

	printf("Rezultat: %d\n", pop(&s));

	



	
	

	return 0;

}

