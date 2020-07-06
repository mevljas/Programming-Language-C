#include <ctype.h>
#include <stdio.h>
#include <string.h>


main(int argc, char *args[]){


	FILE *vhod;			//input, output

	vhod = fopen("test.txt", "r");	

	int znaki = 0;	
	int vrstice = 1;
	int presledki = 0;
	int carryPresledek = 0;


	if(vhod != NULL){
		while(!feof(vhod)){
			int c = fgetc(vhod);

			if( c >= 33 && c <= 126){
			
				znaki++;
				carryPresledek = 0;
			}
			else if( c == 10){
				vrstice++;
				carryPresledek = 0;

			}
			else if( c == 32) {
				if ( carryPresledek == 0) {
				
					presledki++;
					carryPresledek = 1;
				}
			}

	

		}
		fclose(vhod);
		printf("Stevilo znakov: %d\n",znaki);
		printf("Stevilo vrstic: %d\n", vrstice);
		printf("Stevilo presledkov: %d\n", presledki);
			
		}
		else{
			fprintf(stderr, "Napaka pri odpiranju datotek.\n");
			return 1;
		}
	return 0;

}
