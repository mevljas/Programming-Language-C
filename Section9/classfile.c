#include <stdio.h>
#include <stdlib.h>

typedef struct classheader {
  unsigned int magic;
  unsigned short int minor;
	unsigned short int major;
  unsigned short int cp_count;
} ch;

unsigned short int swap16(unsigned short int x) {
  return (x >> 8) | (x << 8);
}

unsigned int swap32(unsigned int x) {
  return  swap16(x & 0xFFFF)<<16 | swap16(x >> 16);
}


int main(void) {

	FILE * file = fopen("D:\\C201920\\Test.class", "rb");

	// koliko je ta datoteka dolga
	fseek(file, 0, SEEK_END);  // skok na konec datoteke
	long dolzina = ftell(file);
	fseek(file, 0, SEEK_SET);

  printf("Dolzina: %d\n", dolzina);

	ch header;
	fread(&header, sizeof(ch), 1, file);
	printf("Magic: %X\n", swap32(header.magic));
	printf("Java: %d.%d\n", swap16(header.major), swap16(header.minor));
  printf("CP_count: %d\n", swap16(header.cp_count));


	//
//	int x = 0x01020304;/
//	unsigned char *p = (unsigned char *) &x;
//	for(int i=0; i<4; i++)
//		printf("%x ", *p++);
//	printf("\n");


}
