#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Cidade{
    char nome[20];
    int populacao;
    double area;
};
void leitura(FILE *arq, struct Cidade a[]){
    char *aux1;
    int *aux2;
    double *aux3;
    int i = 0;

        while(1){
            aux1 = a[i].nome;
            aux2 = &a[i].populacao;
            aux3 = &a[i].area;

            fscanf(arq, "%s" "%d" "%lf", aux1, aux2,aux3);
            if(feof(arq)){
                break;
            }
            i++;
        }
}
int buscar(struct Cidade *exe){
    char nome[20];
    int i = 0;

        fflush(stdin);
        printf("Informe o nome da cidade q deseja:");
        scanf("%s",nome);
            for(i=0;i<40;i++){
                if(strcmp((exe+i)->nome,nome) == 0){
                    printf("Cidade:%s localizada.\n",nome);
                        return i;
                }
            }

            printf("Cidade:%s nao localizada.\n");
            return -1;
}
int inferiorpop(struct Cidade *exe, int populacao){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
    while(1){
        if((exe+i)->populacao < populacao){
            exe2 = (exe+i);
            printf("Cidade:%s\n",(exe2)->nome);
            printf("Populacao:%d\n\n",(exe2)->populacao);
            exe2++;
        }
            i++;
            if(i==40){
                return 0;
            }
    }
}
int igualpop( struct Cidade *exe, int populacao){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
    while(1){
        if((exe+i)->populacao == populacao){
            exe2 = (exe+i);
            printf("Cidade:%s\n",(exe2)->nome);
            printf("Populacao:%d\n\n",(exe2)->populacao);
            exe2++;
        }
            i++;
            if(i==40){
                return 0;
            }
    }
}
int superiorpop( struct Cidade *exe, int populacao){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
    while(1){
        if((exe+i)->populacao > populacao){
            exe2 = (exe+i);
            printf("Cidade:%s\n",(exe2)->nome);
            printf("Populacao:%d\n\n",(exe2)->populacao);
            exe2++;
        }
            i++;
            if(i==40){
                return 0;
            }
    }
}
int popcidade(struct Cidade *exe){
    int execucao, populacao;

        printf("Informe a comparacao que deseja fazer na populacao da cidade.\n\n");
        printf("1 - POPULACAO INFERIOR.\n");
        printf("2 - POPULACAO IGUAL.\n");
        printf("3 - POPULACAO SUPERIOR.\n\n");

        do{
            printf("Escolha o que deseja:");
            scanf("%d",&execucao);
        }while(execucao < 0 || execucao > 4);

        printf("Agora informe o numero da populacao que deseja fazer a comparacao:");
        scanf("%d",&populacao);

        switch (execucao){
            case 1:
                printf("\nCidades com populacao inferior a %d.\n\n",populacao);
                    inferiorpop(exe,populacao);
                        return 0;
            case 2:
                printf("\nCidades com populacao igual a %d.\n\n",populacao);
                   igualpop(exe,populacao);
                        return 0;
            case 3:
                printf("\nCidades com populacao superior a %d.\n\n",populacao);
                   superiorpop(exe,populacao);
                        return 0;
        }
}
int inferiorA(struct Cidade *exe, double area){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
       while(1){
            if((exe+i)->area < area){
                exe2 = (exe+i);
                printf("Cidade:%s\n",(exe2)->nome);
                printf("Area:%lf\n\n",(exe2)->area);
                exe2++;
            }
            i++;
            if(i==40){
                return 0;
            }
        }
}
int igualA(struct Cidade *exe, double area){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
        while(1){
            if((exe+i)->area == area){
                exe2 = (exe+i);
                printf("Cidade:%s\n",(exe2)->nome);
                printf("Area:%lf\n\n",(exe2)->area);
                exe2++;
            }
            i++;
            if(i==40){
                return 0;
            }
        }
}
int superiorA(struct Cidade *exe, double area){
    struct Cidade aux[40];
    struct Cidade *exe2;
    int i = 0;

    exe2 = aux;
        while(1){
            if((exe+i)->area > area){
                exe2 = (exe+i);
                printf("Cidade:%s\n",(exe2)->nome);
                printf("Area:%lf\n\n",(exe2)->area);
                exe2++;
            }
                i++;
                if(i==40){
                    return 0;
                }
        }
}
int areacidade(struct Cidade *exe){
    int execucao;
    double area;

        printf("Informe a comparacao que deseja fazer na area da cidade.\n\n");
        printf("1 - AREA INFERIOR.\n");
        printf("2 - AREA IGUAL.\n");
        printf("3 - AREA SUPERIOR.\n\n");
        do{
            printf("Escolha o que deseja:");
            scanf("%d",&execucao);
        }while(execucao < 0 || execucao > 4);

        printf("Agora informe o numero da area que deseja fazer a comparacao:");
        scanf("%lf",&area);

        switch (execucao){
            case 1:
                printf("\nCidades com area inferior a %lf.\n\n",area);
                inferiorA(exe,area);
                    return 0;

            case 2:
                printf("\nCidades com area igual a %lf.\n\n",area);
                igualA(exe,area);
                    return 0;

            case 3:
                printf("\nCidades com area superior a %lf.\n\n",area);
                superiorA(exe,area);
                    return 0;
        }
}
int poparea(struct Cidade *exe){
    int execucao1, execucao2, populacao, i = 0,op;
    struct Cidade aux[40];
    struct Cidade *exe2;
    double area;

    exe2 = aux;

        printf("Informe a comparacao que deseja fazer na populacao da cidade.\n\n");
        printf("1 - POPULACAO INFERIOR.\n");
        printf("2 - POPULACAO IGUAL.\n");
        printf("3 - POPULACAO SUPERIOR.\n\n");

        do{
            printf("Escolha o que deseja:");
            scanf("%d",&execucao1);
        }while(execucao1 < 0 || execucao1 > 4);

        printf("Agora informe o numero da populacao que deseja fazer a comparacao:");
        scanf("%d",&populacao);


        printf("\nInforme a comparacao que deseja fazer na area da cidade.\n\n");
        printf("1 - AREA INFERIOR.\n");
        printf("2 - AREA IGUAL.\n");
        printf("3 - AREA SUPERIOR.\n\n");

        do{
            printf("Escolha o que deseja:");
            scanf("%d",&execucao2);
        }while(execucao2 < 0 || execucao2 > 4);

        printf("Agora informe o numero da area que deseja fazer a comparacao:");
        scanf("%lf",&area);
        printf("\n");

        if(execucao1 == 1 && execucao2 == 1){
            op = 1;
        }

        else if(execucao1 == 1 && execucao2 == 2){
            op = 2;
        }

        else if(execucao1 == 1 && execucao2 == 3){
            op = 3;
        }

        else if(execucao1 == 2 && execucao2 == 1){
            op = 4;
        }

        else if(execucao1 == 2 && execucao2 == 2){
            op = 5;
        }
        else if(execucao1 == 2 && execucao2 == 3){
            op = 6;
        }

        else if(execucao1 == 3 && execucao2 == 1){
            op = 7;
        }

        else if(execucao1 == 3 && execucao2 == 2){
            op = 8;
        }

        else if(execucao1 == 3 && execucao2 == 3){
            op = 9;
        }

    for(i=0;i<40;i++){
        switch(op){
            case 1:
                if(((exe+i)->populacao < populacao) && ((exe+i)->area < area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 2:
                if(((exe+i)->populacao < populacao) && ((exe+i)->area == area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 3:
                if(((exe+i)->populacao < populacao) && ((exe+i)->area > area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 4:
                if(((exe+i)->populacao == populacao) && ((exe+i)->area < area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 5:
                if(((exe+i)->populacao == populacao) && ((exe+i)->area == area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 6:
                if(((exe+i)->populacao == populacao) && ((exe+i)->area > area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 7:
                if(((exe+i)->populacao > populacao) && ((exe+i)->area < area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 8:
                if(((exe+i)->populacao > populacao) && ((exe+i)->area == area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
            case 9:
                if(((exe+i)->populacao > populacao) && ((exe+i)->area > area)){
                    exe2 = (exe+i);
                    printf("Cidade:%s\n",exe2->nome);
                    printf("Populacao:%d\n",exe2->populacao);
                    printf("Area:%lf\n\n",exe2->area);
                    exe2++;
                }
                break;
        }
    }
return 0;
}
int cidades(struct Cidade *exe){
    int i = 0, aux1, aux2;

       printf("Primeira cidade.\n");
       aux1 = buscar(exe);
            if(aux1 == -1){
                return 0;
            }

        printf("Segunda cidade.\n");
        aux2 = buscar(exe);
            if(aux2 == -1){
                return 0;
            }

        if((exe+aux1)->populacao > (exe+aux2)->populacao){
            printf("\nA cidade %s tem a populacao de %d habitantes, maior que a cidade %s com populacao de %d habtantes.\n",(exe+aux1)->nome,(exe+aux1)->populacao,(exe+aux2)->nome,(exe+aux2)->populacao);
        }else{
             printf("\nA cidade %s tem a populacao de %d habitantes maior que a cidade %s com populacao de %d habitantes.\n",(exe+aux2)->nome,(exe+aux2)->populacao,(exe+aux1)->nome,(exe+aux1)->populacao);
        }

        if((exe+aux1)->area > (exe+aux2)->area){
            printf("A cidade %s tem a area de %lf, maior que a cidade %s com area de %lf.\n\n",(exe+aux1)->nome,(exe+aux1)->area,(exe+aux2)->nome,(exe+aux2)->area);
        }else{
            printf("A cidade %s tem a area de %lf, maior que a cidade %s com area de %lf.\n\n",(exe+aux2)->nome,(exe+aux2)->area,(exe+aux1)->nome,(exe+aux1)->area);
        }
return 0;
}
int main (){
    struct Cidade a[40];
    struct Cidade *exe;
    int op;

        FILE *arq;
            arq = fopen("data.txt","r");
                if(arq == NULL){
                    printf("Erro na abertura do arquivo.\n");
                    system("pause");
                    exit(1);
                }
                else{
                    printf("Arquivo lido com sucesso.\n");
                }
        exe = a;
        leitura(arq,a);

        while(1){
            printf("**************************************\n");
            printf("* 0 - SAIR.                          *\n");
            printf("* 1 - BUSCAR NOME DA CIDADE.         *\n");
            printf("* 2 - COMPARAR POPULACAO.            *\n");
            printf("* 3 - COMPARAR AREA.                 *\n");
            printf("* 4 - COPARACAO POPULACAO E AREA.    *\n");
            printf("* 5 - COMPARACAO ENTRE DUAS CIDADES. *\n");
            printf("**************************************\n");
            printf("Escolher a opcao:");
            scanf("%d",&op);
            system("cls");

                switch(op){
                    case 0:
                        printf("Programa encerrou.\n");
                        fclose(arq);
                        return 0;

                    case 1:
                        buscar(exe);
                            break;

                    case 2:
                        popcidade(exe);
                            break;

                    case 3:
                        areacidade(exe);
                            break;

                    case 4:
                        poparea(exe);
                            break;

                    case 5:
                        cidades(exe);
                            break;

                    default:
                        printf("Operacao invalida. Informe uma operacao correta.\n");
                            break;
                }
        }
return 0;
}
