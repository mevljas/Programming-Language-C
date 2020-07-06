#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 3

struct oseba {

	char ime[10];
	char priimek[10];
	int starost;

};

int primerjaj(struct oseba o1, struct oseba o2){
	int k = strcmp(o1.priimek, o2.priimek);
	
	return (k != 0 ? k :  strcmp(o1.ime, o2.ime));

}

//0 ce sta enaka
//-1 ce je prvi bojekt manjjsi
//+1 ce je drugi objekt manjsi


main(){
	/*

	struct oseba o1;
	char tmp[10];
	int starost;
	
	printf("vpisi ime: "); scanf("%s", tmp);
	strcpy(o1.ime, tmp);

	printf("Vpisi priimek: "); scanf("%s", o1.priimek); //lahko daš spremenljivko akr notr

	
	printf("Vpisi starost: "); scanf("%d", &starost);
	o1.starost = starost;

	printf("%s %s %d\n", o1.ime, o1.priimek, o1.starost);
	*/

	struct oseba osebe[N];  //oseba je ime pdoatkovnega tipa. To je tablea N oseb
	for(int i = 0; i < N; i++) {
	
		printf("Vpisi ime osebe %d: ", i+1); 
		scanf("%s", osebe[i].ime);
		printf("Vpisi priimek osebe %d: ", i+1); 
		scanf("%s", osebe[i].priimek);
		printf("Vpisi starost osebe %d: ", i+1); 
		scanf("%d", &osebe[i].starost);
	}

	for(int i = 0; i < N; i++) {
	
		printf("%s %s %d\n", osebe[i].ime, osebe[i].priimek, osebe[i].starost);
	
	}

}
