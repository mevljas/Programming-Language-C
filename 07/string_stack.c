#include <stdlib.h>
#include <stdio.h>
#include <string.h>

// sklad nizov: ko dam niz na sklad, moram zanj rezervirati 
// prostor, ko ga vzamem dol, moram ta prostor sprostiti


//velikost sklada
#define N 10

//"niz" je niz znakov (String)

typedef char * niz;

int main(void) {

	niz * sklad; //tabela nizov
	sklad = (niz *) malloc(N * sizeof(niz));

	int top = -1;	//sklad je na zacetku prazen
	char beseda[100];


	do{
		
		fgets(beseda, 10, stdin);
		if (strlen(beseda) > 1) {
			//push
			top++;
			sklad[top] = malloc((strlen(beseda)+1) * sizeof(char));
			strcpy(sklad[top], beseda);


		
		}
	
	}while (strlen(beseda) > 1);

	for(int x = top; x >= 0; x--){
		//pop
		printf("%s",sklad[x]);
		free(sklad[x]);
	
	}
	free(sklad);

}
