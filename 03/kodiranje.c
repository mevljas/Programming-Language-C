#include <string.h>

char kljuc[] = "DanesJeLepDan";

void kodiraj(char besedilo[]) { //spreminja eno in isto tabelo, kot v funciji main ( isto kot v Javi)
	for(unsigned int i = 0; i < strlen(besedilo); i++){ //mora bit unsigned, cne vrze error
		besedilo[i] = besedilo[i] ^ kljuc[i % strlen(kljuc)];
	}
}

void pristej(int x) {  //dobi lokalno spremenljivkom, ne vpliva na spremenljivko v funkciji main!!! so dve loceni spominski lokaciji

	x = x + 5;
}

//pri tabelah pa vedno nese referenco, ker so tabele velike
