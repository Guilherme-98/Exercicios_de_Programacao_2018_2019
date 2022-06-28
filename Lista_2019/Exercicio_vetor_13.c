#include<stdio.h>
int main (){
    int x[5], y[5], i;
        for(i=0; i<5; i++){
            printf("Forneca 5 valores para o vetor X:");
            scanf("%d",&x[i]);
        }
            printf("\nO vetor X invertido:");
                for(i=4; i>=0; i--){
                    y[4-i]=x[i];
                    printf("\n%d",y[4-i]);
                }
                printf("\n");
return 0;
}
