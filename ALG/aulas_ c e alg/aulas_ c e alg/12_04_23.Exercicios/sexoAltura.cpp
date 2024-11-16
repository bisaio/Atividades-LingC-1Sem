#include <stdio.h>
#include <stdlib.h>

int main()
{
	
	float altura, pesoIdeal;
	char sexo;
	
	printf("\n Digite qual sua altura em metros: ");
	scanf("%f", &altura);
	printf("\n Digite qual seu sexo (utilize M ou F): ");
 	fflush(stdin); //Usar quando for ler caracteres e strings (limpa o buffer/memória de teclado)
	scanf("%c", &sexo);
	
	if(sexo == 'f' || sexo == 'F')
	{
		pesoIdeal = 62.1 * altura - 44.7;
	}
	else
	{
		pesoIdeal = 72.7 * altura - 58.0;
	}
	
	printf("\n Seu o pesso ideal = %.2f kg \n\n", pesoIdeal);
	
	return 0;
}