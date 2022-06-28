#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    char c;
        FILE *arq;
        FILE *arq2;

        arq = fopen("antes.txt","r");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n\n");
            system("pause");
            exit(1);
        }

        arq2 = fopen("depois.txt","w");
        if(arq2 == NULL){
            printf("Erro na abertura do arquivo 2.\n\n");
            system("pause");
            exit(1);
        }

        while(1){
            c = fgetc(arq);
            if(feof(arq)){
                break;
            }
            if(c == ' ' || c == '.' || c == '\n'){
                fputc(c,arq2);
            }
            else{
                 fputc((c-32),arq2);
            }
        }

    fclose(arq);
    fclose(arq2);
return 0;
}
