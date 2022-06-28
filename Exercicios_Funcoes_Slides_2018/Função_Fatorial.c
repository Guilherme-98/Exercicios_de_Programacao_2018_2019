#include<stdio.h>
int fatorial(int num){
    int soma = 1,i;
    for(i=num;i>1;i--){
        soma = soma * i;
    }
    return soma;
}
int main (){
    int num,soma;
    printf("Forneca um numero para calcular o fatorial:");
    scanf("%d",&num);
    soma = fatorial(num);
    printf("O fatorial de %d:%d\n\n",num,soma);
return 0;
}
