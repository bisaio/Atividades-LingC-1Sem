#include <stdio.h>
#include <conio.h>

int main()
{
	
	int contador;
	
	for(contador=1; contador<=100; contador = contador + 1)
	{
		   if(contador % 2 == 0)
		   {
				printf("%5d", contador);   
		   }	
	}
	
	getch();
	return 0;
	
}

//F4 PARA COMPILAR NA LINHA
//F7 PARA PASSAR PELOS COMANDOS
//F9 PARA EXECUTAR TUDO DE UMA VEZ