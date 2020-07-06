#include <stdlib.h>
#include <stdio.h>

int main(void) {
	FILE *f_in;
	FILE *f_out;

	f_in  = fopen("D:\\C201920\\out1.jpg", "rb");
  f_out = fopen("D:\\C201920\\out3.jpg", "wb");  

	// prepis byte-po-bytu primeren samo za majhne datoteke
//	while (!feof(f_in)) {
//    int c = fgetc(f_in);
//		if (c >= 0) 
//			  fputc(c, f_out);
//	}

	int buffer[2048];
	int prebrano;
	do  {
    prebrano = fread(buffer, sizeof(int), 2048, f_in);
		fwrite(buffer, sizeof(int), prebrano, f_out);
	} while (prebrano > 0);

	fclose(f_in);
	fclose(f_out);
}
