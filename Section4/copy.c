#include <ctype.h>
#include <stdio.h>


// Program prepise eno tekstovno datoteko v drugo, 
// pri tem vse majhne crke spremeni v velike.


main(int argc, char *args[]){

	if(argc != 3){
	
		fprintf(stderr, "Napacno stevilo argumentov\n");
			return 1;
	}


	FILE *vhod, *izhod;			//input, output

	vhod = fopen(args[1], "r");		//za birane dodatmo samo b zravn
	izhod = fopen(args[2], "w");	//za birane dodatmo samo b zravn

		if(vhod != NULL && izhod != NULL){
		while(!feof(vhod)){
			int c = fgetc(vhod);

			c = toupper(c);



			if ( c != EOF)
				fputc(c, izhod);
		}
		fclose(vhod);
		fclose(izhod);
			
		}
		else{
			fprintf(stderr, "Napaka pri odpiranju datotek.\n");
			return 1;
		}
	return 0;

}
