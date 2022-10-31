#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	float minima, maxima, total;
	
	printf (" forneca a quantidade  minima   :");
	
    scanf("%f",&minima);
    
	printf("\n");
	
    printf (" forneca a quantidade  maxima :");
	
	scanf("%f",&maxima);
	
	printf("\n");
	
	total = (minima + maxima) /2 ;
	
	printf ("o valor total medio e %.2f:",total);
	
	system("pause");
	 
    return 0;
}
