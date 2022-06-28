#include<stdio.h>
int main (){
    int num,resultado=0,resto=0;
        printf("Infrome um numero:");
        scanf("%d",&num);
        do{
            resultado = num / 10;
            resto = resto + num % 10;
            num = resultado;

        }while(resultado >= 10);
        resto = resto + resultado;
        printf("A soma dos digitos do numero:%d",resto);
return 0;
}
