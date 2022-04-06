#include <stdio.h>
#include <string.h>

char inverter(char vetor[],int auxiliar)
{

	if(auxiliar == 1)
	{
	    return vetor[0];
	}
	else
	{
		return vetor[auxiliar - 1];
    }
}

int main()
{
	char vetor[20];
    int tamanho,contador;
    printf("Digite uma palavra para inverter:\n");
    scanf("%s",vetor);
    tamanho = strlen(vetor);
    
    printf("\n###  %s  ### foi a palavra DIGITADA",&vetor);
    printf("\n\n\nE a palavra invertida foi:\n\n\n\n");
    
    for(contador = 0; contador<tamanho ; tamanho--)
    {
    	printf(" %c ",inverter(vetor,tamanho));
	}
	
	return 0;
}
