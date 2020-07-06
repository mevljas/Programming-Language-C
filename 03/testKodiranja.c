//ce želimo uporabit spremeljiko ki je bila deklariana v drugi datoteki, jo moramo tudi tle dekalrita

extern char kljuc[];   //extern pomeni, da ni lokalan sprmenljivka, temvec je nkje drugje



main() {
	



	char niz[] = "TEST";

	strcpy(kljuc, "ABC");

	printf("%s\n", kljuc);


	printf("Originalen niz: %s\n", niz);	

	kodiraj(niz);

	printf("Kodiran niz: %s\n", niz);

	kodiraj(niz);

	printf("Odkodiran niz: %s\n", niz);

	//int y = 4;
	//pristej(y);
	//printf("%d\n", y);

}
//v dolcenih primeri se dolžina niza zgubi, zaradi null terminotrja.
