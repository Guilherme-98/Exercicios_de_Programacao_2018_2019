#include<stdio.h>
#include<stdlib.h>
int main (){
    char c,str[100];
    int contador2=0,contador3=0,contador4=0,contador5=0,porta,pessoa;
    int contador = 0, i=0;

    FILE *arq;

    arq = fopen("car.data.txt","r");
        if(arq == NULL){
            printf("Erro na abertura do arquivo.\n");
            system("pause");
            exit(1);
        }
    while(1){
        if(contador == 2){
            fscanf(arq,"%d",&porta);
            if(porta == 2){
                contador2++;
            }
            if(porta == 3){
                contador3++;
            }
            if(porta == 4){
                contador4++;
            }
            if(porta == 5){
                contador5++;
            }
        }

    c = fgetc(arq);
        if(feof(arq)){
            break;
        }

        while(c != ','){
            str[i] = c;
            i++;
            c = fgetc(arq);
            if(feof(arq)){
                break;
            }
        }

        if(c == ','){
            contador++;
        }
        if(contador == 6){
            i = 0; // para nao passar de 100 caracter ja que nao tem importancia a parte de string//
            contador = 0; // cada vez que ele terminar de ler uma linha ele volta a ter contador igaul a zero//
        }
    }

    printf("Carro com 2 porta:%d\n",contador2);
    printf("Carro com 3 porta:%d\n",contador3);
    printf("Carro com 4 porta:%d\n",contador4);
    printf("Carro com 5 porta:%d\n",contador5);

    fclose(arq);

return 0;
}


