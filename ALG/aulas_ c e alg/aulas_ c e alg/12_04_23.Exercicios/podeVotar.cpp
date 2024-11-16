#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	
	//definindo a formatação de acentos portuguesa 
	// ATENÇÃO! USAR A VIRGULA AO USAR O LOCALE, E NÃO O PONTO (QUANDO DIGITAR NUMEROS NA ENTRADA)
	setlocale(LC_ALL, "Portuguese");
	
	//declaração de variaveis
	int anoNasc, anoAtual, idade;

	// comunicação de Entrada e Saida com o usário
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &anoNasc);
	
	printf("Digite o ano atual: ");
	scanf("%d", &anoAtual);
	
	//idade = anoAtual - anoNasc (COLOCAMOS DENTRO DO IF PARA DIMINUIR CODIGO)
	
    //verificar se a idade da pessoa pode votar ou não
	if(	idade = anoAtual - anoNasc, idade >= 16)
	{
		if(idade >= 16 && idade < 18)
		{
			printf("\n Seu voto é facultativo \n\n");	
		}
		
		else
		{
			printf("\n Seu voto é obrigatorio \n\n");
		}
		
	}
	else
	{	
		printf("\n Voce NÃO pode votar \n\n");
	}
	
	system("pause");
	return 0;
}
