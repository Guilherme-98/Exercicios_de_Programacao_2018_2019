#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

int id = 0;
int lastPos = 0;

typedef struct{
    int dia, mes, ano;
}Data;

typedef struct{
    int hora, minuto;
}Hora;

typedef struct{
  Hora hora;
  Data data;
  char local[50];
  char descricao[300];
  int id;  
}Compromisso;

Compromisso *compromissos;

void cadastraCompromisso(int d, int m, int a, int h, int min, char local[50], char des[300]){
    Data dt;
    dt.dia = d; 
    dt.mes = m;
    dt.ano = a;
    Hora hd;
    hd.hora = h;
    hd.minuto = min;
    Compromisso novo;
    novo.hora = hd;
    novo.data = dt;
    strcpy(novo.local, local);
    strcpy(novo.descricao, des);
    novo.id = id;
    compromissos[lastPos] = novo;
    lastPos++;
    id++;

}

void salvar(){
    FILE *arq;
    arq = fopen("agenda.txt", "w+");
    fwrite(compromissos, sizeof(Compromisso), 100, arq);
    fclose(arq);
}

void recarregarCompromissos(){
    int lastpos = 0;
    Compromisso *novo = malloc(100*sizeof(Compromisso));
    memset(novo, 0, 100*sizeof(Compromisso));
    for(int i = 0; i < 100; i++){
        if(compromissos[i].id != -1){
            novo[lastpos] = compromissos[i];
            lastpos++;
        }
    }
    free(compromissos);
    compromissos = malloc(100*sizeof(Compromisso));
    memcpy(compromissos, novo, 100*sizeof(Compromisso));
    lastPos = lastpos;
    salvar();
}

int main(){
    compromissos = malloc(100*sizeof(Compromisso));
    memset(compromissos, 0, 100*sizeof(Compromisso));
    FILE *arq;
    arq = fopen("agenda.txt", "r");
    if(arq != NULL){
        fread(compromissos, sizeof(Compromisso), 100, arq);
        fclose(arq);
    }
    

    int opc = 0;
    while(opc != 5){
        printf("\n1. Cadastrar evento;\n2.Consultar eventos\n3.Modificar um evento;\n4.Remover um compromisso;\n5.Sair\n");
        scanf("%d", &opc);

        if(opc==1){
                int d,m,a;
                printf("Insira a data (dia/mes/ano)\n");
                scanf("%d/%d/%d", &d, &m, &a);
                int h, min;
                printf("Insira a hora (hora:minuto)\n");
                scanf("%d:%d", &h, &min);
                char ll[50];
                printf("Insira o local\n");
                fgets(ll, 50, stdin); //bug ta monstro
                fgets(ll, 50, stdin);
                ll[strlen(ll)-1]='\0';
                char des[300];
                printf("Insira a descrição\n");
                fgets(des, 300, stdin);
                des[strlen(des)-1]='\0';
                if(h < 0 || h > 23 || min < 0|| min > 59 || d > 31 || d < 1 || m < 1 || m > 12){
                    printf("Dados inválidos\n");
                }else{
                cadastraCompromisso(d,m,a,h,min,ll,des);
                }
                salvar();
        }else if(opc == 2){
                printf("Insira uma data para consulta\n");
                int d, m, a;
                scanf("%d/%d/%d", &d, &m, &a);
                int list[100];
                char listaDoDia[24][60][300];
                for(int i = 0; i < 24; i++){
                    for(int x  = 0; x < 60; x++){
                        sprintf(listaDoDia[i][x], "-1");
                    }
                }
                bool temalgo = false;
                for(int i = 0; i < 100; i++){
                    if(compromissos[i].data.dia == d && compromissos[i].data.mes == m && compromissos[i].data.ano == a){
                        sprintf(listaDoDia[compromissos[i].hora.hora][compromissos[i].hora.minuto], "(%d) %s : %s\n", compromissos[i].id,compromissos[i].descricao, compromissos[i].local);
                        temalgo = true;
                    }
                }
                if(!temalgo){
                    printf("Não há eventos neste dia\n");
                }else{
                    for(int i = 0; i < 24; i++){
                        for(int meudeus = 0; meudeus < 60; meudeus++){
                            if(strcmp(listaDoDia[i][meudeus], "-1")!=0){
                                printf("%d:%d - %s", i, meudeus, listaDoDia[i][meudeus]);
                            }
                        }
                    }
                }

        }else if(opc == 3){
            printf("Insira o ID do evento a ser modificado\n");
            int id;
            scanf("%d", &id);
            bool achou = false;
            for(int i = 0; i < 100; i++){
             if(compromissos[id].id == id){
                  achou = true;
                  printf("O que deseja mudar?\nData(1) Hora(2) Descrição(3) Local(4)\n");
                  int optd;
                  scanf("%d", &optd);
                  int d, m, a, h, min;
                  char ll[50], des[300];
                  if(optd==1){
                     printf("Insira a data (dia/mes/ano)\n");
                    scanf("%d/%d/%d", &d, &m, &a);
                  }else if(optd==2){
                    printf("Insira a hora (hora:minuto)\n");
                    scanf("%d:%d", &h, &min);
                  }else if(optd==4){
                     printf("Insira o local\n");
                     fgets(ll, 50, stdin);
                     fgets(ll, 50, stdin);   ll[strlen(ll)-1]='\0';
                  }else if(optd==3){
                    printf("Insira a descrição\n");
                    fgets(des, 300, stdin);
                    fgets(des, 300, stdin);
                    des[strlen(des)-1]='\0';
                  }

                  if(h < 0 || h > 23 || min < 0|| min > 59 || d > 31 || d < 1 || m < 1 || m > 12){
                    printf("Dados inválidos\n");
                }else{
                if(optd==1){
                    compromissos[id].data.dia = d;
                       compromissos[id].data.mes = m;
                          compromissos[id].data.ano = a;
                  }else if(optd==2){
                       compromissos[id].hora.hora = h;
                          compromissos[id].hora.minuto = min;
                  }else if(optd==3){
                    strcpy(compromissos[id].local, ll);
                  }else if(optd==4){
                       strcpy(compromissos[id].descricao, des);
                  }
                }
                break;
             }
            }
            if(!achou){
                 printf("ID não existente\n");
            }
            salvar();
        }else if(opc == 4){
            printf("Insira o ID que deseja excluir\n");
            int id;
            scanf("%d", &id);
            bool achou = false;
            for(int i = 0; i < 100; i++){
                if(compromissos[i].id == id){
                    compromissos[i].id = -1;
                    achou = true;
                    break;
                }
            }
            if(achou){
            recarregarCompromissos();
            }else{
                printf("ID não encontrado\n");
            }
        }
    }


 

    return 0;
}