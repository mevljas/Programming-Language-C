#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


int main (int argc, char * args[]) {

	int sekunde = atoi(args[1]);

	int ure = sekunde / 3600;
	if (ure != 0)
		sekunde = sekunde - ure * 3600;


	int minute = sekunde / 60;
	if (minute != 0)
		sekunde = sekunde - minute * 60;

	printf("%ss= %02d:%02d:%02d\n", args[1], ure, minute, sekunde);


	return 0;
}




