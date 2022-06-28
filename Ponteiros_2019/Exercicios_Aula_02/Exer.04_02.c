#include<stdio.h>
#include<stdlib.h>
struct Elementos{
    int valor;
    double preco;
    int vetor[2];
};
int main (){
    int *i,*j;
    struct Elementos *p;

        p = malloc(10*sizeof(struct Elementos));
        i = malloc(sizeof(int));
        j = malloc(sizeof(int));

        for(*i=0;*i<10;(*i)++){
            printf("Forneca o valor da variavel INT na posicao %d da struct:",*i);
            scanf("%d",& (p+(*i))->valor);

            printf("Forneca o valor da variavel DOUBLE na posicao %d da struct:",*i);
            scanf("%lf",&(p+(*i))->preco);

            for(*j=0;*j<2;(*j)++){
                printf("Forneca o valor do vetor da posicao %d:",*i);
                scanf("%d",& *((p+*i)->vetor+*j));
            }
        }

        for(*i=0;*i<10;(*i)++){
            printf("Valor INT[%d]:%d\n",*i,(p+(*i))->valor);
            printf("Valor DOUBLE[%d]:%.2lf\n",*i,(p+(*i))->preco);
            for(*j=0;*j<2;(*j)++){
                printf("Valor do vetor da posicao %d:%d\n",*j,*((p+*i)->vetor+*j));
            }
        }
        printf("\n");
        free(p);
        free(i);
        free(j);
return 0;
}

