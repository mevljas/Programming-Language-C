#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#define MAX  10
#define MAXN  1000
#define MAX_OCEN  100
#define MAX_IME 100




typedef struct bes {  
  char *beseda;  
  struct bes *nasl;
} beseda;



beseda *nova_beseda(char *b) {


	beseda *nov = malloc( sizeof(b));
	nov -> beseda = malloc(MAX_IME * strlen(b));
	strcpy(nov->beseda, b);

	nov -> nasl = NULL;

	return nov;
}



beseda * dodajU(beseda *z, beseda *nov){	//vsavi notr po vrstenm redu

	//ce je seznam prazen ali ce vstaimo pred prvi element
	if( z == NULL || strcmp(nov->beseda, z->beseda ) < 0){
	
		nov -> nasl = z;
		return nov;
	} 

	beseda *t = z;

	while ( t-> nasl != NULL && strcmp(t->nasl->beseda, nov->beseda) < 0)
		t = t -> nasl;
	
		


	nov -> nasl = t -> nasl;
	t-> nasl = nov;

	return z;
}


beseda * dodajZ(beseda *z, beseda *nov) {

	nov -> nasl = z;
	return nov;


}


void izpisi(beseda *s) {
		printf("%s\n", s->beseda);

}


void izpisi_seznam(beseda *z) {

	while( z != NULL) {
	
	
		izpisi(z);
		z = z-> nasl;
	
	}

}


int poisci(beseda *zac, char *word){

	int st = 0;


	while( zac != NULL) {

		//printf("%s\n",zac->beseda);
	
		if(strcmp(zac->beseda, word) == 0){
			
			return ++st;

			}
		if( zac->nasl != NULL ){
		
			*zac = *zac-> nasl;
			st++;
		
		}
		else
			return -1;
		
	
	}
	return -1;
	



}

int povprecnoIskanje(beseda *zac){

	int vsota = 0;
	int st = 0;

	beseda *zac2 = zac;


	while( zac2 != NULL) {

		//printf("%d\n", zac);
		//printf("%d\n", zac2);

	
		vsota = vsota + poisci(zac, zac2->beseda);
		//printf("%s  %d\n", zac3->beseda, poisci(zac2,  zac3->beseda));
		zac2 = zac2 -> nasl;
		st++;
	
	}

	//printf("%d\n", vsota);
	//printf("%d\n", st);

	return vsota/st;


}



  



int main(int argc, char *args[]){
	FILE *datoteka;     

	char *rezultat;


	datoteka = fopen("slovenija.txt", "r");	


	beseda *z = NULL;

	beseda *z2 = NULL;


	

	

	
	if (datoteka != NULL){

		do{
			char str[MAXN];
 			fgets(str, MAXN, datoteka);	
			if (rezultat != NULL){
			
		
				char delims[] = " "; 	//split opravi po teh locilih



				char *result;
				result = strtok(str, delims);	//prvi klicemo z strgon ki ga bi rad razbiu, prvic vrne string do delimeterja. zamenja delieter s \0
				while (result != NULL) {


					

					z2 = z;
					
					
					

					if( z2 == NULL){

						
					
						beseda *s = nova_beseda(result);

						z = dodajU(z, s);

						z2 = z;
						
						
					
					}
					else{
					
						
						int obstaja = 0;


						while( z2 != NULL) {


			
							
							if (strcmp(z2->beseda, result) == 0){


								
								obstaja = 1;
								break;	
								
							}
							z2 = z2-> nasl;
			
						}

						if( obstaja == 0){
						
							beseda *s = nova_beseda(result);

							z = dodajU(z, s);

							
						
						}

						obstaja = 0;
					
					
					}
			


				

					

					/*

					

					beseda *s = nova_beseda(result);

					z = dodajU(z, s);

					

					*/
				


				
					


					result = strtok(NULL, delims);	//vsi naslednji klici imajo na oprvem mestu NULL, ker si zapomni delimeter in gre od prej naprej

				}
	
			
			}
		}while(!feof(datoteka)); 




		izpisi_seznam(z);
		//printf("\n");
		//printf("\n");
		//printf("\n");
		

		printf("%d\n",poisci(z, "svet"));


		fclose(datoteka);
	}else {
		printf("Napaka pri odpiranju  datoteke '%s'\n", args[1]); //pišemo na error izhod

	}
	
}  
