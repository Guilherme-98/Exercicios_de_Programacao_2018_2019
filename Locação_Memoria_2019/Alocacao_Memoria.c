#include<stdio.h>
#include<stdlib.h>
int main (){
int *vet,tam,i,soma=0;

    printf("Forneca o tamanho do vetor:");
    scanf("%d",&tam);

    vet = (int *)malloc(tam*sizeof(int));

    for(i=0;i<tam;i++){
        printf("Forneca o valor do vetor da posicao %d:",i+1);
        scanf("%d",& *(vet+i)); //&vet[i];
        soma = soma + *(vet+i); //+vet[i];
    }
    printf("\nSoma dos vetores:%d\n",soma);
    free(vet);
return 0;
}
