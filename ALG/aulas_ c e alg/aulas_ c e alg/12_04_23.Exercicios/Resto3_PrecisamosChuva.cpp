// Inclusão de bibliotecas:
#include <stdio.h>
#include <stdlib.h>

//Programa principal:
int main()
{
	
	//declaração das variaveis
	int num, resto;
	
	//comunicação com o usário e entrada de dados
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	
	//calculo do resto da divisão do número lido por 3	
	resto = num % 3; //% é mod
	
	//verificar se o número lido é multiplo de 3
	if(resto == 0)
	{
		printf("\n %d eh multiplo de 3 \n", num);
	}
	
	//mostrar a mensagem
	printf("\n\n Precisamos DE CHUVA AGORA \n\n");
	//pausa na execução para visualizar o resultado da execução
	system("pause");
	
	return 0;
}






















