#include<stdio.h>
int main (){
    int n1, n2, soma, resultado;
    printf("Forneca o primeiro numero:");
    scanf("%d",&n1);
    printf("Forneca o segundo numero:");
    scanf("%d",&n2);
        soma = n1 + n2;
        if(soma >= 10){
            resultado = soma + 5;
        }
        else {
            resultado = soma + 7;
        }
        printf("O resultado final e:%d\n",resultado);
return 0;
}
