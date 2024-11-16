#include <stdio.h>
#include <conio.h>

int main()
{
	int idade, somaIdade = 0, contPessoas = 0, mediaIdade = 0, maiorIdade = 0;
	char resp;
	
//------------------------------------------------------------------------------	
	
	do
	{
		
		printf("\n Digite sua idade: ");
		scanf("%d", &idade);
		
		somaIdade = somaIdade + idade;
		contPessoas++;
		
		if(idade > maiorIdade)
		{
			maiorIdade = idade;
		}

		printf("\n Deseja continuar a pesquisa? [S/N]: ");
		fflush(stdin);
		resp = getche();
				
	}while (resp == 's' || resp == 'S');

//------------------------------------------------------------------------------
		
	mediaIdade = somaIdade / contPessoas;
	printf("\n Media de idade: %d", mediaIdade);
	printf("\n Idade do mais velho: %d \n\n", maiorIdade);
	
	getch();
	return 0;
}