#include<stdio.h>
#include<stdlib.h>
struct Frase{
    char conteudo[500];
};
int main (){
    int linha,i;
    char aux[20],frase[30];

    FILE *arq;
    arq = fopen("musica.txt","r");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.");
            system("pause");
            exit(1);
        }

        FILE *arq2;
        arq2 = fopen("resultado1.txt","w+");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo2.");
            system("pause");
            exit(1);
        }

        printf("Informe a frase:");
        fflush(stdin);
        fgets(aux,20,stdin);
        do{
            printf("Informe a linha q deseja substituir na musica:");
            scanf("%d",&linha);
        }while(linha<1 || linha>39);

        struct Frase a[40];

        for(i=0;i<40;i++){
            if(feof(arq)){
                break;
            }
            fgets(a[i].conteudo,500,arq);
            fflush(stdin);

        }
        for(i=0;i<40;i++){
            if(i == linha-1){
                fputs(aux,arq2);
            }
            else{
                fputs(a[i].conteudo,arq2);
            }
        }
fclose(arq);
fclose(arq2);
return 0;
}
