#include <stdlib.h>
#include <stdio.h>
#include <string.h>





#define MAXN 100 ////to je kostanta - sporocimo komablerju, to ni nova spremenljivka. To je samo navodilo comaplerju


typedef struct {  

	char *ime;  

	char *priimek;  

	char *telefon;

} oseba;



int primerjalnik_ime(const void *a, const void *b){


	oseba x1 = *(oseba *)a;
	oseba x2 = *(oseba *)b;


	return strcmp(x1.ime, x2.ime);



}

int primerjalnik_priimek(const void *a, const void *b){


	oseba x1 = *(oseba *)a;
	oseba x2 = *(oseba *)b;


	return strcmp(x1.priimek, x2.priimek);



}


// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(oseba arr[], int l, int m,int r, int kriterij) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
  
    /* create temp arrays */
    oseba L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 

		if(!kriterij){
		
			if (strcmp(L[i].ime, R[j].ime) <= 0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		
		
		}
		else{
		
			if (strcmp(L[i].priimek, R[j].priimek) <= 0) 
	        { 
	            arr[k] = L[i]; 
	            i++; 
	        } 
	        else
	        { 
	            arr[k] = R[j]; 
	            j++; 
	        } 
	        k++; 
		
		}
        
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(oseba arr[], int l, int r, int kriterij) 
{ 
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
        int m = l+(r-l)/2; 
  
        // Sort first and second halves 
        mergeSort(arr, l, m, kriterij); 
        mergeSort(arr, m+1, r, kriterij); 
  
        merge(arr, l, m, r, kriterij); 
    } 
} 

int main(int argc, char *args[]){
	FILE *datoteka;     


	char vrstica[MAXN];
	char *rezultat;


	datoteka = fopen("osebe.txt", "r");
	int stevilo_vrstic = atoi(fgets(vrstica, MAXN, datoteka));	
	//printf("%d", stevilo_vrstic);
	oseba *osebe = (oseba *) malloc(stevilo_vrstic * sizeof(oseba));
	int i = 0;
	int size = 0;
	int velikost_osebe = sizeof(oseba);
	//int velikost = stevilo_vrstic * sizeof(oseba);
	int velikost = stevilo_vrstic * velikost_osebe;
	//printf("%d", velikost);


	
	if (datoteka != NULL){

		do{
			char str[100];
 			fgets(str, MAXN, datoteka);	
			if (rezultat != NULL){
			
		
				char delims[] = ":"; 	//split opravi po teh locilih

				

				char *result;
				result = strtok(str, delims);
				size = strlen(result);
				osebe[i].ime = (char *) malloc(size * sizeof(char));
				velikost = velikost + size * sizeof(char) + 1;
				strcpy(osebe[i].ime, result);	
				result = strtok(NULL, delims);
				size = strlen(result);
				osebe[i].priimek = (char *) malloc(size * sizeof(char));
				velikost = velikost + size * sizeof(char) + 1;
				strcpy(osebe[i].priimek, result);	
				result = strtok(NULL, delims);
				result = strtok(result, "\n");
				size = strlen(result);
				osebe[i].telefon = (char *) malloc(size * sizeof(char));
				velikost = velikost + size * sizeof(char) +  1;
				strcpy(osebe[i].telefon, result);	
				i++;
	
			
			}
		}while(!feof(datoteka)); 
		

		fclose(datoteka);
	}else {
		printf("Napaka pri odpiranju  datoteke '%s'\n", args[1]); //pišemo na error izhod

	}
	printf("\n");

	for(int i = 0; i < stevilo_vrstic; i++) {
	
		printf("%s %s %s\n",osebe[i].ime, osebe[i].priimek, osebe[i].telefon);
	}

	printf("\n\n");

	printf("Velikost: %d\n", velikost);

	qsort(osebe, stevilo_vrstic, sizeof(oseba), primerjalnik_ime);

	printf("qsort po imenih\n");

	for(int i = 0; i < stevilo_vrstic; i++) {
	
		printf("%s %s %s\n",osebe[i].ime, osebe[i].priimek, osebe[i].telefon);
	}

	printf("\n\n");

	printf("qsort po priimkih\n");
	qsort(osebe, stevilo_vrstic, sizeof(oseba), primerjalnik_priimek);

	for(int i = 0; i < stevilo_vrstic; i++) {
	
		printf("%s %s %s\n",osebe[i].ime, osebe[i].priimek, osebe[i].telefon);
	}

	printf("\n\n");
	mergeSort(osebe, 0, stevilo_vrstic - 1,0);

	printf("megasort po imenih\n");
	for(int i = 0; i < stevilo_vrstic; i++) {
	
		printf("%s %s %s\n",osebe[i].ime, osebe[i].priimek, osebe[i].telefon);
	}

	printf("\n\n");
	mergeSort(osebe, 0, stevilo_vrstic - 1,1);
	printf("megasort po priimkih\n");
	for(int i = 0; i < stevilo_vrstic; i++) {
	
		printf("%s %s %s\n",osebe[i].ime, osebe[i].priimek, osebe[i].telefon);
	}


	for(int i = 0; i < stevilo_vrstic; i++){
	
		free(osebe[i].ime);
		free(osebe[i].priimek);
		free(osebe[i].telefon);
	
	}

	free(osebe);
}
