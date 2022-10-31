#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
     
	 
	 int main (void){
   
     setlocale(LC_ALL, "Portuguese");
     int  somar, somar1, somar2, subtrair, subtrair1, subtrair2, multiplicar, multiplicar1, multiplicar2,  sair0,  escolha;
     char opcao='s';
	  float dividir, dividir1, dividir2, d;
	  
     while(opcao=='s'){
	 
	  	printf(" .......... menu .......... \n");
      	printf("(1) SOMAR \n ");
      	printf("(2) SUBTRAIR \n ");
      	printf("(3) MULTIPLICAR \n");
     	printf("(4) DIVIDIR \n ");
     	printf("(0) PARA SAIR \n ");
     	printf("sua opcão e: \n ");
     	
    	 scanf("%d",&escolha);
    	 
	     switch(escolha){
		
	     case 1:
		 printf("\n somar  \n\n");
		 printf("digite primeiro número : ");
		 scanf("%d",&somar1);
		 printf("\n\n");
		 printf("digite segundo número : ");
		 scanf("%d",&somar2);
		 somar = somar1 + somar2;
		 printf("\n\n");
	     printf("o resultado da somar e: %d \n ",somar);
	     break;
	
         case 2:
	 
          printf("\n subtrair \n\n");
	      printf("digite primeiro número : \n");
	      scanf("%d",&subtrair1);
     	 printf("digite segundo número : \n");
	     scanf("%d",&subtrair2);
	     subtrair = subtrair1 - subtrair2;
	     printf("o resultado da subtrair e: %d \n",subtrair);
				
  	      break;
	
	     case 3:
		 printf("\n multiplicar  \n\n");
		 printf("digite primeiro número : \n");
		 scanf("%d",&multiplicar1);
		 printf("\n multiplicar\n\n");
		 printf("digite segundo número : \n");
		 scanf("%d",&multiplicar2);
		 multiplicar = multiplicar1 * multiplicar2;
	     printf("o resultado da multiplicar e: %d \n ",multiplicar);
	     break;
	
	     case 4:
		 printf("\n dividir  \n\n");
		 printf("  digite primeiro número : \n");
		 scanf("%f",&dividir1);
		 printf("\n dividir \n\n");
		 printf("  digite segundo número : \n");
		 scanf("%f",&dividir2);
		 while(dividir2<=0){		 	
		 	printf("  O denominador não pode ser menor ou igual a 0 . Redigite : \n"); 
			scanf("%f",&dividir2); 	
		 	
		}
		 dividir = dividir1 / dividir2;
	     printf("   o resultado da dividir e: %f \n ",dividir);
	      break;
	
	     case 0:
		 exit(0);
	     break;
	
	     default:
	     	
	     printf("  deu erro digite 0 ate 4 \n");
		
	     break;
	    
		 printf("\n");
	 		
	     }
    
    	printf("\n deseja continuar ? s/n :");
    	scanf (" %c",&opcao);
    	if(opcao =='s')
		system("cls");
	 }	
	
    
     system ("pause");
	 
	 return 0;
  	
  }
