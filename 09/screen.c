#include <stdio.h>
#include <stdlib.h>

#define H 25
#define W 79

int main(void) {
  char **zaslon;

	char znaki[] = {'!','%','&','#'};

	zaslon = (char **) malloc(H*sizeof(char *));
  char * neprekinjen_blok = (char *) malloc(W*H*sizeof(char));
	for(int i=0; i<H; i++)
	//	zaslon[i] = (char *) malloc(W*sizeof(char));
		zaslon[i] = neprekinjen_blok + i*W*sizeof(char);

  for(int i=0; i<H; i++)
		for(int j=0; j<W; j++)
			zaslon[i][j] = znaki[rand() % 4];

  for(int i=0; i<H; i++) {
		for(int j=0; j<W; j++)
		  printf("%c", zaslon[i][j]);
		printf("\n");
	}

	for(int i=0; i<H; i++)
		free(zaslon[i]);
	free(zaslon);

  return 0;
}
