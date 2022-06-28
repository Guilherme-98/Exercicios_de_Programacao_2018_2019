#include<stdio.h>
#include<stdlib.h>
int main (){
    double **matriz;
    int *linha, *coluna, *i, *j;

    linha = (int *)malloc(sizeof(int));
    coluna = (int *)malloc(sizeof(int));
    i = (int *)malloc(sizeof(int));
    j = (int *)malloc(sizeof(int));

     matriz = (double **)malloc(5*sizeof(double *));
        for(*i=0;*i<5;(*i)++){
            (matriz[*i])=(double *)malloc(5*sizeof(double));
        }

    for(*i=0;*i<5;(*i)++){
        for(*j=0;*j<5;(*j)++){
            printf("Forneca a valor da linha %d e coluna %d:",*i,*j);
            scanf("%lf", &matriz[*i][*j]);
        }
    }
    printf("Fornca a posicao que deseja descobrir a valor na posicao.\n");
    printf("Linha:");
    scanf("%d",& *linha);
    printf("Coluna:");
    scanf("%d",& *coluna);

    printf("A valor da matriz:%.2lf\n",matriz[*linha][*coluna]);

    for(*i=0;*i<5;(*i)++){
        free(matriz+(*i));
    }
    free(matriz);
    free(i);
    free(j);
    free(linha);
    free(coluna);
return 0;
}
