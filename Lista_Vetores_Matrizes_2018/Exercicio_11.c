#include<stdio.h>
int main (){
    int vetor[100], i, contador=0, contador2=0, n;
        printf("Forneca o numero do vetor: ");
        scanf("%d",&n);
        for(i=0; i<n; i++){
            printf("Forneca o %do elemento do vetor: ",i+1);
            scanf("%d",&vetor[i]);
        }
        for(i=0; i<n; i++){
            if(vetor[i] % 2 == 0){
                contador++;
            }
            if(vetor[i] % 2 != 0){
                contador2++;
            }
        }
        if(contador == n){
            printf("\n\nOs n numeros lidos sao pares\n\n");
        }
        if(contador2 == n){
            printf("\n\nOs n numeros lidos sao impares\n\n");
        }
        if(contador != n && contador2 != n){
            printf("\n\nOS numeros sao misturados entre pares e impares\n\n");
        }

return 0;

}
