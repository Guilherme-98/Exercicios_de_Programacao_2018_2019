#include<stdio.h>
int main (){
    int num, c, resto, d, u;
    printf("forneca um numero de 3 algarismos:");
    scanf("%d",&num);
        while(num <= 99 || num >= 1000){
            printf("O numero deve ter 3 algarismo:");
            scanf("%d",&num);
        }
            c = num /100;
            resto = num % 100;
            d = resto / 10;
            resto = resto % 10;
            u = resto;
            printf("O numero fica na ordem inversa:%d%d%d",u,d,c);
return 0;
}
