#include<stdio.h>
int main (){
    int i, j, contador, vetor[10], vetor2[10], contador2, w;

        for(i=0; i<10; i++){-
            printf("Froneca o elemento %do do vetor: ",i+1);
            scanf("%d",&vetor[i]);
            vetor2[i] = vetor[i];
                contador=0;
            for(j=i; j>=0; j--){
                if(vetor[i] == vetor2[j]){
                 contador++;
                }
            }
            if(contador > 1){

                    do{
                        printf("Elemento repedido. Forneca um novo elemento:");
                        scanf("%d",&vetor[i]);
                                contador2=0;
                            for(w=i; w>=0; w--){
                                if(vetor[i] == vetor[w]){
                                        contador2++;
                                    }

                                }
                    }while(contador2 > 1);
            }


        }
        printf("\n\n");
        for(i=0; i<10; i++){
            printf(" %d ", vetor[i]);
        }
return 0;
}
