#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (){
    char str[20],c;
    int contcaracter = 0, contlinha = 1, contpalavra = 0, contadoraux = 0;
    int dois = 0, tres = 0, quatro = 0, cinco = 0, aux = 0;

    printf("Informe o nome do arquivo:");
    scanf("%s",str);

    FILE *arq;
    arq = fopen(str,"r");
    if(arq == NULL){
        printf("Erro na abertura do aquivo.\n\n");
        system("pause");
        exit(1);
    }
    while(1){
        c = fgetc(arq);
        if(feof(arq)){
            break;
        }
        aux++;
        if(c == ' ' || c == '.' || c == '\n' || c == ','){
                aux--;   //diminui 1 pelo motivo de ter contado +1 por ser vdd uma das contiçoes acima no if//
                if(aux == 2){
                    dois++;
                }
                if(aux == 3){
                    tres++;
                }
                if(aux == 4){
                    quatro++;
                }
                if(aux >= 5){
                    cinco++;
                }
                aux = 0;

        }else{
                contcaracter++;
        }
        if(c == '\n'){
            contlinha++;
        }
        contadoraux++;
        if(contadoraux > 1){
                if(c == ' ' || c == '.'){
                    contpalavra++;
                    contadoraux = 0;
                }
        }
    }

    printf("O numero de caracter:%d\n",contcaracter);
    printf("O numero de linha(s):%d\n",contlinha);
    printf("O numero de palavra:%d\n",contpalavra);
    printf("Palavra com dois caracter:%d\n",dois);
    printf("Palavra com tres caracter:%d\n",tres);
    printf("Palavra com quatro caracter:%d\n",quatro);
    printf("Palavra com ou mais de cinco caracter:%d\n\n",cinco);
return 0;
}
