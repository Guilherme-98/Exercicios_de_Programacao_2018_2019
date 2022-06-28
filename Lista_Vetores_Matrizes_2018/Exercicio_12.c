#include<stdio.h>
int main (){
    int l1, l2, c1, c2, i, j, matrizA[10][10], matrizB[10][10], c[10][10], k, temp;
    printf("Forneca o numero de linhas da matriz A: ");
    scanf("%d",&l1);
    printf("Forneca o numero de colunas da matriz A: ");
    scanf("%d",&c1);
    printf("Forneca o numero de linhas da matriz B: ");
    scanf("%d",&l2);
    printf("Forneca o numero de colunas da matriz B: ");
    scanf("%d",&c2);
        if(c1 == l2){
            printf("\n\nPossivel de calcular a matriz\n\n");
                for(i=0; i<l1; i++){
                    for(j=0; j<c1; j++){
                        printf("Forneca o elemento da linha %d e da coluna %d da matriz A: ",i+1, j+1);
                        scanf("%d",&matrizA[i][j]);
                    }
                }

                for(i=0; i<l2; i++){
                    for(j=0; j<c2; j++){
                        printf("Forneca o elemento da linha %d e da coluna %d da matriz B: ",i+1, j+1);
                        scanf("%d",&matrizB[i][j]);
                    }
                }

                for(i=0; i<l1; i++){
                    for(j=0; j<c2; j++){
                            temp =0;
                        for(k=0; k<c1; k++){
                            temp = temp + matrizA[i][k] * matrizB[k][j];

                        }
                    c[i][j]=temp;
                    }
                }

                printf("\n\n");
                printf("\nA multiplicacao da matriz AxB:\n\n");
                for(i=0; i<2; i++){
                    for(j=0; j<2; j++){
                        printf(" %d ",c[i][j]);
                    }
                    printf("\n");
                }
        }
        else{
            printf("\nNao pode ocorrer a multiplicacao da matriz A pela matriz B\n\n");
        }
return 0;
}
