#include<stdio.h>
int main (){
    float n1, n2,diferencia;
        printf("Infrome dois valores:\n");
        scanf("%f %f",&n1,&n2);
            if(n1 > n2){
                diferencia = (n1 - n2);
            }
            else{
                diferencia = (n2 - n1);
            }
            printf("O resultado da diferenca do maior pelo menor valor:%.2f\n",diferencia);
return 0;
}
