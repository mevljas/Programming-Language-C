#include <stdio.h>


#define MAXN 10 ////to je kostanta - sporocimo komablerju, to ni nova spremenljivka. To je samo navodilo comaplerju

main(int argc, char *args[]){
	FILE *datoteka;     //* je kazalec


	char vrstica[MAXN];
	char *rezultat;

	//obevzno preveri, ce je odpiranje uspelo
	if(argc>1)
		datoteka = fopen(args[1], "r");
	else
		datoteka = stdin;   //ime spremeljivke tipa file*, ki kaže na tipkovnico
	//stdout kaže na zaslon
	//stderr standardni error

	
	if (datoteka != NULL){

		do{
			rezultat = fgets(vrstica, MAXN, datoteka);	//lahko povemo anjvec kolko zankov naj prebere ( njavec 10 znakov)
			if (rezultat != NULL)  //kada smo na koncu vrne NULL, moramo pšreverti, drugace bi dvakrat brali zadnji zank
				fprintf(stdout, "%s", vrstica);  //izpiše se le prvih 9 znakov, ker upoštevmao na koncu null terminator ( sepravi 9+1 = 10), 
			//fprintf + stderr pišemo v stdout
		}while(!feof(datoteka));  //vrne true akda je konec datoteke, izpiše zaden znak dvakrat, ker kada prebre do konca , ostaen spremnlivka nespremenljiva
		

		fclose(datoteka);
	}else {
		fprintf(stderr, "Napaka pri odpiranju  datoteke '%s'\n", args[1]); //pišemo na error izhod
		exit(1);
	}
}
