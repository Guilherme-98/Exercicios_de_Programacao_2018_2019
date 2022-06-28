#include<stdio.h>
#include<stdlib.h>
int main(){
    int  *linha, *coluna, *i, *j;
    void **p;

        linha = (int *)malloc(sizeof(int));
        coluna = (int *)malloc(sizeof(int));
        i = (int *)malloc(sizeof(int));
        j = (int *)malloc(sizeof(int));

        p = (void **) malloc(5*sizeof(void *));
        for(*i=0;*i<5;(*i)++){
            (p[*i])=(void *)malloc(5*sizeof(void));
        }
        for(*i=0;*i<5;(*i)++){
            for(*j=0;*j<5;(*j)++){
                printf("Forneca a valor da linha %d e coluna %d:",*i,*j);
                scanf("%lf", &*(double *)(p+sizeof(double)*(5*(*i)+(*j))));
            }
        }

        printf("Agora informe a posicao de um numero da matriz:\n");
        printf("Linha: ");
        scanf("%d",& *linha);
        printf("Coluna: ");
        scanf("%d",& *coluna);

        for(*i=0;*i<5;(*i)++){
            for(*j=0;*j<5;(*j)++){
                printf(" %lf ",*(double *)(p+sizeof(double)*(5*(*i)+(*j))));
            }
            printf("\n");
        }

        printf("Valor da matriz: %.2lf\n",*(double*)(p+sizeof(double)*(5*(*linha)+(*coluna))));

        for(*i=0;*i<5;(*i)++){
            free(p+(*i));
        }
        free(p);
        free(i);
        free(j);
        free(linha);
        free(coluna);
return 0;
}
