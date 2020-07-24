#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>






int main(int argc, char *args[]){

	int N = atoi(args[1]);
	int M = atoi(args[2]);

	int max = 0;

	srand(time(NULL));

	int tab[10];

	for(int i = 0; i < 10; i++){
		tab[i] = 0;

	}
 

	for(int i = 1; i <= N; i++){
	
		int stevilo = rand()%((100 - 1) + 1) + 1; 
		//printf("%d\n", stevilo);
		//printf("%d\n", stevilo / 11);

		int idex = (stevilo -1) / 10;
		tab[idex]++;
		if (tab[idex] > max){
		
			max = tab[idex];

		}
	}

	
	printf("\n");
	for(int i = 0; i < 10; i++){
		printf("%d\n",tab[i]);

	}
	printf("\n");
	for(int i = 0; i < 10; i++){
		tab[i] = (tab[i] * M) / max;
		printf("%d\n",tab[i]);

	}


	printf("\n");
	printf("\n");
	
	

	
	for(int i = max; i >= 0; i--){
	
		for(int j = 0; j < 10; j++){
		
			if(tab[j] <= i){
				printf("       ");
			}
			else{
				printf("O      ");
			}
		}
		printf("\n");
	}
	for(int i = 0; i < 10; i++){
		printf("-------");
	}
	printf("\n");
	printf("1-10  11-20  21-30  31-40  41-50  51-60  61-70  71-80  81-90  91-100\n");
	

	
	
	
}
