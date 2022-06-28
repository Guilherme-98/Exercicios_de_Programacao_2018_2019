#include<stdio.h>
int main (){
    float num, i, resultado;
    printf("Informe um valor:");
    scanf("%f", &num);
    while(num <= 0){
        printf("Informe um valor positivo e que seja diferente de zero\n");
        printf("Infrome um valor:");
        scanf("%f", &num);
    }
    for(i=1; i<=num; i++){
        resultado = resultado + (1/i);
    }
    printf("O resultado e:%.2f\n", resultado);
return 0;
}
