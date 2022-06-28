#include<stdio.h>
int main (){
    int n , i, j, vetor[10], vetorCont[10], contador;
        printf("Forneca o tamanho do vetor: ");
        scanf("%d",&n);
        for(i=0; i<n; i++){
            printf("Forneca o %do elemento do vetor: ");
            scanf("%d",&vetor[i]);
        }
            for(i=0; i<n; i++){
                    contador = 0;
                for(j=0; j<n; j++){
                    if(vetor[i] == vetor[j]){
                        contador++;
                    }
                }
                vetorCont[i] = contador++;
            }
            for(i=0; i<n; i++){
                    contador =0;
                for(j=i; j>=0; j--){
                    if(vetor[i] == vetor[j]){
                        contador++;
                    }
                }
                if(contador == 1){
                    printf(" %d apareceu %d\n",vetor[i], vetorCont[i]);
                }
            }
return 0;
}
