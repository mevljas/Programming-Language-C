	
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **args) {
/*
  for(int i=0; i<argc; i++) {
    printf("%s\n", *args);
		args++;
	}
*/
/*
	char *zacetek = (char *) args[0];
	int izpisano = 0;
	do {
		if (*zacetek == '\0') 
			izpisano++;
		printf("%c", *zacetek);
		zacetek++;
	} while (izpisano < 2*argc);
*/

	 char * path;
	 path = getenv("USER");
	 printf("%s\n", path);

}
