#include<stdio.h>
int main (){
    float elementos[10];
    int i;
        for(i=0; i<10; i++){
            printf("Informe o elemento %d:",i+1);
            scanf("%f",&elementos[i]);
        }
            for(i=9; i>=0; i--){
                printf("%.2f\n",elementos[i]);
            }
return 0;
}
