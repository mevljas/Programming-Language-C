

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toBin(int n){
    int c, k;

    printf("\n");

    for (c = 7; c >= 0; c--){
        k = n >> c;

        if (k & 1)
            printf("1");
        else
            printf("0");
    }

}

int stPrizganihBitov(int x){
    int b = 0;
    while(x > 0){
        b += x & 1;
        x = x >> 1;
    }
    return b;
}


int main(int argc, char *args[]){

	int i = atoi(args[1]);
	int vsota = 0;
	int n = 0;


	for(int x = 0; x < 256; x++){
	
		if( stPrizganihBitov(x) == 1){
			vsota = vsota + x;
			n++;
			toBin(x);
			printf(" = %d\n",x);			

		}
	
	}    
	printf("i= %d, n= %d, vsota=%d\n",i,n,vsota);


    return 0;
}
