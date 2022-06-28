#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int numero, num = 0, j = 0;
int verifica(int n)
{
    if(n==0)
      return 0;
     else
    {
     if(num==(n %10))
     {
        j++;
     }
     n=n / 10;
     return verifica(n);
    }
return 0;
 }
int main()
{
   printf("Digite um numero:");
   scanf("%d",&numero);
   printf("Digite o numero a ser verificado:");
   scanf("%d",&num);
   verifica(numero);
   printf("Vezes de numeros repetidos: %d\n\n",j);
   return 0;
}
