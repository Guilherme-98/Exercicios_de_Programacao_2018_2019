#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (){
    char cpf[11];
    int numero,soma = 0, aux=10,i, soma2=0, aux2 =11;

    printf("Digite o CPF:");
    gets(cpf);

    for(i=0;i<9;i++){
        numero =(cpf[i])-48;
        soma = soma + numero * aux;
        aux--;
    }
    soma = (soma*10)%11;

    if(soma == 10){
        soma = 0;
    }

    if(soma == cpf[9]-48){
        for(i=0;i<9;i++){
            numero = (cpf[i])-48;
            soma2 = soma2 + numero * aux2;
            aux2--;
        }
        soma2 = soma2 + (soma*aux2);
        soma2 = (soma2*10)%11;
            if(soma2 == cpf[10]-48){
                printf("Cpf Valido.\n\n");
            }
    }
    else {
        printf("Cpf Invalido.\n\n");
    }
return 0;
}
