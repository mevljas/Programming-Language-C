main(){
	
	char ime[] = "Miha";   //avtomatsko doda \0 na konec
	printf("%s\n", ime);
	//izpše MIha

	//char ime2[] = {'L', 'o', 'j', 'z', 'e'};
	//printf("%s\n", ime2);
	//izpiše LojzeMiha
	//to je zato, ker nima null terminatorja
	//char ime2[] = {'L', 'o', 'j', 'z', 'e','\0'}; tko je prov


	printf("Dolzina niza %s je %d\n", ime, strlen(ime)); //dolzina niza brez null terminatorja
	printf("niz: %s, sizeof(niz): %d, length(niz): %d\n", ime, sizeof(ime), strlen(ime));

	//2. moznost

	int dolzina = 0;
	for(; ime[dolzina] != '\0'; dolzina++);
	printf("Dolzina niza %s je %d\n", ime, dolzina);
	

	//eskoncna zanka
	//for(;;){}

	char ime3[100];
	strcpy(ime3, ime);
	printf("niz: %s, sizeof(niz): %d, length(niz): %d\n", ime3, sizeof(ime3), strlen(ime3));

	printf("%d\n", strcmp(ime, ime3)); //vrne 0, kar pomeni, da sta enaka. ni važno kolko mest mao rezerviranih, važno je, da so isti znaki do null termiantorja


	

}
