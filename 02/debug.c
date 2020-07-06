main() {
	//rezervacija prostora za 10 intov
	int t1[10]; 
	printf("%d\n", t1[0]);

	// rezervacija prostora + inicializacija
	int t2[3] = {5,3,8};
	printf("%d\n", t2[0]);


	int t3[] = {4,3,9,2,4,3,0,2,4,7,1,9};
	printf("%d\n", t3[0]);

	//int t4[];    //to ne dela, ker ne ve kam dat



	// inicializacija tabele z niclami
	int t4[10] = {0};	//same nule
	printf("%d\n", t4[0]);

	//	int t4[10] = {1};	//same nule//   to ne dela, na prvo emsto da 1, na vse ostalo da 0


	//combiler assembler in linker, treba enablat debuger in pri linker damo zadnjo opci9jo

	//za vsakim ukazom damo izpis, ker cne niti ne prevede, ker ne nikoli rambo - optimzacija

	//go/debug in show dissamebly

	//sklopimo optimzacijo, ker cne ne naredi vseh table??? compiler- optimizations
	//podatko o pomnilniku dobi na skladu
	//pod tab memory lahko vidmo kaj naloži v pomnilnik
	//local so spremenljivke
}
