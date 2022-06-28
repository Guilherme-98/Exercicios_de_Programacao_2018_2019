#include<stdio.h>
int main (){
    int n, i, j, vetorA[10], vetorB[10], vetorS[10];
    printf("Forneca o tamanho que seram os vetores: ");
    scanf("%d",&n);
        for(i=0; i<n; i++){
            printf("Forneca o %do elemento do vetor A: ",i+1);
            scanf("%d",&vetorA[i]);
        }

        for(i=0; i<n; i++){
            printf("Forneca o %do elemento do vetor B: ",i+1);
            scanf("%d",&vetorB[i]);
        }
        printf("\n\nA soma dos vetores A e B:\n");
        for(i=0; i<n; i++){
            vetorS[i] = vetorA[i]+vetorB[i];
            printf(" %d ",vetorS[i]);
        }
return 0;
}
