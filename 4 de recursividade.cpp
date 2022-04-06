#include <stdio.h>
#include <stdlib.h>

int mdc(int primeiro_numero, int segundo_numero)
{
  if(segundo_numero == 0)
  return (primeiro_numero);
  else
      return mdc(segundo_numero, primeiro_numero % segundo_numero);
}

int main()
{
  
 int a, b;
 printf("Digite o primeiro numero natural: ");
 scanf("%d",&a);
 printf("Digite o segundo numero natural : ");
 scanf("%d",&b);
  
 printf("Primeiro numero: %d\nSeugndo numero: %d\nMDC: %d \n", a, b, mdc(a, b));
 
 return 0;
}
