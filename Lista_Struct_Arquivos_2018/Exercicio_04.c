#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    char str[20],str2[20],c;

    printf("Informe o nome do primeiro arquivo:");
    scanf("%s",str);
    fflush(stdin);
    printf("Informe o nome do segundo arquivo:");
    scanf("%s",str2);

    FILE *arq;
    FILE *arq2;
    FILE *arq3;

    arq = fopen(str,"r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }

    arq2 = fopen(str2,"r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo 2.\n\n");
        system("pause");
        exit(1);
    }

    arq3 = fopen("texto_3.txt","w");
    if(arq == NULL){
        printf("Erro na abertura do arquivo 3.\n\n");
        system("pause");
        exit(1);
    }

    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            break;
        }
        fputc(c,arq3);
    }

    fclose(arq);

    while(1){
        c = fgetc(arq2);
        if(feof(arq2)){
            break;
        }
        fputc(c,arq3);
    }

    fclose(arq2);
    fclose(arq3);
return 0;
}
