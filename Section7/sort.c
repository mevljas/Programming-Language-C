// primerjamo dve stevili in vrnemo 0, ce sta enaki, 
// <0, ce je prvo manjše in >0, ce je prvo vecje
//
// Dogovor: Soda števila so vecja od lihi!
int primerjalnik(const void *a, const void *b){


	int x1 = *(int *)a;
	int x2 = *(int *)b;


	int o1 = x1 % 2;
	int o2 = x2 % 2;

	if (o1 != o2)
		return o1 - o2;
	else
		return x1 - x2;



}


int main(void) {


	int tab[] = {2,5,3,8,6,3,9,1,9,4,12,8,16};

	for( int i = 0; i < 13; i++){
	
		printf("%d ",tab[i]);
	}
	printf("\n");

	// pri klicu funkcije qsort poleg tabele in števila 
	// elementov podamo tudi velikost posameznega elementa 
	// in funkcijo, s katero se elementi primerjajo
	qsort(tab, 13, sizeof(int), primerjalnik);
	for( int i = 0; i < 13; i++){
	
		printf("%d ",tab[i]);
	}
	printf("\n");

}
