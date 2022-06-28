#include<stdio.h>
int main (){
    int vetor1[5];
    float vetor2[5], faturamento[5], faturamentoT=0,faturamentoM;
    int contador=0,i;
        for(i=0; i<5; i++){
            printf("Infrome a quantidade do produto %d:",i+1);
            scanf("%d",&vetor1[i]);
            printf("Infrome o preco do produto %d:",i+1);
            scanf("%f",&vetor2[i]);
        }
        printf("\n");
        for(i=0; i<5; i++){
            faturamento[i] = (vetor1[i] * vetor2[i]);
            faturamentoT = (faturamentoT + (vetor1[i] * vetor2[i]));
            printf("O faturamento do produto %d:%.2f\n",i+1,faturamento[i]);
        }
            printf("\nO faturamento total:%.2f\n",faturamentoT);
                faturamentoM = (faturamentoT / 5);
                    printf("\nA media de faturamento:%.2f\n",faturamentoM);
                        printf("\n");
                        for(i=0; i<5; i++){
                            if(faturamento[i] < faturamentoM){
                                printf("Faturamento %d esta abaixo da media.\n",i+1);
                                contador++;
                            }
                            else{
                                printf("Faturamento %d esta acima da media.\n",i+1);
                            }
                        }
                                    printf("\nNo total sao %d produtos abaixo da media de faturamento.\n",contador);
return 0;
}
