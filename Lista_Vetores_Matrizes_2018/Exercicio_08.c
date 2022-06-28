#include<stdio.h>
int main (){
    int vetor[4], vetor2[5], i, contador=0, j, vetorI[10], contador2=0, k=0, w=0;
        for(i=0; i<4; i++){
            printf("Forneca o %do elemento do primeiro vetor: ",i+1);
            scanf("%d",&vetor[i]);
        }

        for(i=0; i<5; i++){
            printf("Forneca o %do elemento do segundo vetor: ",i+1);
            scanf("%d",&vetor2[i]);
        }
        printf("\n\nOs elementos comuns entre o vetor 1 com o vetor 2 (com elementos repedidios) :\n");
        for(i=0; i<4; i++){
                contador=0;
            for(j=0; j<5; j++){
                if(vetor[i] == vetor2[j]){
                    contador++;
                    k = i;
                }
            }
            if(contador > 0){
                printf(" %d ",vetor[k]);
                vetorI[w] = vetor[k];
                w++;
            }
        }
            printf("\n\n\n");
            printf("\n\nOs elementos comuns entre os dois vetores (sem elementos repedidos):\n");

        for(i=0; i<w; i++){
            contador2 = 0;
            for(j=i; j>=0; j--){
                    if(vetorI[i] == vetorI[j]){
                    contador2++;
                    }
                }
                if(contador2 == 1){
                    printf(" %d ",vetorI[i]);
                }
        }
return 0;
}
