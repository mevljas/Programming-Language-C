#include <stdio.h>

int main(void) {

	int a[10] = {1,2,3,4,5,6,7,8,9,0};

	printf("%p, %p, %p\n", a, &a[0], &a[1]); //izpiše naslova - je isti naslov! in a[1] je 4 bajte naprej


	int *p;

	printf("%d\n", a[0]);

	p = a; // oz &a[0]
	*p = 15; //spremenim prvi element tabele
	printf("%d\n", a[0]); //se spremeni

	printf("%d\n", a[5]); 
	p[5] = 20;
	printf("%d\n", a[5]); 

	p = &a[1];
	printf("%d\n", a[6]); 
	p[5] = 40; //actually spreminjamo 6. elekemnt, ker je zamaknjeno zaradi &a[1] je isto kot a[6] = 40;
	printf("%d\n", a[6]); 

	return 0;
}
