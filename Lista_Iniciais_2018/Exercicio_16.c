#include<stdio.h>
int main (){
    int num, i, divisao, contador=0;
        printf("Forneca um numero positivo:");
        scanf("%d",&num);
            while(num < 0){
                printf("essse nao e um numero positivo. Forneca um numero positivo:");
                scanf("%d",&num);
            }
    for (i=1; i<=num; i++){
        divisao = num % i;
            if(divisao == 0){
                contador++;
            }
    }
                if(contador == 2){
                    printf("O numero %d e primo.\n",num);
                }
                    else {
                        printf("O numero %d nao e primo.\n",num);
                    }
return 0;
}
