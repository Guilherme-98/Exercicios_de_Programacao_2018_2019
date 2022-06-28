#include<stdio.h>
int main (){
    int ano,idade;
    char op;
    printf("Forneca o ano do seu aniversario:");
    scanf("%d",&ano);
    printf("Voce ja fez aniversario esse ano?\nS - SIM\nN - NAO\n");
    fflush(stdin);
    scanf("%c",&op);
    while(op != 'N' && op != 'S'){
        printf("Erro no fornecimento.Informe corretamente.\n");
        printf("Voce ja fez aniversario esse ano?\nS - SIM\nN - NAO\n");
        fflush(stdin);
        scanf("%c",&op);
    }
        if(op == 'S'){
            idade = 2019 - ano;
        }
        else{
            idade = 2019 - ano -1;
        }
        if(idade >= 18){
            printf("Voce tem %d anos e ja pode tirar carta de habilitacao.\n",idade);
        }
        else{
            printf("Voce tem %d anos e nao pode tirar carta de habilitacao ainda\n",idade);
        }
return 0;
}
