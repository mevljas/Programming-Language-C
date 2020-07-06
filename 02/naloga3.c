#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include <time.h>


int main (int argc, char * args[]) {
	srand(time(NULL));
	int izpisano[argc - 1];
	for (int i = 0; i < argc - 1; i++){
		izpisano[i] = 0;
			
	}


	for (int i = 1; i <= argc; i++){
		int index = 1 + rand() % (argc - 1);
			
		if(izpisano[index - 1] == 0){
			printf("%s\n",args[index]);
			izpisano[index - 1]  = 1;
		}
		else{
			i--;
		}

	
		
			
		
	}

	

	return 0;
}




