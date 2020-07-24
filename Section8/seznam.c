#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// najvecje stevilo ocen enega studenta
#define MAX_OCEN 100
// najvecja dovoljena dolzina imena
#define MAX_IME  100


// podatki o studentu
typedef struct student {
  // podatkovni del
  char *ime;
  int ID;
  int *ocene;
  int stOcen;

  // povezovalni del
  struct student *next;
} student;


// Funkcija ustvari novo "skatlo", ki hrani vse 
// podatke o študentu. Za ime in ocene rezervira 
// prostor (malloc) in vse vrednosti inicializira
student * nov_student(char *ime, int id) {
  student *nov = malloc(sizeof(student)); 
  nov -> ime = malloc((strlen(ime)+1) * sizeof(char));
  strcpy(nov->ime, ime);
  
  nov->ID = id;
  nov->ocene = malloc(MAX_OCEN*sizeof(int));
  nov->stOcen = 0;
  
  nov->next = NULL;
  
  return nov;
}

// funkcija sprosti ves prostor, ki je bil 
// rezerviran za tega studenta
void brisi_studenta(student *s) {
  free(s->ime);
  free(s->ocene);
  free(s);
}

// izpis enega studenta
void izpisi(student *s) {
  printf("Ime: %s, ID: %d, Stevilo ocen: %d\n", s->ime, s->ID, s->stOcen);
}

// dodajanje studenta na zacetek seznama; 
// funkcija vrne kazalec na nov zacetek seznama
student * dodajZ(student *z, student *nov) {
  nov -> next = z;
  return nov;
}

// dodajanje studenta na konec seznama; 
// funkcija vrne kazalec na nov zacetek seznama
student * dodajK(student *z, student *nov) {
  if (z == NULL)
    return nov;

  student *t = z;
  while (t -> next != NULL)
    t = t -> next;
  t -> next = nov;

  return z;
}



// dodajanje studenta v urejen seznam na pravo mesto; 
// funkcija vrne kazalec na nov zacetek seznama
student * dodajU(student *z, student *nov) {
  // ce je seznam prazen ali ce vstavljam pred prvi element
  if (z == NULL || nov->ID < z->ID) {
    nov -> next = z;
    return nov;
  }
  
  student *t = z;
  while (t->next != NULL && t->next->ID < nov->ID)
    t = t->next;
  
  nov -> next = t -> next;
  t-> next = nov;
  
  
  return z;
}


// odstrani prvi element s seznama in vrne 
// kazalec na nov zacetek seznama
student * delete_first(student *z) {
  if (z!=NULL)
    z = z-> next;
  return z;
}


// izpis celotnega seznama
void izpisi_seznam(student *z) {
  while (z != NULL) {
    izpisi(z);
    z = z->next;
  } 
}



// funkcija iz seznama odstrani element e 
// z e.ID=id  in vrne kazalec na nov zacetek
student * brisi(student *z, int id){
  // ce je seznam prazen, brisanje ni smiselno
  if (z==NULL) return z;
  
  // brisemo prvi element
  if (z->ID == id) {
    student *n = z->next;
    brisi_studenta(z);
    return n;
  }

  // brisemo element nekje na sredini seznama
  student *t =z;
  // sprehodimo se po seznamu, ustavimo se na 
  // elementu, katerega naslednik ima ID=id,
  // oziroma na koncu seznama
  while (t->next != NULL && t->next->ID != id)
    t=t->next;
    
  // ce smo seu ustavili pred koncem seznama
  // (torej smo iskani element nasli) ...
  if (t->next != NULL) {
    // ... prevezemo kazalce ...
    student *b = t->next;
    t->next = t->next->next;
    // .. . in zbrisemo odvecni element
    brisi_studenta(b);
  }
  
  return z;
}

int main() {
  student *s1, *s2, *s3, *s4;
  s1 = nov_student("Lojze",  63190871);
  s2 = nov_student("Micka",  63190162);
  s3 = nov_student("Toncka", 63180232);
  s4 = nov_student("Pepca",  63980232);
  
  student *z = NULL;
//  z = dodajZ(z, s1);
//  z = dodajZ(z, s2);
//  z = dodajZ(z, s3);
//  z = dodajZ(z, s4);
  
//  izpisi_seznam(z);
  
//  z = delete_first(z);
//  z = delete_first(z);
//  z = delete_first(z);
//  z = delete_first(z);
//  z = delete_first(z);
//  printf("\n");
//  izpisi_seznam(z);
  
  
  z = dodajU(z, s1);
  z = dodajU(z, s2);
  z = dodajU(z, s3);
  z = dodajU(z, s4);
  izpisi_seznam(z);
  printf("\n");
  z = brisi(z, 63190162);
  izpisi_seznam(z);
  printf("\n");
    z = brisi(z, 63190163);
  izpisi_seznam(z);
  printf("\n");
}
