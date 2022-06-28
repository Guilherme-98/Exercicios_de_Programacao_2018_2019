#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void linhas(FILE *arq){
int contador = 1;
char c;

    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            break;
        }
        printf("%c",c);
        if(c == '\n'){
            contador++;
        }
    }
    printf("\nO arquivo tem %d linha(s).\n\n",contador);
}
int main (){
    char str[50],c;
    FILE *arq;

    printf("Informe o nome do arquivo:");
    scanf("%s",str);

    arq = fopen(str,"r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("O arquivo abriu corretamente.\n\n");
    }

    linhas(arq);

    fclose(arq);
return 0;
}
