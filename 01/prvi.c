#include<stdio.h>


// Program mora vrniti vrednost (int), ki klicocemu programu sporoca,
// ako se je program koncal: 0 ... OK, vse ostalo ... napaka


int main(void){
	printf("Zivel C\n");
	int i,j;

	// izpis tabele s postevanko
	for(i=1; i<=10; i++) {
		for(j=1; j<=10; j++) {
			printf("%3d ",i*j);
		}
		printf("\n");
	}

	 // izhod brez napake
	return 0;
}
