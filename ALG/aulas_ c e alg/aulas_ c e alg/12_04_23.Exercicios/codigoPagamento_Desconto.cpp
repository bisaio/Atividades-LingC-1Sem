#include <stdio.h>
#include <stdlib.h>

int main()
{
	int codigoCompra;
	float valorCompra;
	
	//comunicção com o usuario e entrada de dados
	// \t é igual um tab
	printf("\t Prezado, por gentileza inserir o valor da compra: R$");
	scanf("%f", &valorCompra);
	
	printf("\t Agora, insira o codigo da compra: ");	
	scanf("%d", &codigoCompra);
	
	
	//verificar se o cliente tem desconto
	if(codigoCompra == 1)
	{
		valorCompra = valorCompra - valorCompra * 0.05;
	}

	//saida de dados
	printf("\t O valor da sua compra e de: R$%0.2f \n\n", valorCompra);	
	
	
	system("pause");
	return 0;
}