#include<stdio.h>
int main (){
    int ano, trab, idade;
    printf("Infrome o ano de nascimento:");
    scanf("%d",&ano);
    printf("Infrome a quantidade de anos de trabalho:");
    scanf("%d",&trab);

        idade = 2019 - ano;

        if(idade >= 65){
            printf("Voce pode se aposentar.\n");
        }
        else if(trab >= 30){
            printf("Voce pode se aposentar.\n");
        }
        else if(idade >= 60 && trab >= 25){
            printf("Voce pode se aposentar.\n");

        }
        else {
            printf("Voce nao pode se aposentar no momento.\n");
        }
return 0;
}
