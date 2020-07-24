#include<stdio.h>


int main( int argc, char * args[]){
	 // Prvi argument je ime programa
	printf("Ime programa: %s\n", args[0]);


	// Pravi argumenti so od 1 do argc-1
	for(int i=1; i<argc; i++)
		printf("%d. %s\n", i, args[i]);
	

	return 0;
}
