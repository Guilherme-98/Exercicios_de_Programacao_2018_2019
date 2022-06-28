#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct Funcionarios{
    char nome[100];
    char ano[100];
    int ano2;
    char sexo[100];
    char produtividade[100];
    int produtividade2;
};

int main (){
    int i,produtividadeT = 0,j,contador = 0;
    struct Funcionarios a[12];

    FILE *arq;
    arq = fopen("func.txt","r");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }

    FILE *arq2;
    arq2 = fopen("prod.txt","w+");
        if(arq2 == NULL){
            printf("Erro na abertuta do arquivo2.\n\n");
            system("pause");
            exit(1);
            }

    FILE *arq3;
    arq3 = fopen("naoprod.txt","w+");
        if(arq3 == NULL){
            printf("Erro na abertuta do arquivo3.\n\n");
            system("pause");
            exit(1);
            }

    for(i=0;i<12;i++){
        fgets(a[i].nome,100,arq);

        fgets(a[i].ano,100,arq);
        a[i].ano2 = atoi(a[i].ano);

        fgets(a[i].sexo,100,arq);

        fgets(a[i].produtividade,100,arq);
        a[i].produtividade2 = atoi(a[i].produtividade);

        produtividadeT = produtividadeT + a[i].produtividade2;

        printf("%s",a[i].nome);
        printf("%d\n",a[i].ano2);
        printf("%s",a[i].sexo);
        printf("%d\n",a[i].produtividade2);

    }
    produtividadeT = produtividadeT / 12;

    printf("\nMedia de produtividade:%d\n",produtividadeT);

    rewind(arq);

    for(i=0;i<12;i++){

        fgets(a[i].nome,100,arq);

        fgets(a[i].ano,100,arq);
        a[i].ano2 = atoi(a[i].ano);

        fgets(a[i].sexo,100,arq);

        fgets(a[i].produtividade,100,arq);
        a[i].produtividade2 = atoi(a[i].produtividade);


        if(a[i].produtividade2 > produtividadeT){
            fprintf(arq2,"%s", a[i].nome);
            fprintf(arq2,"%d\n", a[i].ano2);
            fprintf(arq2,"%s", a[i].sexo);
            fprintf(arq2,"%d\n", a[i].produtividade2);

        }

        else{
            fprintf(arq3,"%s", a[i].nome);
            fprintf(arq3,"%d\n", a[i].ano2);
            fprintf(arq3,"%s", a[i].sexo);
            fprintf(arq3,"%d\n", a[i].produtividade2);
        }

    }

    fclose(arq);
    fclose(arq2);
    fclose(arq3);
return 0;
}
