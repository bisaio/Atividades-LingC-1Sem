#include <stdio.h>
#include <conio.h>

int main()
{
	
	int contador;
	
	for(contador=2; contador<=100; contador = contador + 2)
	{
		   printf("%5d", contador);	
	}
	
	
	getch();
	return 0;
	
}