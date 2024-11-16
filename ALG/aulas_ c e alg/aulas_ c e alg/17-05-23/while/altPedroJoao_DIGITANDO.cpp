#include <stdio.h>
#include <conio.h>

int main()
{
	float altJoao, altPedro;
	int anos = 0;	

	printf("\n Digite a altura do Joao: ");
	scanf("%f", &altJoao);
	printf("\n Digite a altura do Pedro: ");
	scanf("%f", &altPedro);
	
	while(altPedro <= altJoao)
	{
		altJoao = altJoao + 0.03;
		altPedro = altPedro + 0.05;
		anos++;
	}

	printf("vai precisa de uns ano ai na quantidade a seguir pro Jao ser maior que Predo: %d", anos);

	
		printf("\n   _________ \n  /        /\\ \n /________/ \\\\ \n |     |  _ | \n |     | || | \n");
	 
	    
	getch();
	return 0;	
	
}