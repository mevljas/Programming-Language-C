#include <string.h>
#include <stdio.h>
#include <stdlib.h>


#define N 100

typedef struct oseba {
  char *ime;
  char *pri;
} oseba;


void nastavi(char ** dest, char *prefix) {
  char tmp[20];
  sprintf(tmp, "%s%02d", prefix, rand() % 100);//	 sprintf izpiše v spremenljivko
  *dest = malloc((strlen(tmp)+1) * sizeof(char));
  strcpy(*dest,tmp);
}

int compa(const void * a, const void *b) {
  return strcmp((*(oseba*)a).ime, ((oseba*)b)->ime);
}


void zlij(oseba *t, int z, int k) {

	int s = (z+k)/2;
	oseba * nova = malloc((k-z+1) * sizeof(oseba));  
	int n = 0;

	int *ks; //kazalec na spremelnjivko - optimizacija



	int i = z, j=s+1;
	while (i<=s && j<=k){
	
		if(compa(&t[i], &t[j]) < 0) {	//v nova preisemo i-ti element
			ks = &i;
		
		}
		else{
			//v nova prepisem j-ti element
			ks = &j;
			
		
		}
		nova[n++] = t[*ks]; (*ks)++;
	
	}
	while ( i <= s) {
	
		nova[n++] = t[i]; i++;
	
	}
	memcpy(t + z, nova, (j-z)*sizeof(oseba));//kopiranje - optimzacija
	for(int i = z; i < j; i++){
	
		t[i] = nova[i - z];
	
	}


	free(nova);


}


void msort(oseba *t, int z, int k){


	if (k - z > 0) {
	
	int s = (z + k) / 2;
		msort(t, z, s);
		msort(t, s+1, k);
		zlij(t, z, k);
	
	
	}

}


int main(int argc, char **args) {
  oseba *osebe;
  osebe = malloc(N*sizeof(oseba));
  
  for(int i=0; i<25; i++) {
    nastavi(&osebe[4*i+0].ime, "Polde"); nastavi(&osebe[4*i+0].pri, "Hocevar");
    nastavi(&osebe[4*i+1].ime, "Miha");  nastavi(&osebe[4*i+1].pri, "Novak");
    nastavi(&osebe[4*i+2].ime, "Stefan");nastavi(&osebe[4*i+2].pri, "Obreza");
    nastavi(&osebe[4*i+3].ime, "Majda"); nastavi(&osebe[4*i+3].pri, "Petric");    
  }

  //qsort(osebe, 100, sizeof(oseba), compa);
	msort(osebe, 0, 99);    
  for(int i=0; i<100; i++) {
    printf("%s %s\n", osebe[i].ime, osebe[i].pri);
  }
  


}
