#include <stdio.h>
#include <conio.h>

int main()
{
	float valorCompra = 0.0, totalVendaVista = 0.0, totalVendaPrazo = 0.0, totalVenda = 0.0; 
	char codPgto;
	
//------------------------------------------------------------------------------	
	
	while(valorCompra >= 0.0)
	{
		printf("\n Digite o valor da compra: ");
		scanf("%f", &valorCompra);
		
			if(valorCompra >= 0.0)
			{
		
				printf("\n Digite o codigo de pagamento \n V - a vista ou P - a prazo: ");
				fflush(stdin);
				codPgto = getche();
				printf("\n");
				
				switch(codPgto)
				{
				case 'v':case 'V': totalVendaVista = totalVendaVista + valorCompra;  
				break;
			
				case 'p':case 'P': totalVendaPrazo = totalVendaPrazo + valorCompra; 
				break;
				
				default: printf("\n codigo invalido \n\n");
				break;
				}
			
			}
			
	}
	
//------------------------------------------------------------------------------
	
	totalVenda = totalVendaVista + totalVendaPrazo;
	
	printf("\n------------------------------------------");
	printf("\n o valor total de vendas a vista: %.2f", totalVendaVista);
	printf("\n o valor total de vendas a prazo: %.2f", totalVendaPrazo);
	printf("\n o valor total de vendas do dia: %.2f", totalVenda);	
	printf("\n------------------------------------------\n\n");
	
	getch();
	return 0;
}