#include<stdio.h>
#include<stdlib.h>
int main (){
    int *valor1, *valor2;

        valor1 = (int *)malloc(sizeof(int));
        valor2 = (int *)malloc(sizeof(int));

        printf("Forneca o primeiro valor:");
        scanf("%d",& *valor1);
        printf("Forneca o segundo valor:");
        scanf("%d",& *valor2);

    printf("os valores fornecido pelo usuario forao:%d e %d\n",*valor1,*valor2);
    free(valor1);
    free(valor2);

return 0;
}
