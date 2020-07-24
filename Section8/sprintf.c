#include <stdio.h>
#include <stdlib.h>

main(){

	char format[10];

	int n = 5;

	sprintf(format, "%c%dd\n", '%', n);

	for(int i = 0; i < 10; i++){
	
		printf(format, i);
	
	}



}
