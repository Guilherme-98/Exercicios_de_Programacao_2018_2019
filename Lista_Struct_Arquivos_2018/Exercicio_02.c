#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void caracter(FILE *arq){
char c, x;
int contador = 0;
    fflush(stdin);
    printf("Forneca a letra que deseja: ");
    scanf("%c",&x);

 while(1){
            if(feof(arq)){
                break;
            }
            if (c == x)
                contador++;
                c = fgetc(arq);
    }
    printf("O caracter %c apareceu:%d\n\n",x,contador);

}
int main (){
    char str[50],c, x;
    int contador=0;

    printf("Forneca o nome do arquivo:");
    scanf("%s",str);

    FILE *arq;

    arq = fopen(str,"r");
    if(arq == NULL){
        printf("Erro na abertura do arquivo.\n\n");
        system("pause");
        exit(1);
    }
    else{
        printf("O arquivo abriu corretamente.\n\n");
    }

    caracter(arq);

    fclose(arq);
return 0;
}
