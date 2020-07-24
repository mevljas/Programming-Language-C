#include <stdio.h>

void bla(int a) {

	a = 10;

}

void nastavi_vrednost(int *x) {//dobimo kazalec na spremenljivko

	*x = 10;

}

int main(void){
	int a=5;
	bla(a);	//a je ševedno 5 - ni refernce na spremenljivko a, dobila je vrednost, ne pa refrence
	nastavi_vrednost(&a);	//damo naslov kot parameter
	printf("%d\n", a);	//izpiše 10, ce klicemo nastavi_vrednost

	return 0;

}
