#include<stdio.h>
void fatorial(int* x, int* resul){
    int i, fatorial=1;
        for(i=*x;i>=1;i--){
            fatorial = fatorial * i;
        }
        *resul = fatorial;
}
int main (){
    int num, resultado;
        printf("Informe o numero que deseja fazer o fatorial:");
        scanf("%d",&num);
        fatorial(&num,&resultado);
        printf("\n\nO Fatorial e:%d\n\n",resultado);
return 0;
}
