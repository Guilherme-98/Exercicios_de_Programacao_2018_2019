#include<stdio.h>
int main (){
    int vetorA[10], vetorB[10], i, j, k=0, w=0, vaux[10], vetorC[10], contador;
        for(i=0; i<10; i++){
            printf("Forneca o %do elemento do vetor A: ",i+1);
            scanf("%d",&vetorA[i]);
        }

        for(i=0; i<10; i++){
            printf("Forneca o %do elemento do vetor B: ",i+1);
            scanf("%d",&vetorB[i]);
        }

        for(i=0; i<10; i++){
                contador = 0;
            for(j=0; j<10; j++){
                if(vetorA[i] == vetorB[j]){
                    contador++;
                }
            }
            if(contador == 0){
                vaux[k] = vetorA[i];
                k++;
            }
        }
        printf("\n\nA diferenca dos conjuntos A e B:\n");
        for(i=0; i<k; i++){
                contador = 0;
            for(j=i; j>=0; j--){
                if(vaux[i] == vaux[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorC[w] = vaux[i];
                printf("%d\n",vetorC[w]);
                w++;
            }
        }
return 0;
}
