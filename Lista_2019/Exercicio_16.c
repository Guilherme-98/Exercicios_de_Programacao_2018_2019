#include<stdio.h>
int main (){
    float altura, peso, imc;
    printf("Infrome a altura:");
    scanf("%f",&altura);
    printf("Infrome o peso:");
    scanf("%f",&peso);
        imc = (peso/(altura *altura));
            if(imc < 18.5){
                printf("Abaixo do peso.\n");
            }
            else if(imc >= 18.5 && imc < 25){
                printf("No peso normal.\n");
            }
            else if(imc >= 25 && imc < 30){
                printf("Acima do peso.\n");
            }
            else if (imc > 30.0){
                printf("Obeso.\n");
            }
return 0;
}
