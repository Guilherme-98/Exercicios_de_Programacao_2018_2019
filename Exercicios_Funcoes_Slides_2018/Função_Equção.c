#include<stdio.h>
float fatorial (int num){
    float soma =1;
    float soma2 =0;
    int i,j;
    for(j=0;j<=num;j++){
        soma = 1;
        for(i=j;i>1;i--){
            soma = soma * i;
        }
    soma2 = soma2 + (1/soma);
    }
    return soma2;
}
int main (){
    int num;
    float resultado;
    printf("Informe um valor inteiro positivo:");
    scanf("%d",&num);
    resultado = fatorial(num);
    printf("Resultado:%.8f\n\n",resultado);
return 0;
}
