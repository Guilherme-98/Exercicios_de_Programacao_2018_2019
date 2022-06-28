#include<stdio.h>
int main (){
    int i, j, matriz[3][3];
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf("Forneca o valor d matriz da linha %d e da coluna %d: ", i+1, j+1);
                scanf("%d",&matriz[i][j]);
            }
        }
        printf("\n\nMatriz normal:\n\n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf(" %d ", matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n\nMatriz inversa:\n\n");
        for(i=0; i<3; i++){
            for(j=0; j<3; j++){
                printf(" %d ", matriz[j][i]);
            }
            printf("\n");
        }
return 0;
}
