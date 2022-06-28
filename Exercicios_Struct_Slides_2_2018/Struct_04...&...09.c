#include<stdio.h>
#include<string.h>
#include<stdbool.h>
struct Banda{
    char nome[25];
    char tipo[25];
    int cont;
    int posicao;
};
void preencher(struct Banda a[], int n){
    int i;
    for(i=0;i<n;i++){
        fflush(stdin);
        printf("\n\nInforme o nome da banda:");
        fgets(a[i].nome,25,stdin);
        fflush(stdin);
        printf("Informe o tipo de musica dessa banda:");
        fgets(a[i].tipo,25,stdin);

        printf("Informe o numero de integrantes:");
        scanf("%d",&a[i].cont);

        printf("Informe de 1 a 5 para o ranking de melhores bandas:");
        scanf("%d",&a[i].posicao);

        printf("\n\n");
    }
}
void escolher(struct Banda a[],int n){
    printf("\n\nBanda:%s",a[n].nome);
    printf("Tipo de musica:%s",a[n].tipo);
    printf("Numero de integrantes:%d\n",a[n].cont);
    printf("Ranking:%d\n\n",a[n].posicao);
}
void comparar(struct Banda a[], char t[]){
    int i,igual[5];
    for(i=0;i<5;i++){
        igual[i]=strcmp(a[i].tipo,t);

        if(igual[i] == 0){
            printf("\n\nBanda:%s",a[i].nome);
            printf("Tipo de musica:%s",a[i].tipo);
            printf("Numero de integrantes:%d\n",a[i].cont);
            printf("Ranking:%d\n\n",a[i].posicao);
        }
    }
}
void bandafavorita(struct Banda a[], char banda[]){
    int i, contador =0,igual[5];
    for(i=0;i<5;i++){
        igual[i]=strcmp(a[i].nome,banda);

        if(igual[i] == 0){
            contador ++;
            printf("\n\nSim. Essa banda esta entre as suas favoritas.\n");
            printf("Banda:%s",a[i].nome);
            printf("Tipo de musica:%s",a[i].tipo);
            printf("Numero de integrantes:%d\n",a[i].cont);
            printf("Ranking:%d\n\n",a[i].posicao);
        }
    }

    if(contador == 0){
        printf("\n\nNao. Essa banda nao esta entre as suas favoritas.\n\n");
    }

}

int main(){
    int num,op,exe;
    char tipo[25],banda[25];
    struct Banda a[5];

    printf("**********************************************\n");
    printf("* 1-Preencher a struct Bandas.               *\n");
    printf("* 2-Exibir informacoes da banda que deseja.  *\n");
    printf("* 3-Exibir tipos de musicas iguais.          *\n");
    printf("* 4-Banda favorita.                          *\n");
    printf("* 5-Sair.                                    *\n");
    printf("**********************************************\n");

    do{
        printf("Ecolher uma opcao:");
        scanf("%d",&op);
    }while(op<1 || op >6);

    while(op){
        switch (op){

        case 1:
            exe = 1;
             preencher(a,5);
                break;

        case 2:
            if(exe == 1){
            printf("\n\nEscolha de 1 a 5 para exibir as infromacoes da banda que deseja:");
            scanf("%d",&num);

            num = num -1;

            escolher(a, num);
            }
            else{
                printf("Voce ainda nao preencheu os dados.\n\n");
            }
                break;

        case 3:
            if(exe == 1){
            fflush(stdin);
            printf("\n\nForneca um tipo de musica:");
            fgets(tipo,25,stdin);
            comparar(a,tipo);
            }
            else{
                printf("Voce ainda nao preencheu os dados.\n\n");
            }
                break;

        case 4:
            if(exe == 1){
            fflush(stdin);
            printf("\n\nForneca o nome da banda:");
            fgets(banda,25,stdin);
            bandafavorita(a,banda);
            }
            else{
                printf("Voce ainda nao preencheu os dados.\n\n");
            }
                break;

        case 5:
                return 0;

        default :
            printf("\n\nOperacao invalida. Tente Novamente!\n");
                break;

    }


    printf("**********************************************\n");
    printf("* 1-Preencher a struct Bandas.               *\n");
    printf("* 2-Exibir informacoes da banda que deseja.  *\n");
    printf("* 3-Exibir tipos de musicas iguais.          *\n");
    printf("* 4-Banda favorita.                          *\n");
    printf("* 5-Sair.                                    *\n");
    printf("**********************************************\n");

     do{
        printf("Ecolher uma opcao:");
        scanf("%d",&op);
    }while(op<1 || op >5);
}
return 0;
}
