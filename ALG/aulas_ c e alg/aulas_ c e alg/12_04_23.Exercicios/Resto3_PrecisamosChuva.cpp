// Inclus�o de bibliotecas:
#include <stdio.h>
#include <stdlib.h>

//Programa principal:
int main()
{
	
	//declara��o das variaveis
	int num, resto;
	
	//comunica��o com o us�rio e entrada de dados
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	//calculo do resto da divis�o do n�mero lido por 3	
	resto = num % 3; //% � mod
	
	//verificar se o n�mero lido � multiplo de 3
	if(resto == 0)
	{
		printf("\n %d eh multiplo de 3 \n", num);
	}
	
	//mostrar a mensagem
	printf("\n\n Precisamos DE CHUVA AGORA \n\n");
	//pausa na execu��o para visualizar o resultado da execu��o
	system("pause");
	
	return 0;
}






















