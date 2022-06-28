#include<stdio.h>
#include<stdlib.h>
void operacao(double *vetor,int *posicao){
    printf("A posicao %d correspode ao valor:%.2lf\n",*posicao, *(vetor+(*posicao)));
}
int main (){
    int *posicao,*i;
    double *p;

    p = (double *)malloc(25*sizeof(double));
    i = (int *)malloc(sizeof(int));
    posicao = (int *)malloc(sizeof(int));

        for(*i=0;*i<25;(*i)++){
            printf("Forneca o valor da posicao %do do vetor:",*i);
            scanf("%lf", &*(p+(*i)));
        }
        printf("Fornca a posicao que deseja saber o valor do vetor:");
        scanf("%d",& *posicao);

        operacao(p,posicao);
    free(p);
    free(i);
    free(posicao);
return 0;
}
