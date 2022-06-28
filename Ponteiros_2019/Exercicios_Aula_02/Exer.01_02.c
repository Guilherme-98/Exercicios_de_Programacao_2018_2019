#include<stdio.h>
#include<stdlib.h>
void swap(int *p1,int *p2){
    int *aux;

    aux = (int *)malloc(sizeof(int));

    *aux = *p1;
    *p1 = *p2;
    *p2 = *aux;

    printf("O primeiro valor invertido:%d\n",*p1);
    printf("O segundo valor invertido:%d\n",*p2);

    free(aux);
}
int main (){
    int *valor1,*valor2;

    valor1 = (int *)malloc(sizeof(int));
    valor2 = (int *)malloc(sizeof(int));

        printf("Forneca o primeiro valor:");
        scanf("%d",& *valor1);
        printf("Forneca o segundo valor:");
        scanf("%d",& *valor2);

    swap(valor1,valor2);

    free(valor1);
    free(valor2);
return 0;
}
