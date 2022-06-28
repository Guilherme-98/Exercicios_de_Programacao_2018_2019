#include<stdio.h>
#include<string.h>

struct Horario{
    int hora;
    int minuto;
    int segundo;
};
struct Data{
    int dia;
    int mes;
    int ano;
};
struct Compromisso{
    char local[50];
    char texto[100];
};
int main (){
    struct Data a;
    struct Horario b;
    struct Compromisso c;

    do{
        printf("Informe o dia: ");
        scanf("%d",&a.dia);
        }while(a.dia < 1 || a.dia > 31);

    do{
        printf("Infrome o mes: ");
        scanf("%d",&a.mes);
        }while(a.mes < 1 || a.mes > 12);

    do{
        printf("Infrome o ano: ");
        scanf("%d",&a.ano);
        }while(a.ano < 1 || a.ano > 2019);



    do{
        printf("Informe a hora: ");
        scanf("%d",&b.hora);
        }while(b.hora < 0 || b.hora > 24);

    do{
        printf("Infrome o minuto: ");
        scanf("%d",&b.minuto);
        }while(b.minuto < 0 || b.minuto > 59);

    do{
        printf("Infrome o segundo: ");
        scanf("%d",&b.segundo);
        }while(b.segundo < 0 || b.segundo > 59);

    fflush(stdin);
    printf("Informe o local do compromisso:");
    gets(c.local);

    fflush(stdin);
    printf("Descreva o comrpomisso:");
    gets(c.texto);

    system("cls");
    printf("***************Agenda***************\n\n");
    printf("Local do compromisso:%s\n",c.local);
    printf("Sobre o compromisso:%s\n",c.texto);
    printf("Data:%d/%d/%d\n",a.dia,a.mes,a.ano);
    printf("Hoarario:%d:%d:%d\n\n",b.hora,b.minuto,b.segundo);
    printf("*************************************\n\n");
return 0;
}
