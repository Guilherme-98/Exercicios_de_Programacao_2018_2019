#include<stdio.h>
int main (){
    int matrizA[4][4], matrizB[4][4], matrizC[4][4], i, j;
        for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                printf("Digite o valor da linha %d e coluna %d da matriz A: ", i, j);
                scanf("%d", &matrizA[i][j]);
            }
        }
         for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                printf("Digite o valor da linha %d e coluna %d da matriz B: ", i, j);
                scanf("%d", &matrizB[i][j]);
            }
        }
         for(i=0; i<4; i++){
            for(j=0; j<4; j++){
                    matrizC[i*2][j] = matrizA[i][j];
                    matrizC[i*2+1][j] = matrizB[i][j];
            }
        }

        for(i=0; i<8; i++){
            for(j=0; j<4; j++){
                    printf(" %d ",matrizC[i][j]);
            }
            printf("\n");
        }
return 0;
}
