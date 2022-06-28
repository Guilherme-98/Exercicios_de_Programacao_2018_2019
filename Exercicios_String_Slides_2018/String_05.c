#include<stdio.h>
#include<string.h>
int main (){
    char senha[30]= "Guilherme12345";
    char tentativa[30];
    int igual;

    printf("Digite a senha:");
    //gets(tentativa);
    //fgets(tentativa,30,stdin);


    igual = strcmp(senha,tentativa);
    printf("%s\n",tentativa);

    if(igual == 0){
        printf("Senha Correta\n\n");
    }
    else{
        printf("Senha Incorreta\n\n");
    }
return 0;
}
