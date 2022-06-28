#include<stdio.h>
int main (){
    int num, maior, menor;
        printf("Forneca um numero: ");
        scanf("%d",&num);
        maior = num;
        menor = num;
        while(num != 0){
            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        printf("Forneca um numero: ");
        scanf("%d",&num);
        }
        printf("\nO maior valor:%d\n",maior);
        printf("\nO menor valor:%d\n",menor);
return 0;
}
