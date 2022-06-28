#include<stdio.h>
#include<stdlib.h>
int main (){
    int **matriz,**matriz2,*i,*j,**aux;

        matriz = (int **)malloc(3*sizeof(int *));
        i = malloc(sizeof(int));
        j = malloc(sizeof(int));

        for(*i=0; *i<3;(*i)++){
            *(matriz+(*i))=(int *)malloc(4*sizeof(int));
        }

        printf("Matriz 1:\n");
        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf("Forneca o valor da linha %d e coluna %d:",*i,*j);
                scanf("%d", &matriz[*i][*j]);
            }
        }

         matriz2 = (int **)malloc(3*sizeof(int *));
         for(*i=0;*i<3;(*i)++){
            *(matriz2+(*i))=(int *)malloc(4*sizeof(int));
        }

        printf("Matriz 2:\n");
         for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                printf("Forneca o valor da linha %d e coluna %d:",*i,*j);
                scanf("%d", &matriz2[*i][*j]);
            }
        }
         aux = (int **)malloc(3*sizeof(int *));
         for(*i=0; *i<3;(*i)++){
            *(aux+(*i))=(int *)malloc(4*sizeof(int));
        }


        for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                aux[*i][*j] = matriz2[*i][*j];
                matriz2[*i][*j] = matriz[*i][*j];
            }
        }

         for(*i=0;*i<3;(*i)++){
            for(*j=0;*j<4;(*j)++){
                matriz[*i][*j] = aux[*i][*j];
            }
        }

        printf("Matriz 1 trocada\n");
             for(*i=0;*i<3;(*i)++){
                for(*j=0;*j<4;(*j)++){
                    printf("%d ",matriz[*i][*j]);
                }
                printf("\n");
            }
        printf("\nMatriz 2 invertida\n");
             for(*i=0;*i<3;(*i)++){
                for(*j=0;*j<4;(*j)++){
                    printf("%d ",matriz2[*i][*j]);
                }
                printf("\n");
            }
            printf("\n");

        for(*i=0;*i<3;(*i)++){
            free(matriz+(*i));
            free(matriz2+(*i));
            free(aux+(*i));
        }
        free(matriz);
        free(matriz2);
        free(aux);
        free(i);
        free(j);
return 0;
}


