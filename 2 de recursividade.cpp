#include<stdio.h>

int fibonacci(int n)
{
    if (n == 1 || n ==2)
    {
	   	return (1);
    }
    else if (n > 2)
    {
    	return (fibonacci(n-1) + fibonacci(n-2));
   	}
	
}

int main()
{
	int termos;
	printf("A sequencia Fibonacci e: ");
	for (termos = 1; termos <=10; termos++)
	{
		
		printf("\n%d\n",fibonacci(termos));
	}
	return 0;
}
