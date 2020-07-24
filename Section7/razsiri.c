#include <stdlib.h>
#include <stdio.h>

//poveca rezerviran prostor za 1 int
//prepise iz stare na novo
int * razsiri( int *p, int n)		//dobi pointer in ga poveca. vrne nov kazalec
{

	// poveca rezerviran prostor za 1 int, 
	// prepise iz stare lokacije na novo
	int *nov = (int *) malloc((n+1)*sizeof(int));
	for(int i = 0; i < n; i++){
	
		nov[i] = p[i];
	
	}
	free(p);
	return nov;

}



int main() {

	int n = 5;	//velikost tabele
	int *tab = (int *) malloc(n * sizeof(int));
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;
	printf("Tabela tab je na naslovu %p\n", tab);

	tab = razsiri(tab, n);

	n++;

	printf("Tabela tab je na naslovu %p\n", tab);
	for(int i = 0; i < n; i++){
	
		printf("%d\n", tab[i]);
	
	}


}
