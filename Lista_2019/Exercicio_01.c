#include<stdio.h>
int main (){
    float salarioH, horasT, total;
    printf("Infrome o salario hora:");
    scanf("%f",&salarioH);
    printf("Infrome as horas de trabalho:");
    scanf("%f",&horasT);
    while(horasT > 24){
        printf("Horas trabalhada por dia impossivel. Infrome um hora correta.\n");
        printf("Infrome as horas de trabalho:");
        scanf("%f",&horasT);
    }
    total = (salarioH * horasT) * 30;
        if(total<500){
            total= total * 1.15;
            printf("O salario sera de: %.2f",total);
        }
        else{
            printf("O salario sera de: %.2f\n",total);
        }
return 0;
}
