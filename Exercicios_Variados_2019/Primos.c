#include<stdio.h>
int main (){
    int n1, n2, dividendo, divisor, mdc, resto;
    printf("Forneca dois valores:\n");
    scanf("%d %d",&n1,&n2);
    if (n1>n2){
        dividendo = n1;
        divisor = n2;
    }
    else {
        dividendo = n2;
        divisor = n1;
    }
    do {
        resto = dividendo % divisor;
            if(resto != 0){
            dividendo = divisor;
            divisor = resto;
            }
    }
    while(resto != 0);

    mdc = divisor;

    if(mdc == 1){
        printf("Sao Primos entre si\n");
    }
    else {
        printf("Nao sao primos\n");
    }
return 0;
}
