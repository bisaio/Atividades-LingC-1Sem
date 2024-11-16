#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	
	int contador;
	
	for(contador=1; contador<=1500; contador = contador + 1)
	{
		   printf("\n %d ", contador);	
	}
	
//------------------------------------------------------------------------------	
	
	getch(); // lê um caracter, não mostra o caracter digitado e não precisa dar ENTER (é uma leitura rapida de caracter)
	
	//getche() - faz as mesmas coisas do getch() mas mostra o caracter, ainda não precisa de ENTER
	
	//getchar() - faz as mesmas coisas que o getche() mas precisa do ENTER
	
//------------------------------------------------------------------------------
		
	/*
	system ("pause") - pausa o processador = pior para o processamento
	getch() - não pausa o processador = melhor para o processamento
	*/	
		
		
	system("pause");
	return 0;
	
}

