#include <stdio.h>
#include <stdlib.h>

typedef struct stevila {

	int i;
	int *tab;
	int velikost;
	


} sklad;




void init(sklad *s, int n){

	s->tab = (int *) malloc(n * sizeof(int));
	s->i = -1;
	s->velikost = n;
}


void push(sklad *s, int x){
	if( s->i > s->velikost){
		printf("Napaka: sklad je poln.\n");
	}
	s->tab[++s->i] = x;

}


int pop(sklad *s){
	if( s->i == -1){
		printf("Napaka: sklad je prazen.\n");
		return -1;
		}
  	return s->tab[s->i--];

}

int isEmpty(sklad *s){

	return s-> i == -1 ? 1 : 0;
}






int main(void){

	sklad s;
	init(&s,1);
	
	int vnos = -1;
	printf("0 ... konec programa\n");
	printf("1 ... dodaj element na sklad\n");
	printf("2 ... briši element s sklada\n");
	printf("3 ... izpiši vsebino sklada\n");
	while (vnos != 0){
	
		scanf("%d", &vnos);
		if(vnos == 1){
		
			int element;
			printf("Vpisi element: ");
			scanf("%d", &element);
			push(&s, element);
		}
		else if(vnos == 2){
			pop(&s);
		}
		else if(vnos == 3){ž
				int j = s.i;
			printf("sklad: ");
			while(j >=0){
			
				printf("%d ",s.tab[j]);
				j--;
			}
			printf("\n");
		}
	
	}

	return 0;

}

