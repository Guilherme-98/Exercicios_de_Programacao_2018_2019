#include<stdio.h>
struct Data{
    int dia;
    int mes;
    int ano;
    int dia2;
    int mes2;
    int ano2;
};
int main (){
    int aux, x, anos = 0, y = 0, w = 0, total;
    struct Data a;

    printf("Informe o primeiro dia:");
    scanf("%d",&a.dia);
    printf("Informe o primeiro mes:");
    scanf("%d",&a.mes);
    printf("Informe o primeiro ano:");
    scanf("%d",&a.ano);

    printf("Informe o segundo dia:");
    scanf("%d",&a.dia2);
    printf("Informe o segundo mes:");
    scanf("%d",&a.mes2);
    printf("Informe o segundo ano:");
    scanf("%d",&a.ano2);

    if(a.ano > a.ano2){
        aux = a.ano;
        a.ano = a.ano2;
        a.ano2 = aux;
        aux = a.mes;
        a.mes = a.mes2;
        a.mes2 = aux;
        aux = a.dia;
        a.dia = a.dia2;
        a.dia2 = aux;
    }

    if(a.mes > a.mes2){
    while((a.ano2-1) != (a.ano)){
          a.ano++;
          anos++;
    }

    anos = anos * 365;

    while(a.mes != a.mes2){
        a.mes++;
        y++;
        if(a.mes == 12){
            a.mes = 1;
            y++;
        }

    }

    y = y * 30;

    if(a.dia > a.dia2){
        aux = a.dia2;
        a.dia2 = a.dia;
        a.dia = aux;
    }

    w = a.dia2 - a.dia;

    total = anos + y + w;

    printf("O total de dias de diferencia entre as duas datas:%d\n\n",total);
    }
    if(a.mes < a.mes2){
    while((a.ano2) != (a.ano)){
          a.ano++;
          anos++;
    }

    anos = anos * 365;

    while(a.mes != a.mes2){
        a.mes++;
        y++;
        if(a.mes == 12){
            a.mes = 1;
            y++;
        }

    }

    y = y * 30;

    if(a.dia > a.dia2){
        aux = a.dia2;
        a.dia2 = a.dia;
        a.dia = aux;
    }

    w = a.dia2 - a.dia;

    total = anos + y + w;

    printf("O total de dias de diferencia entre as duas datas:%d\n\n",total);
    }


    else{
    while((a.ano2) != (a.ano)){
          a.ano++;
          anos++;
    }

    anos = anos * 365;

    while(a.mes != a.mes2){
        a.mes++;
        y++;
        if(a.mes == 12){
            a.mes = 1;
            y++;
        }

    }

    y = y * 30;

    if(a.dia > a.dia2){
        aux = a.dia2;
        a.dia2 = a.dia;
        a.dia = aux;
    }

    w = a.dia2 - a.dia;

    total = anos + y + w;

    printf("O total de dias de diferencia entre as duas datas:%d\n\n",total);
    }


return 0;
}
