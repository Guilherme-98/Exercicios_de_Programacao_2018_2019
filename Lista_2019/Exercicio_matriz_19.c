#include<stdio.h>
int main (){

    int matrizA[5][5], vetorA[10], vetorB[5], vetorC[10], i, j,k=0,y=0,w=0;
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Digite o valor da linha %d e coluna %d da matriz: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }
         for(i=0; i<5; i++){
            for(j=0; j<5; j++){
                if(i > j){
                    vetorA[k]=  matrizA[i][j];
                    k++;
                }
                if(i == j){
                    vetorB[y] = matrizA[i][j];
                    y++;
                }
                if(i < j){
                    vetorC[w] = matrizA[i][j];
                    w++;
                }
            }
         }
         printf("\n\nElementos da diagonal de cima:");
            for(k=0; k<10; k++){
                printf(" %d ",vetorC[k]);
            }

         printf("\n\nElementos da diagonal principal:");
            for(y=0; y<5; y++){
                printf(" %d ",vetorB[y]);
            }


         printf("\n\nElementos da diagonal de baixo:");
            for(w=0; w<10; w++){
                printf(" %d ",vetorA[w]);
            }
        printf("\n\n");

return 0;
}
