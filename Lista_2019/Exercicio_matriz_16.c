#include<stdio.h>
int main (){
    int matriz[2][3], matrizB[3][2], i, j;
        for(i=0; i<2; i++){
            for(j=0; j<3; j++){
                printf("Digite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
                for(i=0; i<3; i++){
                    for(j=0; j<2; j++){
                        matrizB[i][j] = matriz[j][i];
                        printf(" %d ",matrizB[i][j]);
                    }
                    printf("\n");
                }
return 0;
}
