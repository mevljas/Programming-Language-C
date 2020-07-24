#include <stdio.h>
#include <string.h>

#define forever 1

// primer delovanja funkcije  strstr

int main(void) {  
  char dolgNiz[] = "To je abeceda in abrakadabra.";

	// kazalec, s katerim bomo poiskali vse pojavitve
	// podniza "ab" v nizu; najprej bomo pokazali na 
	// zacetek niza ...
	char *result = dolgNiz;
	
  do {
    // ... nato s pomocjo "strstr" skocimo na naslednjo 
    // iskanega podniza "ab"
    result = strstr(result, "ab");
    if (result != NULL) {
      printf("%s\n", result);
		  result++; // pred naslednjim ioskanjem moram 
			          // result povecati za ena, sicer bi 
			          // obstal na mestu (naslednje iskanje 
			          // bi naslo isto pojavitev)
   } else 
			break;
	}	while (forever);
}
