#include <time.h>
void izpisi(int n, int t[]){

	for(int i = 0; i < n; i++){
		printf("%d ", t[i]);
	}
	printf("\n");

}

void bubbleSort (int n, int t[]){

	for(int k = 0; k < n - 1; k++) {  //ni treba da gremo do konca, je ze urejeno
		for(int i = 0; i < n - 1 - k; i++) //-k je optimizacija, ker je že urejeno
			if (t[i] > t[i+1]) {
				int tmp = t[i];
				t[i] = t[i+1];
				t[i+1] = tmp;
			}
	}
}

void insertionSort(int n, int t[]) {
	
	int i = 1;  //ta del je že urejen
	int k = 1; //ker bo treba veckrat ponovit
	do{
		i = k;
		while(i > 0 && t[i] < t[i-1]){
			int tmp = t[i];
			t[i] = t[i-1];
			t[i-1] = tmp;

			i--;
		
		}

		k = k+1;
	}while(k<n);
	

}




main(){

	int N = 10000;

	int stevila[N];
	clock_t startB, endB;
	clock_t startI, endI;
	for(int i = 0; i < N; i++){
	
		stevila[i] = rand();
	}

	startB = clock();
	

	bubbleSort(N, stevila);
	endB = clock();
	printf("cpu_time for bubble sort: %.2f\n",  ((double) endB - startB) / CLOCKS_PER_SEC);
	//izpisi(N, stevila);
	for(int i = 0; i < N; i++){
	
		stevila[i] = rand();
	}
	startI = clock();
	insertionSort(N, stevila);
	endI = clock();
	printf("cpu_time for insertion sort: %.2f\n",  ((double) endI - startI) / CLOCKS_PER_SEC);
	//izpisi(N, stevila);

}
