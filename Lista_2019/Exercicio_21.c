#include<stdio.h>
int main (){
    float saldoM, credito;
    printf("Informe o saldo medio:");
    scanf("%f",&saldoM);
        if(saldoM <= 200){
            printf("Credito indisposivel.\n");
        }
        if(saldoM > 200 && saldoM <= 400){
            credito = ((saldoM / 100) * 20);
            printf("O credito disponivel:%.2f\n",credito);
        }

        if(saldoM > 400 && saldoM <= 600){
            credito = ((saldoM / 100) * 30);
            printf("O credito disponivel:%.2f\n",credito);
        }

        if(saldoM > 600){
            credito = ((saldoM / 100) * 40);
            printf("O credito disponivel:%.2f\n",credito);
        }
return 0;
}
