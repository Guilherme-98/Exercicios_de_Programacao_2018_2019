#include<stdio.h>
int main (){
    int i, j, n, linha, coluna, matriz[10][10], maior;
        printf("forneca um numero N para ser Anxn da matriz: ");
        scanf("%d",&n);
        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                printf("Forneca o elemento da linha %d e da coluna %d da matriz:",i+1,j+1);
                scanf("%d",&matriz[i][j]);
            }
        }
        maior = matriz[0][0];
        linha = 0;
        coluna = 0;

        for(i=0; i<n; i++){
            for(j=0; j<n; j++){
                    if(matriz[i][j] > maior){
                        maior = matriz[i][j];
                        linha = i;
                        coluna = j;
                    }
            }
        }
        printf("\nO maior elemento da matriz:%d\n",maior);
        printf("Pertence a linha:%d e coluna:%d\n\n",linha,coluna);
return 0;
}
