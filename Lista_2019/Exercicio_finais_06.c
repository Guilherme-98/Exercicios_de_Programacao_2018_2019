#include<stdio.h>
int main (){
    int num, soma=0;
    int j;
    printf("Informe um numero: ");
    scanf("%d",&num);

        for(j=0; j>num; j++){
            if(num % j == 0){
                soma = soma + j;
            }
        }
        if(soma == num){
            printf("\nO numero %d e um numero perfeito.\n",num);
        }
        else {
            printf("\nO numero %d nao e um numero perfeito.\n",num);
        }
return 0;
}
