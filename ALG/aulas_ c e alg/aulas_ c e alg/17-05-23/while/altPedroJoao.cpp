#include <stdio.h>
#include <conio.h>

int main()
{
	float altJoao = 1.40, altPedro = 1.25;
	int anos = 0;	

	while(altPedro <= altJoao)
	{
		altJoao = altJoao + 0.03;
		altPedro = altPedro + 0.05;
		anos++;
		
	}

	printf("vai precisa de uns ano ai na quantidade a seguir pro Jao ser maior que Predo: %d", anos);

	
		printf("\n   _________ \n  /        /\\ \n /________/ \\\\ \n |     |  _ | \n |     | || | \n ");
	 
	    
	getch();
	return 0;	
	
}