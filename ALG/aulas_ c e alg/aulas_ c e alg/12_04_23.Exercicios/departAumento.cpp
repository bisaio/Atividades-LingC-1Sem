#include <stdio.h>
#include <stdlib.h>

int main()
{
	int departamento;
	float valorProduto;
	
	printf("\n Prezado, digite o valor de seu produto: R$");
	scanf("%f", &valorProduto);
	
	printf("\n Agora, diga o numero do departamento do produto: ");
	scanf("%d", &departamento);
	
	printf("\n este eh o valor original do seu produto: R$%.2f", valorProduto);
	
	if(departamento == 1)
	{
		printf("\n Como seu produto pertence ao Departamento 1, ele recebeu um aumento de 5%%");
		valorProduto = valorProduto + valorProduto * 0.05;
	}
	else
	{
		printf("\n Como seu produto NAO pertence ao Departamento 1, ele recebeu um aumento de 7,4%%");
		valorProduto = valorProduto + valorProduto * 0.074;
	}
	
	printf("\n este eh o valor final do seu produto com aumento: R$%.2f \n\n", valorProduto);	
	
	system("pause");
	return 0;
}