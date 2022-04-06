#include <stdio.h>	

int potencia(int x,int y)
{
	if (x*y == 0)
	{
		return 1;
	}
	else
	{
		return (x * potencia(x,y-1));
	}
}

int main()
{
	int x = 0, y = 0, resultado = 0;
	printf("Digite uma base: ");
	scanf("%d",&x);
	printf("Digite um expoente: ");
	scanf("%d",&y);
	resultado = potencia(x,y);
	printf("%d elevado a %d = %d" ,x,y,resultado);
	
	return 0;
}
