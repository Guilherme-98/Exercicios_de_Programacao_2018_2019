#include<stdio.h>
#include<stdlib.h>
int *criarVet(int tam){
    int *vet, i;
        vet = (int*) malloc(tam* sizeof(int));
        for(i=0;i<tam;i++){
            printf("\n%d",&vet[i]);
            vet[i] = i+1;
        }
        printf("\n Ponteiro vet: %p \n", vet);
        printf("\n Ponteiro vet: %d \n", vet[1]);


return vet;
}
int main(){
    int tam, i, *v;
    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tam);
    v = criarVet(tam);
    printf("O vetor criado na funcaoe: ");
    for(i=0;i<tam;i++){
        printf("\n%d ", &v[i]);
    }
    printf("\n Ponteiro v: %p \n", v);
free(v);
return 0;
}
