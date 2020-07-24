#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main( int argc, char * args[]){
    int n = 1000;
    int vKrogu = 0;
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        float x = rand() / (float) RAND_MAX;
        float y = rand() / (float) RAND_MAX;
        if (x * x + y * y <= 1) {
            vKrogu++;
        }
    }

    printf("pi = %.2f", 4.0 * vKrogu/n);

    return 0;
}
