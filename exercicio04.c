#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num2, num3, multiplicacao;
	
	printf ("Digite o primeiro numero : \n");
	
    scanf("%d",&num2);
	
	printf ("Digite o segundo numero : \n");
	
	scanf("%d",&num3);
	
	multiplicacao = num2 * num3;
	
	printf ("O resultado da multiplicacaoe: %d \n",multiplicacao);
	
	system("pause");
	 
    return 0;
}
