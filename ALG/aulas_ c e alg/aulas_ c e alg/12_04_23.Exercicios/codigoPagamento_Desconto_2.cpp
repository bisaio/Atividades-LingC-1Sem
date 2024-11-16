#include <stdio.h>
#include <stdlib.h>

int main()
{
	int codigoCompra;
	float valorCompra, desconto, pagamento;
	
	//comunicção com o usuario e entrada de dados
	// \t é igual um tab
	printf("\t Prezado, por gentileza inserir o valor da compra: R$");
	scanf("%f", &valorCompra);
	
	printf("\t Agora, insira o codigo da compra: ");	
	scanf("%d", &codigoCompra);
	
	desconto = 0.0;
	
	
	//verificar se o cliente tem desconto
	if(codigoCompra == 1)
	{
		desconto = valorCompra * 0.05;
	}
	
	//calcular valor a ser pago
	pagamento = valorCompra - desconto;
	//saida de dados
	printf("\n \t O valor da sua compra: R$%0.2f \n \t Desconto R$%0.2f \n \t Valor pagamento R$%0.2f \n\n", valorCompra, desconto, pagamento);	
	
	
	system("pause");
	return 0;
}