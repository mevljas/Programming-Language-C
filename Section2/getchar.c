#include <stdlib.h>
#include <stdio.h>


// program bere vhod znak po znaku, 
// prebrano izpisuje nazaj na izhod 
// (vsak znak izpise v svojo vrstico)

int main (int argc, char * args[]) {

	int znak;

	do {
		znak = getchar();	//prebre en zank
		printf("%c\n", znak);
	}while(znak != EOF);	//bere dokler ni znak "end of file (ctrl+z)



}
