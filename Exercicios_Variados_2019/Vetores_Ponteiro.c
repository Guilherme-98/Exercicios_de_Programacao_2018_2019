#include<stdio.h>
#include<stdbool.h>
int main (){
    int vetor1[10],vetor2[10],vetor3[10],tam1,tam2,i;
    int *v1,*v2,*v3;
    bool exe;
    v1= vetor1;
    v2= vetor2;
    v3= vetor3;

    printf("Informe a quantidade de valores do primeiro vetor:");
    scanf("%d",&tam1);
        for(i=0;i<tam1;i++){
            printf("Informe o %do valor do primeiro vetor:",i+1);
            scanf("%d",&v1[i]);
        }


    printf("\nInforme a quantidade de valores do segundo vetor:");
    scanf("%d",&tam2);
        for(i=0;i<tam2;i++){
            printf("Informe o %do valor do primeiro vetor:",i+1);
            scanf("%d",&v2[i]);
        }

        if(tam1 == tam2){
            exe = true;
        }
        if(tam1 != tam2){
            exe = false;
        }

        if(exe == false){
            printf("\n\nVetores sao de tamanho diferente. O programa fechou.\n\n");
            return 0;
        }
        printf("\nVetor soma:");
        for(i=0;i<tam1;i++){
             v3[i] = v1[i] + v2[i];
             printf("%d ",vetor3[i]);
        }

return 0;
}
