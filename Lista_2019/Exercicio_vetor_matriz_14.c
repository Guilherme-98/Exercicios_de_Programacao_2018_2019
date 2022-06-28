#include<stdio.h>
int main (){
    int matriz[3][5], i, j, positivo=0, negativo=0;
        for(i=0; i<3; i++){
            for(j=0; j<5; j++){
                printf("Digite o valor da linha %d e coluna %d: ", i, j);
                scanf("%d", &matriz[i][j]);
            }
        }
         for(i=0; i<3; i++){
            for(j=0; j<5; j++){
                    if(matriz[i][j] > 0){
                        positivo = positivo + matriz[i][j];
                    }
                    else{
                        negativo = negativo + matriz[i][j];
                    }
            }
         }
        printf("A soma dos numeros positivos:%d\n",positivo);
        printf("A soma dos numeros negativos:%d\n",negativo);
return 0;
}
