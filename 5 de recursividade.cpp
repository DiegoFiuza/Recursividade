#include <stdio.h>

int potencia1 (int expoente1, char base1)
{
	int contador;
	char aux[100];
	if(expoente1 > 0)
	{
		for(contador = 0; contador < expoente1; contador++)
		{
			aux[contador] = base1;
			return aux[contador];
		}
	}
}
int potencia2 (int expoente2, char base2)
{
	int contador;
	char aux[100];
	if(expoente2 > 0)
	{
		for(contador = 0; contador < expoente2; contador++)
		{
			aux[contador] = base2;
			return aux[contador];
		}
	}
}

int main()
{
	
  	int contador, expoente1, expoente2;
  	char base1 = 'a'; char base2 = 'b';

  	printf("Digite o expoente 1: ");
  	scanf("%d",&expoente1);
  	
  	printf("Digite o expoente 2: ");
  	scanf("%d",&expoente2);
 
 	for(contador = 0; contador < expoente1; contador++)
 	{
 	    printf("%c", potencia1(expoente1, base1));
    }
    
 	for(contador = 0; contador < expoente2; contador++)
    {
 	 	printf("%c", potencia2(expoente2, base2));
    }
    
    return 0;
 }
