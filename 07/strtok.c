#include <stdio.h>
#include <string.h>

// uporaba strtok za razbijanje nizov na podnize z danim locilom

// tezava: strtok preskoci vec zaporednih locil; ce zelimo natancno 
// vedeti, na katerem mestu je bil posamezen podniz, se moramo po
// klicu strtok "sprehoditi" po nizu nazaj in presteti locila levo
// od rezultata.

int main(void) {
	char str[] = "::abc:::def:ghi";
	char delims[] = ":";  // split opravi po teh locilih

	char *result;
	result = strtok(str, delims);

	int i = -1;
	while (result != NULL) {

		char *back = result;
		int cnt=0; // koliko locil je bilo izpuscenih

		// sprehod v levo, dokler ne najdem ne-locila
		// ali ne pridem do zacetka niza
		do {
      back--;
			if (back < str) break; // koncam, ce pridem pred zacetek
			cnt++;
		} while (*back == delims[0]);
		i = i+cnt;

    printf("%d - %s\n", i+1, result);
		result = strtok(NULL, delims);
	}
}
© 2019 GitHub, Inc
