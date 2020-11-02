#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main ()
{
    int opcao;
    int saque, cont100 , cont50 , cont20 , cont10, cont5 , cont2 , dif;
    
   printf("\tBEM VINDO\n");
	 do
	 {
	 dif=0;
	 printf("Gostaria de realizar um saque? Sim (1) Nao(2)\n");
	 scanf(" %d", &opcao);
	 switch (opcao)
       {
       case 1:
			       	 
    	{
    
       printf("Informe o valor de saque:R$");
       scanf(" %d", &saque);
       fflush(stdin); 
   
       
       	if (saque < 10 || saque > 850)
       	{
		
       	printf("Valor informado fora dos limites.\n");
       	
   		}
		else{
		
    	if ((saque % 10) == 1 || (saque % 10) == 6)
					{
							
 				dif = 3;	
				saque = saque - 6;
						
					}
					
		if ((saque % 10 ) == 3 || (saque % 10 ) == 8)
			{
					
				dif = 4;	
				saque = saque - 8;
								 
			}
    
    		
	    	for(cont100 = 0 ; saque>= 100 ; cont100++)
			{    
	    		
				saque = saque-100;    
	           
			}
			
			for(cont50 = 0 ; saque>= 50 ; cont50++)
			{	
	
				saque = saque-50;
								
			}
	
			for(cont20 = 0 ; saque>= 20 ; cont20++)
			{
			
				saque = saque-20;
				
			}
											
			for(cont10 = 0 ; saque>= 10 ; cont10++)
			{
			
				saque = saque-10;
					
			}					
						
			for(cont5 = 0 ; saque>= 5 ; cont5++)
			{
			
				saque = saque-5;
						
			}
						
			for(cont2 = 0 ; saque>= 2 ; cont2++)
			{
							
				saque = saque-2;
																 	
		}
					printf("\nQuantidade de cedulas para compor o valor de saque \n");
					
					if (cont2+dif > 0)
					printf("\nNotas de 2   =  %d\n ", cont2+dif);
					if (cont5 > 0)
					printf("\nNotas de 5   =  %d\n ", cont5);
					if (cont10 > 0)
					printf("\nNotas de 10  =  %d\n ", cont10);
					if (cont20 > 0)
					printf("\nNotas de 20  =  %d\n ", cont20);
					if (cont50 > 0)
					printf("\nNotas de 50  =  %d\n ", cont50);
					if (cont100 > 0)
					printf("\nNotas de 100 =  %d\n\n", cont100);
					
					printf("\nSoma do valor decomposto por cedula\n\n");
					
					if (cont2+dif > 0)
					printf("   %d reais em notas de 2\n", (cont2+dif)*2);
					if (cont5 > 0)
					printf("   %d reais em notas de 5\n", cont5*5);
					if (cont10 > 0)
					printf("  %d reais em notas de 10\n", cont10*10);
					if (cont20 > 0)
					printf("  %d reais em notas de 20\n", cont20*20);
					if (cont50 > 0)
					printf("  %d reais em notas de 50\n", cont50*50);
					if (cont100 > 0)
					printf(" %d reais em notas de 100\n", cont100*100);
					printf("_________________________\n");
					printf(" %d reais sacados \n\n", (cont2+dif)*2+(cont5*5)+(cont10*10)+(cont20*20)+(cont50*50)+(cont100*100));
									
			}
	; break;			
    	case 2 : printf("Muito obrigado!\n"); ; break;
    	default : printf("Opcao INVALIDA!!\n");
       			}		
   			}
	} while (opcao != 2);	
		
		getch();
    	return 0;
}
    		
