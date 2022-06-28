#include<stdio.h>
#include<stdlib.h>
int main (){
    int *posicao, *i;
    void *p;

        p = (double *)malloc(25*sizeof(double));
        i = (int *)malloc(sizeof(int));
        posicao = (int *)malloc(sizeof(int));

        for(*i=0; *i<25; (*i)++){
            printf("Forneca o valor da posicao %do do vetor:",*i);
            scanf("%lf",&*(double *)(p+sizeof(double)*(*i)));
        }
        printf("Fornca a posicao que deseja saber o valor do vetor:");
        scanf("%d",& *posicao);

        printf("A posicao %d correspode ao valor:%.2lf\n",*posicao, *(double *)(p+sizeof(double)*(*posicao)));

        free(p);
        free(i);
        free(posicao);
return 0;
}
