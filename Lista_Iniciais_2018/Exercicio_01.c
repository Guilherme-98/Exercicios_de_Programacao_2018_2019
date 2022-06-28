#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (){
    int num, resto, reais=0, ciquenta=0, vinte=0, dez=0, cinco=0, um=0;
    printf("Forneca uma quantidade em centavos:");
    scanf("%d",&num);

    while(num < 0){
        printf("Informe um valor positivo.\n");
        printf("Forneca uma quantidade em centavos:");
        scanf("%d",&num);
    }
        if(num >= 100){
            reais = num / 100;
            num = num - (reais*100);
        }
        if(num >= 50){
            ciquenta = num / 50;
            num = num - (ciquenta*50);
        }
        if(num >= 25){
            vinte = num / 25;
            num = num - (vinte*25);
        }
        if(num >= 10){
            dez = num / 10;
            num = num - (dez*10);
        }
        if (num >= 5){
            cinco = num / 5;
            num = num -(cinco*5);
        }
        if (num >= 1){
            um = num / 1;
        }
    printf("Reais:%d\nCiquenta:%d\nVinte e Cinco:%d\nDez:%d\nCinco:%d\nUm:%d\n",reais, ciquenta, vinte, dez, cinco, um);
    return 0;
}
