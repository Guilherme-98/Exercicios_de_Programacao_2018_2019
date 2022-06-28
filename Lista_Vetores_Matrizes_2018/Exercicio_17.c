#include<stdio.h>
int main (){
    int vetorA[10], vetorB[10], i, j, k=0, contador;
        for(i=0; i<10; i++){
            printf("forneca o %do primeiro elemento do vetor A: ",i+1);
            scanf("%d",&vetorA[i]);
        }
        for(i=0; i<10; i++){
                contador=0;
            for(j=i; j>=0; j--){
                if(vetorA[i]==vetorA[j]){
                    contador++;
                }
            }
            if(contador == 1){
                vetorB[k] = vetorA[i];
                k++;
            }
        }
                printf("\n\n");
            for(i=0; i<k; i++){
                printf(" %d ",vetorB[i]);
            }
                printf("\n\n");

return 0;
}
