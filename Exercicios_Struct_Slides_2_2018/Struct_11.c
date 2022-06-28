#include<stdio.h>
#include<string.h>
#include<math.h>
struct Raizes{
    int retorno;
    float x1;
    float x2;
};

int equacao(int a, int b, int c){
    int delta;
    delta = (b*b)-(4*a*c);
    return delta;
}
void imprimir(int x){
    printf("O retorno dessa operacao:%d\n",x);
}
int main (){
    int a, b, c,delta;
    struct Raizes v;

    printf("Infrome o A:");
    scanf("%d",&a);

    printf("Infrome o B:");
    scanf("%d",&b);

    printf("Infrome o C:");
    scanf("%d",&c);

    delta = equacao(a,b,c);

    if(delta < 0){
        v.retorno = -1;
        printf("\nNao Existe raizes rais.\n");
        imprimir(v.retorno);
        return 0;
    }

     if (a == 0){
        v.retorno = 0;
        printf("\nNao e uma equacao do segundo grau.\n");
        imprimir(v.retorno);
        return 0;
    }

    if (delta == 0){
        v.retorno = 1;
        v.x1 = (-b+sqrt(0))/(2*a);
        v.x2 =(-b-sqrt(0))/(2*a);
        printf("\n");
        imprimir(v.retorno);
        printf("X1:%.2f\n",v.x1);
        printf("X2:%.2f\n",v.x2);
    }

    if(delta > 2 ){
        v.retorno = 2;
        v.x1 = (-b+sqrt(delta))/(2*a);
        v.x2 =(-b-sqrt(delta))/(2*a);
        printf("\n");
        imprimir(v.retorno);
        printf("X1:%.2f\n",v.x1);
        printf("X2:%.2f\n",v.x2);
    }
return 0;
}
