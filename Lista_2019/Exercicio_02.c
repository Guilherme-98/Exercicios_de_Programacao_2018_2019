#include<stdio.h>
int main (){
    float reais, conversao;
    printf("Infrome uma quantidade em reais:");
    scanf("%f",&reais);
        while(reais<=0){
            printf("Infrome uma quantidade positiva e diferente de zero.\n");
            printf("Infrome uma quantidade em reais:");
            scanf("%f",&reais);
        }
        conversao = (reais / 3.20);
        printf("O resultado da conversao e:%.2f dolares\n",conversao);
return 0;
}
