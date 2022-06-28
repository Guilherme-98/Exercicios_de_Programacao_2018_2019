#include<stdio.h>
struct Aeroporto{
        int hora;
        int minuto;
        int horaP;
        int minutoP;
        int passageiro;
        char origem[15];
        char destino[15];
        char escala[10][100];
    };
int main (){
    int i, num,op,fuso,fuso1,fuso2,chegada,lado,dia = 0;

    struct Aeroporto voo;

    do{
        printf("Informe a duracao do voo:\n");
        printf("Horas:");
        scanf("%d",&voo.hora);
    }while(voo.hora < 0 || voo.hora > 23);

    do{
        printf("Minutos:");
        scanf("%d",&voo.minuto);
    }while(voo.minuto < 0 || voo.minuto > 59);

    do{
        printf("Informe o horario do vou:\n");
        printf("Horas:");
        scanf("%d",&voo.horaP);
    }while(voo.hora < 0 || voo.hora > 23);

    do{
        printf("Minutos:");
        scanf("%d",&voo.minutoP);
    }while(voo.minuto < 0 || voo.minuto > 59);

    printf("Informe a quantidade de passageiros: ");
    scanf("%d",&voo.passageiro);
    fflush(stdin);
    printf("Informe a cidade de origem: ");
    fgets(voo.origem,15,stdin);
    fflush(stdin);
    printf("Infrfome a cidade de destino: ");
    fgets(voo.destino,15,stdin);

    printf("Infrome a quantidade de escalas: ");
    scanf("%d",&num);
    fflush(stdin);


    if(num != 0){
           for(i=1; i<num; i++){
            printf("Informe a %do cidade da escala: ",i+1);
            fflush(stdin);
            fgets(voo.escala[i],100,stdin);
        }
    }
    fflush(stdin);
    printf("A cidade de origem e de destino estao no mesmo hemisfero como referenci a linha de Greenwich:\n");
    printf("1- Sim:\n");
    printf("2- Nao:\n");
    printf("Resposta:");
    scanf("%d",&op);
    printf("Informe o fuso horario da cidade de origem ate a linha de Greenwich:");
    scanf("%d",&fuso1);
    printf("Informe o fuso horario da cidade de destino ate a linha de Greenwich:");
    scanf("%d",&fuso2);

        switch(op){

            case 1:
                fuso = fuso1 - fuso2;
                chegada = voo.horaP + voo.hora + fuso;
                break;

            case 2:
                printf("Seu lugar de origem:\n");
                printf("1- Oeste:\n");
                printf("2- Leste:\n");
                printf("Resposta:");
                scanf("%d",&lado);

                    if(lado == 1){
                        fuso = fuso1 + fuso2;
                        chegada = voo.horaP + voo.hora + fuso;
                        if(chegada > 24){
                                chegada = chegada - 24;
                                dia = 1;
                        }

                    }
                    if(lado == 2){
                        fuso = fuso1 + fuso2;
                        chegada = voo.horaP + voo.hora - fuso;
                            if(chegada > 24){
                                chegada = chegada - 24;
                                dia = 1;
                            }
                    }
                break;
        }


    printf("\n\nTempo de viagem:%d horas e %d minutos\n",voo.hora,voo.minuto);
    printf("Horario do vou:%d horas e %d minutos\n",voo.horaP,voo.minutoP);
    printf("A qunatidade de passageiros:%d\n",voo.passageiro);
    printf("Cidade de origem:%s",voo.origem);
    printf("Cidade de destino:%s",voo.destino);
    if(num != 0){
        for(i=0;i<num;i++){
            fflush(stdin);
            printf("Cidade(s) de escalas:%s",voo.escala[i]);
        }
    }
    printf("Horario previsto de chegada:%d horas e %d minutos",chegada,voo.minutoP);
    if(dia == 1){
        printf("\nChegada um dia apos o dia do embarque do vou.\n");
    }
    printf("\n\n");
return 0;
}
