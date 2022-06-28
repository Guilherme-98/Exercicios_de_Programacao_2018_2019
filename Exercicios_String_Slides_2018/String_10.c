#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
int main (){
    int i,j,aux,contador,k=0,vetoraux[8],maior, linha,posicao[8],aux2,exe=1,primeiro = 1;
    char m[8][8];

    srand( (unsigned)time(NULL) );

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            m[i][j]= 'A'+(char)(rand()%26);
        }
    }

    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf(" %c ",m[i][j]);
        }
        printf("\n");
    }
//****************************CALCULO DAS LINHAS********************************//
printf("\n\nSequencia alfabetica das linhas.");
    for(i=0;i<8;i++){
        printf("\nLinha %d:",i+1);
        primeiro = 1;
        aux2 = 0;
        contador = 0;
        exe = 1;
        for(j=1;j<8;j++){
            if(exe == 1){
                aux = m[i][0];
            }
            if((aux+1) == m[i][j]){
                if(primeiro == 1){

                    printf("%c",aux);
                }
                primeiro = 0;
                aux = m[i][j];
                contador++;
                if(aux2 < contador){
                    printf("%c",m[i][j]);
                    vetoraux[i] = contador;

                    aux2++;
                }
            }else {
                contador = 0;
                aux = m[i][j];
                if(aux2 == 0){
                        vetoraux[i] = 0;

                }
            }
         exe = 0;
        }

    }

    printf("\n");
    //for(i=0;i<8;i++){
       // printf("%d ",vetoraux[i]);
   // }

    //********************CACULO DAS COLUNAS******************
    printf("\n\nSequencia alfabetica das Colunas.");
    for(i=0;i<8;i++){
        printf("\nColuna %d:",i+1);
        primeiro = 1;
        aux2 = 0;
        contador = 0;
        exe = 1;
        for(j=0;j<8;j++){
            if(exe == 1){
                aux = m[0][i];
            }
            if((aux+1) == m[j][i]){
                if(primeiro == 1){

                    printf("%c",aux);
                }
                primeiro = 0;
                aux = m[j][i];
                contador++;
                if(aux2 < contador){
                    printf("%c",m[j][i]);
                    vetoraux[i] = contador;

                    aux2++;
                }
            }else {
                contador = 0;
                aux = m[j][i];
                if(aux2 == 0){
                        vetoraux[i] = 0;

                }
            }
         exe = 0;
        }

    }

    printf("\n");
    //for(i=0;i<8;i++){
        //printf("%d ",vetoraux[i]);
    //}
return 0;
}
