#include<stdio.h>
#include<stdlib.h>
int main (){
    int **matriz,*i,*j;

        matriz = (int **)malloc(3*sizeof(int *));
        i = malloc(sizeof(int));
        j = malloc(sizeof(int));

        for(*i=0; *i<3;(*i)++){
            (matriz[*i])=(int *)malloc(4*sizeof(int));
        }

        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf("Forneca o valor da linha %d e coluna %d:",*i,*j);
                scanf("%d", &(matriz[*i][*j]));
            }
        }
        printf("Matriz:\n");

        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf(" %d ",(matriz[*i][*j]));
            }
            printf("\n");
        }

        for(*i=0;*i<3;(*i)++){
            free(matriz+(*i));
        }
        free(matriz);
        free(i);
        free(j);
return 0;
}
