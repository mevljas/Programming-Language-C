#include <stdlib.h>
#include <stdio.h>

// Program demonstrira napacno uporabo prekratkih spremenljivk
// za nize; èe v tem programu uporabnik vpise ime, ki je daljse 
// od stirih znakov (za niz ime smo rezervirali le 5 znakov),
// potem pride do napake - izgubi se vrednost v spremenljivki
// starost (ker jo prepisejo znaki iz tabele "ime").

int main (int argc, char * args[]) {

	char ime[10];	//tole je spremenljvka za niz do 10 znakov. Tip String v C ne obstaja, bere do presledka! Prebere eno besedo
	//ce prekoracimo dolžino, se program sesuje

	int starost;

	printf("Vpisi ime: ");
	  // pri scanf pred spremenljivko pisemo znak &
	scanf("%s", ime);

	printf("Pozdravljen, %s\n", ime);

	

	printf("Vpisi starost: ");
	//pri scanf pred spremenljivko pisemo znak &, KAZALCI! V funkcijo nesemo spremenljivko, tega se v Javi ne da!
	//pred spremeljivkami tipa "String", & ni treba pisat. Pred flaot in character mora bti &

	scanf("%d", &starost);

	printf("Pozdravljen, %s, star si %d let\n", ime, starost);
}
