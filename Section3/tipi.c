#include <limits.h>

main() {

	printf("Velikost tipa int (v bajtih): %d\n", sizeof(int));
	printf("Najvecji int: %d\n", INT_MAX);



	printf("Velikost tipa long (v bajtih): %d\n", sizeof(long));
	printf("Najvecji long: %d\n", LONG_MAX);

	printf("Velikost tipa long long (v bajtih): %d\n", sizeof(long long));
	printf("Najvecji long long: %lld\n", LLONG_MAX);

	int x = INT_MAX;
	unsigned int y = UINT_MAX;


	printf("Velikost tipa unsigned int (v bajtih): %d\n", sizeof(unsigned int));
	printf("Najvecji unsigned in: %u\n", y);



	int a1 = 255;
	int a2 = 0xFF;  //te dve sprmenljivki imata enako vrednost


	//ali pa 32, 0x20 in ' '
	//presled ima ascii kodo 32
}


