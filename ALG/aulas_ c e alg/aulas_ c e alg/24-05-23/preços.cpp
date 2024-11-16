#include <stdio.h>
#include <conio.h>

int main()
{
	int codigoProduto;
  	float preco, precoNovo, mediaAntiga, mediaNova, qtdProduto;
	
	
	do
	{
		printf("\n Escreva, por gentileza, o codigo do produto: ");
		scanf("%d", &codigoProduto);
		
		if(codigoProduto >= 0)
		{
			
		printf("\n Agora, digite o preco do produto: ");
		scanf("%f", &preco);
		
		precoNovo = preco + (preco * 0.2);
		
		mediaAntiga = mediaAntiga + preco;
		mediaNova = mediaNova + precoNovo;
		
		printf("\n valor atualizado: %.2f", precoNovo);
		printf("\n");
		
		qtdProduto++;

		}
		
		else
		{
			printf("\n Codigo invalido! O programa sera finalizado \n\n");
		}
		
	}while(codigoProduto >= 0);
	
	
	if(qtdProduto > 0)
	{
		mediaAntiga = mediaAntiga / qtdProduto;
		mediaNova = mediaNova / qtdProduto;		
		printf("\n---------------------");
		printf("\n Media antiga dos produtos: %0.2f\nMedia nova dos produtos: %0.2f", mediaAntiga, mediaNova);
		printf("\n---------------------\n\n");
	}
	else
	{
		printf("\n Nenhum produto cadastrado em estoque \n\n");
	}
	
	getch();
	return 0;
}