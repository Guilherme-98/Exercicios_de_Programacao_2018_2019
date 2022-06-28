#include<stdio.h>
#include<string.h>
struct Data{
    int dia;
    int mes;
    int ano;
};
struct Agenda{
    char compromisso[60];
    struct Data a;
};
void preencher(struct Agenda c[]){
    int i;
    for(i=0;i<5;i++){
        fflush(stdin);
        printf("Informe o compromisso %do:",i+1);
        fgets(c[i].compromisso,60,stdin);

        printf("Infrome o dia do compromisso:");
        do{
            scanf("%d",&c[i].a.dia);
        }while(c[i].a.dia < 1 || c[i].a.dia > 31);

        printf("Infrome o mes do compromisso:");
        do{
            scanf("%d",&c[i].a.mes);
        }while(c[i].a.mes < 1 || c[i].a.mes > 12);


        printf("Infrome o ano do compromisso:");
        do{
            scanf("%d",&c[i].a.ano);
        }while(c[i].a.ano < 1 );
        printf("\n\n");
    }
}
void procurar (struct Agenda c[], int ano, int mes){
    int i;
    for(i=0;i<5;i++){
        if(ano == c[i].a.ano || mes == c[i].a.mes){
            printf("\nCompromisso:%s",c[i].compromisso);
            printf("Dia:%d\n",c[i].a.dia);
            printf("Mes:%d\n",c[i].a.mes);
            printf("Ano:%d\n\n",c[i].a.ano);
        }
    }
}
int main (){
    int mesC, anoC;
    struct Agenda c[5];

    preencher(c);

    do{
    printf("Informe o mes que deseja mostras dos compromissos:");
    scanf("%d",&mesC);
    }while(mesC < 1 || mesC > 12);

    do{
    printf("Informe o ano que deseja mostras dos compromissos:");
    scanf("%d",&anoC);
    }while(anoC < 1 || anoC > 31);

    procurar(c, anoC, mesC);

return 0;
}
