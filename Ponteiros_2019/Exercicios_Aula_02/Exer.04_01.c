#include<stdio.h>
#include<stdlib.h>
struct Elementos{
    int valor;
    double preco;
};
int main (){
    int *i;
    struct Elementos *p;

         p = malloc(10*sizeof(struct Elementos));
         i = malloc(sizeof(int));

        for(*i=0;*i<10;(*i)++){
            printf("Forneca o valor da variavel INT na posicao %d da struct:",*i);
            scanf("%d",&(p+(*i))->valor);

            printf("Forneca o valor da variavel DOUBLE na posicao %d da struct:",*i);
            scanf("%lf",&(p+(*i))->preco);
        }

        for(*i=0;*i<10;(*i)++){
            printf("Valor INT[%d]:%d\n",*i,(p+(*i))->valor);
            printf("Valor DOUBLE[%d]:%.2lf\n",*i,(p+(*i))->preco);
        }
        printf("\n");
        free(p);
        free(i);

return 0;
}
