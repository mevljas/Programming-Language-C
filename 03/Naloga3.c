#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char deska[7][7];



void izpis(){
	
	

	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			printf(" %c ",deska[i][j]);
		}
		printf("\n");
		
	}
	
	
	
}





int preveri(int y, int x, int igralec){
	int vodoravno = -1;
	
	int navpicno = -1;
	char znak;

	if (igralec == 1){
		znak = 'X';
	}
	
	else 
		znak = 'O';


	int i = y;
	int j = x;
	//levo
	while ( j >= 0){
		if( deska[y][j] == znak){
			vodoravno ++;
		}
		j--;
	}
	//desno
	while ( j <= 7){
		if( deska[y][j] == znak){
			vodoravno ++;
		}
		j++;
	}
	//gor
	while ( i >= 0){
		if( deska[i][x] == znak){
			navpicno ++;
		}
		i--;
	}
	//desno
	while ( i <= 7){
		if( deska[i][x] == znak){
			navpicno ++;
		}
		i++;
	}

	if (navpicno >= 4 || vodoravno >= 4)
		return 1;
	else
		return 0;

}




int main (int argc, char * args[]) {

	
	
	//napolni
	for(int i = 0; i < 7; i++){
		for(int j = 0; j < 7; j++){
			deska[i][j] = '0';
		}
	}
	

	

	izpis();
	
	int igralec = 1;
	int x;
	int y;
	int napake = 0;
	printf("Na vrsti je igralec %d.\n", igralec);
	while(1){
		if (napake == 3){
			printf("Izgubili ste igro!\n");
			break;

		}
		
		
		printf("Vpisi x koordinato.\n");
		scanf("%d", &x);
		printf("Vpisi y koordinato.\n");
		scanf("%d", &y);
		
		if (deska[y][x] != '0') {
				printf("Mesto je ze zasedeno!\n");
				napake++;
				continue;
			}
			
		if (igralec == 1){
			deska[y][x] = 'X';

		}
		else{
			deska[y][x] = 'O';
		}
		izpis();
		
		
		if(preveri(y,x, igralec) == 1){
			printf("Zmagali ste!\n");
			break;
		}
		
		if (igralec == 1){
			igralec = 2;
		}
		else
			igralec = 1;
		
		printf("Na vrsti je igralec %d.\n", igralec);
		napake = 0;
		
		
	}

	

	
		
	
}
