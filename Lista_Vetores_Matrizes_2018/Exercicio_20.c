#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main (){
    int i,j,aux,n[20],exe,vetoraux[20],vetor[20]={},primeiro,contador2=0,k,posicao;
    srand((unsigned)time(NULL));
    for(i=0;i<20;i++){
            n[i] = (rand()% 10 +1);
            printf("%d ",n[i]);
        }

printf("\n\nA maior sequencia:");
    for(i=0;i<19;i++){
        k=0;
        primeiro = 1;
        exe = 0;
        aux = n[i];
            if((aux+1) == n[i+1]){
                    if(primeiro == 1){
                        vetoraux[k] = aux;
                        k++;
                        exe++;
                    }

                primeiro = 0;
                aux = n[i+1];
                vetoraux[k] = n[i+1];
                k++;
                exe++;
                    if(i+1 == 20){
                        vetor[k] = vetoraux[k];
                        k++;
                    }

                    if(exe > contador2){
                        for(i=0;i<k;i++){
                            vetor[i] = vetoraux[i];
                            contador2 = aux;
                            posicao = k;
                        }
                    }
            }
            else{

            }
    }
    for(i=0;i<posicao;i++){
        printf("%d ",vetor[i]);
    }
return 0;
}


