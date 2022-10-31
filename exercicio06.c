#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num1, num2, num3, codigo,  quantidade, total;
	
	printf (" o valor da peca 1  : ");
	
    scanf("%d",&num1);
    
	printf("\n");
	
    printf (" o valor da peca 2 : ");
	
	scanf("%d",&num2);
	
	printf("\n");
	
	printf (" o valor da peca 3 : ");
	
	scanf("%d",&num3);
	
	printf("\n");
  
	printf (" quantidade de pecas = ");
	scanf("%d",&quantidade);
	
	
	total = (num1 + num2 + num3 ) * quantidade;
	
	printf ("O resultado da peca e: %d \n",total);
	system("pause");
	 
    return 0;
}
