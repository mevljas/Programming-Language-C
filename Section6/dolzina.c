#include <stdio.h>

//v C-ju se ne uporablja camelCase (kot v Javi), ampak podcrtaje


int dolzina_niza1(char niz[]) {
	int i = 0;
	while (niz[i] != '\0') i++;
	return i;


}


int dolzina_niza2(char *niz) {
	int i = 0;
	while (*niz != '\0') { 
		i++; 
		niz = niz + 1;
	}  //*niz kaze na zacetek niza
	return i;


}

//vseeno je kao deifniniramo *niz ali niz[] - za prevajalnik je eno in isto

int main(void) {

	char beseda[] = "abrakadabra";

	printf("Dolzina besede '%s' je %d\n", beseda, dolzina_niza1(beseda));

	return 0;
}
