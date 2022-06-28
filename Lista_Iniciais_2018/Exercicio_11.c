#include<stdio.h>
int main (){
    float altura, peso, diferenca,PesoI;
    char sexo;
    printf("Forneca a altura:");
    scanf("%f",&altura);
    printf("Forneca o peso:");
    scanf("%f",&peso);
    fflush(stdin);
    printf("Forneca o sexo:\nM - Masculino\nF - Feminino\n");
    scanf("%c",&sexo);
    while((sexo != 'm') && (sexo != 'M')&&(sexo != 'f') && (sexo != 'F')){

            printf("Sexo nao existente. Informe alguma das opcoes fornecidas.\n");
            fflush(stdin);
            printf("Forneca o sexo:\nM - Masculino\nF - Feminino\n");
            fflush(stdin);
            scanf("%c",&sexo);
         }
         if((sexo == 'm') || (sexo == 'M')){
            PesoI = (72.7 * altura) - 62;
            if(peso > PesoI){
                diferenca = peso - PesoI;
            }
                else {
                    diferenca = PesoI - peso;
                }
            if(diferenca > 10){
                printf("Peso ideal seria:%.2f\n",PesoI);
                printf("Cuidado. Voce esta com mais de 10 quilos de diferenca do seu peso ideal.\n");
            }
                else{
                    printf("Peso ideal seria:%.2f\n",PesoI);
                    printf("Seu peso esta otimo.\n");
                }
        }
        if ((sexo == 'f') || (sexo == 'F')){
            PesoI = (62.1 * altura) - 48.7;
            if(peso > PesoI){
                diferenca = peso - PesoI;
            }
                else {
                    diferenca = PesoI - peso;
                }
            if(diferenca > 10){
                printf("Peso ideal seria:%.2f\n",PesoI);
                printf("Cuidado. Voce esta com mais de 10 quilos de diferenca do seu peso ideal.\n");
            }
                else{
                    printf("Peso ideal seria:%.2f\n",PesoI);
                    printf("Seu peso esta otimo.\n");
                }
        }

return 0;
}

