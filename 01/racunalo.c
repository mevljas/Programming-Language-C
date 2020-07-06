#include<stdio.h>


int main( int argc, char * args[]){

	// program potrebuje 2 argumenta; èe jih ni, javi napako!
	if (argc != 3) {
		printf("Uporaba: %s x y\n", args[0]);
		return 1;
	}


	//atoi ... string -> integer
	int a = atoi(args[1]); //prvi arguemnt
	int b = atoi(args[2]); //drugi argument

	printf("%d + %d = %d\n", a, b, a+b);

	return 0;
}
