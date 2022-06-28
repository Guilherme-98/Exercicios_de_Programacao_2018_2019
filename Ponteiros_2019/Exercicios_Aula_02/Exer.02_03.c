#include<stdio.h>
#include<stdlib.h>
int main(){
    double *vetor, *vetor2, *aux;
    int *i;

        vetor = (double *)malloc(10*sizeof(double));
        vetor2 = (double *)malloc(10*sizeof(double));
        aux = (double *)malloc(10*sizeof(double));
        i = (int *)malloc(sizeof(int));

        printf("Vetor 1:\n");
        for(*i=0;*i<10;(*i)++){
            printf("Forneca o valor da posicao %d:", *i);
            scanf("%lf", &*(vetor+(*i)));
        }

        printf("Vetor 2:\n");

        for(*i=0;*i<10;(*i)++){
            printf("Forneca o valor da posicao %d:", *i);
            scanf("%lf", &*(vetor2+(*i)));
        }

       for(*i=0; *i<10; (*i)++){
           *(aux+(*i)) = *(vetor2+(*i));
           *(vetor2+(*i)) = *(vetor+(*i));
       }

       for(*i=0; *i<10; (*i)++){
           *(vetor+(*i)) = *(aux+(*i));
        }


        printf("\nVetor 1: ");
        for(*i=0; *i<10; (*i)++){
            printf("%.1f ", *(vetor+(*i)));
        }

        printf("\nVetor 2: ");
        for(*i=0; *i<10; (*i)++){
            printf("%.1f ", *(vetor2+(*i)));
        }

        free(vetor);
        free(i);
        free(aux);
        free(vetor2);
return 0;
}
