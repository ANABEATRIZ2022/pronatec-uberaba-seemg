#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num2, num3, subtracao;
	
	printf ("Digite o primeiro numero : \n");
	
    scanf("%d",&num2);
	
	printf ("Digite o segundo numero : \n");
	
	scanf("%d",&num3);
	
	subtracao = num2 - num3;
	
	printf ("O resultado da subtracao e: %d \n",subtracao);
	
	system("pause");
	 
    return 0;
}
