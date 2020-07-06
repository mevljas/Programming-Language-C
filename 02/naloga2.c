#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


int main (int argc, char * args[]) {

	char besede[100][50];
	int stevec = 0;
	char vnos[50];

	do {

		scanf("%s", vnos);
		strcpy(besede[stevec],vnos);
		//printf("%s\n", besede[stevec]);
		stevec++;

	}while(strcmp(vnos,"EOF") && stevec < 100);
		

	for(int i=stevec - 1; i>= 0; i--) {
		printf("%s\n",besede[i]);

	}

	return 0;
}




