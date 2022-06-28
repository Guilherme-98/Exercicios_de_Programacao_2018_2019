#include<stdio.h>
#include<stdlib.h>
int main (){

    int **pm, i, j,linha,coluna;

    printf("Informe a quantidade de linhas:");
    scanf("%d",&linha);
    printf("Informe a quantidade de coluna:");
    scanf("%d",&coluna);

    pm = (int **)malloc(linha*sizeof(int *));
        for(i=0;i<linha;i++){
            pm[i]=(int *)malloc(coluna*sizeof(int));
        }

    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("Valor da linha %d e coluna %d:",i,j);
            scanf("%d",&pm[i][j]);
        }
    }

    printf("\nMatriz\n");
    for(i=0;i<linha;i++){
        for(j=0;j<coluna;j++){
            printf("%d ",pm[i][j]);
        }
        printf("\n");
    }

    for(i=0;i<linha;i++){
        free(pm[i]);
    }
    free(pm);

return 0;
}
