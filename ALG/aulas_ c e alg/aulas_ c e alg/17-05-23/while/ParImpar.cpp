#include <stdio.h>
#include <conio.h>

int main()
{
	int contador = 1, num;
	
	while(contador <= 10)
	{
	 	printf("\n bota um numero: ");
		scanf("%d", &num);
		
		if(num % 2 != 0)
		{
			printf("\n---------------------");
			printf("\n e impar: %d ", num);	   	
			printf("\n---------------------\n");
		}
		else
		{
			printf("\n---------------------");
			printf("\n e par: %d ", num);
			printf("\n---------------------\n");
		}
	
		contador++;
		
	}
	
	getch();
	return 0;
}