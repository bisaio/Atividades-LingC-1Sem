#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	//definindo a formata��o de acentos portuguesa 
	// ATEN��O! USAR A VIRGULA AO USAR O LOCALE, E N�O O PONTO (QUANDO DIGITAR NUMEROS NA ENTRADA)
	setlocale(LC_ALL, "Portuguese");
	
	//declara��o de variaveis
	int anoNasc, anoAtual, idade;

	// comunica��o de Entrada e Saida com o us�rio
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &anoNasc);
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	//idade = anoAtual - anoNasc (COLOCAMOS DENTRO DO IF PARA DIMINUIR CODIGO)
	
    //verificar se a idade da pessoa pode votar ou n�o
	if(	idade = anoAtual - anoNasc, idade >= 16)
	{
		if(idade >= 16 && idade < 18)
		{
			printf("\n Seu voto � facultativo \n\n");	
		}
		
		else
		{
			printf("\n Seu voto � obrigatorio \n\n");
		}
		
	}
	else
	{	
		printf("\n Voce N�O pode votar \n\n");
	}
	
	system("pause");
	return 0;
}
