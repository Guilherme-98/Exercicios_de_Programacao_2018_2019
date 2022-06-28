#include<stdio.h>
int main (){
    int vetor[10],*v,i;
    v = vetor;

    for(i=0;i<10;i++){
        printf("Informe o %do valor do vetor:",i+1);
        scanf("%d",&v[i]);
            if(v[i] < 0){
                v[i] = i;
            }
    }
    printf("\n\nVetor:");
    for(i=0;i<10;i++){
        printf("%d ",vetor[i]);
    }

return 0;
}
