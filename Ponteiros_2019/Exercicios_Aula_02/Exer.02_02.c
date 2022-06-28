#include<stdio.h>
#include<stdlib.h>
int main (){
     int *vetor,*i, *j,*vetor2;

        vetor = (int *)malloc(10*sizeof(int));
        vetor2 = (int *)malloc(10*sizeof(int));
        i = (int *)malloc(sizeof(int));
        j = (int *)malloc(sizeof(int));

        for(*i=0;*i<10;(*i)++){
            printf("Forneca a %do valor:",*i);
            scanf("%d",&*(vetor+(*i)));
        }

        *j = 0;
        for(*i=9;*i>=0;(*i)--){
            *(vetor2 + (*j)) = *(vetor+(*i));
            (*j)++;
        }

        printf("Vetor inverso:");
        for(*i=0;*i<10;(*i)++){
            printf(" %d ",*(vetor2+(*i)));
        }
        printf("\n");

        free(vetor);
        free(i);
        free(j);
        free(vetor2);
return 0;
}





