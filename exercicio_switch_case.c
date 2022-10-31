
#include <stdio.h>
#include <stdlib.h>

int main (void){
	
	int dias,opcao;
	
    opcao = 1;
    
    while(opcao==1){

	 printf("digite o dia da semana :");
	 
	 scanf("%d",&dias);
	   switch(dias){
       case 1:
       printf("dia da semana %d - DOMINGO \n", dias);
	   break;
	 
	   case 2:
	   printf("dia da semana %d - SEGUNDA-FEIRA \n", dias);
	   break;
	 
	   case 3:
	   printf("dia da semana %d - TERCA-FEIRA \n", dias);
	   break;	
	   
	   case 4:
	   printf("dia da semana %d - QUARTA-FEIRA \n", dias);
	   break;
	 
	   case 5:
	   printf("dia da semana %d - QUINTA-FEIRA \n", dias);
	   break;
	 
	  case 6:
	  printf("dia da semana %d - SEXTA-FEIRA \n", dias);
	  break;
	 
	  case 7:
	  printf("dia da semana %d - SABADO-FEIRA \n", dias);
	  break;
	  
	  default:
	 	
	  printf("nao e dia de semana ! \n");
	  break;	
	}
	
	printf("\n");
		
printf("tecle 1 para continuar ou qualquer numero para sair :");

scanf("%d",&opcao);

if(opcao ==1)
	system("cls");
}
	system ("pause");
	 
	return 0;
}
