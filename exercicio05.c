#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int num2, num3, divisao;
	
	
	printf ("Digite o primeiro numero : \n");
	
    scanf("%d",&num2);
	
	printf ("Digite o segundo numero : \n");
	
	scanf("%d",&num3);
	
	divisao = num2 / num3;
	
	printf ("O resultado da divisao e: %d \n",divisao);
	
	system("pause");
	 
    return 0;
}
