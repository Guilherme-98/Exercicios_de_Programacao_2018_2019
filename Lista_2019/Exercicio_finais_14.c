#include<stdio.h>
int main (){
    int x[10], y[10], i, produto=0, num;
        printf("Forneca o tamanho da sequencia: ");
        scanf("%d",&num);
            for(i=0; i<num; i++){
                printf("Forneca o %do valor do vetor x: ",i+1);
                scanf("%d",&x[i]);
            }

            for(i=0; i<num; i++){
                printf("Forneca o %do valor do vetor y: ",i+1);
                scanf("%d",&y[i]);
            }

            for(i=0; i<num; i++){
                    produto = produto + x[i] * y[i];
            }
            printf("\nO produto do vetor X e Y:%d\n",produto);
return 0;
}
