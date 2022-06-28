#include<stdio.h>
int main (){
    float P, M, E;
    printf("Infrome o peso dos peixes:");
    scanf("%f",&P);
        if(P > 50){
            E = (P - 50);
            M = (E * 4.0);
            printf("O execesso de peixes e:%.2f quilos\n",E);
            printf("O valor da multa sera de:%.2f reais\n",M);
        }
        else{
            printf("Nao passou do execesso. Portanto nao precisara pagar multa.\n");
        }
return 0;
}
