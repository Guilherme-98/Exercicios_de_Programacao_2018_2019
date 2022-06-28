#include<stdio.h>
#include<stdlib.h>
int main (){
    double *vetor;
    int *p, *i;

        vetor = (double *)malloc(25*sizeof(double));
        p = (int *)malloc(sizeof(int));
        i = (int *)malloc(sizeof(int));

        for( *i=0; *i<25; (*i)++){
            printf("Forneca o valor da posicao %do do vetor:", *i);
            scanf("%lf",& *(vetor+(*i)));
        }
        printf("Fornca a posicao que deseja saber o valor do vetor:");
        scanf("%d",& *p);

        printf("A posicao %d correspode ao valor:%.2lf\n",*p,*(vetor+(*p)));

    free(vetor);
    free(i);
    free(p);
return 0;
}

