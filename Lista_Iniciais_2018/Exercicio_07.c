#include<stdio.h>
int main (){
    int num,teste,quadrado=0,i;
    printf("Forneca um numero natural:");
    scanf("%d",&num);
    while
        (num < 0){
        printf("Nao pode ser um numero negativo. Insira um valor positivo:");
        scanf("%d",&num);
    }
    for(i=1; i<=num*2; i++){
        teste = i % 2;
            if(teste != 0){
                quadrado = i + quadrado;
            }
    }
    printf("O quadrado do numero natural %d e: %d\n",num,quadrado);
return 0;
}
