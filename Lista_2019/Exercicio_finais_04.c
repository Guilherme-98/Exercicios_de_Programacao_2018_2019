#include<stdio.h>
int main (){
    int num, fatorial=1, i;
        printf("Infrome um numero: ");
        scanf("%d",&num);
        while(num < 0 ){
            printf("Numero negativo. Favor inserir um numero positivo.\n");
            printf("Infrome um numero: ");

            scanf("%d",&num);
        }

        for(i=num; i>0; i--){
            fatorial = fatorial * i;
        }

        printf("\nO fatorial de %d: %d\n",num,fatorial);
return 0;
}
