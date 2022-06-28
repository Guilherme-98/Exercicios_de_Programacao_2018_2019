#include <stdio.h>
#include <stdlib.h>
int main(){
    int **matriz, **matriz2;
    int *ci, *contador, *i, *j;

        ci = (int *)malloc(sizeof(int));
        contador = (int *) malloc(sizeof(int));
        i = (int *)malloc(sizeof(int));
        j = (int *)malloc(sizeof(int));

        matriz = (int **)malloc(3*sizeof(int *));
        for(*i=0; *i<3;(*i)++){
            (matriz[*i])=(int *)malloc(4*sizeof(int));
        }

        matriz2 = (int **)malloc(3*sizeof(int *));
        for(*i=0;*i<3;(*i)++){
            (matriz2[*i]) = (int *)malloc(4*sizeof(int));
        }

        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf("Forneca o valor da linha %d e coluna %d:",*i,*j);
                scanf("%d",&(matriz[*i][*j]));
            }
        }
        printf("\nMatriz 1: \n");
        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf(" %d ",matriz[*i][*j]);
            }
            printf("\n");
        }
        *contador = 0;
        printf("\nMatriz invertida: \n");
        for(*i=2;*i>=0;(*i)--){
            *ci = 0;
            for(*j=3;*j>=0;(*j)--){
                matriz2[*contador][*ci] = matriz[*i][*j];
                (*ci)++;
            }
            (*contador)++;
        }

        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf(" %d ", matriz2[*i][*j]);
            }
            printf("\n");
        }
        for(*i=0;*i<3;(*i)++){
            free(matriz+(*i));
            free(matriz2+(*i));
        }
        free(matriz);
        free(matriz2);
        free(ci);
        free(contador);
        free(i);
        free(j);
    return 0;
}
