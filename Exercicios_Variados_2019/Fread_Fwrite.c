#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    int i,vet[5],total,total_lido;
    char str[25];
    FILE *arq;

    arq = fopen("Teste","w+b");
    if(arq == NULL){
        printf("ERRO.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo criado com sucesso.\n\n");
    }
    printf("forneca 5 elementos:\n");
    for(i=0;i<5;i++){
        scanf("%d",&vet[i]);
    }

    total = fwrite(vet,sizeof(int),5,arq);
    if(total != 5){
        printf("Erro na escrita do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo escrito com sucesso.\n\n");
    }
    fclose(arq);

    arq = fopen("Teste","r+b");
    if(arq == NULL){
        printf("ERRO.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo criado com sucesso.\n\n");
    }

    total_lido = fread(vet,sizeof(int),5,arq);
    if(total_lido != 5){
        printf("Erro na leitura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo lido com sucesso.\n\n");
    }
    fclose(arq);

    for(i=0;i<5;i++){
            printf("%d ",vet[i]);
        }

return 0;
}
