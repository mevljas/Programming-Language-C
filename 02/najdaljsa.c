// iz tipkovnice beremo nize, na koncu izpi�emo najdal�ji prebrani niz


//prepdopstavka: vsi nizi so kraj�i od 100 znakov

#include <stdio.h>
#include <string.h>

main() {
	char najD[100] = "";
	char prebrani[100];

	do {
		//funkcija je deprecated, ker je nevarna - nima� kontrole kolko uporabnik vpi�e
		//POZOR: uporaba funckije gets je nevarna!
		gets(prebrani);

		if (strlen(prebrani) > strlen(najD))
			strcpy(najD, prebrani);

		printf("%s\n", prebrani);
	}while(strlen(prebrani) > 0);


	printf("Najdaljsa: %s\n", najD);
}
