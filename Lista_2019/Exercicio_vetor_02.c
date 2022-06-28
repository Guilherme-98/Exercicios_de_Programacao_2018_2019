#include<stdio.h>
int main (){
    float elementos[10], soma=0;
    int i;
    for(i=0; i<10; i++){
        printf("Informe o elemento %d:",i+1);
        scanf("%f",&elementos[i]);
    }
        for(i=0; i<10; i++){
            soma = soma + elementos[i];
        }
            printf("O resultado da soma final e %.2f\n",soma);
return 0;
}
