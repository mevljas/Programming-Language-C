#include <stdio.h>


int main( int argc, char * args[]){

	int i,j;
	if (argc != 4) {
		printf("Napacno število arugmentov \n", args[0]);
		return 1;
	}


	for(i=0; i<= atoi(args[1]); i++) {
		for(j=0; j< i * atoi(args[3]); j++) {
			printf(".");
		}
		printf("Pozdravljen, %s\n",args[2]);

	}

	return 0;
}
