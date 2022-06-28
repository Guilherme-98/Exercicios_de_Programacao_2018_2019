#include<stdio.h>
#include<stdbool.h>
int main (){
 int n, i, j, contador, vetor[10];
 int aux[10], k=0, ;
 bool repetido = false;
        printf("Forneca o tamanho da sequencia: ");
        scanf("%d",&n);
            for(i=0; i<n; i++){
                printf("Forneca o %do valor: ",i+1);
                scanf("%d",&vetor[i]);
            }
            for(i=0; i<n; i++){
                contador=0;
                for(j=0; j<n; j++){
                    if(vetor[i] == aux[j]){
                        repetido = true;
                    }
                }
                if(repetido == false){
                    for(j=0; j<n; j++){
                        if(vetor[i] == vetor[j]){
                            contador++;
                            aux[k] = vetor[i];
                        }
                    }
                    printf("\n%d apareceu %d no vetor.\n",vetor[i], contador);
                }
                k++;
                repetido = false;
            }
return 0;
}

