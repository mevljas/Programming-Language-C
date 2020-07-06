#include<stdio.h>

main() {

	int mesec = 4;
	int steviloDni;

	switch (mesec) {
		case 2:
			steviloDni=28;
		case 4:
		case 6:
		case 9:
		case 11:
			steviloDni=30;
		default:
			steviloDni=31;
	}
	printf("Mesec %d ima  %d dni\n", mesec, steviloDni);
}
