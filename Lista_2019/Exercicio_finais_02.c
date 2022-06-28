#include<stdio.h>
int main (){
    float num, somatorio=0;
        printf("Infrome um numero: ");
        scanf("%f",&num);
            while(num != 0){
                if(num > 0){
                    somatorio = somatorio + num;
                }
                printf("Infrome um numero: ");
                scanf("%f",&num);
            }
                printf("O somatorio dos numeros positivos:%.2f\n",somatorio);
return 0;
}
