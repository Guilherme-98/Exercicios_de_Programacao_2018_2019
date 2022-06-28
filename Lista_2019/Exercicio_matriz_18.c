#include<stdio.h>
int main (){
    int matriz[4][5], i, j, contador=0, matrizR[5][1];
     for(i=0; i<4; i++){
            for(j=0; j<5; j++){
                printf("Digite o valor da linha %d e coluna %d da matriz : ", i, j);
                scanf("%d", &matriz[i][j]);
            }
     }
     for(j=0; j<5; j++){
         contador = 0;
            for(i=0; i<4; i++){
                    contador = contador + matriz[i][j];
            }
            matrizR[j][1] = contador;
            printf("%d\n",matrizR[j][1]);
     }
return 0;
}
