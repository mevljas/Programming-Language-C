#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int jeTrikotno(int i){

	for(int n = 0; n <=i; n++){
		if ((n * (n +  1)) == (i * 2)) 
			return 1;
		
	}
	return 0;

	
}

int main (int argc, char * args[]) {
	

	char vrstica[100] = "";

	gets(vrstica);

	int sestevek = 0;
	int zacetek = 0;
	int konec = 0;



	for(unsigned int i = 0; i < strlen(vrstica); i++){

		if(vrstica[i] >= 'A' && vrstica[i] <= 'Z'){
			sestevek = sestevek + ((int)vrstica[i] - 64);
			konec = i;
		}
		
		
		else if (vrstica[i] == ' '){
			
		
			if (jeTrikotno(sestevek)) {
				for(int j = zacetek; j <= konec; j++){
					printf("%c", vrstica[j]);
				}
				printf(" %d\n", sestevek);
				
			}
			sestevek = 0;
			char vrstica[100] = ""; 
			zacetek = i + 1;
		}
		
	
	}

	if (jeTrikotno(sestevek)) {
		for(int j = zacetek; j <= konec; j++){
			printf("%c", vrstica[j]);
		}
		printf(" %d\n", sestevek);
				
	}

	

	
}
