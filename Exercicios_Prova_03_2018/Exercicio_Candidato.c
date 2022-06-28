#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct Candidato{
    char nome[20];
    char sigla[10];
    char num[10];
    int aux;
    int contador;
};
int main (){
    int i,pessoa,pessoa2,nulo = 0,k,op,maior = 0,voto;
    bool exe = true;
    struct Candidato c[8];

    FILE *arq;

    arq = fopen("candidatos.txt","r");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }

    FILE *arq2;

    arq2 = fopen("resultado.txt","w+");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }

        for(i=0;i<8;i++){
            fgets(c[i].nome,20,arq);
            fgets(c[i].num,10,arq);
            c[i].aux = atoi(c[i].num);
            fgets(c[i].sigla,10,arq);
            if(feof(arq)){
                break;
            }
        }
        c[0].contador = 0;
        c[1].contador = 0;
        c[2].contador = 0;
        c[3].contador = 0;
        c[4].contador = 0;
        c[5].contador = 0;
        c[6].contador = 0;
        c[7].contador = 0;

    while(op){
            if(exe == false){
                fclose(arq);
                fclose(arq2);
                return 0;
            }

        printf("*****************\n");
        printf("* Deseja votar: *\n");
        printf("* 1-SIM         *\n");
        printf("* 2-NAO         *\n");
        printf("*****************\n");
        printf("Escolha:");
        scanf("%d",&op);
        printf("\n");

        switch(op){
            case 1:
                printf("Forneca o numero do candidato que deseja votar:");
                scanf("%d",&voto);
                    if(voto != c[0].aux &&  voto != c[1].aux && voto != c[2].aux && voto != c[3].aux && voto != c[4].aux && voto != c[5].aux && voto != c[6].aux && voto != c[7].aux){
                        nulo++;
                    }
                    if(voto == c[0].aux){
                        c[0].contador++;
                    }

                    if(voto == c[1].aux){
                        c[1].contador++;
                    }

                    if(voto == c[2].aux){
                        c[2].contador++;
                    }

                    if(voto == c[3].aux){
                        c[3].contador++;
                    }

                    if(voto == c[4].aux){
                        c[4].contador++;
                    }

                    if(voto == c[5].aux){
                        c[5].contador++;
                    }

                    if(voto == c[6].aux){
                        c[6].contador++;
                    }

                    if(voto == c[7].aux){
                        c[7].contador++;
                    }
                        break;
            case 2:
                for(i=0;i<8;i++){
                    if(c[i].contador > maior){
                        maior = c[i].contador;
                        pessoa = i;
                        k = 0;
                    }
                    if( pessoa != i && maior == c[i].contador){
                            k = 1;
                            pessoa2 = i;

                    }
                }

                if(k == 0){
                    fprintf(arq2,"Vitoria no primeiro turno. Com %d votos. Vecedor:%s",c[pessoa].contador,c[pessoa].nome);
                    fprintf(arq2,"Votos nulos:%d",nulo);
                }

                if(k == 1){
                    fprintf(arq2,"Votacao indefinida.");
                    fprintf(arq2,"Segundo turno entre:\n%s%s",c[pessoa].nome,c[pessoa2].nome);
                    fprintf(arq2,"Votos nulos:%d",nulo);
                }
                exe = false;
                break;

            default:
                printf("Escolha invalida. Favor escolhar um opcao valida.\n");
                break;
        }

    }
return 0;
}
