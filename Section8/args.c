#include <stdio.h>



// izpis vseh argumentov s sprehodom po 
// pomnilniku (zaènemo na naslovu, ki je 
// vpisan v prvem elementu tabele args)

main(int argc, char **args) {





	char *s = (char *) args[0];

	for(int i = 0; i < 100; i++){
	
		printf("%c", *s < 32 ?  '?' : *s); s++;
	
	}


}
