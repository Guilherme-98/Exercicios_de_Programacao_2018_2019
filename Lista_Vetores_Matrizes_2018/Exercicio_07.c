#include<stdio.h>
int main (){
    int num, num2, i, a, b, soma = 0;
        printf("Forneca o primeiro numero: ");
        scanf("%d",&num);
        printf("Forneca o segundo numero: ");
        scanf("%d",&num2);
            if(num < num2){
                a = num;
                b = num2;
            }
            else {
                a = num2;
                b = num;
            }
            printf("\n");
            for(i=a+1; i<=b-1; i++){
                printf(" %d ",i);
                soma = soma + i;
            }
            printf("\n\nA soma do intervalo aberto: %d\n",soma);
return 0;
}
