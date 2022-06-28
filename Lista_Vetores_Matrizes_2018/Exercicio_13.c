#include<stdio.h>
int main (){
    float k, temp;
    printf("Forneca um atemperatura em Celsius: ");
    scanf("%f",&temp);
        k = temp + 273.15;
        printf("\nO valor da temperatura em kelvin:%.2f\n",k);
return 0;
}
