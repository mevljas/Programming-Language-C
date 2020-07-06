//uporabnik ustvari id - številka ki predstavlja specificen racunalnik ( serijska) -enolicna številka, ki predstavlja racunalnik
//jo pošlje avotorju programa
//registracija porgrama ima 8 opcij ( razlicnih paketov) - to bo skrito v registracijski številki

//avtor generira registracijsko številko
//31 bit število - HEX
//zgornji bit bomo pustil na nuli
//ID (15 bit) Opcije programa  (8bit) CHEKSUM- stevilo prizganih bitov ( 7bit)


//1. fukncija generirajReg( int ID, int op1, int op2...)

///2. checkReg(int ID, int reg) - preveri ce je je ID vpisan in ce se checksum ujema

//3. opcija(int reg, int o)  vrne 1 ali 1, glede an to ali je ta opcija prižgana ali ne



//regsitracijsko številko zašiftamo za 16 bitov
//random generiramo ID
//int ID = rand();
//ID = ID & 0x7FFF;
//dobimo stevilo ki je anvec 15 bitov


//int izbire = 0;
//vklop i-tega bita
// izbire = izbire || (1<<i)
//enico za i šiftaš
//izklop i-tega bita
//izbire = izbire & (( ~(1 << i))
//preklop i-tega bita: izbire = izbire ^( 1 <<i)

//ali je i-ti bit prižgan?
//if (izbire & (1 <<i))
//prvo zašiftamo za 16 bitov, drugo za 8 bitov in preštejemo, zadnje smao prištejemo

//kako dobimo ven prvi pdaotke ?
//i = reg & 0xFF

//drugi?
//prov azšiftaš za 16 bitov  in potem ednaš an enak nacin

//štejte prižganih bitov v x

//a)
//b = 0
/*


while ( x > 0){

	b+=x&1   //ce je najbolj pomeben bit prižgan

	x = x >> 1;
}

/b opcija




for(b = 0; x > 0; b++){

	x = x &(x-1);
//ugasne najbolj desni bit

a = 97	001100001
A = 65	001000001
razlika v  enem bitu
toLowerCase(){

	c = c || 32
}

toUpperCase(){

	c = c & ~32
}  

}




*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toBin(int n){
    int c, k;

    printf("\n");

    for (c = 31; c >= 0; c--){
        k = n >> c;

        if (k & 1)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}

int stPrizganihBitov(int x){
    int b = 0;
    while(x > 0){
        b += x & 1;
        x = x >> 1;
    }
    return b;
}

int generirajReg(int ID,  int izbire){
    int reg = ID << 8;

    reg = reg | izbire;


    reg = reg << 7;


    reg = reg | stPrizganihBitov(reg);
    return reg;
}

int checkReg(int ID, int reg){
    int checksum = reg & 0x7F;


    reg = reg >> 7;


    if(stPrizganihBitov(reg) != checksum){
        return 0;
    }
    reg = reg >> 8;
    if(reg != ID){
        return 0;
    }
    return 1;
}

int opcija(int reg, int izbira){
    reg = reg >> 7;


    int opcije = reg & 0xFF;


    if(opcije & (1 << izbira)){
        return 1;
    }
    return 0;
}

int main(int argc, char *args[]){
    srand(time(NULL));



    int ID = rand();

    int opcije = rand();

    ID = ID & 0x7FFF;


    opcije = opcije & 0x7F;

    int reg = generirajReg(ID,opcije);
    printf("Stevilkatevilka : %X\n",reg);   //pretovir v HEX

	if(checkReg(ID,reg)){
		printf("Stevilka je pravilna  \n");
	}
	else{
		printf("Stevilka ni pravilna  \n");
	}

	if(opcija(reg,4)){
		printf("Je prizgana  \n");
	}
	else{
		printf("Ni prizgana  \n");
	}

    return 0;
}
