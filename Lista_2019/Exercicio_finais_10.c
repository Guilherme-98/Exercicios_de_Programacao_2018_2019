#include<stdio.h>
int main (){
    int num, i, vetor[100], j, media=0, contador, soma=0;
        printf("Forneca a quantidade de numeros: ");
        scanf("%d",&num);
            for(i=0; i<num; i++){
                printf("Forneca o numero: ");
                scanf("%d",&vetor[i]);
            }
            printf("\nNumeros primos:\n");
            for(i=0; i<num; i++){
                    contador=0;
                for(j=1; j<=vetor[i]; j++){
                    if(vetor[i] % j == 0){
                        contador++;
                    }
                }
                    if(contador == 2){
                        printf("%d\n",vetor[i]);
                        soma = soma + vetor[i];
                    }
            }
            printf("\nA soma dos numeros primos: %d\n",soma);
return 0;
}
