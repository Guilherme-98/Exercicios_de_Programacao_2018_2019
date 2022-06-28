#include<stdio.h>
int main (){
    int n1, n2, n3;
    printf("Forneca o primeiro numero para a formacao do triangulo:");
    scanf("%d",&n1);
    printf("Forneca o segundo numero para a formacao do triangulo:");
    scanf("%d",&n2);
    printf("Forneca o terceiro numero para a formacao do triangulo:");
    scanf("%d",&n3);
        if((n1 < n2+n3) && (n2 < n1+n3) && (n2 < n1+n2)){
            printf("Esses numeros podem formar um triangulo\n");
        }
        else{
            printf("Esses numeros nao podem formar um triangulo.\n");
        }
return 0;
}
