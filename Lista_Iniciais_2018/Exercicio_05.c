#include<stdio.h>
int main (){
    int num, contadorpar=0, contadorimpar=0;
    printf("Informe um numero:");
    scanf("%d",&num);
    while(num >= 0){
        if(num % 2 == 0){
            contadorpar++;
        }
        else{
            contadorimpar++;
        }
    printf("Informe um numero:");
    scanf("%d",&num);
    }
    printf("A quantidade de valores par:%d\n",contadorpar);
    printf("A quantidade de valores impares:%d\n",contadorimpar);
return 0;
}

