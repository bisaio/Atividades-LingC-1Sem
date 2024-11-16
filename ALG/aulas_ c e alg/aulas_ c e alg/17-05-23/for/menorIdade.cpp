#include <stdio.h>
#include <conio.h>

int main()
{
	
	int cont, idade, menorIdade;
	
	printf("\n Digite uma idade: ");
	scanf("%d", &idade);
	
	menorIdade = idade;
	
	
	for(cont=2; cont<=10; cont++)
	{

	printf("\n Digite uma idade: ");
	scanf("%d", &idade);
	
		   if(idade<menorIdade)
		   {
			   menorIdade=idade;      
		   }	
			 
	}

	
	printf("\n A menor idade digitada foi: %d", menorIdade);
	
	
	
	getch();
	return 0;
	
}