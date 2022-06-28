#include<stdio.h>
#include<stdbool.h>
struct Data{
    int dia;
    int mes;
    int ano;
    int hora;
    int minuto;
    int segundo;
    int milessegundo;
};

int main (){
    bool bissexto;
    struct Data tempo;

    do{
        printf("Informe o dia: ");
        scanf("%d",&tempo.dia);
       }while(tempo.dia < 1 || tempo.dia > 31);

    do{
        printf("Infrome o mes: ");
        scanf("%d",&tempo.mes);
    }while(tempo.mes < 1 || tempo.mes > 12);

    if(tempo.mes == 2){
        if(tempo.dia > 29){
            printf("Mes de fevereiro tem so 28 e 29 dias em casos de ano bissesntos: ");
            do{
                printf("Informe o dia: ");
                scanf("%d",&tempo.dia);
                }while(tempo.dia < 1 || tempo.dia > 30);

        }
    }

    do{
        printf("Infrome o ano: ");
        scanf("%d",&tempo.ano);
        }while(tempo.ano < 1 || tempo.ano > 2019);

    	if(tempo.ano % 400 == 0){
            bissexto = true;
	}
	else if ((tempo.ano % 4 == 0) && (tempo.ano % 100 != 0)) {
		bissexto = true;
	}
	else {
		bissexto = false;
		if(tempo.mes == 2 ){
            if(tempo.dia == 29){
                printf("O ano nao e bissesto.Nao pode fornecar o dia de fevereiro como 29.");
                printf("Mes de fevereiro tem so 28 e 29 dias em casos de ano bissesntos.\n");
            do{
                printf("Informe o dia: ");
                scanf("%d",&tempo.dia);
                }while(tempo.dia < 1 || tempo.dia > 28);
            }
		}
	}

	if (bissexto == true) {
	}
	do{
        printf("Informe a hora: ");
        scanf("%d",&tempo.hora);
        }while(tempo.hora < 0 || tempo.hora > 23);
	do{
        printf("Informe os minutos: ");
        scanf("%d",&tempo.minuto);
        }while(tempo.minuto < 0 || tempo.minuto > 59);

    do{
        printf("Informe os segundos: ");
        scanf("%d",&tempo.segundo);
        }while(tempo.segundo < 0 || tempo.segundo > 59);

    do{
        printf("Informe os milesegundos: ");
        scanf("%d",&tempo.milessegundo);
        }while(tempo.milessegundo < 0 || tempo.milessegundo > 1000);
        printf("\n\n");
        printf("Dia:%d\n",tempo.dia);
        printf("Mes:%d\n",tempo.mes);
        printf("Ano:%d\n",tempo.ano);
        printf("Hora(s):%d\n",tempo.hora);
        printf("Minutos(s):%d\n",tempo.minuto);
        printf("Segundo(s):%d\n",tempo.segundo);
        printf("Milessegundo(s):%d\n\n\n",tempo.milessegundo);

return 0;
}
