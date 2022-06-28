#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main (){
    int dia, mes, ano;
    char d[2], m[25], a[10], tudo[50]="";

    do{
        printf("Forneca o dia:");
        scanf("%d",&dia);
    }while(dia < 1 || dia > 31);


    do{
        printf("Forneca o mes:");
        scanf("%d",&mes);
    }while(mes < 1 || mes > 12);


    do{
        printf("Forneca o ano:");
        scanf("%d",&ano);
        }while(ano < 1 );

        itoa(dia,d,10);

        if(mes == 1){
            strcpy(m,"/Janeiro/");
        }

        if(mes == 2){
            strcpy(m,"/Fevereiro/");
        }

        if(mes == 3){
            strcpy(m,"/Marco/");
        }

        if(mes == 4){
            strcpy(m,"/Abril/");
        }

        if(mes == 5){
            strcpy(m,"/maio/");
        }

        if(mes == 6){
            strcpy(m,"/Junho/");
        }

        if(mes == 7){
            strcpy(m,"/Julho/");
        }

        if(mes == 8){
            strcpy(m,"/Agosto/");
        }

        if(mes == 9){
            strcpy(m,"/Setembro/");
        }

        if(mes == 10){
            strcpy(m,"/Outubro/");
        }

        if(mes == 11){
            strcpy(m,"/Novembro/");
        }

        if(mes == 12){
            strcpy(m,"/dezembro/");
        }

        itoa(ano,a,10);

        printf("%s%s%s\n\n",d,m,a);
        strcat(tudo,d);
        strcat(tudo,m);
        strcat(tudo,a);

        printf("\n\n%s\n\n",tudo);

    return 0;
}
