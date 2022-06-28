#include<stdio.h>
int main (){
    char nome[50];
    int idade;
    printf("Forneca o nome:");
    scanf("%s",&nome);
    printf("Forneca a idade:");
    scanf("%d",&idade);
    while(idade < 0 ){
            printf("Erro.Informe uma idade correta.\n");
            printf("Forneca a idade:");
            scanf("%d",&idade);
    }
    printf("%s esta na categoria:",nome);
    if(idade <= 7){
        printf("Infantil A\n");
    }
    if(idade >= 8 && idade <= 10){
        printf("Infantil B\n");
    }
    if(idade > 10 && idade <=13){
        printf("Juvenil A\n");
    }
    if(idade > 14 && idade <=17){
        printf("Juvenil B\n");
    }
    if(idade > 17){
        printf("Adulto\n");
    }
return 0;
}
