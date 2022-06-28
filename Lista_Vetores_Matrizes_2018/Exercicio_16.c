#include<stdio.h>
int main (){
    float antigo, novo, percentual;
    char op;
    do{
    printf("Forneca o valor do produto antigo: ");
    scanf("%f",&antigo);
    printf("Forneca o valor do produto novo: ");
    scanf("%f",&novo);
        percentual = ((100 * novo) / antigo) - 100;
        printf("\nO percentual de aumento ou de desvalorizacao do produto:%.2f%%\n",percentual);
        printf("\n\nCalcular o percentual de aumento do proximo produto?\n");
        printf("S--Sim:\n");
        printf("N--Nao:\n");
        fflush(stdin);
        scanf("%c",&op);
    }while(op == 'S' || op == 's');

return 0;
}
