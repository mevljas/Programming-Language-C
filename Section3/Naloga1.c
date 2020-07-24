#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prestej(char niz[], int pojavitve[]) {


	for(unsigned int i = 0; i < strlen(niz); i++){
		char znak = niz[i];
		if ( znak >= '0' && znak <= '9')
			pojavitve[znak - '0']++;
	}
	
}


int main (int argc, char * args[]) {
	int pojavitve[10] = {0};

	char niz[100];

	char vrstica[100] = "";

	int j = 0;

	do{

		gets(vrstica);
		if(strcmp(vrstica,"") != 0){
			for(unsigned int i = 0; i < strlen(vrstica); i++){
				niz[j] = vrstica[i];
				j++;
			}
		}
		
	
	
	}while(strcmp(vrstica,"") != 0);

		
	
	prestej(niz, pojavitve);

	for( int i = 0; i < 10; i++){
		printf("%d=%d, ",i,pojavitve[i]);
	}
	printf("\n");

	

	return 0;
}
