#include<stdio.h>
int main (){
    float salario, inss, irrf;
    printf("Forneca o valor do salario:");
    scanf("%f",&salario);
        if(salario <= 720.00){
            inss = ((salario / 100) * 7.66);
            printf("INSS:7,66%%\n");
            printf("Valor do INSS:%.2f\n",inss);
        }
        if((salario > 720.00) && (salario <= 1200.00)){
            inss = ((salario / 100) * 9.00);
            printf("INSS:9%%\n");
            printf("Valor do INSS:%.2f\n",inss);

        }
        if(salario > 1200.00 && salario <= 2400.00){
            inss = ((salario / 100) * 11.00);
            printf("INSS:11%%\n");
            printf("Valor do INSS:%.2f\n",inss);
        }
        if(salario > 2400.00){
            printf("Valor do INSS:264.00\n");
        }
        if(salario <= 1058.00){
            printf("Inseto do IRRF.\n");
        }
        if( salario > 1058.00 && salario <= 2115.00){
                irrf = ((salario / 100) * 15.00);
                printf("IRRF:15%%\n");
                printf("O valor do IRRF:%.2f\n",irrf);
        }
        if(salario > 2115.00){
            irrf = ((salario / 100) * 27.00);
            printf("IRRF:27%%\n");
            printf("O valor do IRRF:%.2f\n");
        }
return 0;
}
