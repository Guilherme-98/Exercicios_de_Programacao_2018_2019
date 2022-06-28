#include<stdio.h>
int main (){
    int ano, mes, dia;
    char nome[100];
    printf("Forneca seu nome:");
    scanf("%s",&nome);
    printf("Forneca o dia do se aniversario:");
    scanf("%d",&dia);
    printf("Forneca o mes do se aniversario:");
    scanf("%d",&mes);
    printf("Forneca o ano do seu aniversario:");
    scanf("%d",&ano);
        if(ano < 2002){
            printf("%s e maior de idade",nome);
        }
        else if((ano == 2002)&&(mes <= 4) && (dia <=2)){
            printf("%s e maior de idade.",nome);
        }
        else{
            printf("%s nao e maior de idade.\n",nome);
        }
return 0;
}
