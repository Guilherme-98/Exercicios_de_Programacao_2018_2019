#include<stdio.h>
#include<stdbool.h>
int main (){
    int V[14], dados[5], i, j, contador=0, freq[5];
    bool achou[5];
        for(i=0; i<14; i++){
            printf("Infrome o elemnto %d do vetor V: ", i+1);
            scanf("%d",&V[i]);
        }

         for(i=0; i<5; i++){
            printf("Infrome o elemnto %d do vetor Dados: ", i+1);
            scanf("%d",&dados[i]);
        }
            for(i=0; i<5; i++){
                contador = 0;
                for(j=0; j<14; j++){
                        if(dados[i] == V[j]){
                            contador++;
                        }
                }
                freq[i] = contador;
                    if(contador > 0){
                        achou[i] = true;
                    }
                    else{
                        achou[i] = false;
                    }
            }

            printf("\nO vetor achou:");
            for(i=0; i<5; i++){
                    if(achou[i] == true){
                        printf(" V ");
                    }
                    else{
                        printf(" F ");
                    }
            }

            printf("\nO vetor frequencia:");
            for(i=0; i<5; i++){
                printf(" %d ",freq[i]);
            }
            printf("\n");
return 0;
}
