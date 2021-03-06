#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)


typedef struct H {

	unsigned char a;
	unsigned char b;
	unsigned int size;
	unsigned int undefined;
	unsigned int offset;


}	header;





int main(int argc, char *args[]){

	if(argc != 3){
	
		printf("Napaka: Napacno stevilo argumentov\n");
		return -1;
	
	}



	header h;
	FILE *f_in;
	FILE *f_out;

	f_in  = fopen(args[1], "rb");
 	f_out = fopen(args[2], "wb");  


	if( f_in != NULL){
	
		
	


		fread(&h.a, sizeof( unsigned char), 1, f_in);
		fwrite(&h.a, sizeof(unsigned  char), 1, f_out);

		fread(&h.b, sizeof(unsigned  char), 1, f_in);
		fwrite(&h.b, sizeof(unsigned  char), 1, f_out);

		fread(&h.size, sizeof(unsigned  int), 1, f_in);
		fwrite(&h.size, sizeof(unsigned  int), 1, f_out);

		fread(&h.undefined, sizeof(unsigned  int), 1, f_in);
		fwrite(&h.undefined, sizeof(unsigned  int), 1, f_out);

		fread(&h.offset, sizeof(unsigned  int), 1, f_in);
		fwrite(&h.offset, sizeof(unsigned  int), 1, f_out);


		

		
		unsigned char read;
		
		//DIB header
		while((unsigned int) ftell(f_in) < h.offset){
			fread(&read , sizeof(unsigned  char), 1, f_in);
			fwrite(&read, sizeof(unsigned  char), 1, f_out);
		}
		
		
		unsigned char buffer[2048];
		unsigned char R;
		unsigned char G;
		unsigned char B;
		unsigned char S;

		int prebrano;
		
		do  {

			prebrano = fread(buffer , sizeof(unsigned  char), 2048, f_in);


			
			

				for(int i = 0; i < 2048; i++){
				
					R = buffer[i];
					//printf("%d ", R);
					G = buffer[++i];
					//printf("%d ", G);
					B = buffer[++i];
					//printf("%d\n", B);
					S = ( R + G + B) / 3;
					buffer[i - 2] = S;
					buffer[i - 1] = S;
					buffer[i] = S;
					

					//printf("%d + %d + %d = %d\n",R,G,B,S);
					
				}
				

				fwrite(buffer, sizeof(unsigned  char), 2048, f_out);	

		    	



		} while (prebrano > 0);

		printf("Datoteka %s uspesno spremenjena in kopirana v datoteko %s.\n",args[1], args[2]);
	
	}
	else 
		printf("Napaka pri odpiranju  datoteke. \n"); 

	
	
	

	fclose(f_in);
	fclose(f_out);

   
   
   return(0);
	
	
}  
