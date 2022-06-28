#include<stdio.h>
#include<stdlib.h>
int main (){
    int *vetor,*i;

    vetor = (int *)malloc(10*sizeof(int));
    i = (int *)malloc(sizeof(int));

        for(*i=0;*i<10;(*i)++){
            printf("Forneca a %do valor:",*i);
            scanf("%d",&*(vetor+(*i)));
        }

        printf("Valores do vetor:");
        for(*i=0;*i<10;(*i)++){
            printf("%d ",*(vetor+(*i)));
        }
        printf("\n");

        free(vetor);
        free(i);
return 0;
}
