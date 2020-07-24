#include <stdio.h>
#include <string.h>


//ne potrebujeo podatka o dolžini, ker mo funkcijos trlen
int parseInt(char niz[]){ //ta deklaracij niza v C-ju ni dovoljena, kadar delamo spremenljivko. Dovoljena je kot parameter
	int z = 0;
	if (niz[0] == '-') z = 1;
	
	
	
	int  s = 0; //koncec rezulata
	for(int i = 0; i < strlen(niz); i++) {
		char c = niz[i];
		if (c < '0' || c > '9')
			return -1;	
		 

		int stevka = c - '0';    //'0' - '0' = 0, '1' - '0' = 1

		s = 10 * s + stevka;	
	}
		return z == 0 ? s: -s;
	
}

main(int argc, char *args[]) {
	char stevilka[] = "135";
	int stevilo = parseInt(stevilka);

	printf("'%s' -> %d\n", stevilka, stevilo);
	
}
