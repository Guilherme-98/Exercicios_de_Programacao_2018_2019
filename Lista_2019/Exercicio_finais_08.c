#include<stdio.h>
int main (){
    int hab, salario[1000], filho[1000], i, maiorS, contador=0;
    float mediaS=0, mediaF=0, porcentual;
        printf("Forneca a quantidade de habitantes: ");
        scanf("%d",&hab);

            for(i=0; i<hab; i++){
                printf("Forneca o salario do habitante: ");
                scanf("%d",&salario[i]);
                fflush(stdin);
                printf("Forneca a quantidade de filhos do habitante: ");
                scanf("%d",&filho[i]);
                fflush(stdin);
            }
            maiorS = salario[0];
            for(i=0; i<hab; i++){
                mediaS = mediaS + salario[i];
                mediaF = mediaF + filho[i];
                    if(salario[i] > maiorS){
                        maiorS = salario[i];
                    }
                    if(salario[i] <= 100){
                        contador++;
                    }
            }

            mediaS = mediaS / hab;
            mediaF = mediaF / hab;

            porcentual = (100 * contador) / hab;

            printf("\nA media do salario da populacao:%.2f\n",mediaS);
            printf("\nA media de filhos da populacao:%.2f\n",mediaF);
            printf("\nMaior salario da cidade:%d\n",maiorS);
            printf("\nO porcentual de pessoas com o salrio ate R$:100.00: %.2f%%\n",porcentual);

return 0;
}
