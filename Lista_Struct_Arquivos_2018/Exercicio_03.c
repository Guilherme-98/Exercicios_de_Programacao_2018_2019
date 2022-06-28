#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    char str[50],c;
    printf("Forneca o nome do arquivo.\n");
    scanf("%s",str);

    FILE *arq;
    FILE *arq2;

    arq = fopen(str, "r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo abriu corretamente.\n\n");
    }

    arq2 = fopen("arquivo_sub.txt", "w");
    if(arq2 == NULL){
        printf("Erro na abertura do arquivo 2.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("Arquivo 2 abriu corretamente.\n\n");
    }

    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            break;
        }
         if(c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O'  || c == 'u' || c == 'U'){
            fputc('*',arq2);
         }
         else {
                fputc(c,arq2);
        }
    }
    fclose(arq);
    fclose(arq2);
return 0;
}
