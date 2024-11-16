#include <stdio.h>
#include <conio.h>

int main()
{
	
	int contador, num;
	
	for(contador=1; contador<=10; contador++)
	{
		printf("\n Digita um numero painho: ");
		scanf("%d", &num);
		
		   if(num % 2 != 0)
		   {
		   	
		   		printf("\n -------------------- \n");
				printf("\n E impar essa bosta de numero aqui: %d \n", num);   
		   		printf("\n -------------------- \n");
		    
		   }
		   else
		   {
			 
				printf("\n -------------------- \n");
				printf("\n E par caralho burro desgracera de coiso: %d \n", num);
				printf("\n -------------------- \n");
		   	
		   }	
	}
	
	getch();
	return 0;
	
}


/*

 var++ É INCREMENTO
 var-- É DECREMENTO
 
-------------------------------------------------------------------------------- 
 
 pré-fixada:
 ++var --> var = var + 1
 --var --> var = var - 1

 1º: ATUALIZA O VALOR DA VARIAVEL
 	 	 var = var + 1
 2°: USA O VALOR ATUALIZADO DA VARIAVEL
 
--------------------------------------------------------------------------------
 
  pós-fixada
  
  var++ --> var = var + 1
  var-- --> var = var - 1
 
  1º: UTILIZA O VALOR ATUAL DA VARIAVEL	 	 
  2°: ATUALIZA O VALOR DA VARIAVEL
  	  	  var = var + 1
  
*/