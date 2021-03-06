#include <string.h>
#include <stdio.h>
#include <stdlib.h>

// implementacija urejanje z zlivanjem (merge sort)
// funkcija bsort uredi podatke tako, da tabelo razbije 
// na dva dela, uredi vsak del (rekurzivno), nato urejena 
// dela zlije; bistvo urejanja s v tem primeru opravi v 
// funkciji zlij().

// maksimalno stevilo oseb v tabeli
#define N 100

typedef struct oseba {
  char *ime;
  char *pri;
} oseba;


// funkcija, ki ustvari "nakljucni" niz, sestavljen 
// iz prefixa in nakljucne stevcilka; funkcija
// za ta niz rezervira prostor in nastavi spr. dest
void nastavi(char ** dest, char *prefix) {
  char tmp[20];
  sprintf(tmp, "%s%02d", prefix, rand() % 100);
  *dest = malloc((strlen(tmp)+1) * sizeof(char));
  strcpy(*dest,tmp);
}

// primerjava dveh oseb; funkcijo lahko uporabimo pri klicu 
// qsort() ali za primerjavo elementov v nasi funkcijo msort()
int compa(const void * a, const void *b) {
  return strcmp((*(oseba*)a).pri, ((oseba*)b)->pri);
}


// zlije  podtabeli t[z..s] in t[z+1,k] v novo tabeli,
// nato tako urejene elemente prepiše nazaj v tabelo t
void zlij(oseba *t, int z, int k) {
  int s = (z+k)/2;

  oseba * nova = malloc((k-z+1)*sizeof(oseba));
  int n=0;
  
  int *ks;
  int i = z, j=s+1;
  while (i<=s && j<=k) {
    if (compa(&t[i], &t[j]) < 0) { // v novo tabelo prepišem i-ti element
      ks = &i;
    } else { // v novo prepisem j-ti element
      ks = &j;
    }
    nova[n++] = t[*ks]; (*ks)++; 
  }
  while (i <= s) {
    nova[n++] = t[i]; i++;
  }
  
  // prepis elementov iz nove tabele na originalno mesto
  // z uporabo ukaza memcpy
  memcpy(t+z, nova, (j-z)*sizeof(oseba));
//  for(i=z; i<j; i++)
//    t[i] = nova[i-z];
  
  free(nova);
}

void msort(oseba *t, int z, int k) {
  if (k - z > 0) {
    int s = (z+k)/2;
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
