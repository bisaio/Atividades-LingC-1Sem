#include <stdio.h>
#include <conio.h>

int main()
{
	
	int cont, limitador;
	float somatoria = 0.0;
	
	
	printf("\n Digite o numero limite de frações do seu Somatorio: ");
	scanf("%d", &limitador);
	
	
	for(cont=1; cont<=limitador; cont++)
	{
		 	somatoria = somatoria + (1.0/cont);
	
			//printf("1/%d +", cont); 
			 
	}
	
	printf("\n valor da somatoria: %.4f", somatoria);
	
	getch();
	return 0;
	
}