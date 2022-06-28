#include<stdio.h>
#include<stdlib.h>
void operacao(double (**matriz),int *linha, int *coluna){
    printf("O valor da matriz:%.2lf\n",matriz[*linha][*coluna]);

}
int main (){
    double **matriz;
    int *linha, *coluna, *i, *j;

     matriz = (double **)malloc(5*sizeof(double *));
     i = malloc(sizeof(int));
     j = malloc(sizeof(int));
     linha = malloc(sizeof(int));
     coluna = malloc(sizeof(int));

        for(*i=0; *i<5;(*i)++){
            (matriz[*i])=(double *)malloc(5*sizeof(double));
        }

         for(*i=0; *i<5; (*i)++){
            for(*j=0; *j<5; (*j)++){
                printf("Forneca a valor da linha %d e coluna %d:",*i,*j);
                scanf("%lf", &matriz[*i][*j]);
        }
    }
        printf("Fornca a posicao que deseja descobrir a valor na posicao.\n");
        printf("Linha:");
        scanf("%d",& *linha);
        printf("Coluna:");
        scanf("%d",& *coluna);

        operacao(matriz,linha,coluna);

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
