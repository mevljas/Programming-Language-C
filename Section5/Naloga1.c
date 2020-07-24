#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>



#define MAXN 20 ////to je kostanta - sporocimo komablerju, to ni nova spremenljivka. To je samo navodilo comaplerju
#define N 100

typedef struct {

	char ime[N];
	float x;
	float y;

} tocka;


void izpis(int n, tocka tocke[]){

	for(int i = 0; i < n; i++) {
	
		printf("%s %f %f\n", tocke[i].ime,  tocke[i].x,  tocke[i].y);
	}
}


void imeSort (int n, tocka tocke[]){

	for(int k = 0; k < n - 1; k++) {  //ni treba da gremo do konca, je ze urejeno
		for(int i = 0; i < n - 1 - k; i++) //-k je optimizacija, ker je že urejeno
			if (strcmp(tocke[i].ime, tocke[i+1].ime) == 1) {
				tocka tmp = tocke[i];
				tocke[i] = tocke[i+1];
				tocke[i+1] = tmp;
			}
	}
}

void tockeSort (int n, tocka tocke[]){

	for(int k = 0; k < n - 1; k++) {  //ni treba da gremo do konca, je ze urejeno
		for(int i = 0; i < n - 1 - k; i++){ //-k je optimizacija, ker je že urejeno
			float r1 = sqrt(pow(tocke[i].x,2) + pow(tocke[i].y,2));
			float r2 = sqrt(pow(tocke[i + 1].x,2) + pow(tocke[i + 1].y,2));
			if (r1 > r2) {
				tocka tmp = tocke[i];
				tocke[i] = tocke[i+1];
				tocke[i+1] = tmp;
			}
		}
	}
}

int main(int argc, char *args[]){
	FILE *datoteka;     //* je kazalec


	char vrstica[MAXN];
	char *rezultat;

	tocka tocke[N];

	int stevec_tock = 0;

	//obevzno preveri, ce je odpiranje uspelo
	if(argc>1)
		datoteka = fopen(args[1], "r");
	
	
	if (datoteka != NULL){
		int i = 0;

		do{
			rezultat = fgets(vrstica, MAXN, datoteka);	

			
			if (rezultat != NULL){
				sscanf(vrstica, "%s %f %f", tocke[i].ime, &tocke[i].x, &tocke[i].y);
				i++;

			}
			 stevec_tock = i;

		}while(!feof(datoteka));  //vrne true akda je konec datoteke, izpiše zaden znak dvakrat, ker kada prebre do konca , ostaen spremnlivka nespremenljiva
		

		fclose(datoteka);
	}else {
		fprintf(stderr, "Napaka pri odpiranju  datoteke '%s'\n", args[1]); //pišemo na error izhod
		exit(1);
	}

	izpis(stevec_tock, tocke);
	printf("\n");
	imeSort(stevec_tock, tocke);
	izpis(stevec_tock, tocke);
	printf("\n");
	tockeSort(stevec_tock, tocke);
	izpis(stevec_tock, tocke);
	
	

	
	
}
