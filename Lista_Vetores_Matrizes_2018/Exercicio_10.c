#include<stdio.h>
int main (){
int matriz[3][3];
int primeiro,segundo,terceiro,quarto,quinto,sexto,determinante,passo1,passo2;
int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Fornca o valor da linha %d e da coluna %d: ",i,j);
            scanf("%d", &matriz[i][j]);
        }
    }
    primeiro= matriz[0][0] * matriz[1][1] * matriz [2][2];
    segundo= matriz[0][1] * matriz[1][2] * matriz [2][0];
    terceiro= matriz[0][2] * matriz[1][0] * matriz[2][1];
    quarto= (matriz[0][2] * matriz[1][1] * matriz [2][0]);
    quinto= (matriz[0][0] * matriz [1][2] * matriz [2][1]);
    sexto= (matriz[0][1] * matriz [1][0] * matriz [2][2]);
    passo1= primeiro+segundo+terceiro;
    passo2= quarto + quinto + sexto;
    determinante=passo1-passo2;
    printf("O determinate da matriz e: %d", determinante);
return 0;
}
