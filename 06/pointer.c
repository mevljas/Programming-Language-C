#include <stdio.h>

int main(void) {

	int x = 13;
	int *p;
	//p = (int *)0x19FF34;  //int * pomeni, da mislimo kot naslov - kazalec. Lahko preverimo v debggerju, na akteri naslovu ej sprmernljivka
	//katerkoli spremernljivko lahko castamo v naslov(pinter) 
	//	*(int *) naslov = 15;
	//gleda na podatkovni tip pointerja, prevjalnik drugace zapi�e podatke v pomnilnik ( stevilo mest - nicel npr. 0001 ali 00000000001 - ni tocno)
	p = &x;   //v p shrani naslov od x
	*p=42;	//zapi�i 42 tja, kamor kaze p ( isto kot x=42)
	printf("%d\n", x);

	printf("Velikost pointerja: %d\n", sizeof(p)); //4B, mogoce zato ker imao virtulani pomnlnik?

	return 0;
}
