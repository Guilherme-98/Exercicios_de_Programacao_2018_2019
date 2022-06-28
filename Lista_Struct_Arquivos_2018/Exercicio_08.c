#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    int i;
    char c;
    FILE *arq;
    FILE *arq2;


    arq = fopen("numeros.bin","wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    for(i=0;i<10;i++){
        fputc(i,arq);
    }
    fclose(arq);

    arq = fopen("numeros.bin","rb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    arq2 = fopen("pares.bin","wb");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            break;
        }
        if(c % 2 == 0){
            fputc(c,arq2);
        }
    }

    fclose(arq);
    fclose(arq2);

    arq2 = fopen("pares.bin","rb");
    if(arq2 == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    while(1){
        c = fgetc(arq2);
        if(feof(arq2)){
            break;
        }
        printf("%d ",c);
    }
    fclose(arq2);

return 0;
}
