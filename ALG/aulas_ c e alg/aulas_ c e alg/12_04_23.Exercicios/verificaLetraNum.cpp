#include <stdio.h>
#include <stdlib.h>

int main()
{
	char caracter;
	
	printf("\n Digite APENAS UMA LETRA ou NUMERO: ");
	fflush(stdin);
	scanf("%c", &caracter);
	
	if((caracter >='A' && caracter <='Z') || (caracter >='a' && caracter <='z'))
	{
		printf("\n Voce digitou uma letra \n\n");
	}
	else
	{
		printf("\n Voce digitou um numero \n\n");
	}
	
	
	return 0;
}