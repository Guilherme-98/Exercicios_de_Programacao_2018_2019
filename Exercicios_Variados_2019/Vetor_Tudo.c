#include<stdio.h>
int main (){
    int n, i, j, vetorA[100], vetorB[100], vetorU[200], vetorU2[200], contador, vetorI[100], vetorI2[100];
    int vetorDifA[100], vetorDifA2[100], vetorDifB[100], vetorDifB2[100], k=0, w=0;
    printf("Forneca o tamanho do vetor A e B: ");
    scanf("%d",&n);
        for(i=0; i<n; i++){
            printf("Infrome o valor do %do elemento do vetor A: ",i+1);
            scanf("%d",&vetorA[i]);
        }

        for(i=0; i<n; i++){
            printf("Infrome o valor do %do elemento do vetor B: ",i+1);
            scanf("%d",&vetorB[i]);
        }

        //União

        for(i=0; i<n; i++){
            vetorU[i] = vetorA[i];
        }
        for(j=0; j<n; j++){
            vetorU[i+j] = vetorB[j];
        }
        // Verificando se a elemnto repedido no vetor uniao
        for(i=0; i<2*n; i++){
                contador = 0;
            for(j=i; j>=0; j--){
                if(vetorU[i] == vetorU[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorU2[k] = vetorU[i];
                k++;
            }
        }
        printf("\nVetor uniao:");
        for(i=0; i<k; i++){
            printf(" %d ",vetorU2[i]);
        }

        // Intersecção
        for(i=0; i<n; i++){
                contador = 0;
            for(j=0; j<n; j++){
                if(vetorA[i] == vetorB[j]){
                    contador++;
                }
            }
            if(contador >= 1){
                vetorI[w] = vetorA[i];
                w++;
            }
        }
        //Verificando se a elemento repedido no vetor intersecção
        k = 0;
         for(i=0; i<w; i++){
                contador = 0;
            for(j=i; j>=0; j--){
                if(vetorI[i] == vetorI[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorI2[k] = vetorI[i];
                k++;
            }
        }
        printf("\nVetor Interseccao:");
        for(i=0; i<k; i++){
            printf(" %d ",vetorI2[i]);
        }

        //Diferença do conjunto A pelo B
        w = 0;
        for(i=0; i<n; i++){
                contador = 0;
            for(j=0; j<n; j++){
                if(vetorA[i] == vetorB[j]){
                    contador++;
                }
            }
            if(contador == 0 ){
                vetorDifA[w] = vetorA[i];
                w++;
            }
        }
        // Verificando se não tem elementos repedidos no vetor da diferenca do vetor A pelo B
        k =0;
         for(i=0; i<w; i++){
                contador = 0;
            for(j=i; j>=0; j--){
                if(vetorDifA[i] == vetorDifA[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorDifA2[k] = vetorDifA[i];
                k++;
            }
        }
        printf("\nDiferenca do vetor A pelo B:");
        for(i=0; i<k; i++){
            printf(" %d ",vetorDifA2[i]);
        }

         //Diferença do conjunto A pelo B
        w = 0;
        for(i=0; i<n; i++){
                contador = 0;
            for(j=0; j<n; j++){
                if(vetorB[i] == vetorA[j]){
                    contador++;
                }
            }
            if(contador == 0 ){
                vetorDifB[w] = vetorB[i];
                w++;
            }
        }
         // Verificando se não tem elementos repedidos no vetor da diferenca do vetor A pelo B
         k = 0;
         for(i=0; i<w; i++){
                contador = 0;
            for(j=i; j>=0; j--){
                if(vetorDifB[i] == vetorDifB[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorDifB2[k] = vetorDifB[i];
                k++;
            }
        }
        printf("\nDiferenca do vetor B pelo A:");
        for(i=0; i<k; i++){
            printf(" %d ",vetorDifB2[i]);
        }
        printf("\n\n");
return 0;
}
