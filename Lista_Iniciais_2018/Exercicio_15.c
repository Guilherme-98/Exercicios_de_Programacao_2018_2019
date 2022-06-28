#include<stdio.h>
int main (){
    int num,quadrado;
    printf("Forneca um numero natural:");
    scanf("%d",&num);
        while(num < 0){
            printf("Esse numero nao e natural. Forneca um numero natural:");
            scanf("%d",&num);
        }
        quadrado = sqrt(num);
        printf("O menor quadrado de %d e: %d\n",num,quadrado);
return 0;
}
