#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int comparacao(char texto[],char frase[]){
    int contador, i, j, aux, aux2,x;
    x = strlen(frase);

    for(i=0;i<strlen(texto);i++){
        aux = i;
        contador =0;
        for(j=0;j<strlen(frase);j++){
            if(texto[i] == frase[j]){
                contador++;
                i++;
                if(contador == x){
                    printf("A string esta no texto. Na posicao %d.\n\n",aux+1);
                    return 0;
                }
            }
        }
        i = aux;
    }
    return -1;
}

int main (){
    char frase[50], frase2[25];
    int resultado;

    printf("Informe um texto:");
    gets(frase);

    printf("Informe uma string:");
    gets(frase2);

    resultado = comparacao(frase,frase2);
    if(resultado == -1){
        printf("A string nao esta no texto.\n\n");
    }
return 0;
}
