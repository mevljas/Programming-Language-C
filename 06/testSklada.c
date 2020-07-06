#include <stdio.h>
#include <stdlib.h>
#include "sklad.h"

int main(void){

	
	

	printf("Koliko skladov zelite uporabljati?");
	int st_skladov;
	scanf("%d", &st_skladov);
	int trenutni_sklad = -1;
	sklad *skladi = (sklad *) malloc((st_skladov + 1) * sizeof(int));  //mora bit +1, drugace vrze error?
	int velikost_sklada;
	printf("Vpisi velikost sklada: ");
	scanf("%d", &velikost_sklada);


	
	

	for(int i = 0; i < st_skladov; i++){

		sklad s;
	
		skladi[i] = s;
		init(&skladi[i],velikost_sklada);
	}





	printf("Izberi sklad: ");
	scanf("%d", &trenutni_sklad);



	

	
	


	
	int vnos = -1;
	printf("0 ... konec programa\n");
	printf("1 ... dodaj element na sklad\n");
	printf("2 ... brisi element s sklada\n");
	printf("3 ... izpisi vsebino sklada\n");
	printf("4 ... zamenjaj sklad (index)\n");
	while (vnos != 0){
	
		scanf("%d", &vnos);
		if(vnos == 1){
		
			int element;
			printf("Vpisi element: ");
			scanf("%d", &element);

			push(&skladi[trenutni_sklad], element);
			
		}
		else if(vnos == 2){
			pop(&skladi[trenutni_sklad]);
		}
		else if(vnos == 3){
				int j = skladi[trenutni_sklad].i;
			printf("sklad: ");
			while(j >=0){
			
				printf("%d ",skladi[trenutni_sklad].tab[j]);
				j--;
			}
			printf("\n");
		}
		else if (vnos == 4){

			int nov_sklad;
			printf("Vpisi sklad: ");
			scanf("%d", &nov_sklad);
		
			if(nov_sklad < 0 || nov_sklad >= st_skladov){
				
				printf("Napaka: sklad ne obstaja..\n");

			}
			else{
				trenutni_sklad = nov_sklad;	
					
			}
		}
	
	}

	
	
	
	for(int i = 0; i < st_skladov; i++){
		destroy(&skladi[i]);
	
	}
	
	

	//free(skladi); //ne vme ce prov klicem to - nedela
	

	


	return 0;

	

}
