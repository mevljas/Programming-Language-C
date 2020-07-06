#include <stdlib.h>
#include <stdio.h>

// isto kot funkcija razsiri v razsiri.c, razlika 
// je le v tem, da je tu funkcija razsiri void (ne
// vraca razultata), saj neposredno spremeni  kar
// podani kazalec p (v ta namen je p podan kot 
// kazalec na kazalec)
void razsiri( int **p, int n)		//dobimo pointer na pointer
{

	int *nov = (int *) malloc((n + 1)*sizeof(int));
	for(int i = 0; i < n; i++){
	
		nov[i] = (*p)[i];
	
	}
	free(*p);
	*p = nov;

}



int main(void) {

	int n = 5;	//velikost tabele
	int *tab = (int *) malloc(n * sizeof(int));
	tab[0] = 0;
	tab[1] = 1;
	tab[2] = 2;
	tab[3] = 3;
	tab[4] = 4;

	printf("Tabela tab je na naslovu %p\n", tab);

	razsiri(&tab, n++);


	printf("Tabela tab je na naslovu %p\n", tab);
	for(int i = 0; i < n; i++){
	
		printf("%d\n", tab[i]);
	
	}

	return 0;


}
