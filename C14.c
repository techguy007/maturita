#include <stdio.h>

int main(){
	printf("zadejte radu cisel: ");
	
	int vstup;
	int soucet = 0;
	do{
		scanf("%i",&vstup);
		soucet += vstup;
	}while(vstup != 0);
	
	printf("soucet je %d",soucet);
	
	return 0;
}

