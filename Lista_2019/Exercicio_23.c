#include<stdio.h>
int main (){
    float indice;
    printf("Infrome o indice de poluicao:");
    scanf("%f",&indice);
    while(indice < 0.05){
        printf("Indice de poluicao abaixo da media fornecida pelo exercicio. Infrome uma media aceitavel.\n");
        printf("Infrome o indice de poluicao:");
        scanf("%f",&indice);
    }
        if(indice >= 0.05 && indice <= 0.25){
            printf("Indice de poluicao aceitavel.\n");
        }

        if(indice >0.25 && indice <= 0.30){
            printf("Aviso: Industrias do primeiro grupo sao intimadas a suspenderem suas atividades.\n");
        }
        if(indice > 0.30 && indice <= 0.40){
            printf("Aviso: Industrias do primeiro e segundo grupos sao intimadas a suspenderem suas atividades.\n");
        }
        if(indice > 0.40 && indice <= 0.50){
            printf("Aviso: Todos os grupos devem ser notificados a paralisarem suas atividades.\n");
        }
        if(indice > 0.50){
            printf("Exercicio nao falo o que acontece acima dessa media.\n");
        }
return 0;
}
