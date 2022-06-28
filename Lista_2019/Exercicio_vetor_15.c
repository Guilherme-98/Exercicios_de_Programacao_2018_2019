#include<stdio.h>
int main (){
    int vetor [10],i,j,contador=0,numeroDif=0;
        for(i=0; i<10; i++){
            printf("Infrome os valores do vetor:");
            scanf("%d",&vetor[i]);
        }
        for(i=0; i<10; i++){
                contador=0;
            for(j=i+1; j<10; j++){
                if(vetor[i]!= vetor[j]){
                    contador++;
                    if(contador == 9-i){
                        numeroDif++;
                    }
                }

            }
        }

        printf("\nA quantidade de numeros diferetes:%d\n",numeroDif);
return 0;
}
